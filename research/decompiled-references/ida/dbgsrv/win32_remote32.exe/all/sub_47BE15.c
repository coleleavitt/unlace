/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BE15
// Address: 0x0047BE15

//----- (0047BE15) --------------------------------------------------------
int __usercall sub_47BE15@<eax>(int a1@<ebx>)
{
  int result; // eax

  result = dword_4B7A00;
  if ( dword_4B7A00 == dword_4B7A0C )
  {
    result = sub_47BCA7(a1, (const char **)dword_4B7A00);
    dword_4B7A00 = result;
  }
  return result;
}
// 4B7A00: using guessed type int dword_4B7A00;
// 4B7A0C: using guessed type int dword_4B7A0C;
