/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493C90
// Address: 0x0000000000493C90

//----- (0000000000493C90) ----------------------------------------------------
bool __fastcall sub_493C90(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}
