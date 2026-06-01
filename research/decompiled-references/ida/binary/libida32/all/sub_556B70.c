__int64 __fastcall sub_556B70(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r15
  __m128i *v6; // rax
  __m128i *v7; // r12
  char *v8; // r14
  __m128i v9; // xmm1
  __m128i *v10; // rdi
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i *v15; // rbx
  __int64 v16; // rdx
  __int8 v17; // al
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rax
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  __m128i *v28; // r14
  __m128i v29; // xmm0
  void *v30; // rdi
  __int64 v31; // rax
  __m128i si128; // xmm0
  void *v33; // rdi
  __int64 v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rdx
  __int8 v38; // al
  __m128i v39; // xmm0
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+18h] [rbp-50h]
  __int64 v42; // [rsp+18h] [rbp-50h]
  __m128i v43[4]; // [rsp+20h] [rbp-48h] BYREF

  result = 0xFFFFFFFFFFFFFFLL;
  *a1 = a3;
  if ( a3 <= 0xFFFFFFFFFFFFFFLL )
    result = a3;
  a1[1] = 0;
  a1[2] = 0;
  v40 = result;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v5 = v40 << 7;
      v6 = (__m128i *)operator new(v40 << 7, (const std::nothrow_t *)&std::nothrow);
      v7 = v6;
      if ( v6 )
        break;
      result = v40;
      if ( v40 == 1 )
        return result;
      v40 = (v40 + 1) >> 1;
    }
    v8 = &v6->m128i_i8[v5];
    if ( &v6->m128i_i8[v5] != (__int8 *)v6 )
    {
      v9 = _mm_loadu_si128((const __m128i *)(a2 + 48));
      v10 = v6 + 4;
      *v6 = _mm_loadu_si128((const __m128i *)a2);
      v11 = *(_QWORD *)(a2 + 16);
      v12 = _mm_loadu_si128((const __m128i *)(a2 + 24));
      *(_QWORD *)(a2 + 16) = 0;
      v7[1].m128i_i64[0] = v11;
      v13 = *(_QWORD *)(a2 + 40);
      v7[4].m128i_i64[0] = 0;
      v7[2].m128i_i64[1] = v13;
      *(_QWORD *)(a2 + 40) = 0;
      *(__m128i *)((char *)v7 + 24) = v12;
      *(_OWORD *)(a2 + 24) = 0;
      v7[3] = v9;
      *(_OWORD *)(a2 + 48) = 0;
      copy_tinfo_t(v10);
      v14 = _mm_loadu_si128((const __m128i *)(a2 + 72));
      v15 = v7 + 8;
      v16 = *(_QWORD *)(a2 + 112);
      v7[6].m128i_i64[1] = *(_QWORD *)(a2 + 104);
      v17 = *(_BYTE *)(a2 + 120);
      *(__m128i *)((char *)v7 + 72) = v14;
      v18 = _mm_loadu_si128((const __m128i *)(a2 + 88));
      v7[7].m128i_i64[0] = v16;
      *(__m128i *)((char *)v7 + 88) = v18;
      v19 = 0;
      v7[7].m128i_i8[8] = v17;
      if ( v5 == 128 )
      {
        v28 = v7;
      }
      else
      {
        do
        {
          v20 = v15[-7].m128i_i64[0];
          v21 = _mm_loadu_si128(v15 - 8);
          v15[-7].m128i_i64[0] = 0;
          v15[1].m128i_i64[0] = v20;
          v22 = v15[-6].m128i_i64[1];
          *v15 = v21;
          v23 = _mm_loadu_si128((__m128i *)((char *)v15 - 104));
          v15[2].m128i_i64[1] = v22;
          *(__m128i *)((char *)v15 + 24) = v23;
          v24 = _mm_loadu_si128(v15 - 5);
          v15[-6].m128i_i64[1] = 0;
          v15[4].m128i_i64[0] = 0;
          *(__m128i *)((char *)v15 - 104) = v19;
          v15[3] = v24;
          v15[-5] = v19;
          copy_tinfo_t(&v15[4]);
          v25 = v15[-2].m128i_i64[1];
          v26 = _mm_loadu_si128((__m128i *)((char *)v15 - 56));
          v15 += 8;
          v19 = 0;
          v15[-2].m128i_i64[1] = v25;
          LODWORD(v25) = v15[-9].m128i_i32[0];
          *(__m128i *)((char *)v15 - 56) = v26;
          v27 = _mm_loadu_si128((__m128i *)((char *)v15 - 168));
          v15[-1].m128i_i32[0] = v25;
          LODWORD(v25) = v15[-9].m128i_i32[1];
          *(__m128i *)((char *)v15 - 40) = v27;
          v15[-1].m128i_i32[1] = v25;
          v15[-1].m128i_i8[8] = v15[-9].m128i_i8[8];
        }
        while ( v8 != (char *)v15 );
        v28 = v15 - 8;
      }
      v29 = _mm_loadu_si128(v28);
      v30 = *(void **)(a2 + 16);
      v31 = v28[1].m128i_i64[0];
      v28[1].m128i_i64[0] = 0;
      *(__m128i *)a2 = v29;
      si128 = _mm_loadu_si128((__m128i *)((char *)v28 + 24));
      *(__m128i *)((char *)&v28[1] + 8) = 0;
      if ( v30 )
      {
        *(_QWORD *)(a2 + 24) = 0;
        v41 = v31;
        v43[0] = si128;
        qfree(v30);
        si128 = _mm_load_si128(v43);
        v31 = v41;
      }
      v33 = *(void **)(a2 + 40);
      *(_QWORD *)(a2 + 16) = v31;
      *(__m128i *)(a2 + 24) = si128;
      v34 = v28[2].m128i_i64[1];
      v35 = _mm_loadu_si128(v28 + 3);
      v28[2].m128i_i64[1] = 0;
      v28[3] = 0;
      if ( v33 )
      {
        *(_QWORD *)(a2 + 48) = 0;
        v42 = v34;
        v43[0] = v35;
        qfree(v33);
        v35 = _mm_load_si128(v43);
        v34 = v42;
      }
      *(_QWORD *)(a2 + 40) = v34;
      *(__m128i *)(a2 + 48) = v35;
      copy_tinfo_t(a2 + 64);
      v36 = _mm_loadu_si128((__m128i *)((char *)v28 + 72));
      v37 = v28[7].m128i_i64[0];
      *(_DWORD *)(a2 + 104) = v28[6].m128i_i32[2];
      v38 = v28[7].m128i_i8[8];
      *(__m128i *)(a2 + 72) = v36;
      v39 = _mm_loadu_si128((__m128i *)((char *)v28 + 88));
      *(_QWORD *)(a2 + 112) = v37;
      *(_BYTE *)(a2 + 120) = v38;
      *(__m128i *)(a2 + 88) = v39;
    }
    result = v40;
    a1[2] = (__int64)v7;
    a1[1] = v40;
  }
  return result;
}

