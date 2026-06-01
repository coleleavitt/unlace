/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_773DC
// Address: 0x000773DC

//----- (000773DC) --------------------------------------------------------
int __fastcall sub_773DC(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r4
  int v7; // r0

  v4 = open64(a1, 131138, a2);
  v5 = v4;
  if ( v4 == -1 )
  {
    sub_70B98(1);
  }
  else if ( sub_77214(v4, (int)&loc_20042, a3) || sub_7732C() )
  {
    v7 = v5;
    v5 = -1;
    sub_77344(v7);
  }
  return v5;
}
// 143F0: using guessed type int __fastcall open64(_DWORD, _DWORD, _DWORD);
