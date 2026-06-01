/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrftime
// Address: 0x00000000000BF1F0

//----- (00000000000BF1F0) ----------------------------------------------------
struct tm *__fastcall qstrftime(char *a1, size_t a2, const char *a3, time_t a4)
{
  struct tm *result; // x0
  struct tm tp; // [xsp+8h] [xbp-78h] BYREF
  time_t timer; // [xsp+40h] [xbp-40h] BYREF
  __int64 v10; // [xsp+48h] [xbp-38h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  timer = a4;
  if ( a4 < 0 )
    return nullptr;
  result = localtime_r(&timer, &tp);
  if ( result )
    return (struct tm *)strftime(a1, a2, a3, &tp);
  return result;
}
