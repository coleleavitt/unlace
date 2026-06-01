/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4562F0
// Address: 0x004562F0

//----- (004562F0) --------------------------------------------------------
char __stdcall sub_4562F0(LPCRITICAL_SECTION lpCriticalSection)
{
  if ( !lpCriticalSection )
    return 0;
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}
