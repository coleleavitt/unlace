/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B9E4
// Address: 0x0046B9E4

//----- (0046B9E4) --------------------------------------------------------
uintptr_t __cdecl sub_46B9E4(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}
