/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028D60
// Address: 0x0000000140028D60

//----- (0000000140028D60) ----------------------------------------------------
__int64 __fastcall sub_140028D60(__int64 a1, char *a2)
{
  unsigned __int64 v3; // r8
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 32) + 1LL;
  if ( v3 > *(_QWORD *)(a1 + 40) )
    *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v3, 0x20u);
  v5 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
  *(_BYTE *)v5 = 2;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 8) = 0;
  ++*(_QWORD *)(a1 + 32);
  return sub_14002A460((char *)v5, a2);
}
