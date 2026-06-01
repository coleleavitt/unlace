/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4562D0
// Address: 0x004562D0

//----- (004562D0) --------------------------------------------------------
char __stdcall sub_4562D0(LPCRITICAL_SECTION lpCriticalSection)
{
  if ( !lpCriticalSection )
    return 0;
  EnterCriticalSection(lpCriticalSection);
  return 1;
}
