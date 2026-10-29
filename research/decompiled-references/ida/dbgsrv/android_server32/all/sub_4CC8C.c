/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CC8C
// Address: 0x0004CC8C

//----- (0004CC8C) --------------------------------------------------------
int __fastcall sub_4CC8C(int a1)
{
  int v1; // r4
  int v2; // r7
  int v3; // r0

  v3 = eadd((__int16 *)(a1 + 8), (__int16 *)&dword_C6740, (_WORD *)(a1 + 8), v2 != v1);
  return sub_4CCB0(v3);
}
// 4CC90: variable 'v2' is possibly undefined
// 4CC90: variable 'v1' is possibly undefined
// 4CCB0: using guessed type int __fastcall sub_4CCB0(_DWORD);
// C6740: using guessed type int dword_C6740;
