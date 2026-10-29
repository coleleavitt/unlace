unsigned __int64 __fastcall sub_1828D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rdi
  __m128i v6; // xmm1
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbp
  void *v13; // rdi
  __int64 v14; // rsi
  void *v15; // rdi
  __m128i v16; // xmm5
  __int64 v17; // rsi
  void *v18; // rdi
  __m128i v19; // xmm6
  __int64 v20; // rsi
  void *v21; // rdi
  __int64 v22; // rsi
  __m128i v24; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v25; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v26; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-B0h] BYREF
  __m128i v28; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+50h] [rbp-98h] BYREF
  __int128 v30; // [rsp+60h] [rbp-88h]
  __m128i v31; // [rsp+70h] [rbp-78h] BYREF
  __int64 v32; // [rsp+80h] [rbp-68h]
  __int64 v33; // [rsp+88h] [rbp-60h]
  __m128i v34; // [rsp+90h] [rbp-58h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v27 = 0;
  v32 = 0;
  v33 = 0;
  v35 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v34 = 0;
  std::vector<unsigned long>::_M_realloc_append<unsigned long>(&v31, &v27, a3, a4);
  v5 = *(void **)a1;
  v6 = _mm_load_si128(&v28);
  v7 = *(_QWORD *)(a1 + 16);
  v25 = _mm_load_si128(&v31);
  v8 = _mm_loadu_si128((const __m128i *)((char *)&v29 + 8));
  v9 = *((_QWORD *)&v30 + 1);
  v24 = _mm_load_si128(&v34);
  *(_QWORD *)(a1 + 16) = v29;
  v10 = v32;
  v11 = v33;
  v12 = v35;
  *(__m128i *)a1 = v6;
  if ( v5 )
  {
    v26 = v8;
    operator delete(v5, v7 - (_QWORD)v5);
    v8 = _mm_load_si128(&v26);
  }
  v13 = *(void **)(a1 + 24);
  v14 = *(_QWORD *)(a1 + 40);
  *(__m128i *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 40) = v9;
  if ( v13 )
    operator delete(v13, v14 - (_QWORD)v13);
  v15 = *(void **)(a1 + 48);
  v16 = _mm_load_si128(&v25);
  v17 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v10;
  *(__m128i *)(a1 + 48) = v16;
  if ( v15 )
    operator delete(v15, v17 - (_QWORD)v15);
  v18 = *(void **)(a1 + 80);
  v19 = _mm_load_si128(&v24);
  *(_QWORD *)(a1 + 72) = v11;
  v20 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v12;
  *(__m128i *)(a1 + 80) = v19;
  if ( v18 )
    operator delete(v18, v20 - (_QWORD)v18);
  v21 = *(void **)(a1 + 104);
  v22 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v21 )
    operator delete(v21, v22 - (_QWORD)v21);
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  return v36 - __readfsqword(0x28u);
}

