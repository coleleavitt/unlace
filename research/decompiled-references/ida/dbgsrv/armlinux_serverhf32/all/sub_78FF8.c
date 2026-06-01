/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78FF8
// Address: 0x00078FF8

//----- (00078FF8) --------------------------------------------------------
struct tm *__fastcall sub_78FF8(char *a1, size_t a2, const char *a3, int a4)
{
  struct tm *result; // r0
  struct tm v8; // [sp+0h] [bp-34h] BYREF

  result = sub_78E90(&v8, a4);
  if ( result )
    return (struct tm *)strftime(a1, a2, a3, &v8);
  return result;
}
