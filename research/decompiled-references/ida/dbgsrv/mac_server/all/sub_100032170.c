/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032170
// Address: 0x0000000100032170

//----- (0000000100032170) ----------------------------------------------------
__int64 __fastcall sub_100032170(__int64 a1)
{
  pthread_mutex_t *v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // r14d
  __int64 i; // rdx
  __int64 v5; // rcx

  v1 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  for ( i = 1; ; i *= 16 )
  {
    if ( (i & v2) == 0 )
    {
      v5 = i;
      goto LABEL_14;
    }
    v5 = 2 * i;
    if ( ((2 * i) & v2) == 0 )
    {
      ++v3;
      goto LABEL_14;
    }
    v5 = 4 * i;
    if ( ((4 * i) & v2) == 0 )
    {
      v3 += 2;
      goto LABEL_14;
    }
    v5 = 8 * i;
    if ( ((8 * i) & v2) == 0 )
      break;
    v3 += 4;
    if ( v3 == 64 )
    {
      if ( under_debugger != 1 )
        interr(0x5A3u);
      BUG();
    }
  }
  v3 += 3;
LABEL_14:
  *(_QWORD *)(a1 + 56) = v5 | v2;
  qmutex_unlock(v1);
  return v3;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE23D: using guessed type char under_debugger;
