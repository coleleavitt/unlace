__m128i **__fastcall sub_3A8980(__m128i **a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned __int64 *func; // rax
  unsigned __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 i; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 j; // rdx
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rsi
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  _QWORD *v31; // rbp
  __int64 *v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __m128i *v39; // rax
  __int64 v40; // rdx
  bool v42; // zf
  __int64 v43; // rdi
  __int64 v44; // r13
  __int64 n; // rbp
  __int64 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // r13
  __int64 ii; // rbp
  __int64 *v52; // rax
  __int64 v53; // rdx
  __m128i *v54; // rax
  __m128i v55; // xmm0
  __m128i *v56; // rbp
  __int64 v57; // rdi
  __int64 v58; // r14
  __int64 v59; // r13
  __int64 *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // r13
  __int64 v65; // r14
  __int64 *v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rsi
  const __m128i *v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rdx
  __m128i v75; // xmm0
  bool v76; // cf
  __m128i *v77; // rax
  __m128i v78; // xmm0
  const __m128i *v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // r14
  __int64 v82; // rdi
  __int64 k; // r13
  __int64 *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // r14
  __int64 v88; // rdi
  __int64 m; // r13
  __int64 *v90; // rax
  __int64 v91; // rdx
  const __m128i *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rdx
  const __m128i *v95; // rdi
  __int64 v96; // r9
  __int64 v97; // rax
  const __m128i *v98; // rsi
  __m128i v99; // xmm0
  _QWORD *v100; // rax
  __int64 v101; // rdx
  _QWORD *v102; // rdi
  __int64 v104; // [rsp+8h] [rbp-C0h]
  __int64 v105; // [rsp+8h] [rbp-C0h]
  __int64 v106; // [rsp+20h] [rbp-A8h]
  __int64 v107; // [rsp+20h] [rbp-A8h]
  __int64 v108; // [rsp+20h] [rbp-A8h]
  __int64 v109; // [rsp+28h] [rbp-A0h]
  __int64 *v110; // [rsp+38h] [rbp-90h] BYREF
  __m128i v111; // [rsp+40h] [rbp-88h] BYREF
  __int128 v112; // [rsp+50h] [rbp-78h]
  const __m128i *v113; // [rsp+60h] [rbp-68h] BYREF
  __m128i v114; // [rsp+68h] [rbp-60h] BYREF
  __int128 v115; // [rsp+78h] [rbp-50h]
  unsigned __int64 v116; // [rsp+88h] [rbp-40h]

  v116 = __readfsqword(0x28u);
  if ( a5 == 5 )
    goto LABEL_51;
  func = (unsigned __int64 *)get_func(a3);
  v12 = func;
  if ( !func )
  {
LABEL_58:
    *a1 = nullptr;
    return a1;
  }
  if ( a5 == 2 )
  {
LABEL_51:
    v39 = (__m128i *)operator new(0x38u);
    v40 = *(_QWORD *)(a2 + 40);
    v39[1].m128i_i64[1] = a3;
    v39->m128i_i32[2] = 1;
    v39->m128i_i64[0] = (__int64)&off_4E1610;
    v39[1].m128i_i64[0] = v40;
    v39[2].m128i_i64[0] = a3 + a4;
    v39[2].m128i_i64[1] = -1;
    v39[3].m128i_i32[0] = a5;
    v39[3].m128i_i8[4] = 1;
    *a1 = v39;
    return a1;
  }
  if ( !a6 && !sub_13D6E0(*(_QWORD *)(a2 + 40), *func) )
    goto LABEL_58;
  v13 = *(_QWORD *)(a2 + 40);
  v113 = nullptr;
  v114 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v111 = (__m128i)(unsigned __int64)v12;
  v115 = 0;
  v112 = 0;
  sub_14C800(&v110, v13, &v111, &v113, 0);
  v15 = v110;
  if ( !v110 )
  {
    if ( v111.m128i_i64[1] )
    {
      *(_QWORD *)&v112 = 0;
      qfree(v111.m128i_i64[1]);
    }
    if ( a6 )
    {
      sub_331410((__int64)&v111, (__int64)&v113, v14);
      sub_6CAE0((__int64)"%a: %s\n", 0.0, (const char *)v114.m128i_i64[0]);
      if ( v111.m128i_i64[0] )
      {
        v111.m128i_i64[1] = 0;
        qfree(v111.m128i_i64[0]);
      }
    }
    if ( v114.m128i_i64[1] )
    {
      *(_QWORD *)&v115 = 0;
      qfree(v114.m128i_i64[1]);
    }
    goto LABEL_58;
  }
  if ( *((_DWORD *)v110 + 26) )
  {
    v25 = v111.m128i_i64[1];
    if ( v111.m128i_i64[1] )
    {
LABEL_25:
      *(_QWORD *)&v112 = 0;
      qfree(v25);
    }
  }
  else
  {
    sub_258D30(v110);
    v16 = v15[23];
    if ( v16 )
    {
      v13 = v15[24];
      if ( v13 )
      {
        for ( i = 0; i != v13; ++i )
        {
          v18 = (__int64 *)(v16 + 24 * i);
          v19 = *v18;
          if ( *v18 )
          {
            v18[1] = 0;
            v106 = i;
            qfree(v19);
            i = v106;
            v16 = v15[23];
          }
        }
      }
      v15[24] = 0;
      qfree(v16);
    }
    v20 = v15[20];
    if ( v20 )
    {
      v15[21] = 0;
      qfree(v20);
    }
    v21 = v15[16];
    if ( v21 )
    {
      v13 = v15[17];
      if ( v13 )
      {
        for ( j = 0; j != v13; ++j )
        {
          v23 = (__int64 *)(v21 + 32 * j);
          v24 = *v23;
          if ( *v23 )
          {
            v23[1] = 0;
            v107 = j;
            qfree(v24);
            j = v107;
            v21 = v15[16];
          }
        }
      }
      v15[17] = 0;
      qfree(v21);
    }
    sub_255410((__int64)(v15 + 2));
    j__qfree(v15);
    v25 = v111.m128i_i64[1];
    if ( v111.m128i_i64[1] )
      goto LABEL_25;
  }
  if ( v114.m128i_i64[1] )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114.m128i_i64[1]);
  }
  if ( a5 <= 5 )
  {
    if ( a5 - 3 <= 1 )
    {
      v26 = sub_2583D0((__int64)v15);
      v27 = *(_QWORD **)v26;
      if ( !*(_QWORD *)v26 )
        goto LABEL_61;
      v28 = *v27 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v28 )
      {
        v29 = *(_QWORD **)v26;
        if ( (*(_BYTE *)v28 & 2) != 0 )
          goto LABEL_33;
        v68 = *(_QWORD *)(v28 + 8);
        v69 = *(_QWORD *)(v28 + 16);
        if ( *(_QWORD *)(v28 + 24) < a3 )
          goto LABEL_102;
LABEL_99:
        v29 = (_QWORD *)v28;
        while ( (*(_BYTE *)v68 & 2) == 0 )
        {
          v28 = v68;
          v68 = *(_QWORD *)(v68 + 8);
          v69 = *(_QWORD *)(v28 + 16);
          if ( *(_QWORD *)(v28 + 24) >= a3 )
            goto LABEL_99;
LABEL_102:
          v68 = v69;
        }
        if ( v27 == v29 )
        {
LABEL_33:
          v29 = *(_QWORD **)v26;
          if ( !*(_QWORD *)(v26 + 8) )
            goto LABEL_61;
          goto LABEL_34;
        }
        if ( a3 < v29[3] )
        {
          if ( !*(_QWORD *)(v26 + 8) )
          {
LABEL_35:
            if ( (*v29 & 2) != 0 )
            {
              v29 = (_QWORD *)v29[2];
            }
            else
            {
              v30 = (_QWORD *)v29[1];
              if ( (*(_BYTE *)v30 & 2) != 0 )
              {
                v100 = (_QWORD *)(*v29 & 0xFFFFFFFFFFFFFFFCLL);
                v101 = *v100;
                if ( (*v100 & 2) != 0 || (_QWORD *)v100[1] != v29 )
                {
LABEL_140:
                  v29 = v100;
                }
                else
                {
                  while ( 1 )
                  {
                    v29 = (_QWORD *)(v101 & 0xFFFFFFFFFFFFFFFCLL);
                    v101 = *(_QWORD *)(v101 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v101 & 2) != 0 )
                      break;
                    v102 = v100;
                    v100 = v29;
                    if ( (_QWORD *)v29[1] != v102 )
                      goto LABEL_140;
                  }
                }
              }
              else
              {
                do
                {
                  v29 = v30;
                  v30 = (_QWORD *)v30[2];
                }
                while ( (*(_BYTE *)v30 & 2) == 0 );
              }
            }
            if ( v29 == v27 )
              goto LABEL_61;
            goto LABEL_39;
          }
LABEL_34:
          if ( (_QWORD *)v27[1] == v29 )
            goto LABEL_61;
          goto LABEL_35;
        }
      }
      else
      {
        v29 = nullptr;
      }
