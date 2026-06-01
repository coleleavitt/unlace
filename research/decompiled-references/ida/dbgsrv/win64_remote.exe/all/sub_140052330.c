/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052330
// Address: 0x0000000140052330

//----- (0000000140052330) ----------------------------------------------------
char __fastcall sub_140052330(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx

  v3 = *(int *)(a1 + 752);
  if ( a3[1] > v3 )
    *(_QWORD *)(32 * v3 + *a3 + 8) &= ~0x100uLL;
  return 1;
}
