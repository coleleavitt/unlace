__int64 __fastcall sub_1A7C20(__m128i *a1, __int64 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int32 v20; // edx
  unsigned __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rax
  int *v24; // r12
  int v25; // eax
  _DWORD *v26; // rdx
  __int64 v27; // rsi
  int v28; // ecx
  __int64 v29; // rbp
  unsigned __int64 v30; // r15
  __int64 v31; // r13
  int v32; // r12d
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // r12
  _QWORD *v39; // rax
  __int64 *v40; // r15
  unsigned __int64 v41; // r13
  __int64 *v42; // r15
  int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rsi
  int v46; // eax
  __int64 v47; // rdx
  __int64 *v48; // rax
  unsigned __int64 v49; // rdx
  int v50; // eax
  unsigned __int8 *v51; // rdi
  __int64 v52; // rax
  __int64 *v53; // rdi
  __int64 v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rsi
  bool v61; // cf
  __int64 v62; // rax
  __int64 v63; // rax
  const __m128i *v64; // rdi
  __int64 v65; // rcx
  __int64 *v66; // rsi
  __int64 v67; // rbx
  const __m128i *v68; // rdx
  __int64 v69; // rcx
  __m128i v70; // xmm0
  __m128i v71; // [rsp+8h] [rbp-A0h] BYREF
  __int64 *p_tinfo_property; // [rsp+18h] [rbp-90h]
  char v73; // [rsp+2Fh] [rbp-79h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v75; // [rsp+38h] [rbp-70h]
  __int64 v76; // [rsp+40h] [rbp-68h]
  __int64 v77; // [rsp+48h] [rbp-60h]
  __int64 v78; // [rsp+50h] [rbp-58h]
  int v79; // [rsp+58h] [rbp-50h]
  unsigned __int64 v80; // [rsp+68h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  v4 = a1[6].m128i_i64[0];
  if ( v4 )
  {
    v5 = *(_QWORD **)v4;
    v6 = a1[2].m128i_i64[0];
    v7 = *(_QWORD *)v4 + 8LL * *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)v4 != v7 )
    {
      while ( v6 != *v5 )
      {
        if ( (_QWORD *)v7 == ++v5 )
          goto LABEL_9;
      }
      if ( (_QWORD *)v7 != v5 )
        goto LABEL_7;
    }
LABEL_9:
    v9 = *(_QWORD **)(v4 + 56);
    v10 = &v9[*(_QWORD *)(v4 + 64)];
    if ( v9 != v10 )
    {
      while ( v6 != *v9 )
      {
        if ( v10 == ++v9 )
          goto LABEL_14;
      }
      if ( v9 != v10 )
      {
LABEL_7:
        a1[2].m128i_i8[8] = 1;
        return 0;
      }
    }
  }
