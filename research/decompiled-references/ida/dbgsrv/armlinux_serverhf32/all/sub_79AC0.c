/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79AC0
// Address: 0x00079AC0

//----- (00079AC0) --------------------------------------------------------
bool __fastcall sub_79AC0(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}
