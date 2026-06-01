_QWORD *__fastcall sub_443C60(__int64 *a1, __int64 *a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbp
  const __m128i *v6; // r15
  __int64 v7; // rax
  signed __int64 *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r12
  const __m128i *v12; // rbx
  char *v13; // rcx
  const __m128i *v14; // rax
  const __m128i *v15; // rcx
  const __m128i *v16; // r14
  signed __int64 v17; // r15
  const __m128i *v18; // rbx
  const __m128i *v19; // rbp
  __int64 v20; // r14
  size_t v21; // rdx
  __int64 v22; // rcx
  __m128i *v23; // r12
  const __m128i *v24; // r14
  const __m128i *v25; // rbx
  size_t v26; // rdx
  const __m128i *v27; // rcx
  __int64 v28; // rax
  const __m128i *v29; // rax
  __m128i *v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  unsigned __int64 v35; // r10
  __int64 v36; // r8
  __int64 v37; // r13
  unsigned __int64 *v38; // rsi
  __int8 *v39; // rcx
  signed __int64 v40; // rax
  __int64 v41; // r12
  __m128i *v42; // r15
  __m128i *v43; // r14
  __m128i *v44; // rbp
  __int64 v45; // r14
  __m128i v46; // xmm0
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rcx
  const __m128i *v50; // rax
  __m128i v51; // xmm0
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r14
  const __m128i *v55; // rax
  unsigned __int64 v56; // r10
  __m128i v57; // xmm0
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdi
  const __m128i *v62; // rax
  unsigned __int64 v63; // r9
  unsigned __int64 v64; // rdx
  __m128i v65; // xmm0
  unsigned __int64 v66; // rax
  __int64 v68; // rax
  __int64 *v69; // [rsp+0h] [rbp-188h]
  __m128i *v70; // [rsp+0h] [rbp-188h]
  __m128i *dest; // [rsp+8h] [rbp-180h]
  __m128i *v72; // [rsp+10h] [rbp-178h]
  __int64 v73; // [rsp+18h] [rbp-170h]
  unsigned __int64 v74; // [rsp+18h] [rbp-170h]
  __m128i *v75; // [rsp+20h] [rbp-168h]
  __m128i *v76; // [rsp+28h] [rbp-160h]
  __m128i *v77; // [rsp+30h] [rbp-158h]
  __m128i *v78; // [rsp+38h] [rbp-150h]
  unsigned __int64 v79; // [rsp+40h] [rbp-148h]
  _QWORD *v80; // [rsp+48h] [rbp-140h]
  unsigned __int64 v81; // [rsp+50h] [rbp-138h]
  unsigned __int64 v82; // [rsp+58h] [rbp-130h]
  unsigned __int64 v83; // [rsp+60h] [rbp-128h]
  unsigned __int64 v84; // [rsp+68h] [rbp-120h]
  __m128i *v85; // [rsp+70h] [rbp-118h] BYREF
  __m128i *v86; // [rsp+78h] [rbp-110h]
  __m128i *v87; // [rsp+80h] [rbp-108h]
  __m128i *v88; // [rsp+90h] [rbp-F8h] BYREF
  __m128i *v89; // [rsp+98h] [rbp-F0h]
  __m128i *v90; // [rsp+A0h] [rbp-E8h]
  __m128i *v91; // [rsp+B0h] [rbp-D8h]
  __int8 *v92; // [rsp+C0h] [rbp-C8h]
  __int128 v93; // [rsp+D0h] [rbp-B8h]
  __int64 v94; // [rsp+E0h] [rbp-A8h]
  unsigned __int64 v95; // [rsp+F0h] [rbp-98h]
  unsigned __int64 v96; // [rsp+F8h] [rbp-90h]
  unsigned __int64 v97; // [rsp+100h] [rbp-88h]
  __int128 v98; // [rsp+110h] [rbp-78h]
  __int64 v99; // [rsp+120h] [rbp-68h]
  unsigned __int64 v100; // [rsp+130h] [rbp-58h]
  unsigned __int64 v101; // [rsp+138h] [rbp-50h]
  unsigned __int64 v102; // [rsp+140h] [rbp-48h]
  unsigned __int64 v103; // [rsp+148h] [rbp-40h]

  v5 = a2;
  v6 = (const __m128i *)a2[1];
  v7 = *a2;
  v80 = a1;
  v103 = __readfsqword(0x28u);
  v8 = (signed __int64 *)a3;
  if ( v6 != (const __m128i *)v7 )
  {
    v9 = v7 + 24;
    if ( v6 != (const __m128i *)(v7 + 24) )
    {
      do
      {
        v10 = *(_QWORD *)(v9 - 8);
        if ( v10 == *(_QWORD *)(v9 + 16) )
        {
          a1 = *(__int64 **)(v9 - 24);
          a3 = *(_QWORD *)(v9 - 16) - (_QWORD)a1;
          if ( !a3 || (a2 = *(__int64 **)v9, !memcmp(a1, *(const void **)v9, a3)) )
          {
            v11 = v9 - 24;
            if ( v6 != (const __m128i *)(v9 - 24) )
            {
              v12 = (const __m128i *)(v9 + 24);
              if ( v12 != v6 )
              {
                while ( 1 )
                {
                  if ( v12[1].m128i_i64[0] != v10
                    || (a1 = *(__int64 **)v11, (a3 = *(_QWORD *)(v11 + 8) - *(_QWORD *)v11) != 0)
                    && (a2 = (__int64 *)v12->m128i_i64[0], memcmp(a1, (const void *)v12->m128i_i64[0], a3)) )
                  {
                    v11 += 24;
                    *(__m128i *)v11 = _mm_loadu_si128(v12);
                    *(_QWORD *)(v11 + 16) = v12[1].m128i_i64[0];
                  }
                  v12 = (const __m128i *)((char *)v12 + 24);
                  if ( v6 == v12 )
                    break;
                  v10 = *(_QWORD *)(v11 + 16);
                }
              }
              v13 = (char *)(v11 + 24);
              if ( v6 != (const __m128i *)(v11 + 24) )
              {
                v14 = (const __m128i *)v5[1];
                a3 = (char *)v14 - (char *)v6;
                if ( v6 != v14 )
                {
                  if ( a3 <= 24 )
                  {
                    if ( a3 == 24 )
                    {
                      *(__m128i *)(v11 + 24) = _mm_loadu_si128(v6);
                      *(_QWORD *)(v11 + 40) = v6[1].m128i_i64[0];
                      v14 = (const __m128i *)v5[1];
                      a3 = (char *)v14 - (char *)v6;
                    }
                  }
                  else
                  {
                    a1 = (__int64 *)(v11 + 24);
                    a2 = (__int64 *)v6;
                    v13 = (char *)memmove((void *)(v11 + 24), v6, a3);
                    v14 = (const __m128i *)v5[1];
                    a3 = (char *)v14 - (char *)v6;
                  }
                }
                v15 = (const __m128i *)&v13[a3];
                if ( v15 != v14 )
                  v5[1] = (__int64)v15;
              }
            }
            goto LABEL_20;
          }
        }
        v9 += 24;
      }
      while ( v6 != (const __m128i *)v9 );
      v16 = (const __m128i *)v8[1];
      v17 = *v8;
      if ( v16 != (const __m128i *)*v8 )
        goto LABEL_21;
      goto LABEL_115;
    }
  }
LABEL_20:
  v16 = (const __m128i *)v8[1];
  v17 = *v8;
  if ( v16 != (const __m128i *)*v8 )
  {
LABEL_21:
    v18 = (const __m128i *)(v17 + 24);
    if ( v16 == (const __m128i *)(v17 + 24) )
    {
      v91 = nullptr;
      v92 = nullptr;
      v79 = (unsigned __int64)v16 - v17;
      goto LABEL_45;
    }
    v69 = v5;
    v19 = v16;
    while ( 1 )
    {
      v20 = v18[-1].m128i_i64[1];
      if ( v20 == v18[1].m128i_i64[0] )
      {
        a1 = (__int64 *)v18[-2].m128i_i64[1];
        v21 = v18[-1].m128i_i64[0] - (_QWORD)a1;
        if ( !v21 )
          break;
        a2 = (__int64 *)v18->m128i_i64[0];
        if ( !memcmp(a1, (const void *)v18->m128i_i64[0], v21) )
          break;
      }
      v18 = (const __m128i *)((char *)v18 + 24);
      v29 = v18;
      if ( v19 == v18 )
      {
        v5 = v69;
        a3 = v17;
        goto LABEL_44;
      }
    }
    v22 = v20;
    a3 = v17;
    v23 = (__m128i *)&v18[-2].m128i_u64[1];
    v24 = v19;
    v5 = v69;
    if ( v24 == (const __m128i *)&v18[-2].m128i_u64[1] )
    {
      v29 = v24;
      goto LABEL_44;
    }
    if ( &v18[1].m128i_u64[1] == (unsigned __int64 *)v24 )
    {
      v27 = v24;
      if ( v24 != v18 )
      {
        v28 = 0;
        goto LABEL_38;
      }
    }
    else
    {
      v25 = (const __m128i *)((char *)v18 + 24);
      while ( 1 )
      {
        if ( v25[1].m128i_i64[0] != v22
          || (a1 = (__int64 *)v23->m128i_i64[0], (v26 = v23->m128i_i64[1] - v23->m128i_i64[0]) != 0)
          && (a2 = (__int64 *)v25->m128i_i64[0], memcmp(a1, (const void *)v25->m128i_i64[0], v26)) )
        {
          v23 = (__m128i *)((char *)v23 + 24);
          *v23 = _mm_loadu_si128(v25);
          v23[1].m128i_i64[0] = v25[1].m128i_i64[0];
        }
        v25 = (const __m128i *)((char *)v25 + 24);
        if ( v24 == v25 )
          break;
        v22 = v23[1].m128i_i64[0];
      }
      v18 = (__m128i *)((char *)v23 + 24);
      v27 = (const __m128i *)v8[1];
      if ( v24 != (const __m128i *)&v23[1].m128i_u64[1] )
      {
        v28 = (char *)v27 - (char *)v24;
        if ( v24 != v27 )
        {
          if ( v28 > 24 )
          {
            a2 = (__int64 *)v24;
            a1 = &v23[1].m128i_i64[1];
            memmove(&v23[1].m128i_u64[1], v24, (char *)v27 - (char *)v24);
            v27 = (const __m128i *)v8[1];
            a3 = *v8;
            v28 = (char *)v27 - (char *)v24;
LABEL_38:
            v29 = (const __m128i *)((char *)v18 + v28);
            if ( v29 != v27 )
              v8[1] = (signed __int64)v29;
            v17 = a3;
LABEL_44:
            v91 = nullptr;
            v92 = nullptr;
            v79 = (unsigned __int64)v29 - a3;
            if ( v29 == (const __m128i *)a3 )
            {
              dest = nullptr;
              goto LABEL_47;
            }
LABEL_45:
            if ( v79 > 0x7FFFFFFFFFFFFFF8LL )
              sub_2EBC5E(a1, a2, a3, v79, a5);
            a1 = (__int64 *)v79;
            dest = (__m128i *)operator new(v79);
            v17 = *v8;
            v29 = (const __m128i *)v8[1];
            goto LABEL_47;
          }
          if ( v28 == 24 )
          {
            *(__m128i *)((char *)v23 + 24) = _mm_loadu_si128(v24);
            v23[2].m128i_i64[1] = v24[1].m128i_i64[0];
            v27 = (const __m128i *)v8[1];
            v28 = (char *)v27 - (char *)v24;
          }
        }
        a3 = *v8;
        goto LABEL_38;
      }
      a3 = *v8;
    }
    v17 = a3;
    v29 = v27;
    goto LABEL_44;
  }
LABEL_115:
  v79 = 0;
  v29 = (const __m128i *)v17;
  dest = nullptr;
LABEL_47:
  v30 = dest;
  v31 = (__int64)dest->m128i_i64 + v79;
  v91 = dest;
  v92 = &dest->m128i_i8[v79];
  if ( (const __m128i *)v17 == v29 )
  {
    v34 = (__int64)dest;
    v35 = 0;
  }
  else
  {
    v31 = v17;
    do
    {
      v32 = _mm_loadu_si128((const __m128i *)v31);
      v31 += 24;
      v30 = (__m128i *)((char *)v30 + 24);
      *(__m128i *)((char *)v30 - 24) = v32;
      v30[-1].m128i_i64[1] = *(_QWORD *)(v31 - 8);
    }
    while ( v29 != (const __m128i *)v31 );
    v33 = ((unsigned __int64)&v29[-2].m128i_u64[1] - v17) & 0xFFFFFFFFFFFFFFF8LL;
    v34 = (__int64)&dest[1].m128i_i64[1] + v33;
    v35 = v33 + 24;
  }
  v36 = *v5;
  v73 = v5[1];
  if ( *v5 == v73 )
  {
    v72 = nullptr;
    v49 = 0;
    v48 = 0;
    v52 = 0;
    v78 = nullptr;
    v77 = nullptr;
    v70 = nullptr;
    v76 = nullptr;
    goto LABEL_91;
  }
  v78 = nullptr;
  v37 = *v5;
  v75 = nullptr;
  v77 = nullptr;
  v72 = nullptr;
  v70 = nullptr;
  v76 = nullptr;
  do
  {
    while ( 1 )
    {
      v38 = (unsigned __int64 *)0xAAAAAAAAAAAAAAABLL;
      v40 = 0xAAAAAAAAAAAAAAABLL * ((v34 - (__int64)dest) >> 3);
      v31 = v40 >> 2;
      if ( v40 >> 2 > 0 )
      {
        v41 = *(_QWORD *)(v37 + 16);
        v42 = dest;
        v43 = &dest[6 * v31];
        while ( 1 )
        {
          if ( v42[1].m128i_i64[0] == v41 )
          {
            a1 = (__int64 *)v42->m128i_i64[0];
            v31 = v42->m128i_i64[1] - v42->m128i_i64[0];
            if ( !v31 )
              goto LABEL_54;
            v38 = *(unsigned __int64 **)v37;
            if ( !memcmp(a1, *(const void **)v37, v31) )
              goto LABEL_54;
          }
          v44 = (__m128i *)((char *)v42 + 24);
          if ( v41 == v42[2].m128i_i64[1]
            && ((a1 = (__int64 *)v42[1].m128i_i64[1], (v31 = v42[2].m128i_i64[0] - (_QWORD)a1) == 0)
             || (v38 = *(unsigned __int64 **)v37, !memcmp(a1, *(const void **)v37, v31)))
            || (v44 = v42 + 3, v41 == v42[4].m128i_i64[0])
            && ((a1 = (__int64 *)v42[3].m128i_i64[0], (v31 = v42[3].m128i_i64[1] - (_QWORD)a1) == 0)
             || (v38 = *(unsigned __int64 **)v37, !memcmp(a1, *(const void **)v37, v31)))
            || (v44 = (__m128i *)((char *)v42 + 72), v41 == v42[5].m128i_i64[1])
            && ((a1 = (__int64 *)v42[4].m128i_i64[1], (v31 = v42[5].m128i_i64[0] - (_QWORD)a1) == 0)
             || (v38 = *(unsigned __int64 **)v37, !memcmp(a1, *(const void **)v37, v31))) )
          {
            v42 = v44;
            goto LABEL_54;
          }
          v42 += 6;
          if ( v43 == v42 )
          {
            v40 = 0xAAAAAAAAAAAAAAABLL * ((v34 - (__int64)v42) >> 3);
            goto LABEL_75;
          }
        }
      }
      v42 = dest;
LABEL_75:
      if ( v40 == 2 )
      {
        v45 = *(_QWORD *)(v37 + 16);
        if ( v45 != v42[1].m128i_i64[0] )
          goto LABEL_129;
LABEL_131:
        a1 = (__int64 *)v42->m128i_i64[0];
        v31 = v42->m128i_i64[1] - v42->m128i_i64[0];
        if ( v31 )
        {
          v38 = *(unsigned __int64 **)v37;
          if ( memcmp(a1, *(const void **)v37, v31) )
          {
LABEL_129:
            v42 = (__m128i *)((char *)v42 + 24);
            goto LABEL_79;
          }
        }
        goto LABEL_54;
      }
      if ( v40 != 3 )
      {
        if ( v40 != 1 )
          goto LABEL_82;
        v45 = *(_QWORD *)(v37 + 16);
LABEL_79:
        if ( v45 != v42[1].m128i_i64[0] )
          goto LABEL_82;
        a1 = (__int64 *)v42->m128i_i64[0];
        v31 = v42->m128i_i64[1] - v42->m128i_i64[0];
        if ( v31 )
        {
          v38 = *(unsigned __int64 **)v37;
          if ( memcmp(a1, *(const void **)v37, v31) )
            goto LABEL_82;
        }
        goto LABEL_54;
      }
      v45 = *(_QWORD *)(v37 + 16);
      if ( v42[1].m128i_i64[0] != v45
        || (a1 = (__int64 *)v42->m128i_i64[0], (v31 = v42->m128i_i64[1] - v42->m128i_i64[0]) != 0)
        && (v38 = *(unsigned __int64 **)v37, memcmp(a1, *(const void **)v37, v31)) )
      {
        v42 = (__m128i *)((char *)v42 + 24);
        if ( v45 != v42[1].m128i_i64[0] )
          goto LABEL_129;
        goto LABEL_131;
      }
LABEL_54:
      if ( (__m128i *)v34 != v42 )
      {
        v38 = &v42[1].m128i_u64[1];
        if ( (unsigned __int64 *)v34 != &v42[1].m128i_u64[1] )
        {
          v31 = v34 - (_QWORD)v38;
          if ( v34 - (__int64)v38 <= 24 )
          {
            if ( v34 - (_QWORD)v38 == 24 )
            {
              v68 = v42[2].m128i_i64[1];
              *v42 = _mm_loadu_si128((__m128i *)((char *)v42 + 24));
              v42[1].m128i_i64[0] = v68;
            }
          }
          else
          {
            a1 = (__int64 *)v42;
            memmove(v42, v38, v31);
          }
        }
        v34 -= 24;
        if ( v72 == v70 )
        {
          v38 = (unsigned __int64 *)v37;
          a1 = (__int64 *)&v85;
          v85 = v76;
          v86 = v72;
          v87 = v72;
          sub_443B00((__int64)&v85, (const __m128i *)v37);
          v76 = v85;
          v70 = v86;
          v72 = v87;
        }
        else
        {
          v39 = &v70[1].m128i_i8[8];
          *v70 = _mm_loadu_si128((const __m128i *)v37);
          v70[1].m128i_i64[0] = *(_QWORD *)(v37 + 16);
          v70 = (__m128i *)((char *)v70 + 24);
        }
        goto LABEL_60;
      }
LABEL_82:
      if ( v75 != v78 )
        break;
      v38 = (unsigned __int64 *)v37;
      a1 = (__int64 *)&v88;
      v88 = v77;
      v89 = v75;
      v90 = v75;
      sub_443B00((__int64)&v88, (const __m128i *)v37);
      v77 = v88;
      v75 = v89;
      v78 = v90;
LABEL_60:
      v37 += 24;
      if ( v73 == v37 )
        goto LABEL_84;
    }
    v46 = _mm_loadu_si128((const __m128i *)v37);
    v39 = &v75[1].m128i_i8[8];
    v37 += 24;
    *v75 = v46;
    v75[1].m128i_i64[0] = *(_QWORD *)(v37 - 8);
    v75 = (__m128i *)((char *)v75 + 24);
  }
  while ( v73 != v37 );
LABEL_84:
  v94 = 0;
  v93 = 0;
  v47 = (char *)v75 - (char *)v77;
  if ( v75 == v77 )
  {
    v49 = 0;
    v48 = 0;
    v35 = v34 - (_QWORD)dest;
  }
  else
  {
    if ( v47 > 0x7FFFFFFFFFFFFFF8LL )
      sub_2EBC5E(a1, v38, v31, v39, v36);
    v48 = operator new((char *)v75 - (char *)v77);
    v49 = v48 + v47;
    v35 = v34 - (_QWORD)dest;
  }
  a1 = (__int64 *)v75;
  v50 = v77;
  if ( v75 == v77 )
  {
    v52 = v48;
  }
  else
  {
    v31 = v48;
    do
    {
      v51 = _mm_loadu_si128(v50);
      v50 = (const __m128i *)((char *)v50 + 24);
      v31 += 24;
      *(__m128i *)(v31 - 24) = v51;
      *(_QWORD *)(v31 - 8) = v50[-1].m128i_i64[1];
    }
    while ( v75 != v50 );
    v52 = v48 + (((char *)&v75[-2].m128i_u64[1] - (char *)v77) & 0xFFFFFFFFFFFFFFF8LL) + 24;
  }
LABEL_91:
  v95 = v48;
  v96 = v52;
  v97 = v49;
  v94 = 0;
  v99 = 0;
  v93 = 0;
  v98 = 0;
  if ( v35 )
  {
    if ( v35 > 0x7FFFFFFFFFFFFFF8LL )
      sub_2EBC5E(a1, v52, v31, v49, v36);
    a1 = (__int64 *)v35;
    v82 = v49;
    v74 = v35;
    v53 = operator new(v35);
    v35 = v74;
    v54 = v53;
    v49 = v82;
  }
  else
  {
    v54 = 0;
  }
  v55 = dest;
  v56 = v54 + v35;
  if ( dest == (__m128i *)v34 )
  {
    v58 = v54;
  }
  else
  {
    v31 = v54;
    do
    {
      v57 = _mm_loadu_si128(v55);
      v55 = (const __m128i *)((char *)v55 + 24);
      v31 += 24;
      *(__m128i *)(v31 - 24) = v57;
      *(_QWORD *)(v31 - 8) = v55[-1].m128i_i64[1];
    }
    while ( (const __m128i *)v34 != v55 );
    a1 = (__int64 *)dest;
    v58 = v54 + 8 * ((unsigned __int64)(v34 - (_QWORD)dest - 24) >> 3) + 24;
  }
  v100 = v54;
  v101 = v58;
  v102 = v56;
  v59 = (char *)v70 - (char *)v76;
  if ( v70 == v76 )
  {
    v61 = 0;
  }
  else
  {
    if ( v59 > 0x7FFFFFFFFFFFFFF8LL )
      sub_2EBC5E(a1, v52, v31, v49, v58);
    v84 = v49;
    v83 = v56;
    v81 = v58;
    v60 = operator new((char *)v70 - (char *)v76);
    v59 = (char *)v70 - (char *)v76;
    v58 = v81;
    v61 = v60;
    v56 = v83;
    v49 = v84;
  }
  v62 = v76;
  v63 = v61 + v59;
  if ( v70 == v76 )
  {
    v66 = v61;
  }
  else
  {
    v64 = v61;
    do
    {
      v65 = _mm_loadu_si128(v62);
      v62 = (const __m128i *)((char *)v62 + 24);
      v64 += 24LL;
      *(__m128i *)(v64 - 24) = v65;
      *(_QWORD *)(v64 - 8) = v62[-1].m128i_i64[1];
    }
    while ( v70 != v62 );
    v66 = v61 + 8 * ((unsigned __int64)((char *)&v70[-2].m128i_u64[1] - (char *)v76) >> 3) + 24;
  }
  v80[7] = v66;
  *v80 = v48;
  v80[1] = v52;
  v80[2] = v49;
  v80[3] = v54;
  v80[4] = v58;
  v80[5] = v56;
  v80[6] = v61;
  v80[8] = v63;
  if ( dest )
    operator delete(dest, v79);
  if ( v77 )
    operator delete(v77, (char *)v78 - (char *)v77);
  if ( v76 )
    operator delete(v76, (char *)v72 - (char *)v76);
  return v80;
}
