unsigned __int64 __fastcall sub_7A8B80(__int64 a1, int a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // r12d
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  int v13; // r12d
  unsigned int v14; // ebx
  unsigned int v15; // r13d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // edx
  __m128i v21; // xmm0
  int v22[4]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+10h] [rbp-38h]
  int v24[2]; // [rsp+18h] [rbp-30h]
  int v25; // [rsp+20h] [rbp-28h]
  int v26; // [rsp+28h] [rbp-20h]
  __int64 v27; // [rsp+30h] [rbp-18h]

  v6 = *(_DWORD *)(a4 + 132) == 3;
  *(_QWORD *)v24 = __readfsqword(0x28u);
  if ( v6 )
  {
    v13 = *(_DWORD *)(a4 + 136);
    v14 = a3[1];
    v15 = *a3;
    while ( v15 < v14 )
    {
      v16 = sub_8B6A20(v15);
      v20 = v15++;
      if ( BYTE2(v16) == v13 )
      {
        v21 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v15)), (__m128i)0LL);
        rangeset_t_add(
          a2,
          (int)v22,
          v20,
          v17,
          v18,
          v19,
          v21.m128i_i32[0],
          (void *)v21.m128i_i64[1],
          v23,
          v24[0],
          v25,
          v26,
          v27);
      }
    }
  }
  else
  {
    v7 = *a3;
    v8 = *a3;
    v9 = a3[1];
    while ( v8 < v9 )
    {
      v10 = _mm_cvtsi32_si128(v8++);
      v11 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(v8)), (__m128i)0LL);
      rangeset_t_add(
        a2,
        (int)v22,
        (int)a3,
        v7,
        a5,
        a6,
        v11.m128i_i32[0],
        (void *)v11.m128i_i64[1],
        v23,
        v24[0],
        v25,
        v26,
        v27);
    }
  }
  return *(_QWORD *)v24 - __readfsqword(0x28u);
}
