/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DC3B3
// Address: 0x000DC3B3

//----- (000DC3B3) --------------------------------------------------------
int sub_DC3B3()
{
  int result; // eax

  if ( dword_13E714 )
  {
    dword_13E714 = 0;
    return pthread_key_delete(dword_13E718);
  }
  return result;
}
// 13E714: using guessed type int dword_13E714;
// 13E718: using guessed type int dword_13E718;
