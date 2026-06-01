__int64 __fastcall sub_14180A0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __m128i *v9; // rcx
  const __m128i *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  const __m128i *v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __m128i *v17; // rax
  char *v18; // rsi
  __int64 v19; // r8
  char *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int8 *v31; // r15
  __int64 v32; // rax
  _QWORD v33[2]; // [rsp+0h] [rbp-58h] BYREF
  int v34; // [rsp+10h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 1120);
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 2912);
    v5 = *(_QWORD *)(a1 + 2944) + a2 - v4;
    if ( v5 )
      goto LABEL_5;
    v18 = *(char **)(a1 + 1176);
    goto LABEL_11;
  }
  v3 = *(_QWORD *)(a1 + 1144);
  if ( !v3 && *(_QWORD *)(a1 + 1176) != *(_QWORD *)(a1 + 1168) )
  {
    sub_1436710(a1);
    v4 = *(unsigned int *)(a1 + 2912);
    v5 = *(_QWORD *)(a1 + 2944) + a2 - v4;
    if ( !v5 )
    {
LABEL_10:
      v3 = *(_QWORD *)(a1 + 1120);
      v18 = *(char **)(a1 + 1176);
      if ( v3 )
        goto LABEL_11;
      v3 = *(_QWORD *)(a1 + 1144);
      goto LABEL_28;
    }
    while ( 1 )
    {
LABEL_5:
      v6 = *(_QWORD *)(a1 + 2904);
      v7 = *(unsigned int *)(a1 + 2916);
      v8 = v4 + 1;
      v33[0] = 0;
      v9 = (__m128i *)(v6 + 24 * v4);
      v34 = 0;
      v10 = (const __m128i *)v33;
      v33[1] = 0;
      if ( v8 <= v7 )
        goto LABEL_6;
      v26 = a1 + 2920;
      if ( v6 > (unsigned __int64)v33 )
      {
        v27 = a1 + 2904;
      }
      else
      {
        v27 = a1 + 2904;
        if ( v9 > (__m128i *)v33 )
        {
          sub_2237220(v27, v26, v8, 24);
          v28 = *(_QWORD *)(a1 + 2904);
          v10 = (const __m128i *)((char *)v33 + v28 - v6);
          v9 = (__m128i *)(v28 + 24LL * *(unsigned int *)(a1 + 2912));
          goto LABEL_6;
        }
      }
      sub_2237220(v27, v26, v8, 24);
      v9 = (__m128i *)(*(_QWORD *)(a1 + 2904) + 24LL * *(unsigned int *)(a1 + 2912));
      v10 = (const __m128i *)v33;
LABEL_6:
      *v9 = _mm_loadu_si128(v10);
      v9[1].m128i_i64[0] = v10[1].m128i_i64[0];
      v11 = (unsigned int)(*(_DWORD *)(a1 + 2912) + 1);
      *(_DWORD *)(a1 + 2912) = v11;
      sub_14634E0(a1, *(_QWORD *)(a1 + 2904) + 24 * v11 - 24);
      v12 = *(_QWORD *)(a1 + 2984);
      if ( *(_QWORD *)(a1 + 2976) != v12 )
      {
        v13 = *(_QWORD *)(v12 - 48);
        v14 = (const __m128i *)(*(_QWORD *)(a1 + 2904) + 24LL * *(unsigned int *)(a1 + 2912) - 24);
        v15 = *(unsigned int *)(v12 - 40);
        v16 = v15 + 1;
        v17 = (__m128i *)(v13 + 24 * v15);
        if ( v16 > *(unsigned int *)(v12 - 36) )
        {
          v29 = v12 - 48;
          v30 = v12 - 32;
          if ( v13 > (unsigned __int64)v14 || v17 <= v14 )
          {
            sub_2237220(v29, v30, v16, 24);
            v17 = (__m128i *)(*(_QWORD *)(v12 - 48) + 24LL * *(unsigned int *)(v12 - 40));
          }
          else
          {
            v31 = &v14->m128i_i8[-v13];
            sub_2237220(v29, v30, v16, 24);
            v32 = *(_QWORD *)(v12 - 48);
            v14 = (const __m128i *)&v31[v32];
            v17 = (__m128i *)(v32 + 24LL * *(unsigned int *)(v12 - 40));
          }
        }
        *v17 = _mm_loadu_si128(v14);
        v17[1].m128i_i64[0] = v14[1].m128i_i64[0];
        ++*(_DWORD *)(v12 - 40);
      }
      if ( !--v5 )
        goto LABEL_10;
      v4 = *(unsigned int *)(a1 + 2912);
    }
  }
  v4 = *(unsigned int *)(a1 + 2912);
  v5 = *(_QWORD *)(a1 + 2944) + a2 - v4;
  if ( v5 )
    goto LABEL_5;
  v18 = *(char **)(a1 + 1176);
LABEL_28:
  if ( v3 )
  {
    v3 = 0;
    if ( *(char **)(a1 + 1184) != v18 )
      goto LABEL_12;
LABEL_30:
    sub_1417C50(
      a1 + 1168,
      v18,
      (_QWORD *)(a1 + 1152),
      (_QWORD *)(a1 + 1160),
      (_QWORD *)(a1 + 1112),
      (_QWORD *)(a1 + 1120),
      (__int64 *)(a1 + 1144),
      (__int64 *)(a1 + 1128));
    goto LABEL_13;
  }
  if ( *(char **)(a1 + 1168) != v18 )
    return *(_QWORD *)(a1 + 2904) + 24LL * *(unsigned int *)(a1 + 2912) - 24;
LABEL_11:
  if ( *(char **)(a1 + 1184) == v18 )
    goto LABEL_30;
LABEL_12:
  v19 = *(_QWORD *)(a1 + 1152);
  v20 = v18 + 56;
  v21 = *(_QWORD *)(a1 + 1128);
  v22 = *(_QWORD *)(a1 + 1136);
  *((_QWORD *)v20 - 6) = *(_QWORD *)(a1 + 1160);
  v23 = *(_QWORD *)(a1 + 1112);
  *((_QWORD *)v20 - 7) = v19;
  *(_QWORD *)(a1 + 1112) = 0;
  *((_QWORD *)v20 - 4) = v3;
  v24 = *(_QWORD *)(a1 + 1144);
  *((_QWORD *)v20 - 5) = v23;
  *(_QWORD *)(a1 + 1144) = 0;
  *((_QWORD *)v20 - 3) = v24;
  *((_QWORD *)v20 - 2) = v21;
  *((_QWORD *)v20 - 1) = v22;
  *(_QWORD *)(a1 + 1176) = v20;
LABEL_13:
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1152) = sub_1418450;
  return *(_QWORD *)(a1 + 2904) + 24LL * *(unsigned int *)(a1 + 2912) - 24;
}
