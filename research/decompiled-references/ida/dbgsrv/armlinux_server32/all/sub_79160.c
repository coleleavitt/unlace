/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79160
// Address: 0x00079160

//----- (00079160) --------------------------------------------------------
struct tm *__fastcall sub_79160(char *a1, size_t a2, const char *a3, int a4)
{
  struct tm *result; // r0
  struct tm v8; // [sp+0h] [bp-34h] BYREF

  result = sub_78FF8(&v8, a4);
  if ( result )
    return (struct tm *)strftime(a1, a2, a3, &v8);
  return result;
}
