/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75C68
// Address: 0x00075C68

//----- (00075C68) --------------------------------------------------------
FILE *__fastcall sub_75C68(int a1)
{
  FILE *result; // r0

  result = sub_75B70(a1, "rbe", 8);
  if ( !result )
  {
    sub_70A2C(1);
    return nullptr;
  }
  return result;
}
