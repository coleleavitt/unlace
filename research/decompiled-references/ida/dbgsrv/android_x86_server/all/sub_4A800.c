/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A800
// Address: 0x0004A800

//----- (0004A800) --------------------------------------------------------
int __cdecl sub_4A800(int a1)
{
  int v1; // edx
  int v2; // esi
  int v3; // ecx
  _BYTE *v4; // eax

  if ( dword_13B638[3] <= 0 )
    return 1612;
  v1 = a1;
  *(_BYTE *)(a1 + 116) = -44;
  v2 = *(_DWORD *)(a1 + 108);
  v3 = *(_DWORD *)(v2 + 4);
  if ( *(_DWORD *)(v2 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_BYTE **)v2;
  }
  else
  {
    v4 = qvector_reserve(v2, *(void **)v2, v3 + 1, 1u);
    v1 = a1;
    *(_DWORD *)v2 = v4;
    v3 = *(_DWORD *)(v2 + 4);
  }
  v4[v3] = -44;
  ++*(_DWORD *)(v2 + 4);
  ++*(_DWORD *)(v1 + 112);
  sub_471B0(v1, 0, dword_13B638[3]);
  return 0;
}
// 13B638: using guessed type int dword_13B638[5];
