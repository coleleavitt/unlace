/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CB1F
// Address: 0x0046CB1F

//----- (0046CB1F) --------------------------------------------------------
bool __cdecl sub_46CB1F(int a1, int a2, int a3)
{
  return a3 > 0 && (a3 <= dword_4A7ACC[a2] - dword_4A7AC8[a2] || sub_46C933(a1) && a2 == 1 && a3 <= 29);
}
// 4A7AC8: using guessed type int dword_4A7AC8[];
// 4A7ACC: using guessed type int dword_4A7ACC[];
