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
  _QWORD *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 j; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rsi
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  _QWORD *v29; // rbp
  __int64 *v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  bool v40; // zf
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 n; // rbp
  _QWORD *v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // r13
  __int64 ii; // rbp
  _QWORD *v48; // rax
  __m128i *v49; // rax
  __m128i v50; // xmm0
  __m128i *v51; // rbp
  __int64 v52; // rdi
  __int64 v53; // r14
  __int64 v54; // r13
  _QWORD *v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // r13
  __int64 v58; // r14
  _QWORD *v59; // rax
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rsi
  const __m128i *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __m128i v67; // xmm0
  bool v68; // cf
  __m128i *v69; // rax
  __m128i v70; // xmm0
  const __m128i *v71; // rax
  __m128i v72; // xmm0
  __int64 v73; // r14
  __int64 v74; // rdi
  __int64 k; // r13
  _QWORD *v76; // rdx
  __int64 v77; // r14
  __int64 v78; // rdi
  __int64 m; // r13
  _QWORD *v80; // rax
  const __m128i *v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r9
  __int64 v85; // rax
  const __m128i *v86; // rsi
  __m128i v87; // xmm0
  _QWORD *v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // rdi
  __int64 v92; // [rsp+8h] [rbp-C0h]
  __int64 v93; // [rsp+8h] [rbp-C0h]
  __int64 v94; // [rsp+20h] [rbp-A8h]
  __int64 v95; // [rsp+20h] [rbp-A8h]
  __int64 v96; // [rsp+20h] [rbp-A8h]
  __int64 v97; // [rsp+28h] [rbp-A0h]
  __int64 *v98; // [rsp+38h] [rbp-90h] BYREF
  __m128i v99; // [rsp+40h] [rbp-88h] BYREF
  __int128 v100; // [rsp+50h] [rbp-78h]
  const __m128i *v101; // [rsp+60h] [rbp-68h] BYREF
  __m128i v102; // [rsp+68h] [rbp-60h] BYREF
  __int128 v103; // [rsp+78h] [rbp-50h]
  unsigned __int64 v104; // [rsp+88h] [rbp-40h]

  v104 = __readfsqword(0x28u);
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
    v37 = operator new(0x38u);
    v38 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(v37 + 24) = a3;
    *(_DWORD *)(v37 + 8) = 1;
    *(_QWORD *)v37 = &off_4E6F50;
    *(_QWORD *)(v37 + 16) = v38;
    *(_QWORD *)(v37 + 32) = a3 + a4;
    *(_QWORD *)(v37 + 40) = -1;
    *(_DWORD *)(v37 + 48) = a5;
    *(_BYTE *)(v37 + 52) = 1;
    *a1 = v37;
    return a1;
  }
  if ( !a6 && !sub_13DCA0(*(_QWORD *)(a2 + 40), *func) )
    goto LABEL_58;
  v13 = *(_QWORD *)(a2 + 40);
  v101 = nullptr;
  v102 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v99 = (__m128i)(unsigned __int64)v12;
  v103 = 0;
  v100 = 0;
  sub_14CDC0(&v98, v13, &v99, &v101, 0);
  v15 = v98;
  if ( !v98 )
  {
    if ( v99.m128i_i64[1] )
    {
      *(_QWORD *)&v100 = 0;
      qfree();
    }
    if ( a6 )
    {
      sub_3310F0((__int64)&v99, (__int64)&v101, v14);
      sub_6D0A0((__int64)"%a: %s\n", 0.0, (const char *)v102.m128i_i64[0]);
      if ( v99.m128i_i64[0] )
      {
        v99.m128i_i64[1] = 0;
        qfree();
      }
    }
    if ( v102.m128i_i64[1] )
    {
      *(_QWORD *)&v103 = 0;
      qfree();
    }
    goto LABEL_58;
  }
  if ( *((_DWORD *)v98 + 26) )
  {
    if ( v99.m128i_i64[1] )
    {
LABEL_25:
      *(_QWORD *)&v100 = 0;
      qfree();
    }
  }
  else
  {
    sub_258970(v98);
    v16 = v15[23];
    if ( v16 )
    {
      v17 = v15[24];
      if ( v17 )
      {
        for ( i = 0; i != v17; ++i )
        {
          v19 = (_QWORD *)(v16 + 24 * i);
          if ( *v19 )
          {
            v19[1] = 0;
            v94 = i;
            qfree();
            i = v94;
            v16 = v15[23];
          }
        }
      }
      v15[24] = 0;
      qfree();
    }
    if ( v15[20] )
    {
      v15[21] = 0;
      qfree();
    }
    v20 = v15[16];
    if ( v20 )
    {
      v21 = v15[17];
      if ( v21 )
      {
        for ( j = 0; j != v21; ++j )
        {
          v23 = (_QWORD *)(v20 + 32 * j);
          if ( *v23 )
          {
            v23[1] = 0;
            v95 = j;
            qfree();
            j = v95;
            v20 = v15[16];
          }
        }
      }
      v15[17] = 0;
      qfree();
    }
    sub_255050((__int64)(v15 + 2));
    j__qfree();
    if ( v99.m128i_i64[1] )
      goto LABEL_25;
  }
  if ( v102.m128i_i64[1] )
  {
    *(_QWORD *)&v103 = 0;
    qfree();
  }
  if ( a5 <= 5 )
  {
    if ( a5 - 3 <= 1 )
    {
      v24 = sub_258010((__int64)v15);
      v25 = *(_QWORD **)v24;
      if ( !*(_QWORD *)v24 )
        goto LABEL_61;
      v26 = *v25 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v26 )
      {
        v27 = *(_QWORD **)v24;
        if ( (*(_BYTE *)v26 & 2) != 0 )
          goto LABEL_33;
        v60 = *(_QWORD *)(v26 + 8);
        v61 = *(_QWORD *)(v26 + 16);
        if ( *(_QWORD *)(v26 + 24) < a3 )
          goto LABEL_102;
LABEL_99:
        v27 = (_QWORD *)v26;
        while ( (*(_BYTE *)v60 & 2) == 0 )
        {
          v26 = v60;
          v60 = *(_QWORD *)(v60 + 8);
          v61 = *(_QWORD *)(v26 + 16);
          if ( *(_QWORD *)(v26 + 24) >= a3 )
            goto LABEL_99;
LABEL_102:
          v60 = v61;
        }
        if ( v25 == v27 )
        {
LABEL_33:
          v27 = *(_QWORD **)v24;
          if ( !*(_QWORD *)(v24 + 8) )
            goto LABEL_61;
          goto LABEL_34;
        }
        if ( a3 < v27[3] )
        {
          if ( !*(_QWORD *)(v24 + 8) )
          {
LABEL_35:
            if ( (*v27 & 2) != 0 )
            {
              v27 = (_QWORD *)v27[2];
            }
            else
            {
              v28 = (_QWORD *)v27[1];
              if ( (*(_BYTE *)v28 & 2) != 0 )
              {
                v88 = (_QWORD *)(*v27 & 0xFFFFFFFFFFFFFFFCLL);
                v89 = *v88;
                if ( (*v88 & 2) != 0 || (_QWORD *)v88[1] != v27 )
                {
LABEL_138:
                  v27 = v88;
                }
                else
                {
                  while ( 1 )
                  {
                    v27 = (_QWORD *)(v89 & 0xFFFFFFFFFFFFFFFCLL);
                    v89 = *(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v89 & 2) != 0 )
                      break;
                    v90 = v88;
                    v88 = v27;
                    if ( (_QWORD *)v27[1] != v90 )
                      goto LABEL_138;
                  }
                }
              }
              else
              {
                do
                {
                  v27 = v28;
                  v28 = (_QWORD *)v28[2];
                }
                while ( (*(_BYTE *)v28 & 2) == 0 );
              }
            }
            if ( v27 == v25 )
              goto LABEL_61;
            goto LABEL_39;
          }
LABEL_34:
          if ( (_QWORD *)v25[1] == v27 )
            goto LABEL_61;
          goto LABEL_35;
        }
      }
      else
      {
        v27 = nullptr;
      }
