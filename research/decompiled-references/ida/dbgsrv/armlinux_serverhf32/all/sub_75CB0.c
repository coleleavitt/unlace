/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75CB0
// Address: 0x00075CB0

//----- (00075CB0) --------------------------------------------------------
FILE *__fastcall sub_75CB0(int a1)
{
  FILE *result; // r0

  result = sub_75B70(a1, "rte", 8);
  if ( !result )
  {
    sub_70A2C(1);
    return nullptr;
  }
  return result;
}
