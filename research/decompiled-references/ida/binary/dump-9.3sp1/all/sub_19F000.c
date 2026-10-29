__int64 __fastcall sub_19F000(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  signed __int64 i; // rbx
  unsigned int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r15d
  int v13; // eax
  char *v14; // rdi
  char *v15; // rax
  __m128i *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r15
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // r13
  _QWORD *v31; // rax
  __m128i *v32; // rax
  __int64 v33; // r8
  __int64 *v34; // rdi
  __int64 v35; // rax
  signed __int64 v36; // rax
  int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 *v44; // rdx
  __int64 v45; // rax
  __int64 v47; // [rsp+18h] [rbp-F8h]
  __int64 v48; // [rsp+20h] [rbp-F0h]
  unsigned int v49; // [rsp+2Ch] [rbp-E4h]
  char v50[8]; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-D0h] BYREF
  char v52; // [rsp+48h] [rbp-C8h]
  __int64 v53; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v54; // [rsp+58h] [rbp-B8h]
  __int64 v55; // [rsp+70h] [rbp-A0h] BYREF
  __int128 v56; // [rsp+78h] [rbp-98h]
  __int64 (__fastcall **v57)(); // [rsp+90h] [rbp-80h] BYREF
  signed __int64 v58; // [rsp+98h] [rbp-78h]
  __m128i *v59; // [rsp+A0h] [rbp-70h]
  __m128i v60; // [rsp+A8h] [rbp-68h]
  __int64 v61; // [rsp+B8h] [rbp-58h]
  __int64 v62; // [rsp+C0h] [rbp-50h]
  unsigned int v63; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v64; // [rsp+D8h] [rbp-38h]

  v64 = __readfsqword(0x28u);
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
  v48 = v5;
  for ( i = v5; ; *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16) = i )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    v57 = nullptr;
    v58 = 0;
    cleanup_argloc();
    v58 = i;
    LODWORD(v57) = 1;
    v49 = sub_1F06C0(v3 + 54, &v57, v7, 0xFFFFFFFFLL);
    cleanup_argloc();
    if ( v49 == -1 )
    {
      v11 = i;
      v49 = sub_232C90(
              (_DWORD)v3,
              i,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 84LL),
              (unsigned int)*(_QWORD *)(a1 + 8) + 248,
              1,
              v3[5],
              4,
              0);
      if ( v49 != -1 )
        goto LABEL_17;
      if ( !under_debugger )
        sub_383060(51613);
      goto LABEL_64;
    }
    v9 = 13LL * (int)v49;
    v10 = v3[54] + 104LL * (int)v49;
    v11 = *(unsigned int *)(v10 + 88);
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    if ( *(_DWORD *)v10 == 1 && i == *(_QWORD *)(v10 + 8) && (int)v11 <= v12 )
      break;
    i = -v12 & (unsigned __int64)((int)sub_1C35C0(v10, v11) + (__int64)(v12 - 1));
  }
  v13 = *(_DWORD *)(v10 + 24);
  BYTE1(v13) &= 0x7Eu;
  *(_DWORD *)(v10 + 24) = v13 | 0x100000;
  v14 = (char *)v3[57];
  v15 = &v14[4 * v3[58]];
  if ( v14 != v15 )
  {
    while ( 1 )
    {
      v8 = v49;
      if ( v49 == *(_DWORD *)v14 )
        break;
      v14 += 4;
      if ( v15 == v14 )
        goto LABEL_17;
    }
    if ( v15 != v14 )
    {
      v11 = (__int64)(v14 + 4);
      memmove(v14, v14 + 4, v15 - v14 - 4);
      --v3[58];
    }
  }
