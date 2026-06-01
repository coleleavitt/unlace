/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4081F0
// Address: 0x004081F0

//----- (004081F0) --------------------------------------------------------
char __thiscall sub_4081F0(struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi

  v2 = *(this + 4);
  sub_4562D0(v2);
  if ( !*(this + 3) )
    *(this + 3) = (struct _RTL_CRITICAL_SECTION *)sub_456450((LPTHREAD_START_ROUTINE)StartAddress, nullptr);
  return sub_4562F0(v2);
}
