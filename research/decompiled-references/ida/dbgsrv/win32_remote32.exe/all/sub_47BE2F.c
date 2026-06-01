/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BE2F
// Address: 0x0047BE2F

//----- (0047BE2F) --------------------------------------------------------
void *__usercall sub_47BE2F@<eax>(int a1@<ebx>)
{
  void *result; // eax

  result = dword_4B7A04;
  if ( dword_4B7A04 == (LPVOID)dword_4B7A08 )
  {
    result = (void *)sub_47BD57(a1, (int *)dword_4B7A04);
    dword_4B7A04 = result;
  }
  return result;
}
// 4B7A08: using guessed type int dword_4B7A08;
