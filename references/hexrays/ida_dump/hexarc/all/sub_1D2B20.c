__int64 __fastcall sub_1D2B20(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  signed __int64 v19; // rbx
  __m128i *v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  bool v24; // sf
  __m128i *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rdx
  __m128i *v29; // rax
  __int64 *v30; // rbp
  unsigned __int64 *v31; // r12
  _QWORD *v32; // r13
  char *v33; // rdi
  char *j; // r9
  char *v35; // rax
  unsigned __int64 v36; // rdx
  char *v37; // r10
  __int64 v38; // r11
  char *v39; // rbx
  unsigned __int64 v40; // rsi
  __m128i *v41; // rbp
  __int64 k; // rax
  __int64 v43; // rcx
  __m128i *v44; // rdx
  signed __int64 v45; // r10
  __int64 v46; // r15
  char *v47; // r8
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __m128i *v50; // rbx
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  __m128i *i; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // ebx
  __int64 v58; // rcx
  __int64 v59; // rdi
  signed __int64 v60; // [rsp+0h] [rbp-98h]
  signed __int64 v61; // [rsp+0h] [rbp-98h]
  char *v62; // [rsp+8h] [rbp-90h]
  char *v63; // [rsp+8h] [rbp-90h]
  __m128i *src; // [rsp+10h] [rbp-88h]
  __int64 v66; // [rsp+28h] [rbp-70h]
  __int64 v67; // [rsp+30h] [rbp-68h] BYREF
  __int128 v68; // [rsp+38h] [rbp-60h]
  __int128 v69; // [rsp+48h] [rbp-50h]
  unsigned __int64 v70; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL);
  v70 = __readfsqword(0x28u);
  if ( !v3 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    v66 = *(_QWORD *)(a1 + 64);
    if ( *(_BYTE *)(a1 + 136) )
    {
      v3 = *(int *)(v10 + 92);
      if ( !a3 )
        goto LABEL_20;
    }
    else if ( !a3 )
    {
      goto LABEL_20;
    }
    v7 = *(_QWORD *)(v66 + 112) - a3;
    goto LABEL_12;
  }
  if ( a3 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v66 = v6;
    v7 = *(_QWORD *)(v6 + 112) - a3;
    if ( *(_BYTE *)(a1 + 136) )
    {
      v3 = *(int *)(v6 + 92);
      if ( a3 <= 0 )
      {
LABEL_5:
        v8 = a3;
        goto LABEL_6;
      }
      goto LABEL_13;
    }
    v3 = 0;
LABEL_12:
    if ( a3 <= 0 )
      goto LABEL_5;
LABEL_13:
    *(_QWORD *)&v69 = 0;
    v68 = 0;
    v11 = *(__int64 **)v66;
    *((_QWORD *)&v68 + 1) = a3;
    if ( !v11 )
    {
      if ( !under_debugger )
        sub_37B760(52720);
      goto LABEL_87;
    }
    v7 += a3;
    v8 = a3;
    v12 = &v67;
    v67 = *v11;
    *((_QWORD *)&v69 + 1) = *(_QWORD *)(v66 + 56);
    goto LABEL_15;
  }
  v58 = v3;
  v3 = 0;
  sub_1CD990(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 128), *(_DWORD *)(*(_QWORD *)(a1 + 8) + 64LL), v58);
  v59 = *(_QWORD *)(a1 + 64);
  v66 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(a1 + 136) )
    v3 = *(int *)(v59 + 92);
LABEL_20:
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL) + sub_1C8C90(*(_QWORD *)(a1 + 8), a2);
  v7 = v3 + *(_QWORD *)(v66 + 112);
  v8 = v7 - v18;
  if ( v7 - v18 <= 0 )
  {
    v7 = v18;
    goto LABEL_6;
  }
  v67 = -1;
  v12 = nullptr;
  v68 = 0;
  v69 = 0;
LABEL_15:
  sub_1CDAA0(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 128), v8, v12);
  sub_30F930(*(_QWORD *)(a1 + 8) + 184LL, v66 + 176);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL) += v8;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(int *)(a1 + 128);
  v15 = *(int *)(v13 + 64);
  if ( v14 < v15 )
  {
    while ( (unsigned int)v14 < (unsigned int)v15 )
    {
      v16 = (unsigned int)v14++;
      v17 = *(_QWORD *)(*(_QWORD *)(v13 + 528) + 8 * v16);
      *(_QWORD *)(v17 + 328) = *(_QWORD *)(v13 + 152);
      *(_QWORD *)(v17 + 520) = 0;
      v13 = *(_QWORD *)(a1 + 8);
      v15 = *(int *)(v13 + 64);
      if ( v14 >= v15 )
        goto LABEL_6;
    }
    if ( !under_debugger )
      sub_37B760(52719);
LABEL_87:
    BUG();
  }
