/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlocaltime
// Address: 0x000000010007D7A0

//----- (000000010007D7A0) ----------------------------------------------------
bool __fastcall qlocaltime(tm *a1, time_t a2)
{
  time_t v3; // [rsp+0h] [rbp-10h] BYREF

  v3 = a2;
  return a2 >= 0 && localtime_r(&v3, a1) != nullptr;
}
