/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgmtime
// Address: 0x000000010007D740

//----- (000000010007D740) ----------------------------------------------------
bool __fastcall qgmtime(tm *a1, time_t a2)
{
  time_t v3; // [rsp+0h] [rbp-10h] BYREF

  v3 = a2;
  return a2 >= 0 && gmtime_r(&v3, a1) != nullptr;
}
