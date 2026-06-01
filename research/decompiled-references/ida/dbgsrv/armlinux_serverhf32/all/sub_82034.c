/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82034
// Address: 0x00082034

//----- (00082034) --------------------------------------------------------
int *__fastcall sub_82034(int *result, int a2)
{
  if ( result != std::string::_Rep::_S_empty_rep_storage )
  {
    *result = a2;
    result[2] = 0;
    *((_BYTE *)result + a2 + 12) = 0;
  }
  return result;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
