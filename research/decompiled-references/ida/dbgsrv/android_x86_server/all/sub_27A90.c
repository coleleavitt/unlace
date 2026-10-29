/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27A90
// Address: 0x00027A90

//----- (00027A90) --------------------------------------------------------
bool __cdecl sub_27A90(int a1, char *a2, int a3)
{
  _DWORD v4[9]; // [esp+0h] [ebp-24h] BYREF

  v4[4] = __readgsdword(0x14u);
  v4[1] = 4;
  v4[0] = off_1346F0;
  v4[2] = a3;
  return sub_40950(a2, v4, 0) == 1;
}
// 1346F0: using guessed type int (*off_1346F0[3])();
