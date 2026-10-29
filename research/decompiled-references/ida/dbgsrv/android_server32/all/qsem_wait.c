/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_wait
// Address: 0x00080C0C

//----- (00080C0C) --------------------------------------------------------
bool __fastcall qsem_wait(int a1, int a2)
{
  _BOOL4 result; // r0
  unsigned int v5; // r0
  sem_t *v6; // r4
  __time_t v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r6
  struct timespec v13; // [sp+0h] [bp-Ch] BYREF

  result = 0;
  if ( a1 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    v6 = (sem_t *)(a1 + 12);
    if ( v5 > 1 )
      v6 = (sem_t *)v6->__align;
    if ( a2 == -1 )
    {
      while ( 1 )
      {
        v11 = sem_wait(v6);
        v10 = 0;
        if ( !v11 )
          break;
        v12 = v11;
        if ( *(_DWORD *)_errno(v11) != 4 )
        {
          v10 = v12;
          return v10 == 0;
        }
      }
      return v10 == 0;
    }
    if ( sub_7F0E8(&v13) )
    {
      v7 = v13.tv_sec + a2 / 1000;
      v13.tv_sec = v7;
      v8 = v13.tv_nsec + 1000000 * (a2 % 1000);
      v13.tv_nsec = v8;
      if ( v8 >= 0x3B9ACA00 )
      {
        v13.tv_sec = v7 + 1;
        v13.tv_nsec = v8 - 1000000000;
      }
      do
      {
        v9 = sem_timedwait(v6, &v13);
        v10 = v9;
      }
      while ( v9 && *(_DWORD *)_errno(v9) == 4 );
      return v10 == 0;
    }
    return 0;
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
