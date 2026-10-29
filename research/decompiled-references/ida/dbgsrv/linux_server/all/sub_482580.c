/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482580
// Address: 0x0000000000482580

//----- (0000000000482580) ----------------------------------------------------
bool __fastcall sub_482580(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}