LABEL_39:
      v31 = v29 + 3;
      if ( v29[3] >= a3 && v29[3] < a4 + a3 )
      {
        v113 = nullptr;
        v114 = 0;
        v32 = (__int64 *)v29[4];
        if ( 8LL * v29[5] )
        {
          v33 = 0;
          v34 = 0;
          v35 = 0;
          while ( 1 )
          {
            v37 = *v32;
            v111.m128i_i64[1] = 0xFFFFFFFEFFFFFFFELL;
            v38 = v33 + 1;
            v111.m128i_i64[0] = v37;
            if ( (unsigned __int64)&v111 < v35 || (unsigned __int64)&v111 >= v35 + 16 * v34 )
            {
              if ( v34 < v38 )
              {
                v70 = qvector_reserve(&v113, 0, v38, 16);
                v71 = v114.m128i_i64[1];
                v114.m128i_i64[1] = v34;
                v72 = v113;
                v73 = v114.m128i_i64[0] - 1;
                if ( v114.m128i_i64[0] - 1 >= 0 )
                {
                  v74 = v70;
                  do
                  {
                    v75 = _mm_loadu_si128(v72);
                    v74 += 16;
                    ++v72;
                    *(__m128i *)(v74 - 16) = v75;
                    v76 = v73-- == 0;
                  }
                  while ( !v76 );
                  v72 = v113;
                }
                v104 = v70;
                qfree(v72);
                v35 = v104;
                v33 = v114.m128i_i64[0];
                v113 = (const __m128i *)v104;
                v114.m128i_i64[1] = v71;
              }
              *(__m128i *)(v35 + 16 * v33) = _mm_load_si128(&v111);
            }
            else
            {
              if ( v34 < v38 )
              {
                v105 = v37;
                v93 = qvector_reserve(&v113, 0, v38, 16);
                v94 = v93;
                v95 = v113;
                v96 = v114.m128i_i64[1];
                v114.m128i_i64[1] = v34;
                v97 = v114.m128i_i64[0] - 1;
                v98 = v113;
                if ( v114.m128i_i64[0] - 1 >= 0 )
                {
                  do
                  {
                    v99 = _mm_loadu_si128(v98);
                    v94 += 16;
                    ++v98;
                    *(__m128i *)(v94 - 16) = v99;
                    v76 = v97-- == 0;
                  }
                  while ( !v76 );
                  v95 = v113;
                }
                v109 = v96;
                v108 = v93;
                qfree(v95);
                v35 = v108;
                v37 = v105;
                v113 = (const __m128i *)v108;
                v33 = v114.m128i_i64[0];
                v114.m128i_i64[1] = v109;
              }
              v36 = (__int64 *)(v35 + 16 * v33);
              *v36 = v37;
              v36[1] = 0xFFFFFFFEFFFFFFFELL;
            }
            ++v32;
            v33 = ++v114.m128i_i64[0];
            if ( v32 == (__int64 *)(v31[1] + 8LL * v31[2]) )
              break;
            v35 = (unsigned __int64)v113;
            v34 = v114.m128i_u64[1];
          }
        }
        v77 = (__m128i *)operator new(0x40u);
        ++*((_DWORD *)v15 + 26);
        v56 = v77;
        v78 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
        v77->m128i_i32[2] = 1;
        v77->m128i_i64[0] = (__int64)&off_4E1710;
        v77[1] = _mm_unpacklo_epi64(v78, (__m128i)(unsigned __int64)v15);
        ++*((_DWORD *)v15 + 26);
        v79 = v113;
        v80 = _mm_loadu_si128(&v114);
        v56[3].m128i_i32[2] = 0;
        v113 = nullptr;
        v56[2].m128i_i64[0] = (__int64)v79;
        v114 = 0;
        *(__m128i *)((char *)v56 + 40) = v80;
        v42 = (*((_DWORD *)v15 + 26))-- == 1;
        if ( v42 )
        {
          sub_258D30(v15);
          if ( v15[23] )
          {
            v81 = v15[24];
            if ( v81 )
            {
              v82 = v15[23];
              for ( k = 0; k != v81; ++k )
              {
                v84 = (__int64 *)(v82 + 24 * k);
                v85 = *v84;
                if ( *v84 )
                {
                  v84[1] = 0;
                  qfree(v85);
                  v82 = v15[23];
                }
              }
            }
            else
            {
              v82 = v15[23];
            }
            v15[24] = 0;
            qfree(v82);
          }
          v86 = v15[20];
          if ( v86 )
          {
            v15[21] = 0;
            qfree(v86);
          }
          if ( v15[16] )
          {
            v87 = v15[17];
            if ( v87 )
            {
              v88 = v15[16];
              for ( m = 0; m != v87; ++m )
              {
                v90 = (__int64 *)(v88 + 32 * m);
                v91 = *v90;
                if ( *v90 )
                {
                  v90[1] = 0;
                  qfree(v91);
                  v88 = v15[16];
                }
              }
            }
            else
            {
              v88 = v15[16];
            }
            v15[17] = 0;
            qfree(v88);
          }
          sub_255410((__int64)(v15 + 2));
          j__qfree(v15);
          v92 = v113;
          *a1 = v56;
          if ( v92 )
          {
            v114.m128i_i64[0] = 0;
            qfree(v92);
          }
          goto LABEL_62;
        }
        goto LABEL_97;
      }