LABEL_14:
  if ( *(_BYTE *)a2 == 4 )
  {
    v26 = *(_DWORD **)(a2 + 8);
    v27 = a1[1].m128i_i64[1];
    v28 = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
    tinfo_property = *(_QWORD *)(a1->m128i_i64[1] + 1504);
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v79 = v28;
    if ( !(unsigned __int8)sub_19AB60((__int64)&tinfo_property, v27, v26) )
      return 0;
    v29 = v77;
    if ( !v77 )
      sub_191740();
    v30 = v75;
    if ( !v75 )
    {
      if ( !under_debugger )
        sub_37EEE0(51647);
      BUG();
    }
    v31 = v78;
    v32 = v79;
    v71.m128i_i64[1] = tinfo_property;
    v71.m128i_i64[0] = v76;
    v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v77 + 8) + 8LL) + 8LL);
    if ( v78 && *(_BYTE *)v78 == 2 )
      v33 += sub_326890(*(_QWORD *)(*(_QWORD *)(v78 + 8) + 16LL), *(unsigned int *)(v78 + 4), 1);
    if ( a1[10].m128i_i64[0] > v33 || !(unsigned __int8)sub_1A76E0(a1, v29, 0, 0) )
      return 0;
    v34 = a1[7].m128i_i64[0];
    if ( a1[7].m128i_i64[1] < (unsigned __int64)(v34 + 1) )
    {
      p_tinfo_property = (__int64 *)a1[7].m128i_i64[1];
      v63 = qvector_reserve(&a1[6].m128i_u64[1], 0, v34 + 1, 48);
      v64 = (const __m128i *)a1[6].m128i_i64[1];
      v65 = a1[7].m128i_i64[0];
      v66 = (__int64 *)a1[7].m128i_i64[1];
      v67 = v63;
      a1[7].m128i_i64[1] = (__int64)p_tinfo_property;
      v68 = v64;
      v69 = v65 - 1;
      if ( v69 >= 0 )
      {
        do
        {
          v70 = _mm_loadu_si128(v68);
          v63 += 48;
          v68 += 3;
          *(__m128i *)(v63 - 48) = v70;
          *(__m128i *)(v63 - 32) = _mm_loadu_si128(v68 - 2);
          *(__m128i *)(v63 - 16) = _mm_loadu_si128(v68 - 1);
          v61 = v69-- == 0;
        }
        while ( !v61 );
        v64 = (const __m128i *)a1[6].m128i_i64[1];
      }
      p_tinfo_property = v66;
      qfree(v64);
      a1[6].m128i_i64[1] = v67;
      v34 = a1[7].m128i_i64[0];
      a1[7].m128i_i64[1] = (__int64)v66;
    }
    v35 = a1[6].m128i_i64[1] + 48 * v34;
    v36 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v71.m128i_u64[1]), (__m128i)v30);
    *(_QWORD *)(v35 + 32) = v31;
    *(__m128i *)v35 = v36;
    v37 = _mm_loadl_epi64(&v71);
    *(_DWORD *)(v35 + 40) = v32;
    *(__m128i *)(v35 + 16) = _mm_unpacklo_epi64(v37, (__m128i)(unsigned __int64)v29);
    ++a1[7].m128i_i64[0];
    goto LABEL_7;
  }
  if ( *(_BYTE *)a2 != 8 )
  {
    sub_1A76E0(a1, a2, 0, 0);
    return 0;
  }
  v11 = sub_CCFA0(*(_QWORD **)(a2 + 8), *(_QWORD *)(a1->m128i_i64[1] + 1496), &v73);
  v12 = v11;
  if ( !v11 || *(_BYTE *)v11 != 10 || !v73 )
    goto LABEL_19;
  v38 = *(_QWORD *)(v11 + 8);
  v39 = (_QWORD *)a1[3].m128i_i64[0];
  if ( !v39 )
    goto LABEL_53;
  v40 = &qword_18;
  v41 = *v39 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v41 )
  {
LABEL_64:
    sub_1A76E0(a1, v40[1], v40[1], 1);
    goto LABEL_19;
  }
  if ( (*(_BYTE *)v41 & 2) != 0 )
    goto LABEL_53;
  v71.m128i_i64[1] = (__int64)&tinfo_property;
  while ( 1 )
  {
    v45 = *(_QWORD *)(v41 + 24);
    v40 = (__int64 *)(v41 + 24);
    if ( *(_DWORD *)(v38 + 4) == -1 || *(_DWORD *)(v45 + 4) == -1 )
    {
      sub_120000(v71.m128i_i64[1], (unsigned __int8 *)v45);
      HIDWORD(tinfo_property) = *(_DWORD *)(v38 + 4);
      v71.m128i_i32[0] = sub_11A000((unsigned __int8 *)v38, (unsigned __int8 *)v71.m128i_i64[1]);
      sub_119360(v71.m128i_i64[1]);
      v46 = v71.m128i_i32[0];
    }
    else
    {
      v46 = sub_11A000((unsigned __int8 *)v38, (unsigned __int8 *)v45);
    }
    if ( v46 >= 0 )
      break;
    v41 = *(_QWORD *)(v41 + 8);
LABEL_71:
    if ( (*(_BYTE *)v41 & 2) != 0 )
      goto LABEL_72;
  }
  if ( *(_DWORD *)(*v40 + 4) == -1 || *(_DWORD *)(v38 + 4) == -1 )
  {
    v71.m128i_i64[0] = (__int64)&tinfo_property;
    sub_120000((__int64)&tinfo_property, (unsigned __int8 *)v38);
    v51 = (unsigned __int8 *)*v40;
    HIDWORD(tinfo_property) = *(_DWORD *)(*v40 + 4);
    LODWORD(p_tinfo_property) = sub_11A000(v51, (unsigned __int8 *)&tinfo_property);
    sub_119360((__int64)&tinfo_property);
    v50 = (int)p_tinfo_property;
  }
  else
  {
    v50 = sub_11A000((unsigned __int8 *)*v40, (unsigned __int8 *)v38);
  }
  if ( v50 < 0 )
  {
    v41 = *(_QWORD *)(v41 + 16);
    goto LABEL_71;
  }
  if ( a1[3].m128i_i64[0] != v41 )
    goto LABEL_64;
LABEL_72:
  v38 = *(_QWORD *)(v12 + 8);
