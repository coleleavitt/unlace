__int64 __fastcall sub_3EF160(__int64 a1, __int64 a2, __int64 a3, int a4, const char *a5, char a6)
{
  __int64 v9; // r14
  __int64 v10; // rsi
  int v11; // ebp
  char *v13; // rbp
  __int64 v14; // rax
  __m128i v15; // xmm4
  __m128i v16; // xmm3
  __m128i v17; // xmm2
  __m128i v18; // xmm1
  __m128i *v19; // rax
  __m128i v20; // xmm0
  const __m128i *v21; // rdx
  __m128i v22; // xmm3
  __m128i v23; // xmm2
  __m128i v24; // xmm5
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __m128i v27; // xmm5
  __m128i v28; // xmm5
  __m128i v29; // xmm5
  __int64 v31[2]; // [rsp+10h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v33[2]; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v34; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v35; // [rsp+60h] [rbp-98h]
  __m128i v36; // [rsp+70h] [rbp-88h]
  __m128i v37; // [rsp+80h] [rbp-78h]
  __m128i v38; // [rsp+90h] [rbp-68h]
  __m128i v39; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v40; // [rsp+B8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a2 + 72);
  if ( a4 < 0 )
  {
    v31[0] = 0;
    copy_tinfo_t(v31, a1 + 8LL * -a4 + 200);
    v10 = v31[0];
  }
  else
  {
    v10 = (unsigned __int8)a4;
    v31[0] = (unsigned __int8)a4;
  }
  v11 = lexcompare_tinfo(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 24LL), v10, 0);
  clear_tinfo_t(v31);
  if ( v11 )
    return 0;
  if ( strcmp(*(const char **)(a3 + 40), a5) )
    return 0;
  v13 = sub_3EE630(*(char **)(a2 + 40), a6);
  if ( !v13 )
    return 0;
  qfree(*(_QWORD *)(a2 + 40));
  *(_QWORD *)(a2 + 40) = v13;
  v31[1] = 0;
  v31[0] = 0xFFFFFFFF00000000LL;
  v14 = *(_QWORD *)(a3 + 72);
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v15 = _mm_load_si128((const __m128i *)v31);
  v16 = _mm_load_si128(&si128);
  memset(v33, 0, sizeof(v33));
  v17 = _mm_load_si128(v33);
  v18 = _mm_load_si128(&v33[1]);
  v34.m128i_i64[0] = 0;
  v34.m128i_i32[2] = 0;
  v19 = *(__m128i **)(v14 + 24);
  v20 = _mm_load_si128(&v34);
  *(__m128i *)v31 = _mm_loadu_si128(v19);
  si128 = _mm_loadu_si128(v19 + 1);
  v33[0] = _mm_loadu_si128(v19 + 2);
  v33[1] = _mm_loadu_si128(v19 + 3);
  v34 = _mm_loadu_si128(v19 + 4);
  *v19 = v15;
  v19[1] = v16;
  v19[2] = v17;
  v19[3] = v18;
  v19[4] = v20;
  v21 = *(const __m128i **)(v9 + 24);
  v22 = _mm_load_si128(&si128);
  v23 = _mm_load_si128(v33);
  v24 = _mm_loadu_si128(v21 + 5);
  v25 = _mm_load_si128(&v33[1]);
  v35 = _mm_load_si128((const __m128i *)v31);
  v26 = _mm_load_si128(&v34);
  v36 = v22;
  *(__m128i *)v31 = v24;
  v27 = _mm_loadu_si128(v21 + 6);
  v37 = v23;
  si128 = v27;
  v28 = _mm_loadu_si128(v21 + 7);
  v38 = v25;
  v33[0] = v28;
  v29 = _mm_loadu_si128(v21 + 8);
  v39 = v26;
  v33[1] = v29;
  v34 = _mm_loadu_si128(v21 + 9);
  v21[5] = v35;
  v21[6] = v22;
  v21[7] = v23;
  v21[8] = v25;
  v21[9] = v26;
  cleanup_argloc(&v33[1].m128i_u64[1]);
  if ( v33[0].m128i_i64[0] )
  {
    v33[0].m128i_i64[1] = 0;
    qfree(v33[0].m128i_i64[0]);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  sub_11CDA0((__int64)v31);
  return 1;
}
