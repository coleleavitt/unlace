/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BC6F
// Address: 0x0046BC6F

//----- (0046BC6F) --------------------------------------------------------
uintptr_t __usercall sub_46BC6F@<eax>(int a1@<ebx>, int *a2@<edi>, int a3)
{
  uintptr_t result; // eax

  if ( dword_4B78D8 != __security_cookie )
    sub_477B21(a1, a2);
  result = sub_46B9E4(a3);
  dword_4B78D8 = result;
  return result;
}
// 4B78D8: using guessed type int dword_4B78D8;
