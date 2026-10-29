/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79C28
// Address: 0x00079C28

//----- (00079C28) --------------------------------------------------------
bool __fastcall sub_79C28(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}
