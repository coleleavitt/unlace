/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B390
// Address: 0x0003B390

//----- (0003B390) --------------------------------------------------------
int __fastcall sub_3B390(int a1, const char *a2)
{
  int v4; // r6
  int v5; // r1
  _BYTE *v6; // r0
  int v7; // r6
  const char *v9; // [sp+0h] [bp-4h]

  if ( dword_DD634 < 1 )
    return 1611;
  *(_BYTE *)(a1 + 120) = -44;
  v4 = *(_DWORD *)(a1 + 112);
  v5 = *(_DWORD *)(v4 + 4);
  if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
  {
    v6 = *(_BYTE **)v4;
  }
  else
  {
    v9 = a2;
    v6 = qvector_reserve(v4, *(void **)v4, v5 + 1, 1u);
    a2 = v9;
    *(_DWORD *)v4 = v6;
    v5 = *(_DWORD *)(v4 + 4);
  }
  v6[v5] = -44;
  ++*(_DWORD *)(v4 + 4);
  ++*(_DWORD *)(a1 + 116);
  v7 = 0;
  sub_39160(a1, a2, 0);
  sub_39282(a1, 0, (unsigned __int16)dword_DD634);
  return v7;
}
// DD634: using guessed type int dword_DD634;
