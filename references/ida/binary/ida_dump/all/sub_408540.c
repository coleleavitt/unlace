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
  void *v11; // r15
  __int64 v12; // r14
  __m128i v13; // xmm0
  __m128i *v14; // r14
  unsigned __int64 v15; // r15
  __m128i *v16; // r12
  __m128i *v17; // r14
  unsigned __int64 v18; // rdx
  __m128i *v19; // rax
  char v20; // cl
  __m128i v22; // [rsp-E0h] [rbp-E8h] BYREF
  __int8 *v23; // [rsp-D0h] [rbp-D8h]
  __m128i *v24; // [rsp-C8h] [rbp-D0h]
  __int64 v25[2]; // [rsp-C0h] [rbp-C8h] BYREF
  __int64 *v26; // [rsp-B0h] [rbp-B8h] BYREF
  __int128 v27; // [rsp-A8h] [rbp-B0h]
  __int128 v28; // [rsp-90h] [rbp-98h] BYREF
  __m128i si128; // [rsp-80h] [rbp-88h] BYREF
  __int64 v30; // [rsp-70h] [rbp-78h]
  __int128 v31; // [rsp-68h] [rbp-70h]
  __int64 v32; // [rsp-58h] [rbp-60h]
  __int64 v33; // [rsp-50h] [rbp-58h]
  int v34; // [rsp-48h] [rbp-50h]
  unsigned __int64 v35; // [rsp-38h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v30 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v28 = 1u;
  v32 = 0;
  v33 = 0;
  v3 = *(_QWORD *)(a1 + 800);
  v34 = 0;
  v31 = 0;
  v4 = *(_QWORD *)(v3 + 112);
  v23 = &si128.m128i_i8[8];
  *(_QWORD *)((char *)&v28 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v4 + 84)), _mm_cvtsi32_si128(a2)).m128i_u64[0];
  copy_tinfo_t();
  v5 = (_DWORD *)v30;
  if ( *((_QWORD *)&v31 + 1) <= 4u )
  {
    v30 = qvector_reserve();
    v5 = (_DWORD *)v30;
  }
  *(_QWORD *)&v31 = 5;
  *v5 = 1702521203;
  *(_BYTE *)(v30 + 4) = 0;
  v6 = sub_335B10(
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 40),
         (__int64)"alloca",
         (_BYTE *)(*(_QWORD *)(a1 + 800) + 232LL),
         1,
         (__int64)&v28,
         0);
  v7 = *(__m128i **)(v6 + 72);
  v8 = v7[7].m128i_i64[0];
  v24 = v7;
  v9 = (__int64 *)v7;
  v7[6].m128i_i64[1] = 0;
  if ( v8 )
  {
    v7[7].m128i_i64[1] = 0;
    qfree();
    v9[14] = 0;
    v9[16] = 0;
  }
  v10 = *(_QWORD *)(a1 + 800);
  v25[0] = 0;
  v25[1] = 0;
  sub_63E80(v25, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), *(_DWORD *)(*(_QWORD *)(v10 + 112) + 84LL));
  v26 = nullptr;
  v27 = 0;
  sub_64280(v24[6].m128i_i64, v25);
  sub_316CB0(v24[7].m128i_i64, &v26);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  qfree();
  sub_648D0(&v24[8].m128i_i64[1], v24[6].m128i_i64);
  v11 = nullptr;
  v12 = v24[7].m128i_i64[1];
  if ( v12 )
  {
    v22.m128i_i64[0] = 16 * v12;
    v11 = (void *)qalloc_or_throw();
    memcpy(v11, (const void *)v24[7].m128i_i64[0], 16 * v12);
  }
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
  if ( v24[9].m128i_i64[1] )
  {
    v24[10].m128i_i64[0] = 0;
    v22 = v13;
    qfree();
    v13 = _mm_load_si128(&v22);
  }
  v14 = v24;
  v24[9].m128i_i64[1] = (__int64)v11;
  v14[10] = v13;
  sub_330290((__int64)v14, *(_QWORD *)(a1 + 8));
  v14[17].m128i_i32[3] = 11;
  sub_B5290(*(_QWORD **)(a1 + 16), v6);
  v15 = *(_QWORD *)(a1 + 40);
  v16 = *(__m128i **)(*(_QWORD *)(a1 + 8) + 920LL);
  v17 = v16 + 4;
  v24 = (__m128i *)v16[4].m128i_i64[1];
  if ( v24 )
  {
    while ( 1 )
    {
      v18 = v24[2].m128i_u64[0];
      v19 = (__m128i *)v24[1].m128i_i64[0];
      v20 = 1;
      if ( v15 >= v18 )
      {
        v19 = (__m128i *)v24[1].m128i_i64[1];
        v20 = 0;
      }
      if ( !v19 )
        break;
      v24 = v19;
    }
    if ( v20 )
    {
      if ( v24 == (__m128i *)v16[5].m128i_i64[0] )
      {
LABEL_22:
        v22.m128i_i8[0] = 1;
        if ( v17 != v24 )
          v22.m128i_i8[0] = v15 < v24[2].m128i_i64[0];
        goto LABEL_24;
      }
      v18 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v18 >= v15 )
      goto LABEL_19;
    goto LABEL_22;
  }
  if ( v17 == (__m128i *)v16[5].m128i_i64[0] || *(_QWORD *)(std::_Rb_tree_decrement() + 32) < v15 )
  {
    v24 = v16 + 4;
    v22.m128i_i8[0] = 1;
LABEL_24:
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v16[6].m128i_i64[0];
  }
LABEL_19:
  *(_BYTE *)(a1 + 896) = 1;
  cleanup_argloc();
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)&v28);
  return v35 - __readfsqword(0x28u);
}
