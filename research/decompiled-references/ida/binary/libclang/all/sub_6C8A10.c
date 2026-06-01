unsigned __int64 __fastcall sub_6C8A10(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  char v17; // al
  char v18; // al
  char v19; // dl
  char v20; // al
  int v21; // edx
  char v22; // dl
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-100h]
  unsigned __int64 v29; // [rsp+0h] [rbp-100h]
  unsigned __int64 v30; // [rsp+0h] [rbp-100h]
  unsigned __int64 v31; // [rsp+0h] [rbp-100h]
  __int64 v32; // [rsp+8h] [rbp-F8h]
  unsigned __int64 v34; // [rsp+18h] [rbp-E8h]
  unsigned __int64 v35; // [rsp+18h] [rbp-E8h]
  __int64 v36; // [rsp+20h] [rbp-E0h]
  __int64 v37; // [rsp+20h] [rbp-E0h]
  __int64 v38; // [rsp+20h] [rbp-E0h]
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+5Ch] [rbp-A4h]

  v42 = HIDWORD(a4);
  ptr[1] = (void *)0x2000000007LL;
  v43 = a5;
  ptr[0] = &v41;
  v39 = 0;
  v32 = a1 + 608;
  v41 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
          _mm_unpacklo_epi32((__m128i)HIDWORD(a3), _mm_cvtsi32_si128(a4)));
  v7 = sub_25AC3A0(a1 + 608, ptr, &v39, &off_47D0860);
  v8 = a5;
  v9 = v7;
  result = (v7 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v9 )
  {
    v11 = a4;
    v12 = a4 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a4
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v36 = a5;
      v29 = *(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] | a4 & 7;
      sub_25AC3A0(v32, ptr, &v39, &off_47D0860);
      v8 = v36;
      v12 = a4 & 0xFFFFFFFFFFFFFFF0LL;
      v11 = v29;
    }
    v13 = 8LL * (v8 != 0) + 48;
    v14 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += v13;
    v15 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v13 + v15 && v14 )
    {
      *(_QWORD *)(a1 + 2192) = v13 + v15;
      v16 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v38 = v8;
      v35 = v11;
      v31 = v12;
      v26 = sub_6A76A0(a1 + 2192, v13, 4);
      v8 = v38;
      v11 = v35;
      v12 = v31;
      v16 = v26;
      v15 = v26;
    }
    v17 = 0;
    if ( a3 )
    {
      v37 = v8;
      v34 = v11;
      v30 = v12;
      v18 = sub_A7AF30(a3);
      v8 = v37;
      v11 = v34;
      v19 = v18;
      v12 = v30;
      v20 = ((v18 & 4) != 0 ? 0xC : 0) | (2 * v18) & 0x10 | v18 & 2;
      v21 = v19 & 1;
      if ( v21 )
        v20 |= 1u;
      v17 = v21 | v20 & 0x12;
    }
    v22 = *(_BYTE *)(*(_QWORD *)v12 + 17LL);
    *(_QWORD *)v16 = v16;
    *(_QWORD *)(v16 + 24) = 0;
    *(_QWORD *)(v16 + 32) = a3;
    *(_QWORD *)(v16 + 40) = a4;
    v23 = (unsigned __int8)(v17 | v22 & 0x1F);
    if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) < 0x10 )
      v11 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v16 + 8) = v11;
    *(_DWORD *)(v16 + 16) = *(_DWORD *)(v16 + 16) & 0xF8000000 | (v23 << 8) | 0x18 | (a2 << 19) & 0x7F80000;
    if ( v8 )
    {
      *(_BYTE *)(v16 + 19) |= 8u;
      *(_QWORD *)(v16 + 48) = v8;
    }
    else
    {
      *(_BYTE *)(v16 + 19) &= ~8u;
    }
    v24 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v24 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v24 + 1, 8);
      v24 = *(unsigned int *)(a1 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v24) = v15;
    v25 = v39;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v32, v16 + 24, v25, &off_47D0860);
    result = v16 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr[0] != &v41 )
  {
    v28 = result;
    free(ptr[0]);
    return v28;
  }
  return result;
}

