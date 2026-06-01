/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22FD0
// Address: 0x00022FD0

//----- (00022FD0) --------------------------------------------------------
bool __fastcall sub_22FD0(int a1, const char *a2, int a3)
{
  _DWORD v4[3]; // [sp+0h] [bp-10h] BYREF

  v4[0] = &off_D6358;
  v4[1] = 4;
  v4[2] = a3;
  return sub_35628(a2, v4, 0) == 1;
}
// D6358: using guessed type _UNKNOWN *off_D6358;
