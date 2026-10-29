unsigned __int64 __fastcall sub_FCCE0(const __m128i *a1, __int64 a2, signed int a3)
{
  __int64 v4; // rax
  signed int v5; // r13d
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  int v8; // r12d
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  unsigned __int64 v19; // rbp
  void **v20; // r14
  void *v21; // rdi
  __m128i v22; // xmm6
  __m128i v23; // xmm7
  __int8 v24; // al
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rsi
  int v29; // edi
  int v30; // eax
  __int64 v31; // rbp
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-118h] BYREF
  __m128i v34; // [rsp+10h] [rbp-108h] BYREF
  _OWORD *v35; // [rsp+28h] [rbp-F0h]
  __int64 v36; // [rsp+30h] [rbp-E8h]
  _BYTE *v37; // [rsp+38h] [rbp-E0h]
  _OWORD v38[2]; // [rsp+40h] [rbp-D8h] BYREF
  _OWORD v39[2]; // [rsp+60h] [rbp-B8h] BYREF
  _OWORD v40[5]; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int64 v41; // [rsp+D8h] [rbp-40h]

  v4 = a1->m128i_i64[1];
  v36 = a2;
  v5 = *(_DWORD *)(v4 + 20);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 16));
  v7 = _mm_cvtsi32_si128(v5);
  v41 = __readfsqword(0x28u);
  v8 = a3;
  v34 = _mm_loadu_si128(a1 + 16);
  v9 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v6, v6), _mm_unpacklo_epi32(v7, v7));
  v40[0] = v34;
  v10 = _mm_cmpgt_epi32((__m128i)0LL, v9);
  v11 = v9;
  v33 = _mm_loadu_si128(a1 + 17);
  v40[1] = v33;
  v12 = _mm_unpacklo_epi32(v9, v10);
  v13 = _mm_unpackhi_epi32(v11, v10);
  v14 = _mm_loadu_si128(a1 + 18);
  if ( a3 >= v5 )
    v8 = v5 - 1;
  v38[0] = v12;
  v15 = _mm_loadu_si128(a1 + 19);
  v38[1] = v13;
  v39[0] = v14;
  v39[1] = v15;
  v37 = v39;
  v35 = v40;
  sub_FA1C0(v40, v39);
  v19 = a1[19].m128i_i64[1] + 8;
  v20 = (void **)(v33.m128i_i64[1] + 8);
  if ( v33.m128i_i64[1] + 8 < v19 )
  {
    do
    {
      v21 = *v20++;
      operator delete(v21, 0x190u);
    }
    while ( (unsigned __int64)v20 < v19 );
  }
  v22 = _mm_load_si128(&v34);
  v23 = _mm_load_si128(&v33);
  a1[20].m128i_i32[0] = 0;
  v24 = a1[20].m128i_i8[9];
  LOBYTE(v39[0]) = 0;
  a1[18] = v22;
  a1[19] = v23;
  if ( !v24 )
  {
    v28 = a1->m128i_i64[1];
    v29 = (int)v35;
    a1[20].m128i_i8[9] = 1;
    sub_168770(v29, v28, 0, v16, v17, v18);
    linearray_t_set_place();
    linearray_t_copy_from();
    v30 = sub_FC130((__int64)a1, v37, (__int64)a1[5].m128i_i64, v8, 1);
    sub_FC130((__int64)a1, nullptr, (__int64)a1[10].m128i_i64, v5 - v30, 2);
    v31 = a1->m128i_i64[1];
    a1[20].m128i_i8[9] = 0;
    v32 = sub_15D010(v31 + 440);
    sub_16AC40(v31, v32, 0);
    sub_16C9F0(v35);
    v24 = LOBYTE(v39[0]) ^ 1;
  }
  if ( v13.m128i_i64[0] > 0 && v24 )
  {
    if ( v8 < v5
      && (unsigned __int8)sub_13BD50(a1->m128i_i64[1])
      && *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 968) + 100LL) <= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 968)
                                                                               + 96LL) )
    {
      sub_FC560((__int64)a1, v5 - v8, 1, (__int64)v38, v26, v27);
    }
  }
  else if ( a1[18].m128i_i64[0] != a1[16].m128i_i64[0] && !v13.m128i_i64[0] )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  return v41 - __readfsqword(0x28u);
}

