/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_wait
// Address: 0x000B44A0

//----- (000B44A0) --------------------------------------------------------
bool __cdecl qsem_wait(int a1, int a2)
{
  sem_t *v2; // edi
  __time_t v3; // edx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  struct timespec abstime; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v11; // [esp+18h] [ebp-14h]

  v11 = __readgsdword(0x14u);
  if ( !a1 )
    return 0;
  v2 = (sem_t *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 4) > 1u )
    v2 = (sem_t *)v2->__align;
  if ( a2 == -1 )
  {
    while ( 1 )
    {
      v7 = sem_wait(v2);
      if ( !v7 )
        break;
      v6 = v7;
      if ( *(_DWORD *)__errno(v8) != 4 )
        return v6 == 0;
    }
    v6 = 0;
    return v6 == 0;
  }
  if ( !sub_B18E0(&abstime) )
    return 0;
  v3 = abstime.tv_sec + a2 / 1000;
  abstime.tv_sec = v3;
  v4 = abstime.tv_nsec + 1000000 * (a2 % 1000);
  abstime.tv_nsec = v4;
  if ( v4 >= 0x3B9ACA00 )
  {
    abstime.tv_nsec = v4 - 1000000000;
    abstime.tv_sec = v3 + 1;
  }
  do
    v6 = sem_timedwait(v2, &abstime);
  while ( v6 && *(_DWORD *)__errno(v5) == 4 );
  return v6 == 0;
}
// B4556: variable 'v5' is possibly undefined
// B457E: variable 'v8' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
