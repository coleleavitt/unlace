/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_class
// Address: 0x000000000006D530

//----- (000000000006D530) ----------------------------------------------------
__int64 __fastcall find_idc_class(char *s2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  int v5; // r14d
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  const char *v8; // rdi
  _OWORD *v9; // rax
  pthread_mutex_t *v11; // [rsp+0h] [rbp-38h]

  if ( (_BYTE)byte_155828 || !_cxa_guard_acquire(&byte_155828) )
  {
    if ( !s2 )
      return 0;
  }
  else
  {
    v9 = operator new(0x80u);
    *(_OWORD *)((char *)v9 + 109) = 0;
    v9[6] = 0;
    v9[5] = 0;
    v9[4] = 0;
    v9[3] = 0;
    v9[2] = 0;
    v9[1] = 0;
    *v9 = 0;
    qword_155820 = (__int64)v9;
    _cxa_guard_release(&byte_155828);
    if ( !s2 )
      return 0;
  }
  v2 = qword_155820;
  v11 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v2 + 64);
    v5 = 1;
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 8 * v6);
      v8 = s1;
      if ( *(_QWORD *)(v7 + 40) )
        v8 = *(const char **)(v7 + 32);
      if ( !strcmp(v8, s2) )
        break;
      v6 = v5++;
      if ( v3 <= v6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v7 = 0;
  }
  qmutex_unlock(v11);
  return v7;
}
// 155820: using guessed type __int64 qword_155820;
