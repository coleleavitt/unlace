/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79D80
// Address: 0x00079D80

//----- (00079D80) --------------------------------------------------------
int __fastcall sub_79D80(int a1, int a2)
{
  _BOOL4 v2; // r6
  sem_t *v4; // r4
  int v5; // r3
  int v6; // r7
  __time_t v7; // r3
  int v8; // r2
  unsigned int v9; // r0
  struct timespec tp; // [sp+4h] [bp-Ch] BYREF

  v2 = a1;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) > 1u )
      v4 = *(sem_t **)(a1 + 12);
    else
      v4 = (sem_t *)(a1 + 12);
    if ( a2 == -1 )
    {
      do
      {
        if ( !sem_wait(v4) )
          return 1;
      }
      while ( *_errno_location() == 4 );
      return 0;
    }
    else
    {
      v2 = sub_78D68(&tp);
      if ( v2 )
      {
        v5 = a2 / 1000;
        v6 = a2 % 1000;
        v7 = v5 + tp.tv_sec;
        v8 = 999999999;
        tp.tv_sec = v7;
        v9 = tp.tv_nsec + 1000000 * v6;
        if ( v9 <= 0x3B9AC9FF )
        {
          tp.tv_nsec += 1000000 * v6;
        }
        else
        {
          v8 = -1000000000;
          ++v7;
        }
        if ( v9 > 0x3B9AC9FF )
        {
          tp.tv_sec = v7;
          tp.tv_nsec = v8 + v9;
        }
        while ( sem_timedwait(v4, &tp) )
        {
          if ( *_errno_location() != 4 )
            return 0;
        }
      }
    }
  }
  return v2;
}
