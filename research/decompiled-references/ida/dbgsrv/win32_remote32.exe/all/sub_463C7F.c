/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463C7F
// Address: 0x00463C7F

//----- (00463C7F) --------------------------------------------------------
int __usercall sub_463C7F@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  int result; // eax

  result = sub_477EEF(a1, a2, nullptr, 0x10000, 196608);
  if ( result )
  {
    sub_4639C5(a1, a2, a3, 7u);
    __debugbreak();
  }
  return result;
}
