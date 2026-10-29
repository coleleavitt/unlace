/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgmtime
// Address: 0x0007F320

//----- (0007F320) --------------------------------------------------------
bool __fastcall qgmtime(struct tm *tp, int a2)
{
  _BOOL4 result; // r0
  time_t v4; // [sp+0h] [bp-8h] BYREF

  v4 = a2;
  result = 0;
  if ( a2 >= 0 )
    return gmtime_r(&v4, tp) != nullptr;
  return result;
}
