/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E4C0
// Address: 0x0004E4C0

//----- (0004E4C0) --------------------------------------------------------
int __fastcall sub_4E4C0(int a1, int a2, int a3)
{
  while ( *(_DWORD *)(a1 + 32) )
    sub_4B8A4((_DWORD *)a1);
  *(_DWORD *)(a1 + 120) = a2;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_BYTE *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 112) = sub_4B750;
  *(_DWORD *)(a1 + 116) = a1 + 120;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  if ( a3 )
    return sub_4E030(a1, a3, 0);
  else
    return 0;
}
