__int64 __fastcall sub_19F000(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  signed __int64 i; // rbx
  unsigned int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // r15d
  int v11; // eax
  char *v12; // rdi
  char *v13; // rax
  __m128i *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 *v25; // r13
  __m128i *v26; // rax
  __int64 v27; // r8
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  signed __int64 v31; // rax
  int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 *v38; // rdx
  __int64 v39; // rax
  __int64 v41; // [rsp+18h] [rbp-F8h]
  __int64 v42; // [rsp+20h] [rbp-F0h]
  unsigned int v43; // [rsp+2Ch] [rbp-E4h]
  __int64 v44; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-D0h] BYREF
  char v46; // [rsp+48h] [rbp-C8h]
  __int64 v47; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v48; // [rsp+58h] [rbp-B8h]
  __int64 v49; // [rsp+70h] [rbp-A0h] BYREF
  __int128 v50; // [rsp+78h] [rbp-98h]
  __int64 (__fastcall **v51)(); // [rsp+90h] [rbp-80h] BYREF
  signed __int64 v52; // [rsp+98h] [rbp-78h]
  __m128i *v53; // [rsp+A0h] [rbp-70h]
  __m128i v54; // [rsp+A8h] [rbp-68h]
  __int64 v55; // [rsp+B8h] [rbp-58h]
  __int64 v56; // [rsp+C0h] [rbp-50h]
  unsigned int v57; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v58; // [rsp+D8h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 72);
  if ( !v1 )
  {
    if ( !under_debugger )
      sub_383060(51596);
    goto LABEL_64;
  }
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 280LL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v1 - 16);
  v5 = 0;
  if ( v4 >= 0 )
    v5 = v4;
  v42 = v5;
  for ( i = v5; ; *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16) = i )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    v51 = nullptr;
    v52 = 0;
    cleanup_argloc(&v51);
    v52 = i;
    LODWORD(v51) = 1;
    v43 = sub_1F06C0(v3 + 54, &v51, v7, 0xFFFFFFFFLL);
    cleanup_argloc(&v51);
    if ( v43 == -1 )
    {
      v43 = sub_232C90(
              (_DWORD)v3,
              i,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 84LL),
              (unsigned int)*(_QWORD *)(a1 + 8) + 248,
              1,
              v3[5],
              4,
              0);
      if ( v43 != -1 )
        goto LABEL_17;
      if ( !under_debugger )
        sub_383060(51613);
      goto LABEL_64;
    }
    v8 = v3[54] + 104LL * (int)v43;
    v9 = *(unsigned int *)(v8 + 88);
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    if ( *(_DWORD *)v8 == 1 && i == *(_QWORD *)(v8 + 8) && (int)v9 <= v10 )
      break;
    i = -v10 & (unsigned __int64)((int)sub_1C35C0(v8, v9) + (__int64)(v10 - 1));
  }
  v11 = *(_DWORD *)(v8 + 24);
  BYTE1(v11) &= 0x7Eu;
  *(_DWORD *)(v8 + 24) = v11 | 0x100000;
  v12 = (char *)v3[57];
  v13 = &v12[4 * v3[58]];
  if ( v12 != v13 )
  {
    while ( v43 != *(_DWORD *)v12 )
    {
      v12 += 4;
      if ( v13 == v12 )
        goto LABEL_17;
    }
    if ( v13 != v12 )
    {
      memmove(v12, v12 + 4, v13 - v12 - 4);
      --v3[58];
    }
  }
