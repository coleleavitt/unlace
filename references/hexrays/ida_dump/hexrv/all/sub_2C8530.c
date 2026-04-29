unsigned __int64 __fastcall sub_2C8530(_QWORD *a1, _QWORD *m128i_i64, char a3, __int64 a4)
{
  _QWORD *v4; // r15
  bool v5; // zf
  unsigned __int64 v6; // rbx
  __int64 *v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __m128i *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD *); // rax
  __int64 v20; // rbx
  __int64 j; // r14
  _QWORD *v22; // r15
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // rdx
  _QWORD *v27; // rbp
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rbx
  __int64 v30; // rbp
  unsigned __int64 v31; // rdi
  bool (__fastcall *v32)(__int64); // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  _QWORD *v36; // rsi
  __int64 (__fastcall *v37)(__int64, _QWORD *); // rcx
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rcx
  __m128i v41; // xmm0
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 (__fastcall *v46)(__int64, _QWORD *); // rcx
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // rcx
  __m128i v50; // xmm0
  __int64 v51; // r9
  unsigned __int64 v52; // rdi
  __int64 (__fastcall *v53)(__int64, _QWORD *); // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  unsigned __int64 v59; // r13
  unsigned __int64 v60; // rdi
  bool (__fastcall *v61)(__int64); // rax
  unsigned __int64 v63; // r13
  __int64 *v64; // r12
  __m128i *v65; // r14
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 (__fastcall *v75)(__int64, __m128i *); // rcx
  __int64 v76; // rsi
  __int64 i; // rbx
  _QWORD *v78; // r13
  __int64 v79; // rdi
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rdi
  __int64 (__fastcall *v83)(__int64, _QWORD *); // rax
  __int64 v84; // rax
  __int64 v85; // r10
  __int64 v86; // rax
  __m128i v87; // xmm0
  __int64 v88; // r10
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // r12
  __int64 v92; // rbp
  __int64 v93; // rax
  _QWORD *v94; // rdi
  _QWORD *v96; // [rsp+0h] [rbp-88h]
  __int64 v97; // [rsp+0h] [rbp-88h]
  unsigned __int64 v98; // [rsp+0h] [rbp-88h]
  __int64 v99; // [rsp+0h] [rbp-88h]
  __int64 v100; // [rsp+0h] [rbp-88h]
  __int64 *v101; // [rsp+8h] [rbp-80h]
  unsigned __int64 v102; // [rsp+10h] [rbp-78h]
  _QWORD *v103; // [rsp+10h] [rbp-78h]
  unsigned __int64 v104; // [rsp+10h] [rbp-78h]
  __int64 v105; // [rsp+10h] [rbp-78h]
  _QWORD *v106; // [rsp+18h] [rbp-70h]
  __int64 v107; // [rsp+18h] [rbp-70h]
  unsigned __int64 v109; // [rsp+20h] [rbp-68h]
  __int64 v110; // [rsp+30h] [rbp-58h] BYREF
  __int128 v111; // [rsp+38h] [rbp-50h]
  unsigned __int64 v112; // [rsp+48h] [rbp-40h]

  v4 = a1;
  v5 = a1[14] == 0;
  v101 = m128i_i64;
  v112 = __readfsqword(0x28u);
  v6 = a1[12];
  if ( !v5 )
  {
    m128i_i64 = (_QWORD *)a1[12];
    v110 = 0;
    v111 = 0;
    sub_2C80B0(&v110, v6);
    v63 = 0;
    v64 = a1 + 2;
    if ( a1[1] )
    {
      do
      {
        switch_dbctx(*(int *)(v101[v63] + 8));
        v65 = (__m128i *)*v64;
        v66 = *v64 + 72 * v64[1];
        if ( *v64 != v66 )
        {
          do
          {
            while ( 1 )
            {
              v74 = v110 + (v65[4].m128i_i64[0] << 6);
              v75 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v74 + 8LL);
              if ( (char *)v75 != (char *)sub_2A8470 )
                break;
              v67 = v65->m128i_i64[1];
              v68 = *(_QWORD *)(v74 + 8);
              v65 = (__m128i *)((char *)v65 + 72);
              *(_QWORD *)(v74 + 8) = v67;
              v69 = v65[-4].m128i_i64[1];
              v65[-4].m128i_i64[0] = v68;
              v70 = *(_QWORD *)(v74 + 16);
              *(_QWORD *)(v74 + 16) = v69;
              v71 = _mm_loadu_si128((const __m128i *)(v74 + 24));
              *(_QWORD *)(v74 + 24) = v65[-3].m128i_i64[0];
              *(_QWORD *)(v74 + 32) = v65[-3].m128i_i64[1];
              v72 = v65[-2].m128i_i64[0];
              v65[-4].m128i_i64[1] = v70;
              v65[-3] = v71;
              v73 = *(_QWORD *)(v74 + 40);
              *(_QWORD *)(v74 + 40) = v72;
              v65[-2].m128i_i64[0] = v73;
              if ( (__m128i *)v66 == v65 )
                goto LABEL_52;
            }
            v97 = v66;
            v75(v74, v65);
            v66 = v97;
            v65 = (__m128i *)((char *)v65 + 72);
          }
          while ( (__m128i *)v97 != v65 );
LABEL_52:
          v66 = *v64;
        }
        if ( v66 )
        {
          v76 = v64[1];
          if ( v76 )
          {
            v98 = v63;
            v104 = v6;
            for ( i = 0; i != v76; ++i )
            {
              v78 = (_QWORD *)(v66 + 72 * i);
              *v78 = off_4B3EF0;
              clear_tinfo_t(v78 + 5);
              v79 = v78[2];
              if ( v79 )
              {
                v78[3] = 0;
                qfree(v79);
              }
              v66 = *v64;
            }
            v63 = v98;
            v6 = v104;
          }
          v64[1] = 0;
          qfree(v66);
          *v64 = 0;
          v64[2] = 0;
        }
        m128i_i64 = (_QWORD *)(v6 - v4[14]);
        v99 = v101[v63];
        sub_2C80B0((_QWORD *)(v99 + 40), (unsigned __int64)m128i_i64);
        v80 = v99;
        if ( v6 )
        {
          v81 = 0;
          a4 = 0;
          do
          {
            if ( *(_DWORD *)(v4[11] + 4 * v81) )
            {
              v82 = *(_QWORD *)(v80 + 40) + (a4 << 6);
              m128i_i64 = (_QWORD *)(v110 + (v81 << 6));
              v83 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v82 + 8LL);
              if ( v83 == sub_2A8470 )
              {
                v84 = *(_QWORD *)(v82 + 8);
                *(_QWORD *)(v82 + 8) = m128i_i64[1];
                v85 = m128i_i64[2];
                m128i_i64[1] = v84;
                v86 = *(_QWORD *)(v82 + 16);
                *(_QWORD *)(v82 + 16) = v85;
                v87 = _mm_loadu_si128((const __m128i *)(v82 + 24));
                *(_QWORD *)(v82 + 24) = m128i_i64[3];
                *(_QWORD *)(v82 + 32) = m128i_i64[4];
                v88 = m128i_i64[5];
                m128i_i64[2] = v86;
                *(__m128i *)(m128i_i64 + 3) = v87;
                v89 = *(_QWORD *)(v82 + 40);
                *(_QWORD *)(v82 + 40) = v88;
                m128i_i64[5] = v89;
              }
              else
              {
                v107 = v81;
                v105 = a4;
                v100 = v80;
                v83(v82, m128i_i64);
                v80 = v100;
                a4 = v105;
                v81 = v107;
              }
              ++a4;
            }
            ++v81;
          }
          while ( v81 != v6 );
        }
        else
        {
          a4 = 0;
        }
        if ( a4 != *(_QWORD *)(v80 + 48) )
        {
          if ( !under_debugger )
            sub_37DDE0(1962);
          BUG();
        }
        ++v63;
        v64 += 3;
      }
      while ( v63 < v4[1] );
    }
    v90 = v110;
    if ( v110 )
    {
      v91 = v111;
      if ( (_QWORD)v111 )
      {
        v92 = 0;
        do
        {
          v93 = v92++;
          v94 = (_QWORD *)((v93 << 6) + v90);
          *v94 = off_4B3EF0;
          sub_2B0560(v94 + 2);
          v90 = v110;
        }
        while ( v91 != v92 );
      }
      *(_QWORD *)&v111 = 0;
      qfree(v90);
    }
