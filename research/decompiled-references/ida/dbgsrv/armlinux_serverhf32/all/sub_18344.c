/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18344
// Address: 0x00018344

//----- (00018344) --------------------------------------------------------
bool __fastcall sub_18344(int a1, int a2, int (**a3)())
{
  int (**v4[3])(); // [sp+0h] [bp-10h] BYREF

  v4[2] = a3;
  v4[0] = (int (**)())&off_CF590;
  v4[1] = (int (**)())4;
  return sub_34EA8(a2, v4, 0) == 1;
}
// CF590: using guessed type _UNKNOWN *off_CF590;
