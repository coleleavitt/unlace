/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65960
// Address: 0x00065960

//----- (00065960) --------------------------------------------------------
int __fastcall sub_65960(int a1)
{
  _DWORD *v2; // r4

  v2 = sub_805CC(8u);
  sub_6A334(v2);
  v2[1] = a1;
  *v2 = &off_D04C0;
  return sub_6A48C();
}
// D04C0: using guessed type _UNKNOWN *off_D04C0;
