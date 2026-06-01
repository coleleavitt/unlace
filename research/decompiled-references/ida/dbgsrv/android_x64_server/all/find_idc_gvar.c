/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_gvar
// Address: 0x000000000006CFE0

//----- (000000000006CFE0) ----------------------------------------------------
__int64 __fastcall find_idc_gvar(char *s2)
{
  __int64 v2; // rbx
  pthread_mutex_t *v3; // r14
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r15
  const char *v7; // rdi
  _OWORD *v8; // rax

  if ( (_BYTE)byte_155828 || !_cxa_guard_acquire(&byte_155828) )
  {
    if ( !s2 )
      return 0;
  }
  else
  {
    v8 = operator new(0x80u);
    *(_OWORD *)((char *)v8 + 109) = 0;
    v8[6] = 0;
    v8[5] = 0;
    v8[4] = 0;
    v8[3] = 0;
    v8[2] = 0;
    v8[1] = 0;
    *v8 = 0;
    qword_155820 = (__int64)v8;
    _cxa_guard_release(&byte_155828);
    if ( !s2 )
      return 0;
  }
  v2 = qword_155820;
  v3 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v4 = 56LL * *(_QWORD *)(v2 + 96);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v2 + 88) + 24LL;
    v6 = 0;
    while ( 1 )
    {
      v7 = s1;
      if ( *(_QWORD *)(v5 - 16) )
        v7 = *(const char **)(v5 - 24);
      if ( !strcmp(v7, s2) )
        break;
      v5 += 56;
      v4 -= 56;
      if ( !v4 )
        goto LABEL_12;
    }
    v6 = v5;
  }
  else
  {
    v6 = 0;
  }
LABEL_12:
  qmutex_unlock(v3);
  return v6;
}
// 155820: using guessed type __int64 qword_155820;
