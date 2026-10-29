/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456370
// Address: 0x00456370

//----- (00456370) --------------------------------------------------------
bool __stdcall sub_456370(HANDLE hHandle, DWORD a2)
{
  DWORD v2; // eax

  v2 = a2;
  if ( a2 == -1 )
    v2 = -1;
  return WaitForSingleObject(hHandle, v2) == 0;
}
