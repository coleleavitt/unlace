void __fastcall sub_2188950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // r13
  __int64 v11; // r14
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  unsigned __int64 v14; // r12
  char *v15; // rax
  char *v16; // rcx
  size_t v17; // r15
  __m128i v18; // xmm0
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  _BYTE *v23; // rsi
  __m128i v24; // xmm2
  _BYTE *v25; // rax
  unsigned __int64 v26; // rbp
  char *v27; // rax
  char *v28; // rcx
  size_t v29; // r15
  __m128i v30; // xmm0
  _BYTE *v31; // rdi
  __m128 v32; // xmm0
  __int64 v33; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v34; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+18h] [rbp-90h]
  __int64 v36; // [rsp+20h] [rbp-88h]
  __int64 v37; // [rsp+28h] [rbp-80h]
  __m128i v38; // [rsp+30h] [rbp-78h] BYREF
  void *src[2]; // [rsp+40h] [rbp-68h]
  char *v40; // [rsp+50h] [rbp-58h]
  void *ptr; // [rsp+58h] [rbp-50h] BYREF
  __int128 v42; // [rsp+60h] [rbp-48h]
  _BYTE v43[56]; // [rsp+70h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(a2 + 120);
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  v10 = *(_QWORD *)(a2 + 136);
  v11 = *(_QWORD *)(a2 + 128);
  src[0] = nullptr;
  v33 = v8;
  v12 = *(_BYTE **)(a2 + 80);
  v13 = *(_BYTE **)(a2 + 72);
  v38 = v9;
  src[1] = nullptr;
  v40 = nullptr;
  v14 = v12 - v13;
  if ( (v12 - v13) >> 6 )
  {
    if ( (unsigned __int64)((v12 - v13) >> 6) > 0x3FFFFFFFFFFFFFFLL )
      goto LABEL_22;
    v15 = (char *)operator new(v14);
    v13 = *(_BYTE **)(a2 + 72);
    v16 = v15;
    v12 = *(_BYTE **)(a2 + 80);
    v17 = v12 - v13;
  }
  else
  {
    v17 = v12 - v13;
    v16 = nullptr;
  }
  v34.m128i_i64[0] = (__int64)v16;
  v18 = _mm_loadl_epi64(&v34);
  v40 = &v16[v14];
  *(__m128i *)src = _mm_unpacklo_epi64(v18, v18);
  if ( v12 != v13 )
    v16 = (char *)memmove(v16, v13, v17);
  v19 = *(_QWORD *)(a2 + 104) == 0;
  src[1] = &v16[v17];
  ptr = v43;
  v42 = 0;
  if ( !v19 )
    sub_9C3DB0(&ptr, (const void **)(a2 + 96));
  v20 = *(_QWORD *)(a2 + 40);
  v21 = *(_QWORD *)(a2 + 16);
  v22 = *(_QWORD *)(a2 + 24);
  v36 = *(_QWORD *)(a2 + 32);
  v34.m128i_i64[1] = v21;
  v37 = v20;
  v35 = v22;
  sub_21A20D0(a1, 15, v36, v22, a5, a6, v21, v22, v36, v20);
  v23 = src[0];
  *(_BYTE *)(a1 + 48) = 0;
  v24 = _mm_load_si128(&v38);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = &off_2C73F58;
  v25 = src[1];
  *(__m128i *)(a1 + 56) = v24;
  *(_QWORD *)(a1 + 88) = 0;
  v26 = v25 - v23;
  if ( (v25 - v23) >> 6 )
  {
    if ( (unsigned __int64)((v25 - v23) >> 6) <= 0x3FFFFFFFFFFFFFFLL )
    {
      v27 = (char *)operator new(v26);
      v23 = src[0];
      v28 = v27;
      v25 = src[1];
      v29 = (char *)src[1] - (char *)src[0];
      goto LABEL_11;
    }
LABEL_22:
    std::__throw_bad_alloc();
  }
  v29 = v25 - v23;
  v28 = nullptr;
LABEL_11:
  v34.m128i_i64[0] = (__int64)v28;
  v30 = _mm_loadl_epi64(&v34);
  *(_QWORD *)(a1 + 88) = &v28[v26];
  *(__m128i *)(a1 + 72) = _mm_unpacklo_epi64(v30, v30);
  if ( v25 != v23 )
    v28 = (char *)memmove(v28, v23, v29);
  v19 = (_QWORD)v42 == 0;
  *(_QWORD *)(a1 + 80) = &v28[v29];
  *(_QWORD *)(a1 + 96) = a1 + 120;
  *(_OWORD *)(a1 + 104) = 0;
  if ( !v19 )
    sub_9C3DB0((void **)(a1 + 96), (const void **)&ptr);
  v31 = ptr;
  v33 = v11;
  *(_QWORD *)(a1 + 144) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 176;
  v32 = _mm_loadh_ps((const double *)&v33);
  *(_QWORD *)(a1 + 136) = v10;
  *(__m128 *)(a1 + 120) = v32;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 176) = 0;
  if ( v31 != v43 )
    free(v31);
  if ( src[0] )
    operator delete(src[0]);
}
