/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E65F
// Address: 0x0046E65F

//----- (0046E65F) --------------------------------------------------------
char __usercall sub_46E65F@<al>(int a1@<ecx>, int a2@<edi>)
{
  unsigned __int8 *v3; // eax
  unsigned __int8 v4; // al
  int v6; // eax
  unsigned __int8 *v7; // ecx
  int i; // eax
  _BYTE *v9; // eax

  if ( *(_DWORD *)(a1 + 12) )
    return 0;
  v3 = *(unsigned __int8 **)(a1 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  *(_WORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 22) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  v4 = *v3;
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 16) = 1;
    return 0;
  }
  v6 = sub_46B7F0(0, v4);
  v7 = *(unsigned __int8 **)(a1 + 8);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 16) = 2;
    for ( i = *v7; sub_46B7F0(0, i); i = **(unsigned __int8 **)(a1 + 8) )
      ++*(_DWORD *)(a1 + 8);
    return 1;
  }
  if ( *v7 == 37 )
  {
    v9 = v7 + 1;
    if ( v7[1] != 37 )
    {
      *(_DWORD *)(a1 + 16) = 4;
      *(_DWORD *)(a1 + 8) = v9;
      if ( *v9 == 42 )
      {
        *(_BYTE *)(a1 + 22) = 1;
        *(_DWORD *)(a1 + 8) = v7 + 2;
      }
      if ( !sub_4714B8((_DWORD *)a1, a2) )
        return 0;
      sub_471555((_DWORD *)a1);
      sub_4716B6(a1);
      if ( !sub_47134D(a1) )
        return 0;
      if ( !byte_4A6478[12 * *(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 32)] )
      {
        *(_DWORD *)(a1 + 16) = 0;
        *(_WORD *)(a1 + 20) = 0;
        *(_BYTE *)(a1 + 22) = 0;
        *(_DWORD *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        *(_DWORD *)(a1 + 32) = 0;
        *(_BYTE *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(a1 + 12) = 22;
        return 0;
      }
      return 1;
    }
  }
  *(_DWORD *)(a1 + 16) = 3;
  *(_BYTE *)(a1 + 20) = *v7;
  *(_DWORD *)(a1 + 8) = &v7[(*v7 == 37) + 1];
  return sub_471664(a1, 0, 0);
}
