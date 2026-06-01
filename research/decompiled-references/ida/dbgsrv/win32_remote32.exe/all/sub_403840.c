/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403840
// Address: 0x00403840

//----- (00403840) --------------------------------------------------------
int __userpurge sub_403840@<eax>(__m128i a1@<xmm0>, int a2, int a3, int dwMessageId)
{
  if ( dwMessageId )
  {
    if ( (dword_4B70EC & 0x10000) != 0 )
    {
      if ( dwMessageId != -2147418113
        && dwMessageId != -2147024809
        && (dwMessageId < -2140340223 || (unsigned int)(dwMessageId + 2140340223) >= 0x19) )
      {
        sub_453860(a1, dwMessageId);
      }
      sub_402760("MSDIA: \"%S\": %s\n");
    }
  }
  else if ( (dword_4B70EC & 0x10000) != 0 )
  {
    sub_402760("MSDIA: pdb file \"%S\" matched\n");
    return 0;
  }
  return 0;
}
// 4B70EC: using guessed type int dword_4B70EC;
