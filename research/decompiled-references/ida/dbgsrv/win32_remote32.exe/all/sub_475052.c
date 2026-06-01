/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475052
// Address: 0x00475052

//----- (00475052) --------------------------------------------------------
char *__cdecl sub_475052(unsigned int a1)
{
  unsigned int v1; // esi

  v1 = a1;
  if ( a1 > 0x8D || *(_DWORD *)sub_47C43F() < a1 && a1 < 0x64 )
  {
    v1 = *(_DWORD *)sub_47C43F();
  }
  else if ( a1 > *(_DWORD *)sub_47C43F() )
  {
    return off_4A7B38[a1 - 100];
  }
  return sub_47C439()[v1];
}
// 4A7B38: using guessed type char *off_4A7B38[86];
