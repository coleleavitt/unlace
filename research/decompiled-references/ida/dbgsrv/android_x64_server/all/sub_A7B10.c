/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7B10
// Address: 0x00000000000A7B10

//----- (00000000000A7B10) ----------------------------------------------------
char __fastcall sub_A7B10(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax

  v3 = *(int *)(a1 + 792);
  if ( a3[1] > v3 )
    *(_QWORD *)(*a3 + 32 * v3 + 8) &= ~0x100uLL;
  return 1;
}
