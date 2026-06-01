/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_821D0
// Address: 0x000821D0

//----- (000821D0) --------------------------------------------------------
int *__fastcall sub_821D0(int *result, int a2)
{
  if ( result != std::string::_Rep::_S_empty_rep_storage )
  {
    *result = a2;
    result[2] = 0;
    *((_BYTE *)result + a2 + 12) = 0;
  }
  return result;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
