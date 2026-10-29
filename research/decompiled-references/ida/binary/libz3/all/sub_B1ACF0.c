__int64 __fastcall sub_B1ACF0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rsi
  int v5; // ecx
  int v6; // eax
  int v8; // edx
  __int64 v9; // rbx
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rbp
  int v15; // edx
  unsigned int v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rbp
  __int64 result; // rax
  unsigned int v20; // [rsp+4h] [rbp-74h]
  unsigned int v21; // [rsp+4h] [rbp-74h]
  unsigned int v22; // [rsp+8h] [rbp-70h]
  unsigned int v23; // [rsp+8h] [rbp-70h]
  unsigned int v24; // [rsp+8h] [rbp-70h]
  unsigned int v25; // [rsp+10h] [rbp-68h]
  unsigned int v26; // [rsp+14h] [rbp-64h]
  unsigned int v27; // [rsp+14h] [rbp-64h]
  unsigned __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v29; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *a2;
  v5 = dword_1C7ED24;
  if ( !v4 )
    return (unsigned int)dword_1C7ED24;
  v6 = *(_DWORD *)(v4 - 4);
  if ( !v6 )
    return (unsigned int)dword_1C7ED24;
  v8 = dword_1C7ED20;
  v20 = dword_1C7ED24;
  v9 = 4LL * (unsigned int)(v6 - 1);
  v25 = dword_1C7ED20;
  while ( 1 )
  {
    v10 = *(_DWORD *)(*a3 + v9);
    if ( v10 != v5 )
    {
      if ( v10 != v8 )
        v5 = v10 ^ 1;
      v8 = v5;
    }
    v26 = v8;
    v22 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(_DWORD *)(v4 + v9)));
    v11 = (_QWORD *)sub_186B270(0x10u);
    *v11 = 0x200000002LL;
    v12 = v11++;
    *v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v26)).m128i_u64[0];
    v30 = v11;
    v23 = sub_B19E50(a1, (__int64 *)&v30);
    sub_186B220(v12);
    v13 = (_QWORD *)sub_186B270(0x10u);
    *v13 = 0x200000002LL;
    v14 = v13++;
    *v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v23)).m128i_u64[0];
    v29 = v13;
    v24 = sub_B19E50(a1, (__int64 *)&v29);
    sub_186B220(v14);
    v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(v24)).m128i_u64[0];
    v25 = sub_B0BAF0(a1, &v28);
    v15 = *(_DWORD *)(*a3 + v9);
    v16 = dword_1C7ED20;
    if ( v15 != dword_1C7ED24 )
    {
      v16 = dword_1C7ED24;
      if ( v15 != dword_1C7ED20 )
        v16 = v15 ^ 1;
    }
    v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(*a2 + v9)), _mm_cvtsi32_si128(v16)).m128i_u64[0];
    v27 = sub_B0BAF0(a1, &v28);
    v17 = (_QWORD *)sub_186B270(0x10u);
    *v17 = 0x200000002LL;
    v18 = v17++;
    *v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v27)).m128i_u64[0];
    v31[0] = (__int64)v17;
    v21 = sub_B19E50(a1, v31);
    v9 -= 4;
    sub_186B220(v18);
    v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(v21)).m128i_u64[0];
    result = sub_B0BAF0(a1, &v28);
    v20 = result;
    if ( v9 == -4 )
      break;
    v4 = *a2;
    v5 = dword_1C7ED24;
    v8 = dword_1C7ED20;
  }
  return result;
}

