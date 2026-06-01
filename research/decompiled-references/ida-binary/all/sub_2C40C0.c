unsigned __int64 __fastcall sub_2C40C0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v14; // rax
  int v15; // r12d
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v30; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v31; // [rsp+8h] [rbp-20h]

  v12 = *a1;
  v31 = __readfsqword(0x28u);
  v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(v12 + 504);
  if ( v13 == sub_2B36E0 )
  {
    v14 = sub_1EA6A0(a1[2] + 384, a2, (__int64)sub_2B36E0, a12, *(double *)a3.m128_u64);
    v15 = *(_DWORD *)(v14 + 32);
    v16 = v14;
    if ( v15 != (unsigned int)sub_1EB540((_QWORD *)a1[2], (__int64)a1) )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        (__int64)a1,
        v17,
        v18,
        v19,
        v20,
        a3,
        a4,
        a5,
        a6,
        v21,
        v22,
        a9,
        a10,
        v30);
    v23 = *(_DWORD *)(v16 + 24);
  }
  else
  {
    v23 = ((__int64 (__fastcall *)(__int64 *))v13)(a1);
  }
  if ( v23 >= 0 )
  {
    v30 = sub_2B5870(a1);
    sub_2C3F80(a1, (int *)&v30, 2u, v24, v25, v26, a3, a4, a5, a6, v27, v28, a9, a10);
  }
  return v31 - __readfsqword(0x28u);
}
