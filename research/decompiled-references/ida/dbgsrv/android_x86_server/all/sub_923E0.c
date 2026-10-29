/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_923E0
// Address: 0x000923E0

//----- (000923E0) --------------------------------------------------------
char *__cdecl sub_923E0(_DWORD *a1)
{
  sub_89830((int)a1);
  *a1 = &off_138758;
  a1[114] = -1;
  a1[113] = -1;
  a1[112] = -1;
  a1[111] = -1;
  a1[110] = -1;
  a1[109] = -1;
  a1[108] = -1;
  sub_3A950(a1 + 53, &byte_F55AC, 1u);
  a1[101] = -1;
  a1[100] = -1;
  a1[99] = -1;
  a1[98] = -1;
  a1[103] = 0;
  a1[102] = 0;
  a1[106] = 0;
  a1[105] = 0;
  a1[104] = 0;
  a1[107] = 256;
  return sub_8DAA0(a1, "linux");
}
// F55AC: using guessed type char byte_F55AC;
// 138758: using guessed type int (__cdecl *off_138758)(int, int);
