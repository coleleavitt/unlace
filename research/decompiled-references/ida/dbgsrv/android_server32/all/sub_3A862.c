/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A862
// Address: 0x0003A862

//----- (0003A862) --------------------------------------------------------
int __fastcall sub_3A862(int a1)
{
  int v2; // r5
  int v3; // r1
  _BYTE *v4; // r0
  int v5; // r6
  int v6; // r1
  int *v7; // r7
  void **v8; // r5
  void *v9; // r0

  *(_BYTE *)(a1 + 120) = -83;
  v2 = *(_DWORD *)(a1 + 112);
  v3 = *(_DWORD *)(v2 + 4);
  if ( *(_DWORD *)(v2 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_BYTE **)v2;
  }
  else
  {
    v4 = qvector_reserve(v2, *(void **)v2, v3 + 1, 1u);
    *(_DWORD *)v2 = v4;
    v3 = *(_DWORD *)(v2 + 4);
  }
  v4[v3] = -83;
  ++*(_DWORD *)(v2 + 4);
  v5 = *(_DWORD *)(a1 + 116) + 1;
  *(_DWORD *)(a1 + 116) = v5;
  v6 = *(_DWORD *)(a1 + 172);
  v7 = (int *)(a1 + 172);
  v8 = (void **)(a1 + 168);
  if ( *(_DWORD *)(a1 + 176) >= (unsigned int)(v6 + 1) )
  {
    v9 = *v8;
  }
  else
  {
    v9 = qvector_reserve(a1 + 168, *v8, v6 + 1, 4u);
    *v8 = v9;
    v6 = *v7;
  }
  *((_DWORD *)v9 + v6) = v5;
  ++*v7;
  sub_390C4(a1, 0);
  sub_390C4(a1, 0);
  return 0;
}
