/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77E94
// Address: 0x00077E94

//----- (00077E94) --------------------------------------------------------
void *__fastcall sub_77E94(void *a1, unsigned int a2)
{
  void *result; // r0

  if ( a2 > 0x7FFFFFFE || (result = sub_77E0C(a1, a2)) == nullptr )
    sub_8397C();
  return result;
}
