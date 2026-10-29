/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97C0C
// Address: 0x00097C0C

//----- (00097C0C) --------------------------------------------------------
int __fastcall sub_97C0C(int a1, int a2)
{
  int v4; // r2
  _DWORD v6[4]; // [sp+0h] [bp-20h] BYREF

  sub_93B8C(a2, "sizeof...(", "");
  v4 = *(_DWORD *)(a1 + 8);
  v6[0] = &off_DBEA0;
  v6[1] = 16843037;
  v6[2] = v4;
  sub_96A0C((int)v6, a2);
  sub_93B8C(a2, ")", "");
  return _stack_chk_guard - v6[3];
}
// DBEA0: using guessed type _UNKNOWN *off_DBEA0;
