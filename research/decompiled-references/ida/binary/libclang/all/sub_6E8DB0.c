__int64 __fastcall sub_6E8DB0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  char v14; // si
  __int64 v15; // [rsp+0h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+8h] [rbp-C8h] BYREF
  __m128i v17; // [rsp+18h] [rbp-B8h] BYREF
  int v18; // [rsp+28h] [rbp-A8h]

  v18 = HIDWORD(a3);
  ptr[0] = &v17;
  ptr[1] = (void *)0x2000000005LL;
  v17 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(WORD2(a2))),
          _mm_unpacklo_epi32((__m128i)HIWORD(a2), _mm_cvtsi32_si128(a3)));
  v5 = sub_25AC3A0(a1 + 1240, ptr, &v15, &off_47D0600);
  v6 = v5 - 56;
  if ( !v5 )
  {
    v8 = *(_QWORD *)(a1 + 22576);
    v9 = *(_QWORD *)(v8 + 48);
    if ( v9 )
    {
      v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
      v11 = 1;
    }
    else
    {
      v13 = sub_6E8D60(a1, v8);
      v14 = v13;
      v10 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v14 & 7 | 1LL;
    }
    v6 = sub_7AEC10(a1, v10 | v11, a2, a3);
    v12 = v6 + 56;
    if ( !v6 )
      v12 = 0;
    sub_25AC200(a1 + 1240, v12, v15, &off_47D0600);
  }
  if ( ptr[0] != &v17 )
    free(ptr[0]);
  return v6;
}

