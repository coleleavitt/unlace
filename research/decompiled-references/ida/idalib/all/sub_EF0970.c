void *__fastcall sub_EF0970(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10,
        const void *a11,
        size_t a12,
        char *a13,
        __int64 a14,
        int a15)
{
  __int64 v16; // r12
  char *v17; // r13
  int v18; // r14d
  char v19; // r8
  char v20; // r9
  int v21; // r10d
  int v22; // r11d
  int v23; // eax
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  const void *v26; // r8
  const void *v28; // [rsp+10h] [rbp-88h]
  size_t v29; // [rsp+18h] [rbp-80h]
  __m128i v30; // [rsp+20h] [rbp-78h] BYREF
  __m128i v31; // [rsp+30h] [rbp-68h] BYREF
  const void *v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+4Ch] [rbp-4Ch]
  int v34; // [rsp+50h] [rbp-48h]
  int v35; // [rsp+54h] [rbp-44h]
  int v36; // [rsp+58h] [rbp-40h]
  int v37; // [rsp+5Ch] [rbp-3Ch]

  v37 = a3;
  v32 = (const void *)a7;
  v36 = a5;
  v16 = a14;
  v35 = a6;
  v17 = a13;
  v18 = a15;
  v34 = a8;
  v33 = DWORD2(a8);
  v31 = _mm_loadu_si128((const __m128i *)&a9);
  v30 = _mm_loadu_si128((const __m128i *)&a10);
  v28 = a11;
  v29 = a12;
  sub_EE9650((_WORD *)a1, 255);
  v19 = v36;
  v20 = v35;
  *(_DWORD *)(a1 + 24) = v16;
  v21 = v37;
  v22 = v34;
  *(_DWORD *)(a1 + 64) = DWORD2(a7);
  v23 = v33;
  v24 = _mm_load_si128(&v30);
  *(_BYTE *)(a1 + 12) = v19;
  v25 = _mm_load_si128(&v31);
  *(_BYTE *)(a1 + 13) = v20;
  *(_DWORD *)(a1 + 40) = a4;
  v26 = v32;
  *(_DWORD *)(a1 + 44) = v18;
  *(_DWORD *)(a1 + 8) = v21;
  *(_DWORD *)(a1 + 16) = v22;
  *(_DWORD *)(a1 + 20) = v23;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  return sub_EF0420(
           a1,
           a2,
           v28,
           v29,
           v26,
           *((unsigned __int64 *)&a7 + 1),
           v25.m128i_i64[0],
           v25.m128i_i64[1],
           v24.m128i_i64[0],
           v24.m128i_u64[1],
           v17,
           v16);
}
