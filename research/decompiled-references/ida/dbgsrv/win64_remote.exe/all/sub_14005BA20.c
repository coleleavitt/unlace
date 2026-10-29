/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005BA20
// Address: 0x000000014005BA20

//----- (000000014005BA20) ----------------------------------------------------
_QWORD *__fastcall sub_14005BA20(_QWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = lpCriticalSection;
  *a1 = lpCriticalSection;
  if ( v2 )
    EnterCriticalSection(v2);
  return a1;
}
