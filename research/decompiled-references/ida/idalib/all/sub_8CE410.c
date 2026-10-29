unsigned __int64 __fastcall sub_8CE410(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __m128i si128; // xmm0
  __int64 v5; // rax
  _WORD *v6; // rax
  unsigned __int64 v7; // rbp
  size_t v8; // r13
  __int64 v10; // r12
  size_t v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v3 = *a2;
  if ( (unsigned __int64)a2[2] <= 0x4F )
  {
    v13 = qvector_reserve(a2, v3, 80, 1);
    *a2 = v13;
    v3 = v13;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8AD0);
  a2[1] = 80;
  *(__m128i *)v3 = si128;
  src = nullptr;
  *(__m128i *)(v3 + 16) = _mm_load_si128((const __m128i *)&xmmword_23A8AE0);
  *(__m128i *)(v3 + 32) = _mm_load_si128((const __m128i *)&xmmword_23A8AF0);
  *(__m128i *)(v3 + 48) = _mm_load_si128((const __m128i *)&xmmword_23A8B00);
  *(__m128i *)(v3 + 63) = _mm_load_si128((const __m128i *)&xmmword_23A8B10);
  v5 = *a2;
  v16 = 0;
  *(_BYTE *)(v5 + 79) = 0;
  v6 = (_WORD *)qvector_reserve(&src, 0, 7, 1);
  src = v6;
  *(_QWORD *)&v16 = 7;
  *(_DWORD *)v6 = 543581807;
  v6[2] = 27685;
  *((_BYTE *)src + 6) = 0;
  v7 = v16;
  if ( (_QWORD)v16 )
  {
    v8 = v16 - 1;
    if ( (_QWORD)v16 != 1 )
    {
      v10 = a2[1];
      v11 = v16 - 1;
      if ( v10 )
      {
        --v10;
        v11 = v8 + v10;
        v7 = v16 + v10;
      }
      v12 = *a2;
      if ( a2[2] < v7 )
      {
        v14 = qvector_reserve(a2, v12, v7, 1);
        *a2 = v14;
        v12 = v14;
      }
      a2[1] = v7;
      *(_BYTE *)(v12 + v11) = 0;
      memcpy((void *)(v10 + *a2), src, v8);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v16 = 0;
    qfree(src);
  }
  return v17 - __readfsqword(0x28u);
}
