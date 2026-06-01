/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002F350
// Address: 0x000000014002F350

//----- (000000014002F350) ----------------------------------------------------
__int64 __fastcall sub_14002F350(__int64 a1)
{
  void **v1; // rbx
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  _DWORD *v5; // rcx

  v1 = (void **)(a1 + 360);
  v3 = *(_QWORD *)(a1 + 368) + 1LL;
  if ( v3 > *(_QWORD *)(a1 + 376) )
    *v1 = sub_14005ABE0(a1 + 360, *v1, v3, 0x10u);
  v4 = *(_QWORD *)(a1 + 368);
  v5 = *v1;
  *(_QWORD *)(a1 + 368) = v4 + 1;
  v5[4 * v4] = *(_DWORD *)(a1 + 200);
  return 0;
}
