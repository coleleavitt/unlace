__int64 *__fastcall sub_3A8440(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned __int64 *func; // rax
  unsigned __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 i; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 j; // rdx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // rsi
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // rbp
  __int64 *v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  bool v44; // zf
  __int64 v45; // rdi
  __int64 v46; // r13
  __int64 n; // rbp
  __int64 *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // r13
  __int64 ii; // rbp
  __int64 *v54; // rax
  __int64 v55; // rdx
  __m128i *v56; // rax
  __m128i v57; // xmm0
  __m128i *v58; // rbp
  __int64 v59; // rdi
  __int64 v60; // r14
  __int64 v61; // r13
  __int64 *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // r13
  __int64 v67; // r14
  __int64 *v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // rsi
  const __m128i *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rdx
  __m128i v77; // xmm0
  bool v78; // cf
  __m128i *v79; // rax
  __m128i v80; // xmm0
  const __m128i *v81; // rax
  __m128i v82; // xmm0
  __int64 v83; // r14
  __int64 v84; // rdi
  __int64 k; // r13
  __int64 *v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // r14
  __int64 v90; // rdi
  __int64 m; // r13
  __int64 *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rdi
  __int64 v98; // r9
  __int64 v99; // rax
  const __m128i *v100; // rsi
  __m128i v101; // xmm0
  _QWORD *v102; // rax
  __int64 v103; // rdx
  _QWORD *v104; // rdi
  __int64 v106; // [rsp+8h] [rbp-C0h]
  __int64 v107; // [rsp+8h] [rbp-C0h]
  __int64 v108; // [rsp+20h] [rbp-A8h]
  __int64 v109; // [rsp+20h] [rbp-A8h]
  __int64 v110; // [rsp+20h] [rbp-A8h]
  __int64 v111; // [rsp+28h] [rbp-A0h]
  __int64 *v112; // [rsp+38h] [rbp-90h] BYREF
  __m128i v113; // [rsp+40h] [rbp-88h] BYREF
  __int128 v114; // [rsp+50h] [rbp-78h]
  const __m128i *v115; // [rsp+60h] [rbp-68h] BYREF
  __m128i v116; // [rsp+68h] [rbp-60h] BYREF
  __int128 v117; // [rsp+78h] [rbp-50h]
  unsigned __int64 v118; // [rsp+88h] [rbp-40h]

  v118 = __readfsqword(0x28u);
  if ( a5 == 5 )
    goto LABEL_51;
  func = (unsigned __int64 *)get_func();
  v12 = func;
  if ( !func )
  {
LABEL_58:
    *a1 = 0;
    return a1;
  }
  if ( a5 == 2 )
  {
LABEL_51:
    v41 = operator new(0x38u);
    v42 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(v41 + 24) = a3;
    *(_DWORD *)(v41 + 8) = 1;
    *(_QWORD *)v41 = &off_4E6F50;
    *(_QWORD *)(v41 + 16) = v42;
    *(_QWORD *)(v41 + 32) = a3 + a4;
    *(_QWORD *)(v41 + 40) = -1;
    *(_DWORD *)(v41 + 48) = a5;
    *(_BYTE *)(v41 + 52) = 1;
    *a1 = v41;
    return a1;
  }
  if ( !a6 && !sub_13DCA0(*(_QWORD *)(a2 + 40), *func) )
    goto LABEL_58;
  v13 = *(_QWORD *)(a2 + 40);
  v115 = nullptr;
  v116 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v113 = (__m128i)(unsigned __int64)v12;
  v117 = 0;
  v114 = 0;
  sub_14CDC0((__int64 *)&v112, v13, &v113, &v115, 0);
  v15 = v112;
  if ( !v112 )
  {
    if ( v113.m128i_i64[1] )
    {
      *(_QWORD *)&v114 = 0;
      qfree(v113.m128i_i64[1]);
    }
    if ( a6 )
    {
      sub_3310F0((__int64)&v113, (__int64)&v115, v14);
      sub_6D0A0((__int64)"%a: %s\n", 0.0, (const char *)v116.m128i_i64[0]);
      if ( v113.m128i_i64[0] )
      {
        v113.m128i_i64[1] = 0;
        qfree(v113.m128i_i64[0]);
      }
    }
    if ( v116.m128i_i64[1] )
    {
      *(_QWORD *)&v117 = 0;
      qfree(v116.m128i_i64[1]);
    }
    goto LABEL_58;
  }
  if ( *((_DWORD *)v112 + 26) )
  {
    v27 = v113.m128i_i64[1];
    if ( v113.m128i_i64[1] )
    {
LABEL_25:
      *(_QWORD *)&v114 = 0;
      qfree(v27);
    }
  }
  else
  {
    sub_258970(v112);
    v16 = v15[23];
    if ( v16 )
    {
      v17 = v15[24];
      if ( v17 )
      {
        for ( i = 0; i != v17; ++i )
        {
          v19 = (__int64 *)(v16 + 24 * i);
          v20 = *v19;
          if ( *v19 )
          {
            v19[1] = 0;
            v108 = i;
            qfree(v20);
            i = v108;
            v16 = v15[23];
          }
        }
      }
      v15[24] = 0;
      qfree(v16);
    }
    v21 = v15[20];
    if ( v21 )
    {
      v15[21] = 0;
      qfree(v21);
    }
    v22 = v15[16];
    if ( v22 )
    {
      v23 = v15[17];
      if ( v23 )
      {
        for ( j = 0; j != v23; ++j )
        {
          v25 = (__int64 *)(v22 + 32 * j);
          v26 = *v25;
          if ( *v25 )
          {
            v25[1] = 0;
            v109 = j;
            qfree(v26);
            j = v109;
            v22 = v15[16];
          }
        }
      }
      v15[17] = 0;
      qfree(v22);
    }
    sub_255050((__int64)(v15 + 2));
    j__qfree((__int64)v15);
    v27 = v113.m128i_i64[1];
    if ( v113.m128i_i64[1] )
      goto LABEL_25;
  }
  if ( v116.m128i_i64[1] )
  {
    *(_QWORD *)&v117 = 0;
    qfree(v116.m128i_i64[1]);
  }
  if ( a5 <= 5 )
  {
    if ( a5 - 3 <= 1 )
    {
      v28 = sub_258010((__int64)v15);
      v29 = *(_QWORD **)v28;
      if ( !*(_QWORD *)v28 )
        goto LABEL_61;
      v30 = *v29 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v30 )
      {
        v31 = *(_QWORD **)v28;
        if ( (*(_BYTE *)v30 & 2) != 0 )
          goto LABEL_33;
        v70 = *(_QWORD *)(v30 + 8);
        v71 = *(_QWORD *)(v30 + 16);
        if ( *(_QWORD *)(v30 + 24) < a3 )
          goto LABEL_102;
LABEL_99:
        v31 = (_QWORD *)v30;
        while ( (*(_BYTE *)v70 & 2) == 0 )
        {
          v30 = v70;
          v70 = *(_QWORD *)(v70 + 8);
          v71 = *(_QWORD *)(v30 + 16);
          if ( *(_QWORD *)(v30 + 24) >= a3 )
            goto LABEL_99;
LABEL_102:
          v70 = v71;
        }
        if ( v29 == v31 )
        {
LABEL_33:
          v31 = *(_QWORD **)v28;
          if ( !*(_QWORD *)(v28 + 8) )
            goto LABEL_61;
          goto LABEL_34;
        }
        if ( a3 < v31[3] )
        {
          if ( !*(_QWORD *)(v28 + 8) )
          {
LABEL_35:
            if ( (*v31 & 2) != 0 )
            {
              v31 = (_QWORD *)v31[2];
            }
            else
            {
              v32 = (_QWORD *)v31[1];
              if ( (*(_BYTE *)v32 & 2) != 0 )
              {
                v102 = (_QWORD *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
                v103 = *v102;
                if ( (*v102 & 2) != 0 || (_QWORD *)v102[1] != v31 )
                {
LABEL_140:
                  v31 = v102;
                }
                else
                {
                  while ( 1 )
                  {
                    v31 = (_QWORD *)(v103 & 0xFFFFFFFFFFFFFFFCLL);
                    v103 = *(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v103 & 2) != 0 )
                      break;
                    v104 = v102;
                    v102 = v31;
                    if ( (_QWORD *)v31[1] != v104 )
                      goto LABEL_140;
                  }
                }
              }
              else
              {
                do
                {
                  v31 = v32;
                  v32 = (_QWORD *)v32[2];
                }
                while ( (*(_BYTE *)v32 & 2) == 0 );
              }
            }
            if ( v31 == v29 )
              goto LABEL_61;
            goto LABEL_39;
          }
LABEL_34:
          if ( (_QWORD *)v29[1] == v31 )
            goto LABEL_61;
          goto LABEL_35;
        }
      }
      else
      {
        v31 = nullptr;
      }
LABEL_39:
      v33 = v31 + 3;
      if ( v31[3] >= a3 && v31[3] < a4 + a3 )
      {
        v115 = nullptr;
        v116 = 0;
        v34 = (__int64 *)v31[4];
        if ( 8LL * v31[5] )
        {
          v35 = 0;
          v36 = 0;
          v37 = 0;
          while ( 1 )
          {
            v39 = *v34;
            v113.m128i_i64[1] = 0xFFFFFFFEFFFFFFFELL;
            v40 = v35 + 1;
            v113.m128i_i64[0] = v39;
            if ( (unsigned __int64)&v113 < v37 || (unsigned __int64)&v113 >= v37 + 16 * v36 )
            {
              if ( v36 < v40 )
              {
                v72 = qvector_reserve((__int64)&v115, 0, v40, 16);
                v73 = v116.m128i_i64[1];
                v116.m128i_i64[1] = v36;
                v74 = v115;
                v75 = v116.m128i_i64[0] - 1;
                if ( v116.m128i_i64[0] - 1 >= 0 )
                {
                  v76 = v72;
                  do
                  {
                    v77 = _mm_loadu_si128(v74);
                    v76 += 16;
                    ++v74;
                    *(__m128i *)(v76 - 16) = v77;
                    v78 = v75-- == 0;
                  }
                  while ( !v78 );
                  v74 = v115;
                }
                v106 = v72;
                qfree((__int64)v74);
                v37 = v106;
                v35 = v116.m128i_i64[0];
                v115 = (const __m128i *)v106;
                v116.m128i_i64[1] = v73;
              }
              *(__m128i *)(v37 + 16 * v35) = _mm_load_si128(&v113);
            }
            else
            {
              if ( v36 < v40 )
              {
                v107 = v39;
                v95 = qvector_reserve((__int64)&v115, 0, v40, 16);
                v96 = v95;
                v97 = (__int64)v115;
                v98 = v116.m128i_i64[1];
                v116.m128i_i64[1] = v36;
                v99 = v116.m128i_i64[0] - 1;
                v100 = v115;
                if ( v116.m128i_i64[0] - 1 >= 0 )
                {
                  do
                  {
                    v101 = _mm_loadu_si128(v100);
                    v96 += 16;
                    ++v100;
                    *(__m128i *)(v96 - 16) = v101;
                    v78 = v99-- == 0;
                  }
                  while ( !v78 );
                  v97 = (__int64)v115;
                }
                v111 = v98;
                v110 = v95;
                qfree(v97);
                v37 = v110;
                v39 = v107;
                v115 = (const __m128i *)v110;
                v35 = v116.m128i_i64[0];
                v116.m128i_i64[1] = v111;
              }
              v38 = (__int64 *)(v37 + 16 * v35);
              *v38 = v39;
              v38[1] = 0xFFFFFFFEFFFFFFFELL;
            }
            ++v34;
            v35 = ++v116.m128i_i64[0];
            if ( v34 == (__int64 *)(v33[1] + 8LL * v33[2]) )
              break;
            v37 = (unsigned __int64)v115;
            v36 = v116.m128i_u64[1];
          }
        }
        v79 = (__m128i *)operator new(0x40u);
        ++*((_DWORD *)v15 + 26);
        v58 = v79;
        v80 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
        v79->m128i_i32[2] = 1;
        v79->m128i_i64[0] = (__int64)&off_4E7050;
        v79[1] = _mm_unpacklo_epi64(v80, (__m128i)(unsigned __int64)v15);
        ++*((_DWORD *)v15 + 26);
        v81 = v115;
        v82 = _mm_loadu_si128(&v116);
        v58[3].m128i_i32[2] = 0;
        v115 = nullptr;
        v58[2].m128i_i64[0] = (__int64)v81;
        v116 = 0;
        *(__m128i *)((char *)v58 + 40) = v82;
        v44 = (*((_DWORD *)v15 + 26))-- == 1;
        if ( v44 )
        {
          sub_258970(v15);
          if ( v15[23] )
          {
            v83 = v15[24];
            if ( v83 )
            {
              v84 = v15[23];
              for ( k = 0; k != v83; ++k )
              {
                v86 = (__int64 *)(v84 + 24 * k);
                v87 = *v86;
                if ( *v86 )
                {
                  v86[1] = 0;
                  qfree(v87);
                  v84 = v15[23];
                }
              }
            }
            else
            {
              v84 = v15[23];
            }
            v15[24] = 0;
            qfree(v84);
          }
          v88 = v15[20];
          if ( v88 )
          {
            v15[21] = 0;
            qfree(v88);
          }
          if ( v15[16] )
          {
            v89 = v15[17];
            if ( v89 )
            {
              v90 = v15[16];
              for ( m = 0; m != v89; ++m )
              {
                v92 = (__int64 *)(v90 + 32 * m);
                v93 = *v92;
                if ( *v92 )
                {
                  v92[1] = 0;
                  qfree(v93);
                  v90 = v15[16];
                }
              }
            }
            else
            {
              v90 = v15[16];
            }
            v15[17] = 0;
            qfree(v90);
          }
          sub_255050((__int64)(v15 + 2));
          j__qfree((__int64)v15);
          v94 = (__int64)v115;
          *a1 = (__int64)v58;
          if ( v94 )
          {
            v116.m128i_i64[0] = 0;
            qfree(v94);
          }
          goto LABEL_62;
        }
        goto LABEL_97;
      }
LABEL_61:
      *a1 = 0;
      goto LABEL_62;
    }
LABEL_145:
    if ( !under_debugger )
      sub_383060(0xC725u, 0.0);
    BUG();
  }
  if ( a5 != 6 )
    goto LABEL_145;
  v56 = (__m128i *)operator new(0x28u);
  ++*((_DWORD *)v15 + 26);
  v57 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  v58 = v56;
  v56->m128i_i32[2] = 1;
  v56->m128i_i64[0] = (__int64)&off_4E6E50;
  v56[1] = _mm_unpacklo_epi64(v57, (__m128i)(unsigned __int64)v15);
  ++*((_DWORD *)v15 + 26);
  v56[2].m128i_i32[0] = -1;
  v44 = (*((_DWORD *)v15 + 26))-- == 1;
  if ( v44 )
  {
    sub_258970(v15);
    v59 = v15[23];
    if ( v59 )
    {
      v60 = v15[24];
      v61 = 0;
      if ( v60 )
      {
        do
        {
          v62 = (__int64 *)(v59 + 24 * v61);
          v63 = *v62;
          if ( *v62 )
          {
            v62[1] = 0;
            qfree(v63);
            v59 = v15[23];
          }
          ++v61;
        }
        while ( v60 != v61 );
      }
      v15[24] = 0;
      qfree(v59);
    }
    v64 = v15[20];
    if ( v64 )
    {
      v15[21] = 0;
      qfree(v64);
    }
    v65 = v15[16];
    if ( v65 )
    {
      v66 = v15[17];
      v67 = 0;
      if ( v66 )
      {
        do
        {
          v68 = (__int64 *)(v65 + 32 * v67);
          v69 = *v68;
          if ( *v68 )
          {
            v68[1] = 0;
            qfree(v69);
            v65 = v15[16];
          }
          ++v67;
        }
        while ( v66 != v67 );
      }
      v15[17] = 0;
      qfree(v65);
    }
    sub_255050((__int64)(v15 + 2));
    j__qfree((__int64)v15);
  }
