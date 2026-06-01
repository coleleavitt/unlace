unsigned __int64 __fastcall sub_2BE930(
        _QWORD *a1,
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
  int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // r12
  char node_info; // al
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  void *v31; // rdx
  __int64 v32; // rdx
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  __int64 v36; // [rsp+0h] [rbp-88h] BYREF
  __m128i v37; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v38[2]; // [rsp+20h] [rbp-68h] BYREF
  int v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+40h] [rbp-48h]
  __m128i v42; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-30h]

  v12 = *a1;
  v43 = __readfsqword(0x28u);
  v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(v12 + 504);
  if ( v13 == sub_2B36E0 )
  {
    v14 = sub_1EA6A0(a1[2] + 384LL, a2, (__int64)sub_2B36E0, a12, *(double *)a3.m128_u64);
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
        v36);
    v23 = *(_DWORD *)(v16 + 24);
  }
  else
  {
    v23 = ((__int64 (__fastcall *)(_QWORD *))v13)(a1);
  }
  if ( v23 >= 0 )
  {
    v24 = a1[55];
    if ( v24 )
      v24 = *(_QWORD *)(v24 + 8);
    v25 = *(int *)(v24 + 72);
    v39 = 0;
    v42 = 0;
    v38[0] = 56;
    v38[1] = -1;
    v40 = -1;
    v41 = 0;
    node_info = get_node_info(v38, v25, (unsigned int)v23, v18, v19, v20);
    v31 = &unk_5C2F25;
    if ( node_info && v42.m128i_i64[0] > 1uLL )
      LODWORD(v31) = v41;
    v37 = 0;
    if ( (unsigned __int8)sub_2B3730(
                            (int)&v36,
                            0,
                            (int)v31,
                            (int)"Please enter new node text",
                            v27,
                            v28,
                            (__m128)0LL,
                            a4,
                            a5,
                            a6,
                            v29,
                            v30,
                            a9,
                            a10,
                            0)
      && v37.m128i_i64[0] > 1uLL )
    {
      v32 = v41;
      v33 = _mm_loadu_si128(&v42);
      v34 = (__m128i)_mm_loadh_ps((const double *)&v37.m128i_i64[1]);
      v41 = v36;
      v36 = v32;
      v42 = v34;
      v37 = v33;
      set_node_info(v25, (unsigned int)v23, v38, 8);
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 152LL))(a1, 0, 0);
      if ( v36 )
      {
        v37.m128i_i64[0] = 0;
        *(double *)v34.m128i_i64 = qfree(v36, nullptr);
      }
      if ( v41 )
      {
        v42.m128i_i64[0] = 0;
        qfree(v41, nullptr, *(double *)v34.m128i_i64);
      }
    }
    else
    {
      if ( v36 )
      {
        v37.m128i_i64[0] = 0;
        qfree(v36, nullptr);
      }
      if ( v41 )
      {
        v42.m128i_i64[0] = 0;
        qfree(v41, nullptr);
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}
