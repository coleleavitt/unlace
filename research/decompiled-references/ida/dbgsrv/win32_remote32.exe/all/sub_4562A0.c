/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4562A0
// Address: 0x004562A0

//----- (004562A0) --------------------------------------------------------
char __stdcall sub_4562A0(LPCRITICAL_SECTION lpCriticalSection)
{
  if ( !lpCriticalSection )
    return 0;
  DeleteCriticalSection(lpCriticalSection);
  sub_4627F2(lpCriticalSection);
  return 1;
}
