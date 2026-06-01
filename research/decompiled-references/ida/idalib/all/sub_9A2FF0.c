unsigned __int64 *__fastcall sub_9A2FF0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  int v9; // r14d
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int32 v20; // eax
  __int64 v21; // rdi
  unsigned int v22; // edx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  __m128 *v26; // rax
  unsigned __int64 *v27; // rdx
  unsigned __int64 v28; // rax
  unsigned int v30; // esi
  int v31; // eax
  __int64 *v32; // rax
  int v33; // eax
  int v34; // r9d
  _WORD *v35; // r8
  unsigned __int64 v36; // [rsp+8h] [rbp-50h] BYREF
  __int64 v37; // [rsp+10h] [rbp-48h] BYREF
  int v38; // [rsp+18h] [rbp-40h]
  int v39; // [rsp+1Ch] [rbp-3Ch]

  v6 = 0;
  v7 = a2;
  v9 = *(unsigned __int16 *)(a2 + 24);
  if ( *(_WORD *)(a2 + 24) )
  {
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v7 + 8 * v6 + 48);
        if ( sub_F63270(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          if ( (*(_BYTE *)(v10 + 1) & 6) == 0 )
            break;
        }
        if ( v9 == (_DWORD)++v6 )
          goto LABEL_7;
      }
      v11 = a1->m128i_i64[1];
      v39 = v6;
      v37 = v7;
      ++v6;
      v38 = 7;
      a2 = sub_9A94C0(v11 + 32, &v37, 0);
      sub_99C950((__int64)a1, a2, v10, v12, v13, v14);
    }
    while ( v9 != (_DWORD)v6 );
  }
LABEL_7:
  v15 = a1[1].m128i_i64[0];
  if ( !v15 )
  {
    v15 = sub_999AE0((__int64)a1, a2, a3, a4, a5, a6);
    a1[1].m128i_i64[0] = v15;
  }
  if ( (unsigned __int8)sub_99C080(a1, (_WORD *)v7) )
  {
    v19 = a1[22].m128i_i64[0];
    if ( v19 )
      *(_QWORD *)(v19 + 8) = v15;
  }
  if ( !*(_BYTE *)(a1[20].m128i_i64[1] + 68) )
    goto LABEL_22;
  v20 = a1[19].m128i_i32[2];
  v21 = a1[18].m128i_i64[1];
  if ( !v20 )
    goto LABEL_22;
  v16 = (unsigned int)(v20 - 1);
  v22 = v16 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v23 = (_QWORD *)(v21 + 16LL * v22);
  if ( v7 == *v23 )
  {
    if ( !v23[1] )
      goto LABEL_22;
  }
  else
  {
    if ( *v23 == -4096 )
      goto LABEL_22;
    v30 = v16 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v31 = 1;
    while ( 1 )
    {
      v18 = (unsigned int)(v31 + 1);
      v30 = v16 & (v31 + v30);
      v32 = (__int64 *)(v21 + 16LL * v30);
      v17 = *v32;
      if ( v7 == *v32 )
        break;
      v31 = v18;
      if ( v17 == -4096 )
        goto LABEL_22;
    }
    if ( !v32[1] )
      goto LABEL_22;
    v33 = 1;
    while ( 1 )
    {
      v34 = v33 + 1;
      v22 = v16 & (v33 + v22);
      v23 = (_QWORD *)(v21 + 16LL * v22);
      v35 = (_WORD *)*v23;
      if ( v7 == *v23 )
        break;
      v33 = v34;
      if ( v35 == (_WORD *)-4096LL )
        goto LABEL_17;
    }
  }
  *v23 = -8192;
  --a1[19].m128i_i32[0];
  ++a1[19].m128i_i32[1];
LABEL_17:
  v24 = sub_9A9530(a1->m128i_i64[1] + 32);
  v16 = v7 & 0xFFFFFFFFFFFFFFFCLL;
  v36 = v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v24 )
  {
    v25 = v24 | 2;
    v26 = *(__m128 **)(v15 + 8);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(v15 + 16) )
    {
      sub_999590((const __m128i **)v15, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v16, v17, v18);
      v26 = *(__m128 **)(v15 + 8);
    }
    v36 = v25;
    *v26 = _mm_loadh_ps((const double *)&v36);
    *(_QWORD *)(v15 + 8) += 16LL;
    return sub_9A21F0(a1, (__int16 *)v7);
  }
LABEL_22:
  v27 = *(unsigned __int64 **)(v15 + 8);
  v28 = v7 & 0xFFFFFFFFFFFFFFFCLL | 2;
  if ( (unsigned __int64)v27 >= *(_QWORD *)(v15 + 16) )
  {
    v36 = v7 & 0xFFFFFFFFFFFFFFFCLL | 2;
    sub_999590((const __m128i **)v15, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v16, v17, v18);
    v27 = *(unsigned __int64 **)(v15 + 8);
    v28 = v36;
  }
  *v27 = v28;
  v27[1] = 1;
  *(_QWORD *)(v15 + 8) += 16LL;
  return sub_9A21F0(a1, (__int16 *)v7);
}
