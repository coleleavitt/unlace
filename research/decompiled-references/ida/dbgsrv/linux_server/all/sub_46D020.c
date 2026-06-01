/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D020
// Address: 0x000000000046D020

//----- (000000000046D020) ----------------------------------------------------
__int64 __fastcall sub_46D020(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax

  v3 = *(int *)(a1 + 920);
  if ( v3 < a3[1] )
    *(_QWORD *)(*a3 + 32 * v3 + 8) &= ~0x100uLL;
  return 1;
}
