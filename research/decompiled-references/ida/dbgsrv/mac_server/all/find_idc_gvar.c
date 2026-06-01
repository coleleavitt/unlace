/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_gvar
// Address: 0x0000000100033E00

//----- (0000000100033E00) ----------------------------------------------------
__int64 __fastcall find_idc_gvar(char *__s2)
{
  __int64 v2; // r15
  pthread_mutex_t *v3; // r14
  __int64 v4; // r12
  __int64 v5; // r15
  const char *v6; // rdi
  _OWORD *v8; // rax

  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
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
    qword_1000AE2E0 = (__int64)v8;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  if ( !__s2 )
    return 0;
  v2 = qword_1000AE2E0;
  v3 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v4 = 56LL * *(_QWORD *)(v2 + 96);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v2 + 88) + 24LL;
    while ( 1 )
    {
      v6 = _s1;
      if ( *(_QWORD *)(v5 - 16) )
        v6 = *(const char **)(v5 - 24);
      if ( !strcmp(v6, __s2) )
        break;
      v5 += 56;
      v4 -= 56;
      if ( !v4 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v5 = 0;
  }
  qmutex_unlock(v3);
  return v5;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE2E0: using guessed type __int64 qword_1000AE2E0;
