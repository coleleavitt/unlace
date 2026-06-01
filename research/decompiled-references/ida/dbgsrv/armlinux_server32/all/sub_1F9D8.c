/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F9D8
// Address: 0x0001F9D8

//----- (0001F9D8) --------------------------------------------------------
int __fastcall sub_1F9D8(_DWORD *a1, int *a2)
{
  int v4; // r4

  v4 = sub_1ED90((int)a1, a2, 0);
  if ( v4 != 1 )
    return v4;
  if ( sub_53530((int)a1, a2) )
    return -6;
  sub_535F8(a1, a2);
  return 1;
}
