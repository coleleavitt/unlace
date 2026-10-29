__int64 __fastcall sub_7F8000(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  const __m128i **v4; // rbp
  __int64 *v5; // r15
  __m128i *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int128 si128; // xmm1
  __int128 v19; // xmm0
  const __m128i *v20; // r12
  int v21; // eax
  _BOOL8 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm0
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  char *v29; // r12
  __int64 *v30; // rcx
  __m128i v33; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v34; // [rsp+50h] [rbp-D8h] BYREF
  int v35; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v36; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+80h] [rbp-A8h]
  __int128 v38; // [rsp+90h] [rbp-98h]
  __int128 v39; // [rsp+A0h] [rbp-88h]
  __int64 v40; // [rsp+B0h] [rbp-78h]
  int v41; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v42; // [rsp+C8h] [rbp-60h]

  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    if ( (unsigned __int8)sub_7EBA80((__int64 *)a1, *(_QWORD *)(a2 + 32)) )
      goto LABEL_3;
    return 0;
  }
  v30 = *(__int64 **)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32);
  if ( !(unsigned __int8)sub_7EEDC0(a1, *v30, (__int64)(v30 + 1)) )
    return 0;
LABEL_3:
  v3 = (__int64 *)(a2 + 8LL * ((unsigned __int8)(*(_BYTE *)(a2 + 19) & 0x40) >> 6) + 32);
  v4 = (const __m128i **)(8LL
                        * ((*(_WORD *)(a2 + 16) & 0x7FFF) - ((unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) == 0) - 1))
                        + 8LL * ((*(_BYTE *)(a2 + 19) & 0x40) == 0)
                        + 32
                        + a2);
  v5 = &v3[*(_WORD *)(a2 + 16) & 0x7FFF];
  if ( v3 != v5 )
  {
    while ( 1 )
    {
      v10 = *v3;
      if ( *v4 )
      {
        v11 = *(_QWORD *)a1;
        v33 = _mm_unpacklo_epi64(_mm_loadl_epi64(*v4), (__m128i)(unsigned __int64)&(*v4)->m128i_u64[1]);
        v12 = sub_7214D0(v33.m128i_i64);
        v16 = _mm_load_si128(&v33);
        v35 = v12;
        v36 = v16;
        v17 = v16.m128i_i64[0];
        si128 = (__int128)_mm_load_si128((const __m128i *)&v35);
        v34 = v16;
        v19 = (__int128)_mm_load_si128((const __m128i *)&v36.m128i_u64[1]);
        v40 = v37;
        v38 = si128;
        v39 = v19;
        if ( v17 )
        {
          sub_7DE380(a1, v11 + 24, v17, v13, v14, v15, si128, v19, v37);
          v20 = (const __m128i *)&v41;
          v21 = sub_7214D0(v34.m128i_i64);
          v24 = _mm_load_si128(&v34);
          v25 = *(unsigned int *)(a1 + 20);
          v41 = v21;
          v26 = *(unsigned int *)(a1 + 16);
          v27 = *(_QWORD *)(a1 + 8);
          v42 = v24;
          v28 = v26 + 1;
          if ( v25 < v26 + 1 )
          {
            if ( (unsigned __int64)&v41 < v27 || (unsigned __int64)&v41 >= v27 + 40 * v26 )
            {
              sub_25D6060(a1 + 8, a1 + 24, v28, 40);
              v27 = *(_QWORD *)(a1 + 8);
              v26 = *(unsigned int *)(a1 + 16);
            }
            else
            {
              v29 = (char *)&v41 - v27;
              sub_25D6060(a1 + 8, a1 + 24, v28, 40);
              v27 = *(_QWORD *)(a1 + 8);
              v26 = *(unsigned int *)(a1 + 16);
              v20 = (const __m128i *)&v29[v27];
            }
          }
          v6 = (__m128i *)(v27 + 40 * v26);
          *v6 = _mm_loadu_si128(v20);
          v7 = v33.m128i_i64[0];
          v6[1] = _mm_loadu_si128(v20 + 1);
          v6[2].m128i_i64[0] = v20[2].m128i_i64[0];
          v8 = v33.m128i_i64[1];
          ++*(_DWORD *)(a1 + 16);
          v9 = sub_7EE840((__int64 *)a1, v7, v8, v25, v22, v23);
          --*(_DWORD *)(a1 + 16);
          if ( !v9 )
            break;
        }
      }
      if ( !(unsigned __int8)sub_7E3C00((__int64 *)a1, v10, a3) )
        break;
      ++v3;
      ++v4;
      if ( v5 == v3 )
        return 1;
    }
    return 0;
  }
  return 1;
}

