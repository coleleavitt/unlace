/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493C78
// Address: 0x0000000000493C78

//----- (0000000000493C78) ----------------------------------------------------
bool __fastcall sub_493C78(pthread_t a1)
{
  return pthread_cancel(a1) == 0;
}
