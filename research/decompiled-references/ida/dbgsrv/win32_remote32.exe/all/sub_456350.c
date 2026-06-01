/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456350
// Address: 0x00456350

//----- (00456350) --------------------------------------------------------
bool __stdcall sub_456350(HANDLE hSemaphore)
{
  return ReleaseSemaphore(hSemaphore, 1, nullptr);
}
