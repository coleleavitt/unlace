/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485830
// Address: 0x0000000000485830

//----- (0000000000485830) ----------------------------------------------------
unsigned __int64 __fastcall sub_485830(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 result; // rax

  v1 = sub_47F890(a1[1]);
  result = sub_47F890(*a1);
  *a1 = v1;
  a1[1] = result;
  return result;
}
