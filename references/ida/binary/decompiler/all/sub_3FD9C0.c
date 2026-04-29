unsigned __int64 __fastcall sub_3FD9C0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rsi
  __int64 v6; // r12
  __m128i *v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  void *v15; // r15
  unsigned __int64 v16; // r14
  __m128i v17; // xmm0
  __m128i *v18; // r14
  unsigned __int64 v19; // r15
  __m128i *v20; // r12
  __m128i *v21; // r14
  unsigned __int64 v22; // rdx
  __m128i *v23; // rax
  char v24; // cl
  __int64 v26; // [rsp-E8h] [rbp-F0h]
  __m128i v27; // [rsp-E0h] [rbp-E8h] BYREF
  __int8 *v28; // [rsp-D0h] [rbp-D8h]
  __m128i *v29; // [rsp-C8h] [rbp-D0h]
  __int64 v30[2]; // [rsp-C0h] [rbp-C8h] BYREF
  __int64 v31; // [rsp-B0h] [rbp-B8h] BYREF
  __int128 v32; // [rsp-A8h] [rbp-B0h]
  __int128 v33; // [rsp-90h] [rbp-98h] BYREF
  __m128i si128; // [rsp-80h] [rbp-88h] BYREF
  __int64 v35; // [rsp-70h] [rbp-78h]
  __int128 v36; // [rsp-68h] [rbp-70h]
  __int64 v37; // [rsp-58h] [rbp-60h]
  __int64 v38; // [rsp-50h] [rbp-58h]
  int v39; // [rsp-48h] [rbp-50h]
  unsigned __int64 v40; // [rsp-38h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v35 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
  v33 = 1u;
  v37 = 0;
  v38 = 0;
  v3 = *(_QWORD *)(a1 + 800);
  v39 = 0;
  v36 = 0;
  v4 = *(_QWORD *)(v3 + 112);
  v28 = &si128.m128i_i8[8];
  *(_QWORD *)((char *)&v33 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v4 + 84)), _mm_cvtsi32_si128(a2)).m128i_u64[0];
  copy_tinfo_t();
  v5 = (_DWORD *)v35;
  if ( *((_QWORD *)&v36 + 1) <= 4u )
  {
    v35 = qvector_reserve();
    v5 = (_DWORD *)v35;
  }
  *(_QWORD *)&v36 = 5;
  *v5 = 1702521203;
  *(_BYTE *)(v35 + 4) = 0;
  v6 = sub_332690(
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 40),
         (unsigned int)"alloca",
         (unsigned int)*(_QWORD *)(a1 + 800) + 232,
         1,
         (unsigned int)&v33,
         0,
         v26,
         v27.m128i_i32[0],
         v27.m128i_i32[2],
         (_DWORD)v28,
         (_DWORD)v29);
  v7 = *(__m128i **)(v6 + 72);
  v8 = v7[7].m128i_i64[0];
  v29 = v7;
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
  v30[0] = 0;
  v30[1] = 0;
  sub_63580(v30, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), *(_DWORD *)(*(_QWORD *)(v10 + 112) + 84LL));
  v31 = 0;
  v32 = 0;
  sub_63980(v29[6].m128i_i64, v30);
  sub_313730(&v29[7], &v31);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  qfree();
  sub_63FD0(&v29[8].m128i_i64[1], v29[6].m128i_i64);
  v15 = 0;
  v16 = v29[7].m128i_u64[1];
  if ( v16 )
  {
    v27.m128i_i64[0] = 16 * v16;
    v15 = (void *)qalloc_or_throw();
    memcpy(v15, (const void *)v29[7].m128i_i64[0], 16 * v16);
  }
  v17 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  if ( v29[9].m128i_i64[1] )
  {
    v29[10].m128i_i64[0] = 0;
    v27 = v17;
    qfree();
    v17 = _mm_load_si128(&v27);
  }
  v18 = v29;
  v29[9].m128i_i64[1] = (__int64)v15;
  v18[10] = v17;
  sub_32CE30((_DWORD)v18, *(_QWORD *)(a1 + 8), v11, v12, v13, v14, v27.m128i_i32[0], v27.m128i_i32[2]);
  v18[17].m128i_i32[3] = 11;
  sub_B4460(*(_QWORD **)(a1 + 16), v6);
  v19 = *(_QWORD *)(a1 + 40);
  v20 = *(__m128i **)(*(_QWORD *)(a1 + 8) + 920LL);
  v21 = v20 + 4;
  v29 = (__m128i *)v20[4].m128i_i64[1];
  if ( v29 )
  {
    while ( 1 )
    {
      v22 = v29[2].m128i_u64[0];
      v23 = (__m128i *)v29[1].m128i_i64[0];
      v24 = 1;
      if ( v19 >= v22 )
      {
        v23 = (__m128i *)v29[1].m128i_i64[1];
        v24 = 0;
      }
      if ( !v23 )
        break;
      v29 = v23;
    }
    if ( v24 )
    {
      if ( v29 == (__m128i *)v20[5].m128i_i64[0] )
      {
LABEL_22:
        v27.m128i_i8[0] = 1;
        if ( v21 != v29 )
          v27.m128i_i8[0] = v19 < v29[2].m128i_i64[0];
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
    v29 = v20 + 4;
    v27.m128i_i8[0] = 1;
LABEL_24:
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v20[6].m128i_i64[0];
  }
LABEL_19:
  *(_BYTE *)(a1 + 896) = 1;
  cleanup_argloc();
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11A960((__int64)&v33);
  return v40 - __readfsqword(0x28u);
}
