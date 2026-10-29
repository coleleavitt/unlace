/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456510
// Address: 0x00456510

//----- (00456510) --------------------------------------------------------
bool __stdcall sub_456510(HANDLE *a1)
{
  return WaitForSingleObject(*a1, 0xFFFFFFFF) == 0;
}
