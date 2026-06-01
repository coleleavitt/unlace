/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_791AC
// Address: 0x000791AC

//----- (000791AC) --------------------------------------------------------
struct tm *__fastcall sub_791AC(char *a1, size_t a2, const char *a3, int a4, int a5, int a6)
{
  struct tm *result; // r0
  struct tm v10; // [sp+0h] [bp-30h] BYREF

  result = sub_78FF8(&v10, a6);
  if ( result )
    return (struct tm *)strftime(a1, a2, a3, &v10);
  return result;
}