LABEL_61:
      *a1 = nullptr;
      goto LABEL_62;
    }
LABEL_145:
    if ( !under_debugger )
      sub_3835A0(0xC725u, v13, 0.0);
    BUG();
  }
  if ( a5 != 6 )
    goto LABEL_145;
  v54 = (__m128i *)operator new(0x28u);
  ++*((_DWORD *)v15 + 26);
  v55 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  v56 = v54;
  v54->m128i_i32[2] = 1;
  v54->m128i_i64[0] = (__int64)&off_4E1510;
  v54[1] = _mm_unpacklo_epi64(v55, (__m128i)(unsigned __int64)v15);
  ++*((_DWORD *)v15 + 26);
  v54[2].m128i_i32[0] = -1;
  v42 = (*((_DWORD *)v15 + 26))-- == 1;
  if ( v42 )
  {
    sub_258D30(v15);
    v57 = v15[23];
    if ( v57 )
    {
      v58 = v15[24];
      v59 = 0;
      if ( v58 )
      {
        do
        {
          v60 = (__int64 *)(v57 + 24 * v59);
          v61 = *v60;
          if ( *v60 )
          {
            v60[1] = 0;
            qfree(v61);
            v57 = v15[23];
          }
          ++v59;
        }
        while ( v58 != v59 );
      }
      v15[24] = 0;
      qfree(v57);
    }
    v62 = v15[20];
    if ( v62 )
    {
      v15[21] = 0;
      qfree(v62);
    }
    v63 = v15[16];
    if ( v63 )
    {
      v64 = v15[17];
      v65 = 0;
      if ( v64 )
      {
        do
        {
          v66 = (__int64 *)(v63 + 32 * v65);
          v67 = *v66;
          if ( *v66 )
          {
            v66[1] = 0;
            qfree(v67);
            v63 = v15[16];
          }
          ++v65;
        }
        while ( v64 != v65 );
      }
      v15[17] = 0;
      qfree(v63);
    }
    sub_255410((__int64)(v15 + 2));
    j__qfree(v15);
  }