LABEL_19:
    if ( a3 )
    {
      v96 = nullptr;
      v24 = *v101;
      v25 = v101[1];
      v26 = *v101 + 40;
      v27 = (_QWORD *)(v25 + 40);
      v103 = (_QWORD *)v26;
      if ( v4[1] > 2u )
        v96 = (_QWORD *)(v101[2] + 40);
      goto LABEL_22;
    }
    return v112 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v102 = a1[12];
    v7 = a1 + 2;
    v8 = 0;
    do
    {
      switch_dbctx(*(int *)(v101[v8] + 8));
      v9 = v101[v8];
      m128i_i64 = (_QWORD *)v102;
      sub_2C80B0((_QWORD *)(v9 + 40), v102);
      v10 = (__m128i *)*v7;
      v11 = *v7 + 72 * v7[1];
      if ( *v7 != v11 )
      {
        do
        {
          while ( 1 )
          {
            v18 = *(_QWORD *)(v9 + 40) + (v10[4].m128i_i64[0] << 6);
            v19 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 8LL);
            if ( v19 != sub_2A8470 )
              break;
            v12 = v10->m128i_i64[1];
            v13 = *(_QWORD *)(v18 + 8);
            v10 = (__m128i *)((char *)v10 + 72);
            *(_QWORD *)(v18 + 8) = v12;
            v14 = v10[-4].m128i_i64[1];
            v10[-4].m128i_i64[0] = v13;
            v15 = *(_QWORD *)(v18 + 16);
            *(_QWORD *)(v18 + 16) = v14;
            v16 = _mm_loadu_si128((const __m128i *)(v18 + 24));
            *(_QWORD *)(v18 + 24) = v10[-3].m128i_i64[0];
            *(_QWORD *)(v18 + 32) = v10[-3].m128i_i64[1];
            m128i_i64 = (_QWORD *)v10[-2].m128i_i64[0];
            v10[-4].m128i_i64[1] = v15;
            v10[-3] = v16;
            v17 = *(_QWORD *)(v18 + 40);
            *(_QWORD *)(v18 + 40) = m128i_i64;
            v10[-2].m128i_i64[0] = v17;
            if ( v10 == (__m128i *)v11 )
              goto LABEL_9;
          }
          m128i_i64 = v10->m128i_i64;
          v10 = (__m128i *)((char *)v10 + 72);
          v19(v18, m128i_i64);
        }
        while ( v10 != (__m128i *)v11 );
LABEL_9:
        v11 = *v7;
      }
      if ( v11 )
      {
        v20 = v7[1];
        if ( v20 )
        {
          for ( j = 0; j != v20; ++j )
          {
            v22 = (_QWORD *)(v11 + 72 * j);
            *v22 = off_4B3EF0;
            clear_tinfo_t(v22 + 5);
            v23 = v22[2];
            if ( v23 )
            {
              v22[3] = 0;
              qfree(v23);
            }
            v11 = *v7;
          }
        }
        v7[1] = 0;
        qfree(v11);
        *v7 = 0;
        v7[2] = 0;
      }
      ++v8;
      v7 += 3;
    }
    while ( v8 < a1[1] );
    v4 = a1;
    goto LABEL_19;
  }
  if ( !a3 )
    return v112 - __readfsqword(0x28u);
  v96 = nullptr;
  v24 = *m128i_i64;
  v25 = m128i_i64[1];
  v26 = *m128i_i64 + 40LL;
  v27 = (_QWORD *)(v25 + 40);
  v103 = (_QWORD *)v26;
