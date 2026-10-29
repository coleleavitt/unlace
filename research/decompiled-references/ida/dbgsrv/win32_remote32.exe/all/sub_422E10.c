/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422E10
// Address: 0x00422E10

//----- (00422E10) --------------------------------------------------------
bool __usercall sub_422E10@<al>(int a1@<ebx>, unsigned __int8 a2)
{
  return (a2 & 0x80u) == 0 && sub_46B760(a1, a2);
}
