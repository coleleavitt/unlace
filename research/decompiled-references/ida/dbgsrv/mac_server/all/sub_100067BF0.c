/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067BF0
// Address: 0x0000000100067BF0

//----- (0000000100067BF0) ----------------------------------------------------
char __fastcall sub_100067BF0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax

  v3 = *(int *)(a1 + 792);
  if ( a3[1] > v3 )
    *(_QWORD *)(*a3 + 32 * v3 + 8) &= ~0x100uLL;
  return 1;
}
