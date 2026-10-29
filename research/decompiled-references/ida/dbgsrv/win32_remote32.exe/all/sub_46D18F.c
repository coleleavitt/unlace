/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D18F
// Address: 0x0046D18F

//----- (0046D18F) --------------------------------------------------------
int __cdecl sub_46D18F(LPCCH lpMultiByteStr, int a2, UINT CodePage)
{
  int v3; // ecx
  int var1; // [esp+1h] [ebp-1h] BYREF

  LOBYTE(var1) = HIBYTE(v3);
  return sub_46D0DD(lpMultiByteStr, a2, (int)&var1, CodePage);
}
// 46D194: variable 'v3' is possibly undefined
