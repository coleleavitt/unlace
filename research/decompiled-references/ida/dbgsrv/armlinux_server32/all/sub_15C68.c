/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15C68
// Address: 0x00015C68

//----- (00015C68) --------------------------------------------------------
int __fastcall sub_15C68(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 3) == 0 )
    return 0;
  *(_BYTE *)(a1 + 392) = v1 & 1;
  *(_BYTE *)(a1 + 393) = (v1 & 2) != 0;
  return 1;
}