LABEL_53:
  v42 = (__int64 *)a1[4].m128i_i64[0];
  for ( v71.m128i_i64[1] = (__int64)&v42[a1[4].m128i_i64[1]]; (__int64 *)v71.m128i_i64[1] != v42; ++v42 )
  {
    v44 = *v42;
    if ( *(_DWORD *)(v38 + 4) == -1 || *(_DWORD *)(v44 + 4) == -1 )
    {
      sub_120000((__int64)&tinfo_property, (unsigned __int8 *)v44);
      HIDWORD(tinfo_property) = *(_DWORD *)(v38 + 4);
      v71.m128i_i32[0] = sub_11A000((unsigned __int8 *)v38, (unsigned __int8 *)&tinfo_property);
      sub_119360((__int64)&tinfo_property);
      v43 = v71.m128i_i32[0];
    }
    else
    {
      v43 = sub_11A000((unsigned __int8 *)v38, (unsigned __int8 *)v44);
    }
    if ( !v43 )
      break;
  }
  v47 = a1[4].m128i_i64[1];
  v48 = (__int64 *)(a1[4].m128i_i64[0] + 8 * v47);
  if ( v48 == v42 )
  {
    v49 = v47 + 1;
    if ( a1[5].m128i_i64[0] < v49 )
    {
      v71.m128i_i64[0] = a1[5].m128i_i64[0];
      v52 = qvector_reserve(&a1[4], 0, v49, 8);
      v53 = (__int64 *)a1[4].m128i_i64[0];
      v54 = v52;
      v55 = v52;
      v56 = a1[4].m128i_i64[1];
      v57 = a1[5].m128i_i64[0];
      v58 = v53;
      a1[5].m128i_i64[0] = v71.m128i_i64[0];
      v59 = v56 - 1;
      if ( v59 >= 0 )
      {
        do
        {
          v60 = *v58;
          v55 += 8;
          ++v58;
          *(_QWORD *)(v55 - 8) = v60;
          v61 = v59-- == 0;
        }
        while ( !v61 );
        v53 = (__int64 *)a1[4].m128i_i64[0];
      }
      qfree(v53);
      v62 = a1[4].m128i_i64[1];
      a1[4].m128i_i64[0] = v54;
      a1[5].m128i_i64[0] = v57;
      v48 = (__int64 *)(v54 + 8 * v62);
    }
    *v48 = v38;
    ++a1[4].m128i_i64[1];
  }
LABEL_19:
  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_DWORD *)(v13 + 32) - 1;
  if ( v14 < 0 )
    return 0;
  v15 = 80LL * (unsigned int)v14;
  while ( 2 )
  {
    v16 = v15 + *(_QWORD *)(v13 + 24);
    if ( *(_BYTE *)v16 != 4
      || (v24 = *(int **)(v16 + 8), v25 = *v24, v17 = (__int64)(v24 + 8), (unsigned int)(v25 - 8) > 1) )
    {
      v17 = v16;
    }
    if ( !v12 && *(_BYTE *)v17 == 10 && **(_BYTE **)(v17 + 8) == 5 )
    {
      v18 = *(_QWORD *)(v16 + 24);
      v71.m128i_i64[0] = v16;
      if ( (get_tinfo_property(v18, 2) & 0xF) == 0xA )
      {
        tinfo_property = 0;
        v19 = *(_QWORD *)(v71.m128i_i64[0] + 24);
        v71.m128i_i64[1] = v71.m128i_i64[0];
        tinfo_property = get_tinfo_property(v19, 9);
        v71.m128i_i64[0] = get_tinfo_size(0, tinfo_property, 0);
        p_tinfo_property = &tinfo_property;
        clear_tinfo_t(&tinfo_property);
        v20 = v71.m128i_i32[0];
        if ( v71.m128i_i64[0] != -1 )
        {
          v21 = *(int *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
          if ( v21 < v71.m128i_i64[0] )
          {
            v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71.m128i_i64[1] + 8) + 8LL) + 8LL);
            if ( v71.m128i_i32[0] > 1 )
            {
              tinfo_property = v22 + 1;
              v75 = v71.m128i_i32[0] - 1;
              sub_312A30(&a1[8], p_tinfo_property);
              v20 = v71.m128i_i32[0];
              LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
            }
            v23 = -(int)v21 & (unsigned __int64)((int)v21 - 1 + v22 + v20);
            if ( v23 > a1[11].m128i_i64[0] )
              a1[11].m128i_i64[0] = v23;
            goto LABEL_22;
          }
        }
      }
    }
    if ( (unsigned __int8)sub_1A76E0(a1, v17, v12, 1) )
    {
LABEL_22:
      --v14;
      v15 -= 80;
      if ( v14 == -1 )
        return 0;
      v13 = *(_QWORD *)(a2 + 8);
      continue;
    }
    return 1;
  }
}
