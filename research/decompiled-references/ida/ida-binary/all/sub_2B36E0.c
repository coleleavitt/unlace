__int64 __fastcall sub_2B36E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  char v22; // [rsp+0h] [rbp-18h]

  v12 = sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, a3, a4, *(double *)a5.m128_u64);
  v13 = *(_DWORD *)(v12 + 32);
  v14 = v12;
  if ( v13 != (unsigned int)sub_1EB540(*(_QWORD **)(a1 + 16), a1) )
    sub_169700(
      (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
      a1,
      v15,
      v16,
      v17,
      v18,
      a5,
      a6,
      a7,
      a8,
      v19,
      v20,
      a11,
      a12,
      v22);
  return *(unsigned int *)(v14 + 24);
}
