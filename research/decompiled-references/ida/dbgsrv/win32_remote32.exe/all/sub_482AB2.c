/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482AB2
// Address: 0x00482AB2

//----- (00482AB2) --------------------------------------------------------
int __cdecl sub_482AB2(int a1)
{
  int v1; // ecx
  unsigned __int16 v3; // [esp+0h] [ebp-4h]

  v1 = a1;
  if ( dword_4B7844 < 1 || a1 != -1073741132 && a1 != -1073741131 )
    return v1;
  v3 = _mm_getcsr();
  if ( (((unsigned __int8)v3 ^ 0x3F) & 0x81) != 0 )
  {
    if ( ((v3 ^ 0x3F) & 0x204) == 0 )
      return -1073741682;
    if ( ((v3 ^ 0x3F) & 0x102) != 0 )
    {
      if ( ((v3 ^ 0x3F) & 0x408) == 0 )
        return -1073741679;
      if ( ((v3 ^ 0x3F) & 0x810) == 0 )
        return -1073741677;
      if ( ((v3 ^ 0x3F) & 0x1020) == 0 )
        return -1073741681;
      return v1;
    }
  }
  return -1073741680;
}
// 4B7844: using guessed type int dword_4B7844;
