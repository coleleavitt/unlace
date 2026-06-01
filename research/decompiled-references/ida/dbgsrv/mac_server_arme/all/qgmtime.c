/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgmtime
// Address: 0x0000000100074FC4

//----- (0000000100074FC4) ----------------------------------------------------
bool __fastcall qgmtime(tm *a1, time_t a2)
{
  time_t v3; // [xsp+0h] [xbp-10h] BYREF

  v3 = a2;
  return (a2 & 0x8000000000000000LL) == 0 && gmtime_r(&v3, a1) != nullptr;
}
