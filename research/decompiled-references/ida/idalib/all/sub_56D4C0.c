__int64 __fastcall sub_56D4C0(
        __m128i *a1,
        __int64 *a2,
        __int64 *a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __m128i a7,
        __m128i a8,
        unsigned __int64 a9)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  unsigned __int64 v14; // r13
  char v15; // cl
  int v16; // edx
  char v17; // al
  int v18; // edx
  char v19; // al
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r13
  int v23; // ebp
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rbp
  int v28; // r13d
  __int64 v29; // rax
  __m128i v30; // xmm0
  int v31; // r13d
  unsigned __int64 v32; // rdx
  char v33; // al
  unsigned __int64 v34; // r8
  int v35; // esi
  char v36; // al
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  bool v42; // cf
  int v43; // eax
  bool v44; // al
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r8
  int v49; // eax
  char v50; // al
  char v51; // al
  __m128i v52; // xmm2
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r9
  int v55; // esi
  __int32 v56; // eax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rbp
  char v59; // r13
  char v61; // al
  char v62; // al
  unsigned __int64 v63; // r12
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // r8
  __int64 v67; // r15
  char v68; // bp
  unsigned __int64 v69; // r9
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // r12
  __int64 v74; // rax
  unsigned __int64 v75; // [rsp+8h] [rbp-150h]
  unsigned __int64 v76; // [rsp+8h] [rbp-150h]
  unsigned __int64 v77; // [rsp+8h] [rbp-150h]
  int v79; // [rsp+18h] [rbp-140h]
  unsigned __int64 v80; // [rsp+18h] [rbp-140h]
  int v81; // [rsp+18h] [rbp-140h]
  unsigned __int64 *v82; // [rsp+20h] [rbp-138h]
  __int64 v83; // [rsp+28h] [rbp-130h]
  bool v85; // [rsp+36h] [rbp-122h]
  char v86; // [rsp+37h] [rbp-121h]
  bool v87; // [rsp+37h] [rbp-121h]
  char v88; // [rsp+37h] [rbp-121h]
  char v89; // [rsp+37h] [rbp-121h]
  unsigned __int64 v90; // [rsp+38h] [rbp-120h]
  int v91; // [rsp+48h] [rbp-110h]
  __int64 v92; // [rsp+50h] [rbp-108h]
  __int64 v94; // [rsp+60h] [rbp-F8h]
  char v95; // [rsp+7Ch] [rbp-DCh] BYREF
  __int16 v96; // [rsp+7Dh] [rbp-DBh]
  __m128i v97; // [rsp+80h] [rbp-D8h] BYREF
  void *v98[4]; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v99; // [rsp+B0h] [rbp-A8h]
  _OWORD v100[3]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v101; // [rsp+F0h] [rbp-68h]
  int v102; // [rsp+F8h] [rbp-60h]
  int v103; // [rsp+100h] [rbp-58h]
  int v104; // [rsp+104h] [rbp-54h]
  char v105; // [rsp+108h] [rbp-50h]
  unsigned __int64 v106; // [rsp+118h] [rbp-40h]

  v75 = a6;
  v106 = __readfsqword(0x28u);
  v90 = a6 - a5;
  if ( a5 >= a6 )
  {
LABEL_30:
    if ( !under_debugger )
      interr(820);
    goto LABEL_157;
  }
  v85 = 0;
  v10 = a5;
  v83 = 144LL * a4;
  v11 = a4 - 1;
  v92 = 144 * v11;
  v94 = 24 * v11;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v75 - v10;
      v13 = (v75 - v10) >> 3;
      v82 = (unsigned __int64 *)(*a2 + v83);
      if ( (v82[8] & 0xF) != 0xE )
      {
        if ( !v13 )
          goto LABEL_21;
        if ( !a1[1].m128i_i64[0] )
        {
          a1->m128i_i64[0] = v10;
LABEL_124:
          if ( (unsigned __int8)sub_56D1B0(a2, a3, a4, v10, v13) )
            return 1;
          return 0xFFFFFFFFLL;
        }
        v79 = a9;
        v14 = v75;
        v15 = 0;
LABEL_7:
        if ( !a1->m128i_i64[1]
          || (v88 = v15, v50 = getinf(57), v15 = v88, (v50 & 0xF) == 6)
          || (v51 = getinf(67), v15 = v88, v51 < 0) )
        {
          v16 = 8;
        }
        else
        {
          v16 = a1[1].m128i_i32[0];
        }
        v91 = v16;
        v86 = v15;
        v17 = getinf(57);
        v15 = v86;
        v18 = v91;
        if ( (v17 & 0xF) == 6 || (v19 = getinf(67), v15 = v86, v18 = v91, v19 < 0) )
        {
          v20 = v10;
LABEL_12:
          a1[1].m128i_i64[0] = 0;
          a1->m128i_i64[1] = 0;
          v21 = (v20 + v18 - 1) & -v18;
          v22 = v14 - v21;
          a1->m128i_i64[0] = v21;
          if ( v22 > 7 )
          {
            v10 = v21;
            v13 = v22 >> 3;
            goto LABEL_124;
          }
          if ( v21 != v10 )
          {
            v97 = (__m128i)v21;
            v76 = v21;
            v96 = 256;
            memset(v98, 0, sizeof(v98));
            v101 = 1;
            v102 = -1;
            v105 = 0;
            v103 = a9;
            v104 = 1024;
            v95 = a9;
            v99 = 0;
            v100[0] = 0;
            v68 = create_tinfo(v100, 14, 14, &v95);
            if ( v68 )
            {
              sub_563B00(a2, (__m128i *)(*a2 + v83), (__int64)&v97);
              v69 = v76;
              v70 = *a3;
              v71 = a3[1];
              v72 = 24LL * a4;
              if ( a3[2] < (unsigned __int64)(v71 + 1) )
              {
                v74 = qvector_reserve(a3, v70, v71 + 1, 24);
                *a3 = v74;
                v70 = v74;
                v69 = v76;
                v71 = a3[1];
              }
              v73 = v70 + v72;
              v77 = v69;
              memmove((void *)(v70 + v72 + 24), (const void *)(v70 + v72), 24 * v71 - v72);
              *(_QWORD *)v73 = 0;
              *(_DWORD *)(v73 + 16) = a9;
              *(_QWORD *)(v73 + 8) = v77;
              ++a3[1];
            }
            clear_tinfo_t(v100);
            if ( v98[3] )
            {
              *(_QWORD *)&v99 = 0;
              qfree(v98[3]);
            }
            if ( v98[0] )
            {
              v98[1] = nullptr;
              qfree(v98[0]);
            }
            if ( v68 )
              return 1;
            return 0xFFFFFFFFLL;
          }
          goto LABEL_14;
        }
        v46 = a1->m128i_u64[1];
        if ( !v46 )
        {
          v20 = v10;
LABEL_82:
          v47 = a1[2].m128i_i64[1];
          if ( v47 )
          {
            v48 = 8 * v47;
            v49 = 8 * v47;
            if ( v48 < v91 )
              v18 = v49;
          }
          goto LABEL_12;
        }
        if ( v10 >= v46 )
        {
          v20 = v10 - v46 + ((v46 + v91 - 1) & -v91);
          if ( v20 < v10 )
            sub_561E80(v10 - v46, v20, *(double *)a7.m128i_i64, *(double *)a8.m128i_i64);
          goto LABEL_82;
        }
        if ( !under_debugger )
          interr(1138);
LABEL_157:
        BUG();
      }
      v87 = 0;
      if ( (unsigned __int8)v12 > 1u && (a1[3].m128i_i8[0] & 0x40) == 0 )
        v87 = (v10 >> 3) / (unsigned __int8)a9 != ((v10 + (unsigned __int8)v12 - 1) >> 3) / (unsigned __int8)a9;
      v31 = v12 + (v10 & 7);
      if ( !a1[1].m128i_i64[0] )
      {
        v32 = v82[1];
        if ( v32 )
        {
          v52 = (__m128i)v32;
          v53 = *v82 + v32;
          a7 = _mm_unpacklo_epi64((__m128i)*v82, v52);
          v54 = a2[1];
          if ( a4 < v54 )
          {
            v55 = a4;
            while ( 1 )
            {
              a8 = _mm_srli_si128(a7, 8);
              a7.m128i_i64[0] = _mm_add_epi64(a7, a8).m128i_u64[0];
              v56 = a7.m128i_i32[0];
              if ( 8 * *((_DWORD *)v82 + 32) + (*v82 & (-8 * *((_DWORD *)v82 + 32))) < a7.m128i_i64[0] )
                break;
              if ( ++v55 >= v54 )
              {
                v31 = a7.m128i_i32[0] - v10;
                goto LABEL_37;
              }
              a7 = _mm_loadu_si128((const __m128i *)(*a2 + 144LL * v55));
              LODWORD(v53) = v56;
            }
          }
          v31 = v53 - v10;
        }
      }
