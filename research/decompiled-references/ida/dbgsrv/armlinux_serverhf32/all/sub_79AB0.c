/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79AB0
// Address: 0x00079AB0

//----- (00079AB0) --------------------------------------------------------
bool __fastcall sub_79AB0(pthread_t a1)
{
  return pthread_cancel(a1) == 0;
}
