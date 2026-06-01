unsigned __int64 __fastcall sub_6C7EB0(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v11; // rdx
  __int64 v12; // r11
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // [rsp+10h] [rbp-E0h]
  __int64 v19; // [rsp+10h] [rbp-E0h]
  __int64 v20; // [rsp+20h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-C8h] BYREF
  __m128i v22; // [rsp+38h] [rbp-B8h] BYREF
  int v23; // [rsp+48h] [rbp-A8h]
  __int64 v24; // [rsp+4Ch] [rbp-A4h]

  v23 = HIDWORD(a4);
  ptr[1] = (void *)0x2000000007LL;
  ptr[0] = &v22;
  v24 = a5;
  v20 = 0;
  v22 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
          _mm_unpacklo_epi32((__m128i)HIDWORD(a3), _mm_cvtsi32_si128(a4)));
  v8 = sub_25AC3A0(a1 + 784, ptr, &v20, &off_47D0940);
  v9 = (v8 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v8 )
  {
    v11 = *(_QWORD *)(a1 + 2192);
    v12 = *(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] | a4 & 7;
    *(_QWORD *)(a1 + 2272) += 64LL;
    v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v13 + 64 && v11 )
    {
      *(_QWORD *)(a1 + 2192) = v13 + 64;
      v14 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v19 = v12;
      v13 = sub_6A76A0(a1 + 2192, 64, 4);
      v12 = v19;
      v14 = v13;
    }
    v18 = v13;
    sub_B14DA0(v14, v12, a2, a5, a3, a4);
    v15 = *(unsigned int *)(a1 + 16);
    v16 = v18;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v15 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v15 + 1, 8);
      v15 = *(unsigned int *)(a1 + 16);
      v16 = v18;
    }
    v17 = v14 + 24;
    v9 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v15) = v16;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(a1 + 784, v17, v20, &off_47D0940);
  }
  if ( ptr[0] != &v22 )
    free(ptr[0]);
  return v9;
}

