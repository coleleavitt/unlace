unsigned __int64 __fastcall sub_6C86F0(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int8 a4, __int64 a5)
{
  unsigned int v5; // r15d
  __int64 v6; // r12
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v22; // [rsp+0h] [rbp-100h]
  unsigned __int64 v23; // [rsp+0h] [rbp-100h]
  unsigned __int8 v24; // [rsp+1Fh] [rbp-E1h]
  unsigned __int64 v25; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+58h] [rbp-A8h]

  v5 = a4;
  v6 = a1 + 472;
  v30 = HIDWORD(a5);
  ptr[0] = &v29;
  ptr[1] = (void *)0x2000000005LL;
  v27 = 0;
  v29 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)));
  v9 = sub_25AC3A0(a1 + 472, ptr, &v27, &off_47D08A0);
  result = (v9 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v9 )
  {
    v24 = a4 | 6;
    if ( a5 )
    {
      v11 = sub_6C86F0(a1, a2, a3, v5, 0);
      *(_QWORD *)(a1 + 2272) += 48LL;
      v12 = v11;
      v13 = *(_QWORD *)(a1 + 2192);
      v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 2200) >= v14 + 48 && v13 )
      {
        *(_QWORD *)(a1 + 2192) = v14 + 48;
        v15 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v26 = v12;
        v20 = sub_6A76A0(a1 + 2192, 48, 4);
        v12 = v26;
        v15 = v20;
        v14 = v20;
      }
      *(_QWORD *)v15 = v15;
      v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
      *(_QWORD *)(v15 + 32) = a5;
      *(_QWORD *)(v15 + 24) = 0;
      if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) >= 0x10 )
        v16 = v12;
      v25 = v14;
      *(_QWORD *)(v15 + 8) = v16;
      *(_WORD *)(v15 + 22) = a3;
      *(_QWORD *)(v15 + 16) = *(_QWORD *)(v15 + 16) & 0xFFFF0000FFF80000LL
                            | ((unsigned __int64)a4 << 47) & 0xFFFF0007FFFFLL
                            | (unsigned __int16)(v24 << 8)
                            | 0x31LL
                            | ((unsigned __int64)(a2 & 0x7FFF) << 32) & 0xFFFF0007FFFFLL;
      sub_25AC3A0(v6, ptr, &v27, &off_47D08A0);
      v17 = v25;
    }
    else
    {
      v15 = sub_6A77E0(a1 + 2192, 48, 4);
      *(_QWORD *)v15 = v15;
      *(_QWORD *)(v15 + 8) = v15 & 0xFFFFFFFFFFFFFFF0LL;
      v17 = v15;
      *(_OWORD *)(v15 + 24) = 0;
      *(_WORD *)(v15 + 22) = a3;
      *(_QWORD *)(v15 + 16) = *(_QWORD *)(v15 + 16) & 0xFFFF0000FFF80000LL
                            | ((unsigned __int64)a4 << 47) & 0xFFFF0007FFFFLL
                            | (unsigned __int16)(v24 << 8)
                            | 0x31LL
                            | ((unsigned __int64)(a2 & 0x7FFF) << 32) & 0xFFFF0007FFFFLL;
    }
    v18 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v18 + 1) )
    {
      v23 = v17;
      sub_25D6060(a1 + 8, a1 + 24, v18 + 1, 8);
      v18 = *(unsigned int *)(a1 + 16);
      v17 = v23;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v18) = v17;
    v19 = v27;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v6, v15 + 24, v19, &off_47D08A0);
    result = v15 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr[0] != &v29 )
  {
    v22 = result;
    free(ptr[0]);
    return v22;
  }
  return result;
}

