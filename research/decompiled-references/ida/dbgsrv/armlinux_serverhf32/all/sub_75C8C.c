/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75C8C
// Address: 0x00075C8C

//----- (00075C8C) --------------------------------------------------------
FILE *__fastcall sub_75C8C(int a1)
{
  FILE *result; // r0

  result = sub_75B70(a1, "rb+e", 1);
  if ( !result )
  {
    sub_70A2C(1);
    return nullptr;
  }
  return result;
}
