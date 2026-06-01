/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C1EC
// Address: 0x0046C1EC

//----- (0046C1EC) --------------------------------------------------------
int __stdcall sub_46C1EC(int *a1, int a2, int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  sub_47A78B(*a1);
  v4 = __ROR4__(dword_4B78E8 ^ __security_cookie, __security_cookie & 0x1F);
  sub_47A7D3(*a3);
  return v4;
}
// 4B78E8: using guessed type int dword_4B78E8;
