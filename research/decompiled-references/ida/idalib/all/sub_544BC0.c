__int64 __fastcall sub_544BC0(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  size_t v13; // r12
  size_t v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rbx
  void *v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned int v28; // ecx
  __int64 v29; // rax
  void *v30; // rax
  __m128i v31; // [rsp+0h] [rbp-C8h] BYREF
  void *v32; // [rsp+10h] [rbp-B8h]
  __m128i v33; // [rsp+18h] [rbp-B0h] BYREF
  void *v34; // [rsp+28h] [rbp-A0h]
  __m128i v35; // [rsp+30h] [rbp-98h] BYREF
  __int64 v36; // [rsp+40h] [rbp-88h] BYREF
  __m128i v37; // [rsp+48h] [rbp-80h] BYREF
  __m128i v38; // [rsp+58h] [rbp-70h] BYREF
  __m128i v39; // [rsp+68h] [rbp-60h] BYREF
  __int64 v40; // [rsp+78h] [rbp-50h]
  __int64 v41; // [rsp+80h] [rbp-48h]
  char v42; // [rsp+88h] [rbp-40h]
  int v43[2]; // [rsp+98h] [rbp-30h]

  *(_QWORD *)v43 = __readfsqword(0x28u);
  if ( a3 >= a1[1] )
  {
    set_error_data(0, a3, a3, a4, a5, a6);
    return 4294967289LL;
  }
  else
  {
    v8 = 9 * a3;
    sub_544310(a2, a1, a3);
    v9 = 16 * v8;
    v10 = v9 + *a1;
    *(__m128i *)(v10 + 72) = _mm_loadu_si128(a4);
    *(__m128i *)(v10 + 88) = _mm_loadu_si128(a4 + 1);
    *(__m128i *)(v10 + 104) = _mm_loadu_si128(a4 + 2);
    *(_DWORD *)(v10 + 120) = a4[3].m128i_i32[0];
    v11 = *(_QWORD *)(v10 + 72);
    if ( (v11 & 0x1000) != 0 )
    {
      v28 = *(_DWORD *)(v10 + 112) & 0xFFFFFFFD;
      *(_DWORD *)(v10 + 112) = v28;
      if ( v28 == 1 && !*(_DWORD *)(v10 + 116) && *(_DWORD *)(v10 + 120) == -1 )
      {
        BYTE1(v11) &= ~0x10u;
        *(_QWORD *)(v10 + 72) = v11;
      }
      else
      {
        BYTE1(v11) |= 0x10u;
        *(_QWORD *)(v10 + 72) = v11;
      }
    }
    v12 = *a1 + v9;
    v32 = nullptr;
    v31 = _mm_loadu_si128((const __m128i *)v12);
    v33 = 0;
    v13 = *(_QWORD *)(v12 + 24);
    if ( v13 )
    {
      v30 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 24));
      v33.m128i_i64[1] = v13;
      v32 = v30;
      memcpy(v30, *(const void **)(v12 + 16), v13);
      v33.m128i_i64[0] = v13;
    }
    v34 = nullptr;
    v35 = 0;
    v14 = *(_QWORD *)(v12 + 48);
    if ( v14 )
    {
      v34 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 48));
      v35.m128i_i64[1] = v14;
      memcpy(v34, *(const void **)(v12 + 40), v14);
      v35.m128i_i64[0] = v14;
    }
    v36 = 0;
    copy_tinfo_t(&v36);
    v15 = *(_QWORD *)(v12 + 120);
    v16 = *(_QWORD *)(v12 + 128);
    v17 = a2[12];
    v37 = _mm_loadu_si128((const __m128i *)(v12 + 72));
    v18 = _mm_loadu_si128((const __m128i *)(v12 + 88));
    v40 = v15;
    LOBYTE(v15) = *(_BYTE *)(v12 + 136);
    v38 = v18;
    v19 = _mm_loadu_si128((const __m128i *)(v12 + 104));
    v41 = v16;
    v20 = a2[13];
    v42 = v15;
    v39 = v19;
    if ( a2[14] < (unsigned __int64)(v20 + 1) )
    {
      v29 = qvector_reserve(a2 + 12, v17, v20 + 1, 144);
      a2[12] = v29;
      v20 = a2[13];
      v17 = v29;
    }
    v21 = v17 + 144 * v20;
    *(__m128i *)v21 = _mm_load_si128(&v31);
    v22 = v32;
    v23 = _mm_loadu_si128(&v33);
    *(_QWORD *)(v21 + 64) = 0;
    *(__m128i *)(v21 + 24) = v23;
    *(_QWORD *)(v21 + 16) = v22;
    v24 = _mm_load_si128(&v35);
    v33 = 0;
    *(_QWORD *)(v21 + 40) = v34;
    *(__m128i *)(v21 + 48) = v24;
    v32 = nullptr;
    v34 = nullptr;
    v35 = 0;
    copy_tinfo_t(v21 + 64);
    v25 = v40;
    *(__m128i *)(v21 + 72) = _mm_loadu_si128(&v37);
    v26 = _mm_loadu_si128(&v38);
    *(_QWORD *)(v21 + 120) = v25;
    *(__m128i *)(v21 + 88) = v26;
    *(__m128i *)(v21 + 104) = _mm_loadu_si128(&v39);
    *(_QWORD *)(v21 + 128) = v41;
    *(_BYTE *)(v21 + 136) = v42;
    ++a2[13];
    clear_tinfo_t(&v36);
    if ( v34 )
    {
      v35.m128i_i64[0] = 0;
      qfree(v34);
    }
    if ( v32 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v32);
    }
    return 0;
  }
}