LABEL_37:
      v80 = (v75 - v10) >> 3;
      v33 = getinf(57);
      v34 = v80;
      v35 = 8 * a9;
      if ( (v33 & 0xF) == 6 )
        break;
      v36 = getinf(67);
      v35 = 8 * a9;
      v34 = (v75 - v10) >> 3;
      if ( v36 < 0 )
        break;
      if ( !v87 )
      {
        if ( v35 >= v12 )
        {
          if ( a4 > 0 )
          {
LABEL_41:
            v79 = a9;
            v15 = *(unsigned int *)(*a3 + v94 + 16) != a9;
            goto LABEL_42;
          }
          if ( v31 <= v35 )
            goto LABEL_21;
          v26 = 8 * a9;
          if ( !(v75 % (8 * a9)) )
          {
            if ( !v80 )
              goto LABEL_22;
            v79 = a9;
            v14 = v75;
            v15 = 0;
            goto LABEL_76;
          }
          if ( !v80 )
            goto LABEL_22;
          v79 = a9;
          v15 = 0;
          goto LABEL_75;
        }
        v79 = a9;
        v15 = 0;
        if ( a4 <= 0 )
        {
          if ( v31 <= v35 )
          {
            v26 = 8 * a9;
            goto LABEL_22;
          }
LABEL_73:
          if ( !(v75 % (8 * a9)) )
          {
            v14 = v75;
            if ( v34 )
              goto LABEL_76;
            goto LABEL_119;
          }
          if ( !v34 )
          {
            v14 = v75;
            goto LABEL_119;
          }
LABEL_75:
          v14 = v75 & -v35;
          if ( (v14 - v10) >> 3 )
          {
LABEL_76:
            if ( a1[1].m128i_i64[0] )
              goto LABEL_7;
            v45 = v14 - v10;
            a1->m128i_i64[0] = v10;
            if ( v45 > 7 )
            {
              v13 = v45 >> 3;
              goto LABEL_124;
            }
            goto LABEL_14;
          }
LABEL_119:
          if ( !v87 )
            goto LABEL_14;
          v89 = v15;
          v61 = getinf(57);
          v15 = v89;
          if ( (v61 & 0xF) == 6 )
            goto LABEL_14;
          v62 = getinf(67);
          v15 = v89;
          if ( v62 < 0 )
            goto LABEL_14;
          goto LABEL_76;
        }
        goto LABEL_42;
      }
      if ( a4 > 0 )
        goto LABEL_41;
      if ( v31 > v35 )
      {
        v79 = a9;
        v44 = (v75 - v10) >> 3 == 0;
        v15 = 0;
        goto LABEL_72;
      }
      v37 = (v10 + 8 * (int)a9 - 1) & (-8 * (int)a9);
      if ( v37 >= v75 || v10 >= v37 )
      {
LABEL_137:
        if ( !under_debugger )
          interr(869);
        goto LABEL_157;
      }
