/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456310
// Address: 0x00456310

//----- (00456310) --------------------------------------------------------
HANDLE __stdcall sub_456310(LPCSTR lpName, LONG lInitialCount)
{
  return CreateSemaphoreA(nullptr, lInitialCount, 0x7FFFFFFF, lpName);
}
