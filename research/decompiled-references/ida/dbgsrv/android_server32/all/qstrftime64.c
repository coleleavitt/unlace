/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrftime64
// Address: 0x0007F3F8

//----- (0007F3F8) --------------------------------------------------------
size_t __fastcall qstrftime64(char *a1, size_t a2, const char *a3, int a4, int a5, time_t a6)
{
  struct tm *v9; // r1
  size_t result; // r0
  struct tm v11; // [sp+4h] [bp-34h] BYREF
  time_t timer; // [sp+30h] [bp-8h] BYREF

  timer = a6;
  if ( a6 < 0 )
    return 0;
  v9 = localtime_r(&timer, &v11);
  result = 0;
  if ( v9 )
    return strftime(a1, a2, a3, &v11);
  return result;
}
