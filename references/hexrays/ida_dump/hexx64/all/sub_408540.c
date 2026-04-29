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
  __int64 v14; // rdi
  __m128i *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  __m128i *v21; // r12
  __m128i *v22; // r14
  unsigned __int64 v23; // rdx
  __m128i *v24; // rax
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  __m128i *v29; // rdx
  __m128i v30; // [rsp-E0h] [rbp-E8h] BYREF
  __int8 *v31; // [rsp-D0h] [rbp-D8h]
  __m128i *v32; // [rsp-C8h] [rbp-D0h]
  __int64 v33[2]; // [rsp-C0h] [rbp-C8h] BYREF
  __int64 *v34; // [rsp-B0h] [rbp-B8h] BYREF
  __int128 v35; // [rsp-A8h] [rbp-B0h]
  __int128 v36; // [rsp-90h] [rbp-98h] BYREF
  __m128i si128; // [rsp-80h] [rbp-88h] BYREF
  __int64 v38; // [rsp-70h] [rbp-78h] BYREF
  __int128 v39; // [rsp-68h] [rbp-70h]
  _QWORD v40[2]; // [rsp-58h] [rbp-60h] BYREF
  int v41; // [rsp-48h] [rbp-50h]
  unsigned __int64 v42; // [rsp-38h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v38 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v36 = 1u;
  v40[0] = 0;
  v40[1] = 0;
  v3 = *(_QWORD *)(a1 + 800);
  v41 = 0;
  v39 = 0;
  v4 = *(_QWORD *)(v3 + 112);
  v31 = &si128.m128i_i8[8];
  *(_QWORD *)((char *)&v36 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v4 + 84)), _mm_cvtsi32_si128(a2)).m128i_u64[0];
  copy_tinfo_t(&si128.m128i_u64[1], v3 + 280);
  v5 = (_DWORD *)v38;
  if ( *((_QWORD *)&v39 + 1) <= 4u )
  {
    v38 = qvector_reserve(&v38, v38, 5, 1);
    v5 = (_DWORD *)v38;
  }
  *(_QWORD *)&v39 = 5;
  *v5 = 1702521203;
  *(_BYTE *)(v38 + 4) = 0;
  v6 = sub_335B10(
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 40),
         (__int64)"alloca",
         (_QWORD *)(*(_QWORD *)(a1 + 800) + 232LL),
         1,
         (__int64)&v36,
         0);
  v7 = *(__m128i **)(v6 + 72);
  v8 = v7[7].m128i_i64[0];
  v32 = v7;
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
  v33[0] = 0;
  v33[1] = 0;
  sub_63E80(v33, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), *(_DWORD *)(*(_QWORD *)(v10 + 112) + 84LL));
  v34 = nullptr;
  v35 = 0;
  sub_64280(v32[6].m128i_i64, v33);
  sub_316CB0(v32[7].m128i_i64, &v34);
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  qfree(v33[0]);
  sub_648D0(&v32[8].m128i_i64[1], v32[6].m128i_i64);
  v11 = nullptr;
  v12 = v32[7].m128i_i64[1];
  if ( v12 )
  {
    v30.m128i_i64[0] = 16 * v12;
    v11 = (void *)qalloc_or_throw(16 * v12);
    memcpy(v11, (const void *)v32[7].m128i_i64[0], 16 * v12);
  }
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
  v14 = v32[9].m128i_i64[1];
  if ( v14 )
  {
    v32[10].m128i_i64[0] = 0;
    v30 = v13;
    qfree(v14);
    v13 = _mm_load_si128(&v30);
  }
  v15 = v32;
  v32[9].m128i_i64[1] = (__int64)v11;
  v15[10] = v13;
  sub_330290((__int64)v15, *(_QWORD *)(a1 + 8));
  v15[17].m128i_i32[3] = 11;
  v16 = v6;
  sub_B5290(*(_QWORD **)(a1 + 16), v6);
  v20 = *(_QWORD *)(a1 + 40);
  v21 = *(__m128i **)(*(_QWORD *)(a1 + 8) + 920LL);
  v22 = v21 + 4;
  v32 = (__m128i *)v21[4].m128i_i64[1];
  if ( v32 )
  {
    while ( 1 )
    {
      v23 = v32[2].m128i_u64[0];
      v24 = (__m128i *)v32[1].m128i_i64[0];
      v25 = 1;
      if ( v20 >= v23 )
      {
        v24 = (__m128i *)v32[1].m128i_i64[1];
        v25 = 0;
      }
      if ( !v24 )
        break;
      v32 = v24;
    }
    if ( (_BYTE)v25 )
    {
      if ( v32 == (__m128i *)v21[5].m128i_i64[0] )
      {
LABEL_22:
        v30.m128i_i8[0] = 1;
        if ( v22 != v32 )
          v30.m128i_i8[0] = v20 < v32[2].m128i_i64[0];
        goto LABEL_24;
      }
      v23 = *(_QWORD *)(std::_Rb_tree_decrement(v32, v32[1].m128i_i64[1], v23, v25, v19) + 32);
    }
    if ( v23 >= v20 )
      goto LABEL_19;
    goto LABEL_22;
  }
  if ( v22 == (__m128i *)v21[5].m128i_i64[0]
    || *(_QWORD *)(std::_Rb_tree_decrement(&v21[4], v16, v17, v18, v19) + 32) < v20 )
  {
    v32 = v21 + 4;
    v30.m128i_i8[0] = 1;
LABEL_24:
    v27 = operator new(0x28u);
    v28 = v30.m128i_u8[0];
    v29 = v32;
    *(_QWORD *)(v27 + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance(v28, v27, v29, &v21[4]);
    ++v21[6].m128i_i64[0];
  }
LABEL_19:
  *(_BYTE *)(a1 + 896) = 1;
  cleanup_argloc(v40);
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  clear_tinfo_t(v31);
  sub_11CDA0((__int64)&v36);
  return v42 - __readfsqword(0x28u);
}
