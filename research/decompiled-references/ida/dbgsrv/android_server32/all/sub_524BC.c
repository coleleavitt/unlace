/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_524BC
// Address: 0x000524BC

//----- (000524BC) --------------------------------------------------------
int __fastcall sub_524BC(int a1, int a2, const void *a3)
{
  unsigned int v5; // r1
  int v6; // r4
  size_t v7; // r2
  size_t v8; // r7
  _BYTE *v9; // r0
  size_t v11; // [sp+4h] [bp-4h]

  v5 = *(unsigned __int16 *)(a2 + 12);
  v6 = 1;
  if ( v5 - 6 >= 3 )
  {
    if ( v5 == 2 )
      return v6;
    if ( v5 != 3 )
    {
      if ( v5 > 0x7F )
        return v6;
      return 0;
    }
  }
  if ( !a3 || *(_DWORD *)(a1 + 4) <= (unsigned int)a3 )
    return 0;
  *(_DWORD *)(a2 + 4) = 0;
  v7 = *(_DWORD *)(a1 + 4) - (_DWORD)a3;
  v8 = v7 + 1;
  if ( *(_DWORD *)(a2 + 8) >= v7 + 1 )
  {
    v9 = *(_BYTE **)a2;
  }
  else
  {
    v11 = v7;
    v9 = qvector_reserve(a2, *(void **)a2, v7 + 1, 1u);
    v7 = v11;
    *(_DWORD *)a2 = v9;
  }
  *(_DWORD *)(a2 + 4) = v8;
  v9[v7] = 0;
  memmove(*(void **)a2, a3, v7);
  return v6;
}
