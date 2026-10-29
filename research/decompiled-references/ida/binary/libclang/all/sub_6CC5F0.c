__int64 __fastcall sub_6CC5F0(_QWORD *a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+18h] [rbp-C8h] BYREF
  __m128i v15; // [rsp+28h] [rbp-B8h] BYREF
  int v16; // [rsp+38h] [rbp-A8h]

  v12 = 0;
  v16 = HIDWORD(a4);
  ptr[0] = &v15;
  ptr[1] = (void *)0x2000000005LL;
  v15 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(HIDWORD(a2))),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  v7 = (_QWORD *)sub_25AC3A0(a1 + 113, ptr, &v12, off_47D06A0);
  if ( !v7 )
  {
    v10 = a1[274];
    a1[284] += 24LL;
    v7 = (_QWORD *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[275] >= (unsigned __int64)(v7 + 3) && v10 )
      a1[274] = v7 + 3;
    else
      v7 = (_QWORD *)sub_6A76A0((__int64)(a1 + 274), 24, 3);
    v7[2] = a4;
    *v7 = 0;
    v11 = v12;
    v7[1] = (4LL * a3) | a2 & 0xFFFFFFFFFFFFFFFBLL;
    sub_25AC200(a1 + 113, v7, v11, off_47D06A0);
  }
  sub_B03910(&v13, v7);
  v8 = v13;
  if ( ptr[0] != &v15 )
    free(ptr[0]);
  return v8;
}

