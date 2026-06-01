/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79038
// Address: 0x00079038

//----- (00079038) --------------------------------------------------------
struct tm *__fastcall sub_79038(struct tm *result, int a2)
{
  time_t v2; // [sp+0h] [bp-8h] BYREF

  if ( a2 < 0 )
    result = nullptr;
  v2 = a2;
  if ( a2 >= 0 )
    return (struct tm *)(gmtime_r(&v2, result) != nullptr);
  return result;
}
