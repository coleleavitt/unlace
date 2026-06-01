/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B230
// Address: 0x000000000006B230

//----- (000000000006B230) ----------------------------------------------------
__int64 __fastcall sub_6B230(__int64 a1)
{
  pthread_mutex_t *v1; // r14
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 i; // rdx
  __int64 v5; // rcx

  v1 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  for ( i = 1; ; i *= 16 )
  {
    if ( (i & v2) == 0 )
    {
      v5 = i;
      goto LABEL_13;
    }
    v5 = 2 * i;
    if ( ((2 * i) & v2) == 0 )
    {
      ++v3;
      goto LABEL_13;
    }
    v5 = 4 * i;
    if ( ((4 * i) & v2) == 0 )
    {
      v3 += 2;
      goto LABEL_13;
    }
    v5 = 8 * i;
    if ( ((8 * i) & v2) == 0 )
      break;
    v3 += 4;
    if ( v3 >= 0x40 )
    {
      if ( !(_BYTE)under_debugger )
        interr(1443);
      BUG();
    }
  }
  v3 += 3;
LABEL_13:
  *(_QWORD *)(a1 + 56) = v5 | v2;
  qmutex_unlock(v1);
  return v3;
}
// 158B40: using guessed type __int64 under_debugger;
