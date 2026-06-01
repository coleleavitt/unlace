/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D520
// Address: 0x0003D520

//----- (0003D520) --------------------------------------------------------
char __cdecl sub_3D520(unsigned __int32 *a1, int *a2, _DWORD *a3, char a4)
{
  int v4; // ecx
  int v5; // edx
  unsigned int v7; // ecx
  unsigned __int32 v8; // edi

  v4 = *a2;
  if ( (unsigned int)*a2 > 0xFFFFFFFB )
    return 0;
  v5 = v4 + 4;
  if ( (unsigned int)(v4 + 4) > a3[1] )
    return 0;
  if ( a1 )
  {
    v7 = *(_DWORD *)(*a3 + v4);
    v8 = _byteswap_ulong(v7);
    if ( !a4 )
      v8 = v7;
    *a1 = v8;
    v5 = *a2 + 4;
  }
  *a2 = v5;
  return 1;
}