LABEL_17:
  v16 = sub_D21A0((__int64)v3, v11, v9, v8);
  v17 = -1;
  v60 = 0u;
  v59 = v16;
  if ( i != v48 )
    v17 = v48;
  v61 = -1;
  v57 = &off_4DE360;
  v62 = v17;
  v18 = v16[4].m128i_i64[0];
  v63 = v49;
  v58 = v18;
  v19 = v16[3].m128i_i64[0];
  v53 = 0;
  v47 = -1;
  v54 = 0;
  if ( !v19 )
    goto LABEL_40;
  do
  {
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
    if ( *(_QWORD *)(v19 + 24) != v3[5] )
      break;
    v61 = -1;
    v60 = v20;
    sub_11F760((_BYTE *)v19, &v57);
    if ( v61 != -1 )
    {
      v21 = v54;
      if ( v47 != v61 )
      {
        v22 = v53;
        if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
        {
          v53 = qvector_reserve((__int64)&v53, v53, v54 + 1, 24);
          v21 = v54;
          v22 = v53;
        }
        v23 = v22 + 24 * v21;
        *(_QWORD *)v23 = 0;
        *(_OWORD *)(v23 + 8) = 0;
        v21 = v54 + 1;
        *(_QWORD *)&v54 = v54 + 1;
        v47 = v61;
      }
      v24 = (__int64 *)(v53 + 24 * v21 - 24);
      v25 = v24[1];
      v26 = *v24;
      if ( v24[2] < (unsigned __int64)(v25 + 1) )
      {
        v26 = qvector_reserve((__int64)v24, v26, v25 + 1, 8);
        *v24 = v26;
        v25 = v24[1];
      }
      *(_QWORD *)(v26 + 8 * v25) = v19;
      ++v24[1];
    }
    v19 = *(_QWORD *)(v19 + 8);
  }
  while ( v19 );
  if ( !(_QWORD)v54 )
  {
LABEL_40:
    if ( *(_QWORD *)(a1 + 72) == 1 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) = i;
      v36 = i;
      v37 = 0;
      v38 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
      *(_DWORD *)(a1 + 112) = (v36 - *(_QWORD *)(a1 + 104)) / v38;
      v39 = 0;
      if ( !(_QWORD)v54 )
        goto LABEL_54;
      goto LABEL_42;
    }
    if ( !under_debugger )
      sub_383060(51597);
LABEL_64:
    BUG();
  }
  if ( v48 != v47 )
  {
    if ( !under_debugger )
      sub_383060(51614);
    goto LABEL_64;
  }
  sub_32C270(v50, v3[188], *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL));
  v27 = 0;
  v55 = 0;
  v56 = 0;
  print_tinfo();
  v30 = nullptr;
  if ( (_QWORD)v54 )
  {
    v31 = (_QWORD *)(v53 + 24 * v54 - 24);
    v28 = v31[1];
    v30 = *(__int64 **)(*v31 + 8 * v28 - 8);
  }
  for ( ; i > v48; v29 = v48 )
  {
    v32 = sub_D21A0((__int64)v3, v27, v28, v29);
    v33 = v3[5];
    v51 = -1;
    v52 = 0;
    v30 = sub_19AC70((__int64)v32, (__int64)v30, &v51, v49, v33, 0xFFFFFFFF, v48, (__int64)v50, (__int64)&v55, 1);
    v34 = (__int64 *)(v53 + 24 * v54 - 24);
    v35 = v34[1];
    v27 = *v34;
    v28 = v35 + 1;
    if ( v34[2] < (unsigned __int64)(v35 + 1) )
    {
      v27 = qvector_reserve((__int64)v34, v27, v28, 8);
      *v34 = v27;
      v35 = v34[1];
    }
    *(_QWORD *)(v27 + 8 * v35) = v30;
    ++v34[1];
    v48 += *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  v37 = 0;
  clear_tinfo_t();
  v39 = 0;
  if ( !(_QWORD)v54 )
  {
LABEL_54:
    v42 = v53;
    if ( !v53 )
      return v49;
LABEL_49:
    *(_QWORD *)&v54 = 0;
    qfree(v42);
    return v49;
  }
  do
  {
LABEL_42:
    sub_19E940(a1, v53 + 24 * v39, 3 * v39, v38);
    ++v37;
    v40 = v54;
    v39 = v37;
  }
  while ( v37 < (unsigned __int64)v54 );
  v41 = v53;
  v42 = v53;
  if ( v53 )
  {
    if ( (_QWORD)v54 )
    {
      v43 = 0;
      do
      {
        v44 = (__int64 *)(v41 + 24 * v43);
        v45 = *v44;
        if ( *v44 )
        {
          v44[1] = 0;
          qfree(v45);
          v41 = v53;
        }
        ++v43;
        v42 = v41;
      }
      while ( v40 != v43 );
    }
    goto LABEL_49;
  }
  return v49;
}
