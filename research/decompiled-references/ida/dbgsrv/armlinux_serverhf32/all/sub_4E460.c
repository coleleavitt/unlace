/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E460
// Address: 0x0004E460

//----- (0004E460) --------------------------------------------------------
void __fastcall sub_4E460(int a1, int a2)
{
  FILE *v3; // r0
  int v4; // r2

  if ( a2 )
    sub_4DEB0(a1, 0, 0);
  while ( *(_DWORD *)(a1 + 140) )
    sub_4B03C(a1);
  sub_77E08(*(void **)(a1 + 152));
  v3 = *(FILE **)(a1 + 148);
  *(_DWORD *)(a1 + 152) = 0;
  if ( v3 )
    sub_77754(v3);
  v4 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 156) = -1;
  if ( v4 )
  {
    do
      sub_4B714((_DWORD *)a1);
    while ( *(_DWORD *)(a1 + 32) );
  }
}