LABEL_97:
  *a1 = (__int64)v58;
LABEL_62:
  v44 = (*((_DWORD *)v15 + 26))-- == 1;
  if ( v44 )
  {
    sub_258970(v15);
    v45 = v15[23];
    if ( v45 )
    {
      v46 = v15[24];
      if ( v46 )
      {
        for ( n = 0; n != v46; ++n )
        {
          v48 = (__int64 *)(v45 + 24 * n);
          v49 = *v48;
          if ( *v48 )
          {
            v48[1] = 0;
            qfree(v49);
            v45 = v15[23];
          }
        }
      }
      v15[24] = 0;
      qfree(v45);
    }
    v50 = v15[20];
    if ( v50 )
    {
      v15[21] = 0;
      qfree(v50);
    }
    v51 = v15[16];
    if ( v51 )
    {
      v52 = v15[17];
      if ( v52 )
      {
        for ( ii = 0; ii != v52; ++ii )
        {
          v54 = (__int64 *)(v51 + 32 * ii);
          v55 = *v54;
          if ( *v54 )
          {
            v54[1] = 0;
            qfree(v55);
            v51 = v15[16];
          }
        }
      }
      v15[17] = 0;
      qfree(v51);
    }
    sub_255050((__int64)(v15 + 2));
    j__qfree((__int64)v15);
  }
  return a1;
}
