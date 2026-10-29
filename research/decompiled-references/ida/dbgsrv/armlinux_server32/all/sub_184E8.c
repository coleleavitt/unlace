/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_184E8
// Address: 0x000184E8

//----- (000184E8) --------------------------------------------------------
bool __fastcall sub_184E8(int a1, int a2, int (**a3)())
{
  int (**v4[3])(); // [sp+0h] [bp-10h] BYREF

  v4[2] = a3;
  v4[0] = (int (**)())&off_D0590;
  v4[1] = (int (**)())4;
  return sub_35040(a2, v4, 0) == 1;
}
// D0590: using guessed type _UNKNOWN *off_D0590;
