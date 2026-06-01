__int64 __fastcall sub_B1AF70(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned __int64 v26; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+18h] [rbp-30h]
  __int64 v29; // [rsp+20h] [rbp-28h]
  __int64 v30; // [rsp+28h] [rbp-20h]
  __int64 v31; // [rsp+30h] [rbp-18h]
  __int64 v32; // [rsp+38h] [rbp-10h]

  v32 = v10;
  v31 = v9;
  v30 = v8;
  v29 = v7;
  v28 = v6;
  switch ( *(_DWORD *)(a1 + 16) )
  {
    case 0:
    case 4:
      v17 = dword_1C7ED20;
      if ( a2 != dword_1C7ED24 )
      {
        v17 = dword_1C7ED24;
        if ( a2 != dword_1C7ED20 )
          v17 = a2 ^ 1;
      }
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(a4)).m128i_u64[0];
      sub_B0DE40(a1, &v26);
      v18 = dword_1C7ED20;
      if ( a3 != dword_1C7ED24 )
      {
        v18 = dword_1C7ED24;
        if ( a3 != dword_1C7ED20 )
          v18 = a3 ^ 1;
      }
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(a4)).m128i_u64[0];
      sub_B0DE40(a1, &v26);
      v19 = dword_1C7ED20;
      v20 = dword_1C7ED20;
      if ( a3 != dword_1C7ED24 )
      {
        v20 = a3 ^ 1;
        if ( a3 == dword_1C7ED20 )
          v20 = dword_1C7ED24;
      }
      if ( a2 != dword_1C7ED24 )
      {
        v19 = dword_1C7ED24;
        if ( a2 != dword_1C7ED20 )
          v19 = a2 ^ 1;
      }
      goto LABEL_24;
    case 1:
    case 3:
      v14 = dword_1C7ED20;
      if ( dword_1C7ED24 != a5 )
      {
        v14 = dword_1C7ED24;
        if ( a5 != dword_1C7ED20 )
          v14 = a5 ^ 1;
      }
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(a2)).m128i_u64[0];
      sub_B0DE40(a1, &v26);
      v15 = dword_1C7ED20;
      if ( dword_1C7ED24 != a5 )
      {
        v15 = dword_1C7ED24;
        if ( a5 != dword_1C7ED20 )
          v15 = a5 ^ 1;
      }
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(a3)).m128i_u64[0];
      sub_B0DE40(a1, &v26);
      v16 = dword_1C7ED20;
      if ( dword_1C7ED24 != a4 )
      {
        v16 = dword_1C7ED24;
        if ( a4 != dword_1C7ED20 )
          v16 = a4 ^ 1;
      }
      v27 = a3;
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), _mm_cvtsi32_si128(a2)).m128i_u64[0];
      result = sub_B0DC80(a1, &v26);
      break;
    case 2:
      v21 = dword_1C7ED20;
      if ( dword_1C7ED24 != a5 )
      {
        v21 = dword_1C7ED24;
        if ( dword_1C7ED20 != a5 )
          v21 = a5 ^ 1;
      }
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(a2)).m128i_u64[0];
      sub_B0DE40(a1, &v26);
      v22 = dword_1C7ED20;
      if ( dword_1C7ED24 != a5 )
      {
        v22 = dword_1C7ED24;
        if ( dword_1C7ED20 != a5 )
          v22 = a5 ^ 1;
      }
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(a3)).m128i_u64[0];
      sub_B0DE40(a1, &v26);
      v23 = dword_1C7ED20;
      if ( dword_1C7ED24 != a4 )
      {
        v23 = dword_1C7ED24;
        if ( dword_1C7ED20 != a4 )
          v23 = a4 ^ 1;
      }
      v27 = a3;
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(a2)).m128i_u64[0];
      sub_B0DC80(a1, &v26);
      v24 = dword_1C7ED20;
      if ( dword_1C7ED24 != a2 )
      {
        v24 = dword_1C7ED24;
        if ( dword_1C7ED20 != a2 )
          v24 = a2 ^ 1;
      }
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(a4)).m128i_u64[0];
      sub_B0DE40(a1, &v26);
      v25 = dword_1C7ED20;
      if ( dword_1C7ED24 != a3 )
      {
        v25 = dword_1C7ED24;
        if ( dword_1C7ED20 != a3 )
          v25 = a3 ^ 1;
      }
      v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(a4)).m128i_u64[0];
      sub_B0DE40(a1, &v26);
      v19 = dword_1C7ED20;
      v20 = dword_1C7ED20;
      if ( dword_1C7ED24 != a3 )
      {
        v20 = a3 ^ 1;
        if ( dword_1C7ED20 == a3 )
          v20 = dword_1C7ED24;
      }
      if ( dword_1C7ED24 != a2 )
      {
        v19 = dword_1C7ED24;
        if ( dword_1C7ED20 != a2 )
          v19 = a2 ^ 1;
      }
LABEL_24:
      v27 = a5;
      v26 = __PAIR64__(v20, v19);
      result = sub_B0DC80(a1, &v26);
      break;
    default:
      return result;
  }
  return result;
}

