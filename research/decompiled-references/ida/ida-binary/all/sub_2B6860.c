__int64 __fastcall sub_2B6860(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        int a12,
        _DWORD *a13)
{
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64); // rax
  int v18; // eax
  __int64 (__fastcall *v19)(__int64, int); // rax
  int v20; // ecx
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rsi
  __m128i v24; // xmm1
  __m128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  unsigned __int64 *v33; // rax
  __int64 (__fastcall *v34)(__int64, int, int); // rax
  __int64 v36; // [rsp+0h] [rbp-B8h]
  unsigned int v37; // [rsp+8h] [rbp-B0h]
  unsigned int v38; // [rsp+Ch] [rbp-ACh]
  __int64 *v39; // [rsp+10h] [rbp-A8h]
  __int64 *v40; // [rsp+18h] [rbp-A0h]
  __int64 v41; // [rsp+20h] [rbp-98h]
  __int64 v42; // [rsp+28h] [rbp-90h]
  __int64 *v43; // [rsp+30h] [rbp-88h]
  _DWORD *v44; // [rsp+38h] [rbp-80h]
  int v45; // [rsp+40h] [rbp-78h]
  __int64 v46; // [rsp+48h] [rbp-70h] BYREF
  __int64 v47; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-60h]
  __int64 v49; // [rsp+60h] [rbp-58h] BYREF
  __int64 v50; // [rsp+68h] [rbp-50h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  LODWORD(v39) = a12;
  v51 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v49 = a2;
  LODWORD(v50) = 0;
  v15 = node_iterator_goup(&v49);
  v44 = a13;
  v16 = *(_QWORD *)v15;
  v42 = 0;
  v48 = *(_DWORD *)(v15 + 8);
  v40 = &v46;
  v47 = v16;
  v43 = &v47;
  *(double *)&v36 = 10000.0;
  while ( 1 )
  {
    v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    v18 = v17 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a2 + 184) : v17(a2);
    v37 = v48;
    if ( v18 == v48 && a2 == v47 )
      break;
    v19 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
    if ( v19 == interactive_graph_t__::vfunc_12 )
      v20 = *(_DWORD *)(*(_QWORD *)(a2 + 176) + 24LL * (int)v48 + 8);
    else
      v20 = v19(a2, v48);
    if ( v20 )
    {
      v21 = v20;
      v41 = 24LL * (int)v37;
      v22 = 0;
      do
      {
        v34 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
        if ( v34 == interactive_graph_t__::vfunc_14 )
        {
          v23 = v41;
          v24 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 176) + v41) + 4LL * (int)v22));
        }
        else
        {
          v23 = v37;
          v24 = _mm_cvtsi32_si128(v34(a2, v37, v22));
        }
        v25 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), v24);
        v46 = v25.m128_u64[0];
        v49 = sub_2B4EB0(a1);
        v26 = *(_QWORD *)(a1 + 16);
        v50 = v27;
        v33 = (unsigned __int64 *)sub_1EA6C0(
                                    v26 + 384,
                                    v23,
                                    v27,
                                    v28,
                                    v29,
                                    v30,
                                    v25,
                                    (__m128)v24,
                                    a5,
                                    (__m128)0x40C3880000000000uLL,
                                    v31,
                                    v32,
                                    a9,
                                    a10,
                                    v36,
                                    v37,
                                    (int)v39,
                                    (int)v40,
                                    v41,
                                    v42,
                                    (__int64)v43,
                                    (int)v44,
                                    v45,
                                    v46,
                                    v47,
                                    v48,
                                    v49);
        sub_2B6340(a1, a2, v33, (int *)&v49, v39, v40, nullptr);
        a5 = (__m128)(unsigned __int64)v36;
        if ( *(double *)&v36 > *(double *)v25.m128_u64 )
        {
          v36 = v25.m128_i64[0];
          v42 = __PAIR64__(v37, _mm_cvtsi128_si32(_mm_cvtsi32_si128(v38)));
        }
        ++v22;
      }
      while ( v21 != v22 );
    }
    ++v48;
    node_iterator_goup(v43);
  }
  if ( *(double *)&v36 >= 4.0 )
    return 0;
  if ( v44 )
  {
    *v44 = HIDWORD(v42);
    v44[1] = v42;
  }
  return 1;
}
