void __fastcall sub_2188390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _BYTE *v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // r12
  __int64 v12; // r13
  _BYTE *v13; // rsi
  unsigned __int64 v14; // r14
  size_t v15; // r15
  unsigned __int64 v16; // rax
  char *v17; // rcx
  char *v18; // rax
  __m128i v19; // xmm0
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rsi
  _BYTE *v24; // rdx
  _BYTE *v25; // rsi
  __m128i v26; // xmm2
  unsigned __int64 v27; // rbp
  size_t v28; // r15
  unsigned __int64 v29; // rax
  char *v30; // rcx
  char *v31; // rax
  __m128i v32; // xmm0
  _BYTE *v33; // rdi
  __m128 v34; // xmm0
  __int64 v35; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+18h] [rbp-90h]
  __int64 v38; // [rsp+20h] [rbp-88h]
  __int64 v39; // [rsp+28h] [rbp-80h]
  __m128i v40; // [rsp+30h] [rbp-78h] BYREF
  void *src[2]; // [rsp+40h] [rbp-68h]
  char *v42; // [rsp+50h] [rbp-58h]
  void *ptr; // [rsp+58h] [rbp-50h] BYREF
  __int128 v44; // [rsp+60h] [rbp-48h]
  _BYTE v45[56]; // [rsp+70h] [rbp-38h] BYREF

  v8 = *(_BYTE **)(a2 + 80);
  v9 = *(_QWORD *)(a2 + 120);
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  v11 = *(_QWORD *)(a2 + 136);
  src[0] = nullptr;
  v12 = *(_QWORD *)(a2 + 128);
  v13 = *(_BYTE **)(a2 + 72);
  v35 = v9;
  v40 = v10;
  src[1] = nullptr;
  v14 = v8 - v13;
  v42 = nullptr;
  v15 = v8 - v13;
  v16 = 0xCCCCCCCCCCCCCCCDLL * ((v8 - v13) >> 3);
  v17 = nullptr;
  if ( v16 )
  {
    if ( v16 > 0x666666666666666LL )
      goto LABEL_20;
    v18 = (char *)operator new(v14);
    v8 = *(_BYTE **)(a2 + 80);
    v13 = *(_BYTE **)(a2 + 72);
    v17 = v18;
    v15 = v8 - v13;
  }
  v36.m128i_i64[0] = (__int64)v17;
  v19 = _mm_loadl_epi64(&v36);
  v42 = &v17[v14];
  *(__m128i *)src = _mm_unpacklo_epi64(v19, v19);
  if ( v8 != v13 )
    v17 = (char *)memmove(v17, v13, v15);
  v20 = *(_QWORD *)(a2 + 104) == 0;
  src[1] = &v17[v15];
  ptr = v45;
  v44 = 0;
  if ( !v20 )
    sub_9C3DB0(&ptr, (const void **)(a2 + 96));
  v21 = *(_QWORD *)(a2 + 32);
  v22 = *(_QWORD *)(a2 + 40);
  v23 = *(_QWORD *)(a2 + 16);
  v37 = *(_QWORD *)(a2 + 24);
  v36.m128i_i64[1] = v23;
  v38 = v21;
  v39 = v22;
  sub_21A20D0(a1, 14, v21, v37, a5, a6, v23, v37, v21, v22);
  v24 = src[1];
  v25 = src[0];
  v26 = _mm_load_si128(&v40);
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v27 = v24 - v25;
  *(__m128i *)(a1 + 56) = v26;
  *(_QWORD *)a1 = &off_2C73D10;
  v28 = v24 - v25;
  *(_QWORD *)(a1 + 80) = 0;
  v29 = 0xCCCCCCCCCCCCCCCDLL * ((v24 - v25) >> 3);
  *(_QWORD *)(a1 + 88) = 0;
  v30 = nullptr;
  if ( v29 )
  {
    if ( v29 <= 0x666666666666666LL )
    {
      v31 = (char *)operator new(v27);
      v24 = src[1];
      v25 = src[0];
      v30 = v31;
      v28 = (char *)src[1] - (char *)src[0];
      goto LABEL_11;
    }
LABEL_20:
    std::__throw_bad_alloc();
  }
LABEL_11:
  v36.m128i_i64[0] = (__int64)v30;
  v32 = _mm_loadl_epi64(&v36);
  *(_QWORD *)(a1 + 88) = &v30[v27];
  *(__m128i *)(a1 + 72) = _mm_unpacklo_epi64(v32, v32);
  if ( v24 != v25 )
    v30 = (char *)memmove(v30, v25, v28);
  v20 = (_QWORD)v44 == 0;
  *(_QWORD *)(a1 + 80) = &v30[v28];
  *(_QWORD *)(a1 + 96) = a1 + 120;
  *(_OWORD *)(a1 + 104) = 0;
  if ( !v20 )
    sub_9C3DB0((void **)(a1 + 96), (const void **)&ptr);
  v33 = ptr;
  v35 = v12;
  *(_QWORD *)(a1 + 144) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 176;
  v34 = _mm_loadh_ps((const double *)&v35);
  *(_QWORD *)(a1 + 136) = v11;
  *(__m128 *)(a1 + 120) = v34;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 176) = 0;
  if ( v33 != v45 )
    free(v33);
  if ( src[0] )
    operator delete(src[0]);
}