LABEL_6:
  v9 = *(_QWORD *)(v66 + 304);
  if ( !v9 )
  {
    if ( !under_debugger )
      sub_37B760(52714);
    goto LABEL_87;
  }
  v19 = 16 * v9;
  v20 = (__m128i *)qalloc_or_throw(v19);
  src = v20;
  memcpy(v20, *(const void **)(v66 + 296), v19);
  v23 = v8 == 0;
  v24 = v8 < 0;
  v25 = &v20[(unsigned __int64)v19 / 0x10];
  v26 = v3 & -(__int64)((!v24 && !v23) & (unsigned __int8)(a3 == 0));
  v27 = *(_QWORD *)(a1 + 8);
  v28 = *(_QWORD *)(v27 + 136) - v7 + v26;
  v29 = v20;
  if ( &v20[(unsigned __int64)v19 / 0x10] == v20 )
    goto LABEL_66;
  if ( (v19 & 0x10) == 0 || (v20->m128i_i64[1] -= v28, v29 = v20 + 1, v25 != &v20[1]) )
  {
    do
    {
      v29->m128i_i64[1] -= v28;
      v29[1].m128i_i64[1] -= v28;
      v29 += 2;
    }
    while ( v25 != v29 );
  }
  v30 = (__int64 *)v20;
  if ( !*(_QWORD *)(a1 + 48) )
    goto LABEL_27;
  do
  {
    sub_1D1DE0(a1, v30, 1);
    v30 += 2;
  }
  while ( v25 != (__m128i *)v30 );
  if ( v19 >> 4 )
  {
    _BitScanReverse64(&v49, v19 >> 4);
    sub_1CCED0(v20, (unsigned __int64 *)v25, 2LL * (int)v49);
    if ( v19 > 256 )
    {
      v50 = v20 + 16;
      sub_1CC9B0(v20, v20 + 16);
      do
      {
        v51 = v50->m128i_i64[0];
        v52 = v50->m128i_i64[1];
        i = v50;
        if ( v50->m128i_i64[0] < (unsigned __int64)v50[-1].m128i_i64[0] )
        {
          for ( i = v50 - 1; ; --i )
          {
            i[1] = _mm_loadu_si128(i);
            if ( v51 >= i[-1].m128i_i64[0] )
              break;
          }
        }
        ++v50;
        i->m128i_i64[0] = v51;
        i->m128i_i64[1] = v52;
      }
      while ( v25 != v50 );
      goto LABEL_27;
    }
  }
  else
  {
    sub_1CCED0(v20, (unsigned __int64 *)&v20[(unsigned __int64)v19 / 0x10], -2);
  }
  sub_1CC9B0(v20, v25);
LABEL_27:
  v31 = (unsigned __int64 *)v20;
  v32 = *(_QWORD **)(a1 + 8);
  v33 = (char *)v32[149];
  for ( j = v33; ; j = (char *)v32[149] )
  {
    v35 = (char *)sub_1CCC00(v33, (__int64)&j[16 * v32[150]], *v31);
    v39 = v35;
    if ( v35 == v37 )
      break;
    v40 = *(_QWORD *)v35;
    if ( *(_QWORD *)v35 < v36 )
    {
      if ( !under_debugger )
        sub_37B760(52715);
      goto LABEL_87;
    }
    if ( v36 == v40 )
    {
      memmove(v35, v35 + 16, v37 - v35 - 16);
      --v32[150];
      v40 = *(_QWORD *)v39;
    }
    v41 = (__m128i *)v31;
    for ( k = ((char *)v25 - (char *)v31) >> 4; k > 0; k = k - 1 - v43 )
    {
      while ( 1 )
      {
        v43 = k >> 1;
        v44 = &v41[k >> 1];
        if ( v44->m128i_i64[0] < v40 )
          break;
        k >>= 1;
        if ( v43 <= 0 )
          goto LABEL_36;
      }
      v41 = v44 + 1;
    }
LABEL_36:
    if ( v41 == v25 )
      goto LABEL_58;
    if ( v40 >= v41->m128i_i64[0] )
    {
      if ( !under_debugger )
        sub_37B760(52716);
      goto LABEL_87;
    }
    if ( v41 != src )
    {
LABEL_58:
      v54 = v41[-1].m128i_u64[0];
      if ( v40 < v54 )
      {
        if ( !under_debugger )
          sub_37B760(52717);
        goto LABEL_87;
      }
      if ( v54 == v40 )
      {
        if ( (unsigned __int8)sub_32B2E0(v66, v40) )
        {
          if ( !under_debugger )
            sub_37B760(52718);
          goto LABEL_87;
        }
        --v41;
      }
    }
    v45 = (char *)v41 - (char *)v31;
    v21 = ((char *)v41 - (char *)v31) >> 4;
    v22 = v21;
    if ( !v21 )
    {
      v31 = (unsigned __int64 *)v41;
      goto LABEL_46;
    }
    v22 = v32[149];
    v38 = v32[150];
    v46 = ((char *)v41 - (char *)v31) >> 4;
LABEL_41:
    v47 = &v39[-v22];
    if ( v32[151] < (unsigned __int64)(v46 + v38) )
    {
      v61 = v45;
      v63 = &v39[-v22];
      v55 = qvector_reserve(v32 + 149, v22, v46 + v38, 16);
      v47 = v63;
      v45 = v61;
      v32[149] = v55;
      v38 = v32[150];
      v39 = &v63[v55];
    }
    v62 = v47;
    v60 = v45;
    memmove(&v39[v45], v39, 16 * v38 - (_QWORD)v47);
    v48 = 0;
    v22 = v60;
    LODWORD(v21) = (_DWORD)v62;
    if ( v41 != (__m128i *)v31 )
    {
      do
      {
        *(__m128i *)&v39[v48] = _mm_loadu_si128((const __m128i *)&v31[v48 / 8]);
        v48 += 16LL;
      }
      while ( v48 != (char *)v41 - (char *)v31 );
    }
    v32[150] += v46;
    v31 = (unsigned __int64 *)v41;
    v39 = &v62[v32[149]];
LABEL_46:
    v33 = &v39[v22];
    if ( v25 == v41 )
      goto LABEL_65;
  }
  v45 = (char *)v25 - (char *)v31;
  v21 = ((char *)v25 - (char *)v31) >> 4;
  v46 = v21;
  if ( v21 )
  {
    v41 = v25;
    goto LABEL_41;
  }
LABEL_65:
  v27 = *(_QWORD *)(a1 + 8);
LABEL_66:
  v56 = sub_3368C0(*(_QWORD *)(v27 + 1496), 1, v27, (int)v27 + 1192, v21, v22);
  if ( src )
    qfree(src);
  return v56;
}