LABEL_17:
  v14 = sub_D21A0((__int64)v3);
  v15 = -1;
  v54 = 0u;
  v53 = v14;
  if ( i != v42 )
    v15 = v42;
  v55 = -1;
  v51 = &off_4DE360;
  v56 = v15;
  v16 = v14[4].m128i_i64[0];
  v57 = v43;
  v52 = v16;
  v17 = v14[3].m128i_i64[0];
  v47 = 0;
  v41 = -1;
  v48 = 0;
  if ( !v17 )
    goto LABEL_40;
  do
  {
    v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
    if ( *(_QWORD *)(v17 + 24) != v3[5] )
      break;
    v55 = -1;
    v54 = v18;
    sub_11F760((_BYTE *)v17, &v51);
    if ( v55 != -1 )
    {
      v19 = v48;
      if ( v41 != v55 )
      {
        v20 = v47;
        if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
        {
          v47 = qvector_reserve(&v47, v47, v48 + 1, 24);
          v19 = v48;
          v20 = v47;
        }
        v21 = v20 + 24 * v19;
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        v19 = v48 + 1;
        *(_QWORD *)&v48 = v48 + 1;
        v41 = v55;
      }
      v22 = (__int64 *)(v47 + 24 * v19 - 24);
      v23 = v22[1];
      v24 = *v22;
      if ( v22[2] < (unsigned __int64)(v23 + 1) )
      {
        v24 = qvector_reserve(v22, v24, v23 + 1, 8);
        *v22 = v24;
        v23 = v22[1];
      }
      *(_QWORD *)(v24 + 8 * v23) = v17;
      ++v22[1];
    }
    v17 = *(_QWORD *)(v17 + 8);
  }
  while ( v17 );
  if ( !(_QWORD)v48 )
  {
LABEL_40:
    if ( *(_QWORD *)(a1 + 72) == 1 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) = i;
      v31 = i;
      v32 = 0;
      *(_DWORD *)(a1 + 112) = (v31 - *(_QWORD *)(a1 + 104)) / *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
      v33 = 0;
      if ( !(_QWORD)v48 )
        goto LABEL_54;
      goto LABEL_42;
    }
    if ( !under_debugger )
      sub_383060(51597);
LABEL_64:
    BUG();
  }
  if ( v42 != v41 )
  {
    if ( !under_debugger )
      sub_383060(51614);
    goto LABEL_64;
  }
  sub_32C270(&v44, v3[188], *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL));
  v49 = 0;
  v50 = 0;
  print_tinfo(&v49, 0, 0, 0, 0, &v44, 0, 0);
  v25 = nullptr;
  if ( (_QWORD)v48 )
    v25 = *(__int64 **)(*(_QWORD *)(v47 + 24 * v48 - 24) + 8LL * *(_QWORD *)(v47 + 24 * v48 - 24 + 8) - 8);
  for ( ; i > v42; v42 += *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) )
  {
    v26 = sub_D21A0((__int64)v3);
    v27 = v3[5];
    v45 = -1;
    v46 = 0;
    v25 = sub_19AC70((__int64)v26, (__int64)v25, &v45, v43, v27, 0xFFFFFFFF, v42, &v44, (__int64)&v49, 1);
    v28 = (__int64 *)(v47 + 24 * v48 - 24);
    v29 = v28[1];
    v30 = *v28;
    if ( v28[2] < (unsigned __int64)(v29 + 1) )
    {
      v30 = qvector_reserve(v28, v30, v29 + 1, 8);
      *v28 = v30;
      v29 = v28[1];
    }
    *(_QWORD *)(v30 + 8 * v29) = v25;
    ++v28[1];
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  v32 = 0;
  clear_tinfo_t(&v44);
  v33 = 0;
  if ( !(_QWORD)v48 )
  {
LABEL_54:
    v36 = v47;
    if ( !v47 )
      return v43;
LABEL_49:
    *(_QWORD *)&v48 = 0;
    qfree(v36);
    return v43;
  }
  do
  {
LABEL_42:
    sub_19E940(a1, (_QWORD *)(v47 + 24 * v33));
    ++v32;
    v34 = v48;
    v33 = v32;
  }
  while ( v32 < (unsigned __int64)v48 );
  v35 = v47;
  v36 = v47;
  if ( v47 )
  {
    if ( (_QWORD)v48 )
    {
      v37 = 0;
      do
      {
        v38 = (__int64 *)(v35 + 24 * v37);
        v39 = *v38;
        if ( *v38 )
        {
          v38[1] = 0;
          qfree(v39);
          v35 = v47;
        }
        ++v37;
        v36 = v35;
      }
      while ( v34 != v37 );
    }
    goto LABEL_49;
  }
  return v43;
}
