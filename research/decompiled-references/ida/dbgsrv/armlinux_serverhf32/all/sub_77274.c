/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77274
// Address: 0x00077274

//----- (00077274) --------------------------------------------------------
int __fastcall sub_77274(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r4
  int v7; // r0

  v4 = open64(a1, 131138, a2);
  v5 = v4;
  if ( v4 == -1 )
  {
    sub_70A2C(1);
  }
  else if ( sub_770AC(v4, (int)&loc_20042, a3) || sub_771C4() )
  {
    v7 = v5;
    v5 = -1;
    sub_771DC(v7);
  }
  return v5;
}
// 14284: using guessed type int __fastcall open64(_DWORD, _DWORD, _DWORD);