LABEL_48:
      v75 = v37;
    }
    if ( v31 <= 8 )
    {
      v81 = 1;
      v41 = 1;
    }
    else if ( v31 <= 16 )
    {
      v81 = 2;
      v41 = 2;
    }
    else if ( v31 <= 32 )
    {
      v81 = 4;
      v41 = 4;
    }
    else
    {
      v81 = 8;
      v41 = 8;
    }
    v42 = a9 < v41;
    v43 = v81;
    if ( v42 )
      v43 = a9;
    v15 = 0;
    v79 = v43;
    if ( (a1[3].m128i_i8[0] & 0x40) == 0 )
      v15 = a1[1].m128i_i64[0] - a1->m128i_i64[1] < v12;
    if ( a4 <= 0 )
    {
      if ( v31 <= v35 )
        goto LABEL_43;
LABEL_71:
      v44 = v87 && v34 == 0;
LABEL_72:
      if ( v44 )
      {
LABEL_44:
        v37 = (v10 + v35 - 1) & -v35;
        if ( v10 >= v37 || v37 >= v75 )
          goto LABEL_137;
        if ( v15 && v37 == ((v10 + 8 * (unsigned __int8)a9 - 1) & (-8 * (unsigned __int8)a9)) )
        {
          v85 = v15;
          v10 += (int)v37 - (int)v10;
          goto LABEL_29;
        }
        goto LABEL_48;
      }
      goto LABEL_73;
    }
