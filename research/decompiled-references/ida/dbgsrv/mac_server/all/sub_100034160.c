/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100034160
// Address: 0x0000000100034160

//----- (0000000100034160) ----------------------------------------------------
__int64 __fastcall sub_100034160(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r13
  int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  const char *v7; // rdi
  pthread_mutex_t *v9; // [rsp+0h] [rbp-30h]

  if ( !a2 )
    return 0;
  v9 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = 1;
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 8 * v5);
      v7 = _s1;
      if ( *(_QWORD *)(v6 + 40) )
        v7 = *(const char **)(v6 + 32);
      if ( !strcmp(v7, a2) )
        break;
      v5 = v4++;
      if ( v2 <= v5 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v6 = 0;
  }
  qmutex_unlock(v9);
  return v6;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
