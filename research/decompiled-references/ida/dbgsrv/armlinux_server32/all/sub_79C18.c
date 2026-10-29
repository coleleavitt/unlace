/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79C18
// Address: 0x00079C18

//----- (00079C18) --------------------------------------------------------
bool __fastcall sub_79C18(pthread_t a1)
{
  return pthread_cancel(a1) == 0;
}
