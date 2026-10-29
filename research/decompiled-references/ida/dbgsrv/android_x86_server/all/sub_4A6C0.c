/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A6C0
// Address: 0x0004A6C0

//----- (0004A6C0) --------------------------------------------------------
int __cdecl sub_4A6C0(int a1, char *s)
{
  char *v2; // edx
  int v3; // esi
  int v4; // ecx
  _BYTE *v5; // eax

  if ( dword_13B638[0] <= 0 )
    return 1610;
  v2 = s;
  *(_BYTE *)(a1 + 116) = -86;
  v3 = *(_DWORD *)(a1 + 108);
  v4 = *(_DWORD *)(v3 + 4);
  if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v4 + 1) )
  {
    v5 = *(_BYTE **)v3;
  }
  else
  {
    v5 = qvector_reserve(v3, *(void **)v3, v4 + 1, 1u);
    v2 = s;
    *(_DWORD *)v3 = v5;
    v4 = *(_DWORD *)(v3 + 4);
  }
  v5[v4] = -86;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(a1 + 112);
  sub_47000(a1, v2, 0);
  sub_471B0(a1, 0, dword_13B638[0]);
  return 0;
}
// 13B638: using guessed type int dword_13B638[5];
