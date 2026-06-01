/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C334
// Address: 0x0003C334

//----- (0003C334) --------------------------------------------------------
int __fastcall sub_3C334(int a1)
{
  int v2; // r5
  int v3; // r1
  _BYTE *v4; // r0

  *(_BYTE *)(a1 + 120) = -89;
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
  v4[v3] = -89;
  ++*(_DWORD *)(v2 + 4);
  ++*(_DWORD *)(a1 + 116);
  sub_390C4(a1, 0xFFFFu);
  sub_390C4(a1, 0x7FFFu);
  sub_3C12C(a1, 3);
  return 0;
}
