unsigned __int64 __fastcall sub_4DC530(__int64 a1)
{
  void *v2; // rdi
  __m128i si128; // xmm1
  __int64 v4; // rsi
  __m128i v5; // xmm0
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // rsi
  void *v12; // rdi
  __m128i v13; // xmm4
  __int64 v14; // rsi
  void *v15; // rdi
  __m128i v16; // xmm5
  __int64 v17; // rsi
  void *v18; // rdi
  __int64 v19; // rsi
  __m128i v21; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v22; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v23; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-B0h] BYREF
  void *v25[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+50h] [rbp-98h] BYREF
  __int128 v27; // [rsp+60h] [rbp-88h]
  void *v28[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v29; // [rsp+80h] [rbp-68h]
  __int64 v30; // [rsp+88h] [rbp-60h]
  __m128i v31; // [rsp+90h] [rbp-58h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v24 = 0;
  v29 = 0;
  v30 = 0;
  v32 = 0;
  *(_OWORD *)v25 = 0;
  v26 = 0;
  v27 = 0;
  *(_OWORD *)v28 = 0;
  v31 = 0;
  sub_4DBBD0((__int64)v28, &v24);
  v2 = *(void **)a1;
  si128 = _mm_load_si128((const __m128i *)v25);
  v4 = *(_QWORD *)(a1 + 16);
  v22 = _mm_load_si128((const __m128i *)v28);
  v5 = _mm_loadu_si128((const __m128i *)((char *)&v26 + 8));
  v6 = *((_QWORD *)&v27 + 1);
  v21 = _mm_load_si128(&v31);
  *(_QWORD *)(a1 + 16) = v26;
  v7 = v29;
  v8 = v30;
  v9 = v32;
  *(__m128i *)a1 = si128;
  if ( v2 )
  {
    v23 = v5;
    operator delete(v2, v4 - (_QWORD)v2);
    v5 = _mm_load_si128(&v23);
  }
  v10 = *(void **)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 40);
  *(__m128i *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 40) = v6;
  if ( v10 )
    operator delete(v10, v11 - (_QWORD)v10);
  v12 = *(void **)(a1 + 48);
  v13 = _mm_load_si128(&v22);
  v14 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v7;
  *(__m128i *)(a1 + 48) = v13;
  if ( v12 )
    operator delete(v12, v14 - (_QWORD)v12);
  v15 = *(void **)(a1 + 80);
  v16 = _mm_load_si128(&v21);
  *(_QWORD *)(a1 + 72) = v8;
  v17 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v9;
  *(__m128i *)(a1 + 80) = v16;
  if ( v15 )
    operator delete(v15, v17 - (_QWORD)v15);
  v18 = *(void **)(a1 + 104);
  v19 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v18 )
    operator delete(v18, v19 - (_QWORD)v18);
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  return v33 - __readfsqword(0x28u);
}
