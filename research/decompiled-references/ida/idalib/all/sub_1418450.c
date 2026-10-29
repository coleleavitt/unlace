__int64 __fastcall sub_1418450(__int64 a1, __m128i *a2)
{
  unsigned __int64 v4; // rax
  const __m128i *v5; // rbp
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  const __m128i *v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __m128i *v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __m128i *v25; // rax
  char *v26; // rsi
  __int64 v27; // rcx
  char *v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int8 *v36; // r12
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int8 *v40; // rbp
  __int64 v41; // rax

  if ( *(_QWORD *)(a1 + 1120) )
    return 1;
  if ( !*(_QWORD *)(a1 + 1144) && *(_QWORD *)(a1 + 1176) != *(_QWORD *)(a1 + 1168) )
  {
    v4 = *(_QWORD *)(a1 + 2944);
    v5 = a2;
    if ( v4 >= *(unsigned int *)(a1 + 2912) )
    {
      sub_1436710(a1);
      sub_14634E0(a1, a2);
      if ( *(_QWORD *)(a1 + 2960) == *(_QWORD *)(a1 + 2952) )
      {
        if ( *(_QWORD *)(a1 + 2944) < (unsigned __int64)*(unsigned int *)(a1 + 2912) )
        {
          v26 = *(char **)(a1 + 1176);
          if ( v26 == *(char **)(a1 + 1184) )
          {
            sub_1417C50(
              a1 + 1168,
              v26,
              (_QWORD *)(a1 + 1152),
              (_QWORD *)(a1 + 1160),
              (_QWORD *)(a1 + 1112),
              (_QWORD *)(a1 + 1120),
              (__int64 *)(a1 + 1144),
              (__int64 *)(a1 + 1128));
          }
          else
          {
            v27 = *(_QWORD *)(a1 + 1120);
            v28 = v26 + 56;
            v29 = *(_QWORD *)(a1 + 1152);
            v30 = *(_QWORD *)(a1 + 1128);
            v31 = *(_QWORD *)(a1 + 1136);
            *((_QWORD *)v28 - 6) = *(_QWORD *)(a1 + 1160);
            *((_QWORD *)v28 - 7) = v29;
            v32 = *(_QWORD *)(a1 + 1112);
            *(_QWORD *)(a1 + 1112) = 0;
            *((_QWORD *)v28 - 4) = v27;
            v33 = *(_QWORD *)(a1 + 1144);
            *((_QWORD *)v28 - 5) = v32;
            *(_QWORD *)(a1 + 1144) = 0;
            *((_QWORD *)v28 - 3) = v33;
            *((_QWORD *)v28 - 2) = v30;
            *((_QWORD *)v28 - 1) = v31;
            *(_QWORD *)(a1 + 1176) = v28;
          }
          *(_QWORD *)(a1 + 1120) = 0;
          *(_QWORD *)(a1 + 1152) = sub_1418450;
        }
        else
        {
          *(_DWORD *)(a1 + 2912) = 0;
          *(_QWORD *)(a1 + 2944) = 0;
        }
      }
      else
      {
        v7 = *(char **)(a1 + 1176);
        if ( v7 == *(char **)(a1 + 1184) )
        {
          sub_1417C50(
            a1 + 1168,
            v7,
            (_QWORD *)(a1 + 1152),
            (_QWORD *)(a1 + 1160),
            (_QWORD *)(a1 + 1112),
            (_QWORD *)(a1 + 1120),
            (__int64 *)(a1 + 1144),
            (__int64 *)(a1 + 1128));
        }
        else
        {
          v8 = *(_QWORD *)(a1 + 1120);
          v9 = v7 + 56;
          v10 = *(_QWORD *)(a1 + 1152);
          v11 = *(_QWORD *)(a1 + 1128);
          v12 = *(_QWORD *)(a1 + 1136);
          *((_QWORD *)v9 - 6) = *(_QWORD *)(a1 + 1160);
          *((_QWORD *)v9 - 7) = v10;
          v13 = *(_QWORD *)(a1 + 1112);
          *(_QWORD *)(a1 + 1112) = 0;
          *((_QWORD *)v9 - 4) = v8;
          v14 = *(_QWORD *)(a1 + 1144);
          *((_QWORD *)v9 - 5) = v13;
          *(_QWORD *)(a1 + 1144) = 0;
          *((_QWORD *)v9 - 3) = v14;
          *((_QWORD *)v9 - 2) = v11;
          *((_QWORD *)v9 - 1) = v12;
          *(_QWORD *)(a1 + 1176) = v9;
        }
        v15 = v5;
        v16 = *(_QWORD *)(a1 + 2904);
        v17 = *(unsigned int *)(a1 + 2916);
        *(_QWORD *)(a1 + 1152) = sub_1418450;
        v18 = *(unsigned int *)(a1 + 2912);
        *(_QWORD *)(a1 + 1120) = 0;
        v19 = v18 + 1;
        v20 = (__m128i *)(v16 + 24 * v18);
        if ( v19 > v17 )
        {
          v34 = a1 + 2904;
          v35 = a1 + 2920;
          if ( v16 > (unsigned __int64)v5 || v20 <= v5 )
          {
            sub_2237220(v34, v35, v19, 24);
            v15 = v5;
            v20 = (__m128i *)(*(_QWORD *)(a1 + 2904) + 24LL * *(unsigned int *)(a1 + 2912));
          }
          else
          {
            v36 = &v5->m128i_i8[-v16];
            sub_2237220(v34, v35, v19, 24);
            v37 = *(_QWORD *)(a1 + 2904);
            v15 = (const __m128i *)&v36[v37];
            v20 = (__m128i *)(24LL * *(unsigned int *)(a1 + 2912) + v37);
          }
        }
        *v20 = _mm_loadu_si128(v15);
        v20[1].m128i_i64[0] = v15[1].m128i_i64[0];
        v21 = *(_QWORD *)(a1 + 2984);
        ++*(_DWORD *)(a1 + 2912);
        ++*(_QWORD *)(a1 + 2944);
        if ( v21 != *(_QWORD *)(a1 + 2976) )
        {
          v22 = *(unsigned int *)(v21 - 40);
          v23 = *(_QWORD *)(v21 - 48);
          v24 = v22 + 1;
          v25 = (__m128i *)(v23 + 24 * v22);
          if ( v24 > *(unsigned int *)(v21 - 36) )
          {
            v38 = v21 - 48;
            v39 = v21 - 32;
            if ( v23 > (unsigned __int64)v5 || v25 <= v5 )
            {
              sub_2237220(v38, v39, v24, 24);
              v25 = (__m128i *)(*(_QWORD *)(v21 - 48) + 24LL * *(unsigned int *)(v21 - 40));
            }
            else
            {
              v40 = &v5->m128i_i8[-v23];
              sub_2237220(v38, v39, v24, 24);
              v41 = *(_QWORD *)(v21 - 48);
              v5 = (const __m128i *)&v40[v41];
              v25 = (__m128i *)(24LL * *(unsigned int *)(v21 - 40) + v41);
            }
          }
          *v25 = _mm_loadu_si128(v5);
          v25[1].m128i_i64[0] = v5[1].m128i_i64[0];
          ++*(_DWORD *)(v21 - 40);
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 2944) = v4 + 1;
      v6 = *(_QWORD *)(a1 + 2904);
      *a2 = _mm_loadu_si128((const __m128i *)(v6 + 24 * v4));
      a2[1].m128i_i32[0] = *(_DWORD *)(v6 + 24 * v4 + 16);
      a2[1].m128i_i16[1] |= 0x800u;
    }
  }
  return 1;
}
