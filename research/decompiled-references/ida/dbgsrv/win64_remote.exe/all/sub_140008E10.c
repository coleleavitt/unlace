/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008E10
// Address: 0x0000000140008E10

//----- (0000000140008E10) ----------------------------------------------------
char __fastcall sub_140008E10(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 32);
  sub_14005D6B0(v2);
  if ( !*(_QWORD *)(a1 + 24) )
    *(_QWORD *)(a1 + 24) = sub_14005D830((LPTHREAD_START_ROUTINE)StartAddress, nullptr);
  return sub_14005D6D0(v2);
}
