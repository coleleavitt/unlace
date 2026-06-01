unsigned __int64 *__fastcall sub_9A25F0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // r15
  __int64 i; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // r12
  __int32 v20; // eax
  __int64 v21; // rdi
  unsigned int v22; // edx
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  __m128 *v26; // rax
  int v28; // eax
  unsigned __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rsi
  _QWORD *v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned int v37; // esi
  __int64 *v38; // rax
  int v39; // eax
  int v40; // r9d
  __int64 v41; // r8
  unsigned __int64 v42; // [rsp+8h] [rbp-50h] BYREF
  __int64 v43; // [rsp+10h] [rbp-48h] BYREF
  int v44; // [rsp+18h] [rbp-40h]
  int v45; // [rsp+1Ch] [rbp-3Ch]

  v6 = a2;
  v8 = *(_DWORD *)(a2 + 32);
  if ( v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    for ( i = 0; ; i = v11 )
    {
      v12 = v6 + 40;
      if ( (*(_WORD *)v6 & 0x1FF) == 0x72 )
        v12 = v6 + 48;
      v13 = *(_QWORD *)(v12 + 8 * i);
      if ( !sub_F63270(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL)) || (*(_BYTE *)(v13 + 1) & 6) != 0 )
      {
        v11 = i + 1;
        if ( i == v9 )
          break;
      }
      else
      {
        v14 = a1->m128i_i64[1];
        v43 = v6;
        v44 = 7;
        v45 = i;
        a2 = sub_9A94C0(v14 + 32, &v43, 0);
        sub_99C950((__int64)a1, a2, v13, v15, v16, v17);
        v11 = i + 1;
        if ( i == v9 )
          break;
      }
    }
  }
  v18 = *(_QWORD *)(v6 + 16);
  if ( v18 && (unsigned __int8)sub_B74ED0(v18) )
  {
    v30 = sub_999B20((__int64)a1, a2, a3, a4, a5, a6);
    *(_BYTE *)(v30 + 104) |= 1u;
    v33 = a1->m128i_i64[1];
    v19 = v30;
    v34 = *(_QWORD *)(v33 + 8);
    v35 = (_QWORD *)(v33 + 32);
    v36 = a1[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFF9LL;
    if ( a1[1].m128i_i64[1] == v34 )
      v36 = 4;
    sub_999860(v30, v34, v36, v35, v31, v32);
    a1[1].m128i_i64[0] = v19;
  }
  else
  {
    v19 = a1[1].m128i_i64[0];
    if ( !v19 )
    {
      v19 = sub_999AE0((__int64)a1, a2, a3, a4, a5, a6);
      a1[1].m128i_i64[0] = v19;
    }
  }
  if ( !*(_BYTE *)(a1[20].m128i_i64[1] + 68) )
    goto LABEL_25;
  v20 = a1[19].m128i_i32[2];
  v21 = a1[18].m128i_i64[1];
  if ( !v20 )
    goto LABEL_25;
  a4 = (unsigned int)(v20 - 1);
  v22 = a4 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
  v23 = (__int64 *)(v21 + 16LL * v22);
  if ( v6 == *v23 )
  {
    if ( !v23[1] )
      goto LABEL_25;
  }
  else
  {
    if ( *v23 == -4096 )
      goto LABEL_25;
    v37 = a4 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
    v28 = 1;
    while ( 1 )
    {
      a6 = (unsigned int)(v28 + 1);
      v37 = a4 & (v28 + v37);
      v38 = (__int64 *)(v21 + 16LL * v37);
      a5 = *v38;
      if ( v6 == *v38 )
        break;
      v28 = a6;
      if ( a5 == -4096 )
        goto LABEL_25;
    }
    if ( !v38[1] )
      goto LABEL_25;
    v39 = 1;
    while ( 1 )
    {
      v40 = v39 + 1;
      v22 = a4 & (v39 + v22);
      v23 = (__int64 *)(v21 + 16LL * v22);
      v41 = *v23;
      if ( v6 == *v23 )
        break;
      v39 = v40;
      if ( v41 == -4096 )
        goto LABEL_19;
    }
  }
  *v23 = -8192;
  --a1[19].m128i_i32[0];
  ++a1[19].m128i_i32[1];
LABEL_19:
  v24 = sub_9A9530(a1->m128i_i64[1] + 32);
  v19 = a1[1].m128i_i64[0];
  if ( v24 )
  {
    v25 = v24 | 1;
    v42 = v6 & 0xFFFFFFFFFFFFFFFCLL | 3;
    v26 = *(__m128 **)(v19 + 8);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(v19 + 16) )
    {
      sub_999590((const __m128i **)v19, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, a4, a5, a6);
      v26 = *(__m128 **)(v19 + 8);
    }
    v42 = v25;
    *v26 = _mm_loadh_ps((const double *)&v42);
    *(_QWORD *)(v19 + 8) += 16LL;
    return sub_9A21F0(a1, (__int16 *)v6);
  }
LABEL_25:
  v29 = *(unsigned __int64 **)(v19 + 8);
  if ( (unsigned __int64)v29 >= *(_QWORD *)(v19 + 16) )
  {
    sub_999590((const __m128i **)v19, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, a4, a5, a6);
    v29 = *(unsigned __int64 **)(v19 + 8);
  }
  *v29 = v6 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v29[1] = 1;
  *(_QWORD *)(v19 + 8) += 16LL;
  return sub_9A21F0(a1, (__int16 *)v6);
}