LABEL_42:
    v15 |= (*(_BYTE *)(*a2 + v92 + 64) & 0xF) != 14;
    if ( v31 > v35 )
      goto LABEL_71;
LABEL_43:
    if ( v87 )
      goto LABEL_44;
LABEL_14:
    if ( !v15 )
      goto LABEL_21;
    v23 = 8 * v79;
    v24 = 8 * a1[2].m128i_i64[1];
    if ( v24 && v24 < v23 )
      v23 = 8 * a1[2].m128i_i32[2];
    v25 = (v10 + v23 - 1) & -v23;
    if ( (getinf(57) & 0xF) != 6 && (getinf(67) & 0x80u) == 0LL )
    {
      v12 = v75 - v25;
      if ( v75 == v25 )
        return 0;
      goto LABEL_21;
    }
    if ( v25 == v10 )
      goto LABEL_21;
    v38 = a1->m128i_u64[1];
    a9 = 1;
    v12 = v25 - v10;
    v39 = a1[1].m128i_i64[0] - v38;
    if ( v25 - v10 <= v39 )
      v39 = v25 - v10;
    if ( v38 < a1[1].m128i_i64[0] )
      v12 = v39;
    if ( (int)v12 > 8 )
    {
      a9 = 2;
      if ( (int)v12 > 16 )
        a9 = 4LL * ((int)v12 >= 33) + 4;
    }
    v40 = a1[1].m128i_u64[1];
    v26 = 8 * a9;
    if ( v40 )
    {
      if ( a9 < v40 )
        a9 = a1[1].m128i_u64[1];
LABEL_21:
      v26 = 8 * a9;
    }
LABEL_22:
    v27 = v26;
    if ( ((getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL) && v12 < v26 )
      break;
    v28 = a9;
    if ( a9 <= 1 )
      goto LABEL_109;
    if ( v85 )
      goto LABEL_109;
    v29 = a1[3].m128i_i64[0];
    v97 = _mm_loadu_si128(a1);
    v30 = _mm_loadu_si128(a1 + 1);
    *(_QWORD *)&v99 = v29;
    *(__m128i *)v98 = v30;
    a7 = _mm_loadu_si128(a1 + 2);
    *(__m128i *)&v98[2] = a7;
    v85 = sub_566520(&v97, v10, v12, a9, a2, a4, v90 == v12);
    if ( v85 )
      goto LABEL_109;
    a9 >>= 1;
LABEL_29:
    if ( v10 >= v75 )
      goto LABEL_30;
  }
  v57 = v12 + v82[1];
  if ( v26 < v57 )
  {
    do
    {
      a9 *= 2LL;
      v27 = 8 * a9;
    }
    while ( 8 * a9 < v57 );
  }
  v28 = a9;
LABEL_109:
  v95 = a9;
  memset(v98, 0, sizeof(v98));
  v101 = 1;
  v102 = -1;
  v105 = 0;
  v97.m128i_i64[0] = v10;
  v103 = v28;
  v104 = 1024;
  HIBYTE(v96) = 1;
  v99 = 0;
  v100[0] = 0;
  v58 = v27 - (int)(v10 % v27);
  if ( v58 > v12 )
    v58 = v12;
  v97.m128i_i64[1] = v58;
  LOBYTE(v96) = v58;
  v59 = create_tinfo(v100, 14, 14, &v95);
  if ( v59 )
  {
    sub_563B00(a2, (__m128i *)(*a2 + v83), (__int64)&v97);
    v63 = v58 + v10;
    v64 = a3[1];
    v65 = *a3;
    v66 = 24LL * a4;
    if ( a3[2] < (unsigned __int64)(v64 + 1) )
    {
      v65 = qvector_reserve(a3, v65, v64 + 1, 24);
      v66 = 24LL * a4;
      *a3 = v65;
      v64 = a3[1];
    }
    v67 = v65 + v66;
    memmove((void *)(v65 + v66 + 24), (const void *)(v65 + v66), 24 * v64 - v66);
    *(_QWORD *)v67 = v58;
    *(_QWORD *)(v67 + 8) = v63;
    *(_DWORD *)(v67 + 16) = a9;
    ++a3[1];
  }
  clear_tinfo_t(v100);
  if ( v98[3] )
  {
    *(_QWORD *)&v99 = 0;
    qfree(v98[3]);
  }
  if ( v98[0] )
  {
    v98[1] = nullptr;
    qfree(v98[0]);
  }
  if ( v59 )
    return 1;
  return 0xFFFFFFFFLL;
}
