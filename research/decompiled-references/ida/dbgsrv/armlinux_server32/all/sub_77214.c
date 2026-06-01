/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77214
// Address: 0x00077214

//----- (00077214) --------------------------------------------------------
int __fastcall sub_77214(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r4
  int v7; // r3
  bool v8; // zf

  if ( a3 == 2 )
    return sub_771C8(a1, a3);
  if ( a2 << 30 )
  {
    v5 = 2;
  }
  else
  {
    if ( a3 == 1 )
      return sub_771C8(a1, a3);
    v5 = 1;
  }
  v6 = 11;
  while ( sub_771C8(a1, v5) )
  {
    if ( !--v6 )
      return -1;
    v7 = *_errno_location();
    v8 = v7 == 11;
    if ( v7 != 11 )
      v8 = v7 == 4;
    if ( !v8 )
      return -1;
    sub_78E08(10);
  }
  return sub_771C8(a1, a3);
}
