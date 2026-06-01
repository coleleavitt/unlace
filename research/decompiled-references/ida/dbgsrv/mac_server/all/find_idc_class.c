/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_class
// Address: 0x0000000100034030

//----- (0000000100034030) ----------------------------------------------------
__int64 __fastcall find_idc_class(char *__s2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  int v5; // r14d
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  const char *v8; // rdi
  _OWORD *v10; // rax
  pthread_mutex_t *v11; // [rsp+0h] [rbp-30h]

  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
  {
    v10 = operator new(0x80u);
    *(_OWORD *)((char *)v10 + 109) = 0;
    v10[6] = 0;
    v10[5] = 0;
    v10[4] = 0;
    v10[3] = 0;
    v10[2] = 0;
    v10[1] = 0;
    *v10 = 0;
    qword_1000AE2E0 = (__int64)v10;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  if ( !__s2 )
    return 0;
  v2 = qword_1000AE2E0;
  v11 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v2 + 64);
    v5 = 1;
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 8 * v6);
      v8 = _s1;
      if ( *(_QWORD *)(v7 + 40) )
        v8 = *(const char **)(v7 + 32);
      if ( !strcmp(v8, __s2) )
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
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE2E0: using guessed type __int64 qword_1000AE2E0;
