/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_491260
// Address: 0x0000000000491260

//----- (0000000000491260) ----------------------------------------------------
void *__fastcall sub_491260(void *a1, unsigned __int64 a2)
{
  void *result; // x0

  if ( a2 > 0x7FFFFFFFFFFFFFFELL || (result = sub_491148(a1, a2)) == nullptr )
    sub_4A0308();
  return result;
}
