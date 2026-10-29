unsigned __int64 __fastcall sub_6CB310(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  char v14; // al
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r10
  char v17; // dl
  char v18; // al
  int v19; // edx
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v26; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v27; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v28; // [rsp+18h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v31; // [rsp+40h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-A8h]

  v5 = a5;
  if ( (a5 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    v10 = sub_6CB180(a1, a3);
    if ( a3 != v10 )
      v5 = sub_6CB310(a1, a2, v10, a4, 0);
  }
  v29 = 0;
  v32 = HIDWORD(a4);
  ptr[0] = &v31;
  ptr[1] = (void *)0x2000000005LL;
  v31 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
          _mm_unpacklo_epi32((__m128i)HIDWORD(a3), _mm_cvtsi32_si128(a4)));
  v8 = sub_25AC3A0(a1 + 624, ptr, &v29, &off_47D0820);
  result = (v8 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v8 )
  {
    v11 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v12 + 48 && v11 )
    {
      *(_QWORD *)(a1 + 2192) = v12 + 48;
      v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v13 = sub_6A76A0(a1 + 2192, 48, 4);
      v12 = v13;
    }
    v28 = v13;
    v26 = v12;
    v14 = sub_A7AF30(a3);
    v15 = v28;
    v16 = v26;
    v17 = v14;
    *(_QWORD *)v28 = v28;
    *(_QWORD *)(v28 + 24) = 0;
    *(_QWORD *)(v28 + 32) = a3;
    *(_QWORD *)(v28 + 40) = a4;
    v18 = ((v14 & 4) != 0 ? 0xC : 0) | (2 * v14) & 0x10 | v14 & 2;
    v19 = v17 & 1;
    if ( v19 )
      v18 |= 1u;
    v20 = v19 | v18 & 0x12;
    v21 = v28 & 0xFFFFFFFFFFFFFFF0LL;
    v22 = v20 | 6;
    if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) >= 0x10 )
      v21 = v5;
    *(_QWORD *)(v28 + 8) = v21;
    *(_DWORD *)(v28 + 16) = *(_DWORD *)(v28 + 16) & 0xF8000000 | (v22 << 8) | 0x14 | (a2 << 19) & 0x7F80000;
    v23 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v23 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v23 + 1, 8);
      v23 = *(unsigned int *)(a1 + 16);
      v15 = v28;
      v16 = v26;
    }
    v27 = v15;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v23) = v16;
    v24 = v29;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(a1 + 624, v15 + 24, v24, &off_47D0820);
    result = v27 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr[0] != &v31 )
  {
    v25 = result;
    free(ptr[0]);
    return v25;
  }
  return result;
}