LABEL_22:
  v28 = *(_QWORD *)(v24 + 48);
  if ( !v28 )
    goto LABEL_42;
  v106 = v27;
  v29 = 0;
  v28 = 0;
  v30 = v25;
  do
  {
    v59 = v29 << 6;
    v60 = (v29 << 6) + *(_QWORD *)(v24 + 40);
    v61 = **(bool (__fastcall ***)(__int64))v60;
    if ( v61 == sub_2A85C0 )
    {
      if ( *(_QWORD *)(v60 + 8) != *(_QWORD *)(v60 + 48) )
        goto LABEL_27;
    }
    else if ( ((unsigned __int8 (__fastcall *)(unsigned __int64, _QWORD *, __int64, __int64, bool (__fastcall *)(__int64)))v61)(
                v60,
                m128i_i64,
                v26,
                a4,
                sub_2A85C0) )
    {
      goto LABEL_27;
    }
    v31 = v59 + *(_QWORD *)(v30 + 40);
    v32 = **(bool (__fastcall ***)(__int64))v31;
    if ( v32 == sub_2A85C0 )
    {
      if ( *(_QWORD *)(v31 + 8) == *(_QWORD *)(v31 + 48) )
        goto LABEL_36;
    }
    else if ( !((unsigned __int8 (__fastcall *)(unsigned __int64, _QWORD *, __int64, __int64, bool (__fastcall *)(__int64)))v32)(
                 v31,
                 m128i_i64,
                 v26,
                 a4,
                 sub_2A85C0) )
    {
      goto LABEL_36;
    }
LABEL_27:
    if ( v28 < v29 )
    {
      v33 = *(_QWORD *)(v24 + 40);
      v34 = v28 << 6;
      v35 = v33 + (v28 << 6);
      v36 = (_QWORD *)(v59 + v33);
      v37 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v35 + 8LL);
      if ( v37 == sub_2A8470 )
      {
        v38 = *(_QWORD *)(v35 + 8);
        *(_QWORD *)(v35 + 8) = v36[1];
        v39 = v36[2];
        v36[1] = v38;
        v40 = *(_QWORD *)(v35 + 16);
        *(_QWORD *)(v35 + 16) = v39;
        v41 = _mm_loadu_si128((const __m128i *)(v35 + 24));
        *(_QWORD *)(v35 + 24) = v36[3];
        *(_QWORD *)(v35 + 32) = v36[4];
        v42 = v36[5];
        v36[2] = v40;
        *(__m128i *)(v36 + 3) = v41;
        v43 = *(_QWORD *)(v35 + 40);
        *(_QWORD *)(v35 + 40) = v42;
        v36[5] = v43;
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64 (__fastcall *)(__int64, _QWORD *), bool (__fastcall *)(__int64)))v37)(
          v35,
          v36,
          v26,
          v37,
          sub_2A85C0);
        v34 = v28 << 6;
      }
      v44 = *(_QWORD *)(v30 + 40);
      v45 = v44 + v34;
      m128i_i64 = (_QWORD *)(v59 + v44);
      v46 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v45 + 8LL);
      if ( v46 == sub_2A8470 )
      {
        v47 = *(_QWORD *)(v45 + 8);
        *(_QWORD *)(v45 + 8) = m128i_i64[1];
        v48 = m128i_i64[2];
        m128i_i64[1] = v47;
        v49 = *(_QWORD *)(v45 + 16);
        *(_QWORD *)(v45 + 16) = v48;
        v50 = _mm_loadu_si128((const __m128i *)(v45 + 24));
        *(_QWORD *)(v45 + 24) = m128i_i64[3];
        *(_QWORD *)(v45 + 32) = m128i_i64[4];
        v51 = m128i_i64[5];
        m128i_i64[2] = v49;
        *(__m128i *)(m128i_i64 + 3) = v50;
        a4 = *(_QWORD *)(v45 + 40);
        *(_QWORD *)(v45 + 40) = v51;
        m128i_i64[5] = a4;
      }
      else
      {
        v109 = v34;
        ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64 (__fastcall *)(__int64, _QWORD *), bool (__fastcall *)(__int64)))v46)(
          v45,
          m128i_i64,
          v26,
          v46,
          sub_2A85C0);
        v34 = v109;
      }
      if ( v96 )
      {
        v52 = *v96 + v34;
        m128i_i64 = (_QWORD *)(v59 + *v96);
        v53 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v52 + 8LL);
        if ( v53 == sub_2A8470 )
        {
          v54 = *(_QWORD *)(v52 + 8);
          *(_QWORD *)(v52 + 8) = m128i_i64[1];
          v55 = m128i_i64[2];
          m128i_i64[1] = v54;
          v56 = *(_QWORD *)(v52 + 16);
          *(_QWORD *)(v52 + 16) = v55;
          v57 = _mm_loadu_si128((const __m128i *)(v52 + 24));
          *(_QWORD *)(v52 + 24) = m128i_i64[3];
          *(_QWORD *)(v52 + 32) = m128i_i64[4];
          a4 = m128i_i64[5];
          m128i_i64[2] = v56;
          *(__m128i *)(m128i_i64 + 3) = v57;
          v58 = *(_QWORD *)(v52 + 40);
          *(_QWORD *)(v52 + 40) = a4;
          m128i_i64[5] = v58;
        }
        else
        {
          ((void (__fastcall *)(unsigned __int64, _QWORD *, __int64, __int64, bool (__fastcall *)(__int64)))v53)(
            v52,
            m128i_i64,
            v26,
            a4,
            sub_2A85C0);
        }
      }
    }
    ++v28;
LABEL_36:
    ++v29;
  }
  while ( v29 < *(_QWORD *)(v24 + 48) );
  v27 = v106;
  v24 = *v101;
LABEL_42:
  switch_dbctx(*(int *)(v24 + 8));
  sub_2C80B0(v103, v28);
  switch_dbctx(*(int *)(v101[1] + 8));
  sub_2C80B0(v27, v28);
  if ( !v96 )
    return v112 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(v101[2] + 8));
  return sub_2C80B0(v96, v28);
}
