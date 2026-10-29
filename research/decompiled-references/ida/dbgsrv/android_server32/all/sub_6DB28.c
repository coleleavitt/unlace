/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DB28
// Address: 0x0006DB28

//----- (0006DB28) --------------------------------------------------------
int __fastcall sub_6DB28(int a1, int a2)
{
  int result; // r0

  *(_DWORD *)(a1 + 44) = a2;
  result = *(_DWORD *)_errno(a1);
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
