/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DB90
// Address: 0x0043DB90

//----- (0043DB90) --------------------------------------------------------
char __thiscall sub_43DB90(unsigned int *this, _DWORD *a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // [esp+8h] [ebp+4h]

  v2 = *(this + 48);
  if ( v2 != a2[1] )
    return 0;
  v4 = 0;
  if ( !v2 )
    return 1;
  v5 = *(this + 47);
  v6 = *a2 + 8;
  v7 = *a2 - v5;
  v8 = v7;
  while ( *(_DWORD *)v5 == *(_DWORD *)(v7 + v5)
       && *(_DWORD *)(v5 + 4) == *(_DWORD *)(v6 - 4)
       && sub_4264D0((const char **)(v5 + 8), v6)
       && sub_4264D0((const char **)(v5 + 20), v6 + 12)
       && *(_DWORD *)(v5 + 32) == *(_DWORD *)(v6 + 24)
       && *(_BYTE *)(v5 + 36) == *(_BYTE *)(v6 + 28)
       && *(_BYTE *)(v5 + 37) == *(_BYTE *)(v6 + 29) )
  {
    ++v4;
    v5 += 40;
    v6 += 40;
    if ( v4 >= v2 )
      return 1;
    v7 = v8;
  }
  return 0;
}
