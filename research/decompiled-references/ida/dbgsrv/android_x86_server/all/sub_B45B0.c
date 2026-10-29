/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B45B0
// Address: 0x000B45B0

//----- (000B45B0) --------------------------------------------------------
unsigned int __cdecl sub_B45B0(int a1, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  sem_t *v4; // esi
  int *v6; // [esp+8h] [ebp-24h]
  int v7; // [esp+Ch] [ebp-20h]
  struct timespec abstime; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v9; // [esp+18h] [ebp-14h]

  v9 = __readgsdword(0x14u);
  v2 = *(_DWORD **)(a1 + 12);
  if ( (_DWORD *)(a1 + 12) == v2 )
  {
LABEL_4:
    if ( !(_BYTE)under_debugger )
      interr(1209);
    goto LABEL_17;
  }
  while ( v2 + 2 != a2 )
  {
    v2 = (_DWORD *)*v2;
    if ( (_DWORD *)(a1 + 12) == v2 )
      goto LABEL_4;
  }
  v6 = (int *)__errno(v2 + 2);
  v7 = *v6;
  v3 = a2[4];
  if ( v3 )
  {
    v4 = (sem_t *)(v3 + 12);
    if ( *(_DWORD *)(v3 + 4) > 1u )
      v4 = (sem_t *)v4->__align;
    if ( sub_B18E0(&abstime) )
    {
      if ( abstime.tv_nsec >= 0x3B9ACA00u )
      {
        abstime.tv_nsec -= 1000000000;
        ++abstime.tv_sec;
      }
      while ( sem_timedwait(v4, &abstime) )
      {
        if ( *v6 != 4 )
          goto LABEL_14;
      }
      if ( !(_BYTE)under_debugger )
        interr(1158);
LABEL_17:
      BUG();
    }
  }
LABEL_14:
  *(_DWORD *)v2[1] = *v2;
  *(_DWORD *)(*v2 + 4) = v2[1];
  qsem_free((char *)v2[6]);
  qfree(v2);
  --*(_DWORD *)(a1 + 20);
  *v6 = v7;
  return __readgsdword(0x14u);
}
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
