unsigned __int64 __fastcall sub_6C6920(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r13
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v14; // [rsp+0h] [rbp-F0h]
  __int64 v16; // [rsp+10h] [rbp-E0h]
  __int64 v17; // [rsp+10h] [rbp-E0h]
  __int64 v18; // [rsp+20h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-C8h] BYREF
  __m128i v20; // [rsp+38h] [rbp-B8h] BYREF
  int v21; // [rsp+48h] [rbp-A8h]

  v4 = a1 + 328;
  ptr[0] = &v20;
  v21 = 30;
  ptr[1] = (void *)0x2000000005LL;
  v18 = 0;
  v20 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(HIDWORD(a2))),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  v5 = sub_25AC3A0(a1 + 328, ptr, &v18, &off_47D0A80);
  result = (v5 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v5 )
  {
    v7 = 0;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v16 = sub_6C6920(a1, *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7, a3, a4, 0);
      sub_25AC3A0(v4, ptr, &v18, &off_47D0A80);
      v7 = v16;
    }
    v8 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v9 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v9 + 48 && v8 )
    {
      *(_QWORD *)(a1 + 2192) = v9 + 48;
      v10 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v17 = v7;
      v12 = sub_6A76A0(a1 + 2192, 48, 4);
      v7 = v17;
      v10 = v12;
      v9 = v12;
    }
    sub_B06F90(v10, a2, a3, a4, v7);
    sub_25AC200(v4, v10 + 24, v18, &off_47D0A80);
    v11 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v11 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v11 + 1, 8);
      v11 = *(unsigned int *)(a1 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v11) = v9;
    ++*(_DWORD *)(a1 + 16);
    result = v10 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr[0] != &v20 )
  {
    v14 = result;
    free(ptr[0]);
    return v14;
  }
  return result;
}

