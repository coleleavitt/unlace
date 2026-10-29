void __fastcall sub_563790(__int64 a1, char *a2, void *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r13
  __m128i v13; // xmm0
  void *v14; // rdi
  __int64 v15; // r13
  __m128i v16; // xmm0
  void *v17; // rdi
  __int64 v18; // rdi
  unsigned __int64 v19; // r15
  __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  __int64 v22; // r14
  const __m128i *v23; // r15
  __int64 v24; // r13
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 v27; // r13
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v30; // rdi
  unsigned __int64 v31; // r15
  __int64 v32; // rcx
  __m128i v33; // [rsp+0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+18h] [rbp-50h]
  __int64 v35; // [rsp+20h] [rbp-48h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v35 = (__int64)a3;
  v34 = a1;
  sub_5636A0(a1, a2, a4);
  sub_5636A0((__int64)a2, a3, a4);
  v7 = (_BYTE *)a3 - a2;
  v8 = (__int64)&a2[-a1];
  if ( (_BYTE *)a3 - a2 < (__int64)&a2[-a1] )
  {
    v21 = 0x8E38E38E38E38E39LL * (v7 >> 4);
    v36 = v21;
    if ( v7 <= 0 )
    {
      v32 = a4;
    }
    else
    {
      v22 = a4 + 64;
      v23 = (const __m128i *)(a2 + 64);
      do
      {
        *(_QWORD *)(v22 - 64) = v23[-4].m128i_i64[0];
        *(_QWORD *)(v22 - 56) = v23[-4].m128i_i64[1];
        v24 = v23[-3].m128i_i64[0];
        v25 = _mm_loadu_si128((const __m128i *)((char *)v23 - 40));
        v23[-3].m128i_i64[0] = 0;
        *(const __m128i *)((char *)&v23[-3] + 8) = 0;
        v26 = *(void **)(v22 - 48);
        if ( v26 )
        {
          *(_QWORD *)(v22 - 40) = 0;
          v33 = v25;
          qfree(v26);
          v25 = _mm_load_si128(&v33);
        }
        *(_QWORD *)(v22 - 48) = v24;
        *(__m128i *)(v22 - 40) = v25;
        v27 = v23[-2].m128i_i64[1];
        v28 = _mm_loadu_si128(v23 - 1);
        v23[-2].m128i_i64[1] = 0;
        v23[-1] = 0;
        v29 = *(void **)(v22 - 24);
        if ( v29 )
        {
          *(_QWORD *)(v22 - 16) = 0;
          v33 = v28;
          qfree(v29);
          v28 = _mm_load_si128(&v33);
        }
        *(_QWORD *)(v22 - 24) = v27;
        v30 = v22;
        v23 += 9;
        *(__m128i *)(v22 - 16) = v28;
        v22 += 144;
        copy_tinfo_t(v30);
        *(__m128i *)(v22 - 136) = _mm_loadu_si128((const __m128i *)((char *)v23 - 136));
        *(__m128i *)(v22 - 120) = _mm_loadu_si128((const __m128i *)((char *)v23 - 120));
        *(__m128i *)(v22 - 104) = _mm_loadu_si128((const __m128i *)((char *)v23 - 104));
        *(_DWORD *)(v22 - 88) = v23[-6].m128i_i32[2];
        *(_DWORD *)(v22 - 80) = v23[-5].m128i_i32[0];
        *(_DWORD *)(v22 - 76) = v23[-5].m128i_i32[1];
        *(_BYTE *)(v22 - 72) = v23[-5].m128i_i8[8];
        --v21;
      }
      while ( v21 );
      v31 = v36 - 1;
      if ( (__int64)(v36 - 1) < 0 )
        v31 = 0;
      v32 = a4 + 144 * v31 + 144;
    }
    sub_562950(v34, (__int64)a2, a4, v32, v35);
  }
  else
  {
    v9 = 0x8E38E38E38E38E39LL * (v8 >> 4);
    v36 = v9;
    if ( v8 <= 0 )
    {
      v20 = a4;
    }
    else
    {
      v10 = a4 + 64;
      v11 = a1 + 64;
      do
      {
        *(_QWORD *)(v10 - 64) = *(_QWORD *)(v11 - 64);
        *(_QWORD *)(v10 - 56) = *(_QWORD *)(v11 - 56);
        v12 = *(_QWORD *)(v11 - 48);
        v13 = _mm_loadu_si128((const __m128i *)(v11 - 40));
        *(_QWORD *)(v11 - 48) = 0;
        *(_OWORD *)(v11 - 40) = 0;
        v14 = *(void **)(v10 - 48);
        if ( v14 )
        {
          *(_QWORD *)(v10 - 40) = 0;
          v33 = v13;
          qfree(v14);
          v13 = _mm_load_si128(&v33);
        }
        *(_QWORD *)(v10 - 48) = v12;
        *(__m128i *)(v10 - 40) = v13;
        v15 = *(_QWORD *)(v11 - 24);
        v16 = _mm_loadu_si128((const __m128i *)(v11 - 16));
        *(_QWORD *)(v11 - 24) = 0;
        *(_OWORD *)(v11 - 16) = 0;
        v17 = *(void **)(v10 - 24);
        if ( v17 )
        {
          *(_QWORD *)(v10 - 16) = 0;
          v33 = v16;
          qfree(v17);
          v16 = _mm_load_si128(&v33);
        }
        *(_QWORD *)(v10 - 24) = v15;
        v18 = v10;
        v11 += 144;
        *(__m128i *)(v10 - 16) = v16;
        v10 += 144;
        copy_tinfo_t(v18);
        *(__m128i *)(v10 - 136) = _mm_loadu_si128((const __m128i *)(v11 - 136));
        *(__m128i *)(v10 - 120) = _mm_loadu_si128((const __m128i *)(v11 - 120));
        *(__m128i *)(v10 - 104) = _mm_loadu_si128((const __m128i *)(v11 - 104));
        *(_DWORD *)(v10 - 88) = *(_DWORD *)(v11 - 88);
        *(_DWORD *)(v10 - 80) = *(_DWORD *)(v11 - 80);
        *(_DWORD *)(v10 - 76) = *(_DWORD *)(v11 - 76);
        *(_BYTE *)(v10 - 72) = *(_BYTE *)(v11 - 72);
        --v9;
      }
      while ( v9 );
      v19 = v36 - 1;
      if ( (__int64)(v36 - 1) < 0 )
        v19 = 0;
      v20 = a4 + 144 * v19 + 144;
    }
    sub_562010(a4, v20, (__int64)a2, v35, v34);
  }
}
