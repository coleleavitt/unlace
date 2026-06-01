__int64 __fastcall sub_2BF110(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rbp
  _QWORD *v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v22; // rax
  int v23; // r13d
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __int64 v31; // r12
  __int64 (__fastcall *v32)(__int64, int); // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  double v36; // xmm4_8
  double v37; // xmm5_8
  char v38; // [rsp+0h] [rbp-38h]
  unsigned __int8 v39; // [rsp+Fh] [rbp-29h]

  v10 = sub_17D870(a1);
  if ( !v10 )
    return 0;
  v13 = v10;
  if ( ((unsigned int)sub_1EB590(v10, a2, v11, v12, *(double *)a3.m128_u64) != 2 || !*(_QWORD *)(v13 + 896))
    && ((unsigned int)sub_1EB590(v13, a2, v14, v15, *(double *)a3.m128_u64) != 3 || !*(_QWORD *)(v13 + 904)) )
  {
    return 0;
  }
  if ( (unsigned int)sub_1EB590(v13, a2, v14, v15, *(double *)a3.m128_u64) != 2
    || (v19 = *(_QWORD **)(v13 + 896)) == nullptr )
  {
    v19 = nullptr;
    if ( (unsigned int)sub_1EB590(v13, a2, v17, v18, *(double *)a3.m128_u64) == 3 )
      v19 = *(_QWORD **)(v13 + 904);
  }
  v20 = (_QWORD *)v19[55];
  if ( v20 )
    v20 = (_QWORD *)v20[1];
  v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*v19 + 504LL);
  if ( v21 == sub_2B36E0 )
  {
    v22 = sub_1EA6A0(v19[2] + 384LL, a2, (__int64)sub_2B36E0, v18, *(double *)a3.m128_u64);
    v23 = *(_DWORD *)(v22 + 32);
    v24 = v22;
    if ( v23 != (unsigned int)sub_1EB540((_QWORD *)v19[2], (__int64)v19) )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        (__int64)v19,
        v25,
        v26,
        v27,
        v28,
        a3,
        a4,
        a5,
        a6,
        v29,
        v30,
        a9,
        a10,
        v38);
    v31 = *(int *)(v24 + 24);
  }
  else
  {
    v31 = ((int (__fastcall *)(_QWORD *))v21)(v19);
  }
  v32 = *(__int64 (__fastcall **)(__int64, int))(*v20 + 72LL);
  if ( !(v32 == interactive_graph_t__::vfunc_9 ? sub_29AC50((__int64)v20, v31) : (unsigned __int8)v32((__int64)v20, v31)) )
    return 0;
  v39 = *(_BYTE *)(v20[13] + v31) & 1;
  if ( !v39 )
    return 0;
  sub_2BE930(v19, (unsigned int)v31, a3, a4, a5, a6, v36, v37, a9, a10, v34, v35);
  return v39;
}
