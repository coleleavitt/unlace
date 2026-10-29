/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004D360
// Address: 0x000000014004D360

//----- (000000014004D360) ----------------------------------------------------
__int64 __fastcall sub_14004D360(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8) + 1LL;
  if ( v2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v2, 0x78u);
  result = 120LL * *(_QWORD *)(a1 + 8) + *(_QWORD *)a1;
  *(_OWORD *)result = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 64) = 0;
  *(_OWORD *)(result + 80) = 0;
  *(_OWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 112) = 0;
  ++*(_QWORD *)(a1 + 8);
  return result;
}
