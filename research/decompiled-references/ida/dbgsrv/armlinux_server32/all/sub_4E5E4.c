/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E5E4
// Address: 0x0004E5E4

//----- (0004E5E4) --------------------------------------------------------
void __fastcall sub_4E5E4(int a1, int a2)
{
  FILE *v3; // r0
  int v4; // r2

  if ( a2 )
    sub_4E030(a1, 0, 0);
  while ( *(_DWORD *)(a1 + 140) )
    sub_4B1CC(a1);
  sub_77F70(*(void **)(a1 + 152));
  v3 = *(FILE **)(a1 + 148);
  *(_DWORD *)(a1 + 152) = 0;
  if ( v3 )
    sub_778BC(v3);
  v4 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 156) = -1;
  if ( v4 )
  {
    do
      sub_4B8A4((_DWORD *)a1);
    while ( *(_DWORD *)(a1 + 32) );
  }
}
