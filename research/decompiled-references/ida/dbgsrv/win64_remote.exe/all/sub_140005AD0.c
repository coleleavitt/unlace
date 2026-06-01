/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005AD0
// Address: 0x0000000140005AD0

//----- (0000000140005AD0) ----------------------------------------------------
__int64 __fastcall sub_140005AD0(__int64 a1)
{
  __int64 v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v1 = a1;
  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 32);
  sub_14005D6B0(v2);
  LOBYTE(v1) = *(_QWORD *)(v1 + 24) != 0;
  sub_14005D6D0(v2);
  return (unsigned __int8)v1;
}
