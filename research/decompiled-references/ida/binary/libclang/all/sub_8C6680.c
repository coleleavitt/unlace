unsigned __int64 __fastcall sub_8C6680(
        _QWORD *a1,
        char a2,
        _DWORD *a3,
        __int64 a4,
        char a5,
        int a6,
        const __m128i a7,
        unsigned int a8,
        const __m128i *a9,
        __int64 a10,
        void *src,
        _QWORD *a12)
{
  _QWORD *v16; // r11
  void *v17; // r10
  __int64 v18; // r15
  __m128i si128; // xmm0
  int v20; // edi
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rbp
  __int64 v26; // rax
  char v27; // [rsp+40h] [rbp-50h]
  int v28; // [rsp+44h] [rbp-4Ch]
  __m128i v29[4]; // [rsp+48h] [rbp-48h] BYREF

  v16 = a12;
  v17 = src;
  v18 = a10;
  si128 = _mm_loadu_si128(&a7);
  if ( a10 )
  {
    v20 = 16;
    v21 = 32 * *(_DWORD *)(a10 + 8);
  }
  else
  {
    v21 = 0;
    v20 = 16 * (a8 != 0);
  }
  v22 = a1[274];
  v23 = v20 + v21 + 8 * (unsigned int)(((char *)a12 - (_BYTE *)src) >> 3) + 80;
  a1[284] += v23;
  v24 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v23 + v24 && v22 )
  {
    a1[274] = v23 + v24;
  }
  else
  {
    a12 = v16;
    src = v17;
    v28 = a6;
    v27 = a5;
    v29[0] = si128;
    v26 = sub_8C1090((__int64)(a1 + 274), v23, 3);
    si128 = _mm_load_si128(v29);
    a6 = v28;
    v16 = a12;
    v17 = src;
    v24 = v26;
    a5 = v27;
  }
  sub_8C6460(v24, (__int64)a1, a2, a3, a4, a5, a6, si128.m128i_i64[0], si128.m128i_i64[1], a8, a9, v18, v17, v16);
  return v24;
}