LABEL_97:
  *a1 = v56;
LABEL_62:
  v42 = (*((_DWORD *)v15 + 26))-- == 1;
  if ( v42 )
  {
    sub_258D30(v15);
    v43 = v15[23];
    if ( v43 )
    {
      v44 = v15[24];
      if ( v44 )
      {
        for ( n = 0; n != v44; ++n )
        {
          v46 = (__int64 *)(v43 + 24 * n);
          v47 = *v46;
          if ( *v46 )
          {
            v46[1] = 0;
            qfree(v47);
            v43 = v15[23];
          }
        }
      }
      v15[24] = 0;
      qfree(v43);
    }
    v48 = v15[20];
    if ( v48 )
    {
      v15[21] = 0;
      qfree(v48);
    }
    v49 = v15[16];
    if ( v49 )
    {
      v50 = v15[17];
      if ( v50 )
      {
        for ( ii = 0; ii != v50; ++ii )
        {
          v52 = (__int64 *)(v49 + 32 * ii);
          v53 = *v52;
          if ( *v52 )
          {
            v52[1] = 0;
            qfree(v53);
            v49 = v15[16];
          }
        }
      }
      v15[17] = 0;
      qfree(v49);
    }
    sub_255410((__int64)(v15 + 2));
    j__qfree(v15);
  }
  return a1;
}