LABEL_39:
      v29 = v27 + 3;
      if ( v27[3] >= a3 && v27[3] < a4 + a3 )
      {
        v101 = nullptr;
        v102 = 0;
        v30 = (__int64 *)v27[4];
        if ( 8LL * v27[5] )
        {
          v31 = 0;
          v32 = 0;
          v33 = 0;
          while ( 1 )
          {
            v35 = *v30;
            v99.m128i_i64[1] = 0xFFFFFFFEFFFFFFFELL;
            v36 = v31 + 1;
            v99.m128i_i64[0] = v35;
            if ( (unsigned __int64)&v99 < v33 || (unsigned __int64)&v99 >= v33 + 16 * v32 )
            {
              if ( v32 < v36 )
              {
                v62 = qvector_reserve();
                v63 = v102.m128i_i64[1];
                v102.m128i_i64[1] = v32;
                v64 = v101;
                v65 = v102.m128i_i64[0] - 1;
                if ( v102.m128i_i64[0] - 1 >= 0 )
                {
                  v66 = v62;
                  do
                  {
                    v67 = _mm_loadu_si128(v64);
                    v66 += 16;
                    ++v64;
                    *(__m128i *)(v66 - 16) = v67;
                    v68 = v65-- == 0;
                  }
                  while ( !v68 );
                }
                v92 = v62;
                qfree();
                v33 = v92;
                v31 = v102.m128i_i64[0];
                v101 = (const __m128i *)v92;
                v102.m128i_i64[1] = v63;
              }
              *(__m128i *)(v33 + 16 * v31) = _mm_load_si128(&v99);
            }
            else
            {
              if ( v32 < v36 )
              {
                v93 = v35;
                v82 = qvector_reserve();
                v83 = v82;
                v84 = v102.m128i_i64[1];
                v102.m128i_i64[1] = v32;
                v85 = v102.m128i_i64[0] - 1;
                v86 = v101;
                if ( v102.m128i_i64[0] - 1 >= 0 )
                {
                  do
                  {
                    v87 = _mm_loadu_si128(v86);
                    v83 += 16;
                    ++v86;
                    *(__m128i *)(v83 - 16) = v87;
                    v68 = v85-- == 0;
                  }
                  while ( !v68 );
                }
                v97 = v84;
                v96 = v82;
                qfree();
                v33 = v96;
                v35 = v93;
                v101 = (const __m128i *)v96;
                v31 = v102.m128i_i64[0];
                v102.m128i_i64[1] = v97;
              }
              v34 = (__int64 *)(v33 + 16 * v31);
              *v34 = v35;
              v34[1] = 0xFFFFFFFEFFFFFFFELL;
            }
            ++v30;
            v31 = ++v102.m128i_i64[0];
            if ( v30 == (__int64 *)(v29[1] + 8LL * v29[2]) )
              break;
            v33 = (unsigned __int64)v101;
            v32 = v102.m128i_u64[1];
          }
        }
        v69 = (__m128i *)operator new(0x40u);
        ++*((_DWORD *)v15 + 26);
        v51 = v69;
        v70 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
        v69->m128i_i32[2] = 1;
        v69->m128i_i64[0] = (__int64)&off_4E7050;
        v69[1] = _mm_unpacklo_epi64(v70, (__m128i)(unsigned __int64)v15);
        ++*((_DWORD *)v15 + 26);
        v71 = v101;
        v72 = _mm_loadu_si128(&v102);
        v51[3].m128i_i32[2] = 0;
        v101 = nullptr;
        v51[2].m128i_i64[0] = (__int64)v71;
        v102 = 0;
        *(__m128i *)((char *)v51 + 40) = v72;
        v40 = (*((_DWORD *)v15 + 26))-- == 1;
        if ( v40 )
        {
          sub_258970(v15);
          if ( v15[23] )
          {
            v73 = v15[24];
            if ( v73 )
            {
              v74 = v15[23];
              for ( k = 0; k != v73; ++k )
              {
                v76 = (_QWORD *)(v74 + 24 * k);
                if ( *v76 )
                {
                  v76[1] = 0;
                  qfree();
                  v74 = v15[23];
                }
              }
            }
            v15[24] = 0;
            qfree();
          }
          if ( v15[20] )
          {
            v15[21] = 0;
            qfree();
          }
          if ( v15[16] )
          {
            v77 = v15[17];
            if ( v77 )
            {
              v78 = v15[16];
              for ( m = 0; m != v77; ++m )
              {
                v80 = (_QWORD *)(v78 + 32 * m);
                if ( *v80 )
                {
                  v80[1] = 0;
                  qfree();
                  v78 = v15[16];
                }
              }
            }
            v15[17] = 0;
            qfree();
          }
          sub_255050((__int64)(v15 + 2));
          j__qfree();
          v81 = v101;
          *a1 = (__int64)v51;
          if ( v81 )
          {
            v102.m128i_i64[0] = 0;
            qfree();
          }
          goto LABEL_62;
        }
        goto LABEL_97;
      }
