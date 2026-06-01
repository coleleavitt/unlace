/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrftime
// Address: 0x0007F3A8

//----- (0007F3A8) --------------------------------------------------------
size_t __fastcall qstrftime(char *a1, size_t a2, const char *a3, time_t a4)
{
  struct tm *v7; // r1
  size_t result; // r0
  struct tm v9; // [sp+4h] [bp-34h] BYREF
  time_t timer; // [sp+30h] [bp-8h] BYREF

  timer = a4;
  if ( a4 < 0 )
    return 0;
  v7 = localtime_r(&timer, &v9);
  result = 0;
  if ( v7 )
    return strftime(a1, a2, a3, &v9);
  return result;
}
