__int64 __fastcall sub_BAF830(__int64 a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5, __m128 a6)
{
  size_t v7; // rax
  __int64 v8; // rax
  int v9; // r8d
  int v10; // r9d
  unsigned int *v11; // r12
  int v12; // r14d
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r13
  bool v22; // zf
  unsigned int *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r14d
  unsigned int v28; // eax
  __int64 v29; // r15
  unsigned int v30; // r13d
  __int64 v31; // r15
  int v32; // esi
  __int64 result; // rax
  __int64 v34; // [rsp+0h] [rbp-90h]
  int v35; // [rsp+8h] [rbp-88h]
  int v36; // [rsp+10h] [rbp-80h]
  int v37; // [rsp+10h] [rbp-80h]
  __int64 v38; // [rsp+10h] [rbp-80h]
  __int64 v39; // [rsp+10h] [rbp-80h]
  __int64 v40; // [rsp+18h] [rbp-78h]
  int v41; // [rsp+18h] [rbp-78h]
  int v42; // [rsp+18h] [rbp-78h]
  int v43; // [rsp+18h] [rbp-78h]
  __int64 v44; // [rsp+18h] [rbp-78h]
  int v45; // [rsp+20h] [rbp-70h]
  int v46; // [rsp+20h] [rbp-70h]
  int v47; // [rsp+20h] [rbp-70h]
  int v48; // [rsp+20h] [rbp-70h]
  unsigned __int64 v49; // [rsp+20h] [rbp-70h]
  int v50; // [rsp+20h] [rbp-70h]
  int v51; // [rsp+28h] [rbp-68h]
  int v52; // [rsp+28h] [rbp-68h]
  void *v53; // [rsp+28h] [rbp-68h]
  __int64 v54; // [rsp+28h] [rbp-68h]
  __int64 v55; // [rsp+28h] [rbp-68h]
  int v56[2]; // [rsp+30h] [rbp-60h] BYREF
  __int64 v57; // [rsp+38h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+40h] [rbp-50h] BYREF
  int v59[2]; // [rsp+48h] [rbp-48h] BYREF
  int v60[2]; // [rsp+50h] [rbp-40h] BYREF
  __int64 v61[7]; // [rsp+58h] [rbp-38h] BYREF

  v7 = sub_15D1F10(a2);
  sub_BAE160(a1, v7, (double *)v56, (double *)&v57);
  v40 = *(_QWORD *)(a1 + 24);
  v8 = sub_16256F0(a1 + 56, a2, a3);
  v11 = (unsigned int *)v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v12 = v56[0];
  sub_15DC610(
    *(_QWORD *)(a1 + 24),
    v56[0],
    1,
    (int)v59,
    v9,
    v10,
    v36,
    v40,
    v45,
    v51,
    v56[0],
    v57,
    v58,
    a2,
    v60[0],
    (void *)v61[0]);
  sub_15DC610(
    *(_QWORD *)(a1 + 24),
    v12,
    1,
    (int)v60,
    v13,
    v14,
    v37,
    v41,
    v46,
    v52,
    v56[0],
    v57,
    v58,
    v59[0],
    a3,
    (void *)v61[0]);
  v15 = sub_15E1B70(*(_QWORD *)(a1 + 96));
  v53 = (void *)v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v19 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v19 + 912) )
  {
    v20 = sub_15E1B70(*(_QWORD *)(a1 + 24));
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v61[0] = 0;
    sub_966750(a1, v20, -1, 0, 0, -1, (__int64 ***)v61, v35, v38, v42, v47, v53);
    v16 = v34;
    if ( v61[0] )
      sub_186B220((void *)(v61[0] - 8));
    if ( v21 )
    {
      v22 = (*(_DWORD *)(v21 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(v19, v21);
    }
  }
  sub_B6F780(
    *(_QWORD **)(a1 + 16),
    (__int64)v11,
    0,
    a4,
    a5,
    a6,
    v16,
    v17,
    v18,
    v38,
    v42,
    v47,
    (__int64)v53,
    *(__int64 *)v56,
    v57,
    v58);
  v23 = (unsigned int *)v54;
  sub_B6F780(*(_QWORD **)(a1 + 16), v54, 0, a4, a5, a6, v24, v25, v26, v39, v43, v48, v54, *(__int64 *)v56, v57, v58);
  v27 = sub_B645B0(*(_QWORD *)(a1 + 16), v11);
  v28 = sub_B645B0(*(_QWORD *)(a1 + 16), v23);
  v29 = *(_QWORD *)(a1 + 16);
  v30 = v28;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v29 + 7488) + 48LL))(
    *(_QWORD *)(v29 + 7488),
    *(_QWORD *)(*(_QWORD *)(v29 + 8840) + 8LL * (v27 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v29 + 7488) + 64LL))(*(_QWORD *)(v29 + 7488));
  v31 = *(_QWORD *)(a1 + 16);
  v49 = _mm_xor_si128(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v30)),
          _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v31 + 7488) + 48LL))(
    *(_QWORD *)(v31 + 7488),
    *(_QWORD *)(*(_QWORD *)(v31 + 8840) + 8LL * (v30 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v31 + 7488) + 64LL))(*(_QWORD *)(v31 + 7488));
  v61[0] = __PAIR64__(v30, v27);
  v32 = *(_DWORD *)(a1 + 8);
  v58 = v49;
  sub_B69FE0(*(_QWORD *)(a1 + 16), v32, 2, (unsigned int *)v61, 0, 0, 1u);
  sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 2, (unsigned int *)&v58, 0, 0, 1u);
  result = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(result + 912) )
    result = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v55 )
  {
    v50 = *(_DWORD *)(v55 + 8);
    result = (unsigned int)(v50 - 1);
    *(_DWORD *)(v55 + 8) = result;
    if ( v50 == 1 )
      result = sub_15D7BC0(v44, v55);
  }
  if ( v11 )
  {
    v22 = v11[2]-- == 1;
    if ( v22 )
      return sub_15D7BC0(v44, v11);
  }
  return result;
}

