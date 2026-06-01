/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462270
// Address: 0x00462270

//----- (00462270) --------------------------------------------------------
unsigned __int64 __stdcall sub_462270(unsigned __int64 *a1)
{
  unsigned __int64 v1; // kr00_8
  unsigned __int64 result; // rax

  v1 = sub_462250(*a1);
  result = sub_462250(a1[1]);
  *a1 = result;
  a1[1] = v1;
  return result;
}