LABEL_61:
      *a1 = 0;
      goto LABEL_62;
    }
LABEL_143:
    if ( !under_debugger )
      sub_383060(0xC725u, 0.0);
    BUG();
  }
  if ( a5 != 6 )
    goto LABEL_143;
  v49 = (__m128i *)operator new(0x28u);
  ++*((_DWORD *)v15 + 26);
  v50 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  v51 = v49;
  v49->m128i_i32[2] = 1;
  v49->m128i_i64[0] = (__int64)&off_4E6E50;
  v49[1] = _mm_unpacklo_epi64(v50, (__m128i)(unsigned __int64)v15);
  ++*((_DWORD *)v15 + 26);
  v49[2].m128i_i32[0] = -1;
  v40 = (*((_DWORD *)v15 + 26))-- == 1;
  if ( v40 )
  {
    sub_258970(v15);
    v52 = v15[23];
    if ( v52 )
    {
      v53 = v15[24];
      v54 = 0;
      if ( v53 )
      {
        do
        {
          v55 = (_QWORD *)(v52 + 24 * v54);
          if ( *v55 )
          {
            v55[1] = 0;
            qfree();
            v52 = v15[23];
          }
          ++v54;
        }
        while ( v53 != v54 );
      }
      v15[24] = 0;
      qfree();
    }
    if ( v15[20] )
    {
      v15[21] = 0;
      qfree();
    }
    v56 = v15[16];
    if ( v56 )
    {
      v57 = v15[17];
      v58 = 0;
      if ( v57 )
      {
        do
        {
          v59 = (_QWORD *)(v56 + 32 * v58);
          if ( *v59 )
          {
            v59[1] = 0;
            qfree();
            v56 = v15[16];
          }
          ++v58;
        }
        while ( v57 != v58 );
      }
      v15[17] = 0;
      qfree();
    }
    sub_255050((__int64)(v15 + 2));
    j__qfree();
  }
LABEL_97:
  *a1 = (__int64)v51;
LABEL_62:
  v40 = (*((_DWORD *)v15 + 26))-- == 1;
  if ( v40 )
  {
    sub_258970(v15);
    v41 = v15[23];
    if ( v41 )
    {
      v42 = v15[24];
      if ( v42 )
      {
        for ( n = 0; n != v42; ++n )
        {
          v44 = (_QWORD *)(v41 + 24 * n);
          if ( *v44 )
          {
            v44[1] = 0;
            qfree();
            v41 = v15[23];
          }
        }
      }
      v15[24] = 0;
      qfree();
    }
    if ( v15[20] )
    {
      v15[21] = 0;
      qfree();
    }
    v45 = v15[16];
    if ( v45 )
    {
      v46 = v15[17];
      if ( v46 )
      {
        for ( ii = 0; ii != v46; ++ii )
        {
          v48 = (_QWORD *)(v45 + 32 * ii);
          if ( *v48 )
          {
            v48[1] = 0;
            qfree();
            v45 = v15[16];
          }
        }
      }
      v15[17] = 0;
      qfree();
    }
    sub_255050((__int64)(v15 + 2));
    j__qfree();
  }
  return a1;
}
