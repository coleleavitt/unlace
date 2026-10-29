/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476B25
// Address: 0x00476B25

//----- (00476B25) --------------------------------------------------------
LPVOID sub_476B25()
{
  LPVOID result; // eax

  result = dword_4B7A04;
  if ( !dword_4B7A04 )
  {
    if ( !dword_4B7A00 || sub_476BA4() && sub_476E81() )
      return nullptr;
    else
      return dword_4B7A04;
  }
  return result;
}
// 4B7A00: using guessed type int dword_4B7A00;
