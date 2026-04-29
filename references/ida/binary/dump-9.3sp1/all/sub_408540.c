unsigned __int64 __fastcall sub_408540(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rsi
  __int64 v6; // r12
  __m128i *v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // r15
  __int64 v15; // r14
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __m128i *v18; // r14
  unsigned __int64 v19; // r15
  __m128i *v20; // r12
  __m128i *v21; // r14
  unsigned __int64 v22; // rdx
  __m128i *v23; // rax
  char v24; // cl
  __m128i v26; // [rsp-E0h] [rbp-E8h] BYREF
  __int8 *v27; // [rsp-D0h] [rbp-D8h]
  __m128i *v28; // [rsp-C8h] [rbp-D0h]
  __int64 v29[2]; // [rsp-C0h] [rbp-C8h] BYREF
  __int64 *v30; // [rsp-B0h] [rbp-B8h] BYREF
  __int128 v31; // [rsp-A8h] [rbp-B0h]
  __int128 v32; // [rsp-90h] [rbp-98h] BYREF
  __m128i si128; // [rsp-80h] [rbp-88h] BYREF
  __int64 v34; // [rsp-70h] [rbp-78h] BYREF
  __int128 v35; // [rsp-68h] [rbp-70h]
  __int64 v36; // [rsp-58h] [rbp-60h]
  __int64 v37; // [rsp-50h] [rbp-58h]
  int v38; // [rsp-48h] [rbp-50h]
  unsigned __int64 v39; // [rsp-38h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v34 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v32 = 1u;
  v36 = 0;
  v37 = 0;
  v3 = *(_QWORD *)(a1 + 800);
  v38 = 0;
  v35 = 0;
  v4 = *(_QWORD *)(v3 + 112);
  v27 = &si128.m128i_i8[8];
  *(_QWORD *)((char *)&v32 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v4 + 84)), _mm_cvtsi32_si128(a2)).m128i_u64[0];
  copy_tinfo_t();
  v5 = (_DWORD *)v34;
  if ( *((_QWORD *)&v35 + 1) <= 4u )
  {
    v34 = qvector_reserve((__int64)&v34, v34, 5, 1);
    v5 = (_DWORD *)v34;
  }
  *(_QWORD *)&v35 = 5;
  *v5 = 1702521203;
  *(_BYTE *)(v34 + 4) = 0;
  v6 = sub_335B10(
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 40),
         (__int64)"alloca",
         *(_QWORD *)(a1 + 800) + 232LL,
         1,
         (__int64)&v32,
         0);
  v7 = *(__m128i **)(v6 + 72);
  v8 = v7[7].m128i_i64[0];
  v28 = v7;
  v9 = (__int64 *)v7;
  v7[6].m128i_i64[1] = 0;
  if ( v8 )
  {
    v7[7].m128i_i64[1] = 0;
    qfree(v8);
    v9[14] = 0;
    v9[16] = 0;
  }
  v10 = *(_QWORD *)(a1 + 800);
  v29[0] = 0;
  v29[1] = 0;
  sub_63E80(v29, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), *(_DWORD *)(*(_QWORD *)(v10 + 112) + 84LL));
  v30 = nullptr;
  v31 = 0;
  sub_64280(v28[6].m128i_i64, v29);
  sub_316CB0(v28[7].m128i_i64, &v30, v11, v12);
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree((__int64)v30);
  }
  qfree(v29[0]);
  sub_648D0(&v28[8].m128i_i64[1], v28[6].m128i_i64);
  v14 = nullptr;
  v15 = v28[7].m128i_i64[1];
  if ( v15 )
  {
    v26.m128i_i64[0] = 16 * v15;
    v14 = (void *)qalloc_or_throw(16 * v15, (__int64)v28[6].m128i_i64, 16 * v15, v13);
    memcpy(v14, (const void *)v28[7].m128i_i64[0], 16 * v15);
  }
  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
  v17 = v28[9].m128i_i64[1];
  if ( v17 )
  {
    v28[10].m128i_i64[0] = 0;
    v26 = v16;
    qfree(v17);
    v16 = _mm_load_si128(&v26);
  }
  v18 = v28;
  v28[9].m128i_i64[1] = (__int64)v14;
  v18[10] = v16;
  sub_330290((__int64)v18, *(_QWORD *)(a1 + 8));
  v18[17].m128i_i32[3] = 11;
  sub_B5290(*(_QWORD **)(a1 + 16), v6);
  v19 = *(_QWORD *)(a1 + 40);
  v20 = *(__m128i **)(*(_QWORD *)(a1 + 8) + 920LL);
  v21 = v20 + 4;
  v28 = (__m128i *)v20[4].m128i_i64[1];
  if ( v28 )
  {
    while ( 1 )
    {
      v22 = v28[2].m128i_u64[0];
      v23 = (__m128i *)v28[1].m128i_i64[0];
      v24 = 1;
      if ( v19 >= v22 )
      {
        v23 = (__m128i *)v28[1].m128i_i64[1];
        v24 = 0;
      }
      if ( !v23 )
        break;
      v28 = v23;
    }
    if ( v24 )
    {
      if ( v28 == (__m128i *)v20[5].m128i_i64[0] )
      {
LABEL_22:
        v26.m128i_i8[0] = 1;
        if ( v21 != v28 )
          v26.m128i_i8[0] = v19 < v28[2].m128i_i64[0];
        goto LABEL_24;
      }
      v22 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v22 >= v19 )
      goto LABEL_19;
    goto LABEL_22;
  }
  if ( v21 == (__m128i *)v20[5].m128i_i64[0] || *(_QWORD *)(std::_Rb_tree_decrement() + 32) < v19 )
  {
    v28 = v20 + 4;
    v26.m128i_i8[0] = 1;
LABEL_24:
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v20[6].m128i_i64[0];
  }
LABEL_19:
  *(_BYTE *)(a1 + 896) = 1;
  cleanup_argloc();
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)&v32);
  return v39 - __readfsqword(0x28u);
}
