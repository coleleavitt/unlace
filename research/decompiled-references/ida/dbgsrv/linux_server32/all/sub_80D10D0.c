/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D10D0
// Address: 0x080D10D0

//----- (080D10D0) --------------------------------------------------------
int __cdecl sub_80D10D0(int a1, int a2)
{
  sem_t *v2; // esi
  int v3; // eax
  int v4; // edi
  __time_t v5; // ecx
  unsigned int v6; // eax
  struct timespec abstime; // [esp+10h] [ebp-2Ch] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-20h]

  v9 = __readgsdword(0x14u);
  if ( !a1 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 4) <= 1u )
    v2 = (sem_t *)(a1 + 12);
  else
    v2 = *(sem_t **)(a1 + 12);
  if ( a2 != -1 )
  {
    LOBYTE(v3) = sub_80D0270(&abstime);
    v4 = v3;
    if ( (_BYTE)v3 )
    {
      v5 = a2 / 1000 + abstime.tv_sec;
      abstime.tv_sec = v5;
      v6 = abstime.tv_nsec + 1000000 * (a2 % 1000);
      if ( v6 > 0x3B9AC9FF )
      {
        abstime.tv_nsec = v6 - 1000000000;
        abstime.tv_sec = v5 + 1;
      }
      else
      {
        abstime.tv_nsec += 1000000 * (a2 % 1000);
      }
      while ( sem_timedwait(v2, &abstime) )
      {
        if ( *__errno_location() != 4 )
          goto LABEL_10;
      }
      goto LABEL_11;
    }
LABEL_10:
    v4 = 0;
    goto LABEL_11;
  }
  while ( sem_wait(v2) )
  {
    if ( *__errno_location() != 4 )
      goto LABEL_10;
  }
  v4 = 1;
LABEL_11:
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
// 80D1120: variable 'v3' is possibly undefined
