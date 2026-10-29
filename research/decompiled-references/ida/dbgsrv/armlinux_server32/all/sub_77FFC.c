/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77FFC
// Address: 0x00077FFC

//----- (00077FFC) --------------------------------------------------------
void *__fastcall sub_77FFC(void *a1, unsigned int a2)
{
  void *result; // r0

  if ( a2 > 0x7FFFFFFE || (result = sub_77F74(a1, a2)) == nullptr )
    sub_83C64();
  return result;
}
