__int64 __fastcall sub_2F1460(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int **a4,
        __int64 a5,
        unsigned __int8 *a6,
        _QWORD *a7,
        __int64 *a8,
        unsigned int *a9)
{
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int v20; // r12d
  int *i; // rdx
  __int64 v22; // rcx
  int *v23; // rdx
  unsigned int j; // r12d
  int *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int *v41; // rax
  int v42; // eax
  __int64 v43; // rax
  unsigned __int32 v44; // r12d
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // [rsp+8h] [rbp-268h]
  int v54; // [rsp+18h] [rbp-258h]
  __int64 v55; // [rsp+20h] [rbp-250h]
  int v56; // [rsp+28h] [rbp-248h]
  unsigned __int8 v57; // [rsp+2Fh] [rbp-241h]
  int v58; // [rsp+30h] [rbp-240h]
  __int64 v59; // [rsp+38h] [rbp-238h]
  __int64 v60; // [rsp+38h] [rbp-238h]
  __int64 v61; // [rsp+38h] [rbp-238h]
  __int64 v62; // [rsp+38h] [rbp-238h]
  void *v64; // [rsp+48h] [rbp-228h]
  __int64 v66; // [rsp+58h] [rbp-218h]
  __int64 v67; // [rsp+58h] [rbp-218h]
  void *v70; // [rsp+70h] [rbp-200h]
  unsigned __int8 v71; // [rsp+78h] [rbp-1F8h]
  __int64 v72; // [rsp+78h] [rbp-1F8h]
  __int64 v73; // [rsp+80h] [rbp-1F0h] BYREF
  int v74[2]; // [rsp+88h] [rbp-1E8h] BYREF
  __int64 v75; // [rsp+90h] [rbp-1E0h] BYREF
  __int64 v76; // [rsp+98h] [rbp-1D8h]
  __int64 v77; // [rsp+A0h] [rbp-1D0h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-1C8h]
  __int64 v79; // [rsp+B0h] [rbp-1C0h]
  __int64 v80; // [rsp+B8h] [rbp-1B8h]
  __m128 v81; // [rsp+C0h] [rbp-1B0h] BYREF
  __int64 v82; // [rsp+D0h] [rbp-1A0h] BYREF
  __int64 v83; // [rsp+D8h] [rbp-198h]

  v71 = 0;
  if ( *(_WORD *)(a2 + 4) )
    return v71;
  *a6 = 0;
  sub_2EB430(*a8, a8[1]);
  *a8 = 0;
  v11 = *(_QWORD *)(a2 + 16);
  v12 = *(_QWORD **)(a1 + 656);
  *a9 = 0;
  v13 = sub_2EB300(v12, *(_DWORD *)(a1 + 664), v11);
  if ( !v13
    || (v14 = *((unsigned int *)v13 + 2),
        v15 = *(_QWORD *)(a1 + 608),
        *a9 = v14,
        v16 = v15 + 104 * v14,
        *(_DWORD *)v16 != 2) )
  {
    v17 = *(_QWORD *)(a1 + 8);
    sub_27B950((__int64)qword_1C7F2C0, a5, &qword_1C7F2A0);
    v76 = v17;
    v75 = 0;
    v57 = sub_2EC330(a1, a2, &v75, a8, a9);
    if ( v57 )
    {
      v66 = v75;
      v18 = v76;
      v71 = sub_C41E90(v75, a3, a4, a5);
      if ( v71 )
      {
        v20 = 0;
        for ( i = *a4; *a4; i = *a4 )
        {
          if ( v20 >= *(i - 1) )
            break;
          v22 = 8LL * v20;
          if ( i[v22] < 0 )
          {
            sub_1831620(qword_1C7F2C0, &i[v22]);
            v36 = sub_15EC2C0(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL * v20));
            v81 = _mm_loadh_ps((const double *)a3);
            sub_2EB450((__int64 **)&v81, v36);
            v22 = 8LL * v20;
            i = *a4;
          }
          sub_2FC4A0(qword_1C7F2C0, a5, &i[v22], a5);
          ++v20;
        }
        *a6 = 1;
        std::ostringstream::basic_ostringstream(&v81);
        sub_1648CA0(&v81, *(_QWORD *)(a1 + 8), *a8, 3);
        std::operator<<<std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::stringbuf::str(&v77, &v81.m128_u16[4]);
        sub_180C5A0(v74, v77);
        *a7 = *(_QWORD *)v74;
        sub_233E40((__int64)&v77);
        std::ostringstream::~ostringstream();
        goto LABEL_8;
      }
    }
    else
    {
      v71 = sub_2EC420(a1, a2, &v75, a8, a9);
      v18 = v76;
      v66 = v75;
      if ( !v71 )
      {
LABEL_8:
        sub_2EB410(v66, v18);
        return v71;
      }
      v71 = sub_C41E90(v75, a3, a4, a5);
      if ( v71 )
      {
        v23 = *a4;
        for ( j = 0; *a4; v23 = *a4 )
        {
          if ( j >= *(v23 - 1) )
            break;
          v25 = &v23[8 * j];
          if ( *v25 < 0 )
          {
            sub_2FC4A0(qword_1C7F2C0, a5, v25, a5);
            sub_1831620(qword_1C7F2C0, &(*a4)[8 * j]);
          }
          else
          {
            v26 = sub_15EC2C0(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL * j));
            v81 = _mm_loadh_ps((const double *)a3);
            sub_2EB450((__int64 **)&v81, v26);
          }
          ++j;
        }
        std::ostringstream::basic_ostringstream(&v81);
        sub_1648CA0(&v81, *(_QWORD *)(a1 + 8), *a8, 2);
        std::operator<<<std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::stringbuf::str(&v77, &v81.m128_u16[4]);
        sub_180C5A0(v74, v77);
        *a7 = *(_QWORD *)v74;
        sub_233E40((__int64)&v77);
        std::ostringstream::~ostringstream();
        goto LABEL_8;
      }
    }
    v19 = sub_15D1F10(v66);
    v71 = sub_1673B10(a1 + 184, v19);
    if ( v71 )
    {
      v70 = qword_1C7F2C0;
      sub_182CEF0(qword_1C7F2C0, a5);
      sub_182CBA0(v70, a5 + 16);
      *(_BYTE *)(a5 + 20) &= ~1u;
      *(_DWORD *)(a5 + 16) = 1;
      v41 = *(int **)(*(_QWORD *)(sub_15D1F10(v66) + 24) + 8LL);
      if ( *((_BYTE *)v41 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v42 = *v41;
      v81 = 0u;
      v56 = v42;
      v43 = *(_QWORD *)(a1 + 8);
      v82 = 1;
      v53 = v43;
      v83 = 0;
      v81.m128_u64[0] = v57;
      sub_182CBA0(qword_1C7F2C0, &v82);
      BYTE4(v82) &= ~1u;
      LODWORD(v82) = 1;
      v55 = sub_1674520(a1 + 184, &v81, 1);
      sub_25A130((char *)&v81);
      if ( v55 )
        ++*(_DWORD *)(v55 + 8);
      if ( v56 )
      {
        v44 = 0;
        if ( v57 )
        {
          do
          {
            v81 = (__m128)2uLL;
            v82 = 1;
            v83 = 0;
            sub_182CBA0(qword_1C7F2C0, &v82);
            LODWORD(v82) = 1;
            BYTE4(v82) &= ~1u;
            BYTE4(v77) &= 0xFCu;
            BYTE4(v79) &= 0xFCu;
            LODWORD(v77) = 0;
            v78 = 0;
            LODWORD(v79) = 1;
            v80 = 0;
            sub_184BE60(qword_1C7F2C0, &v81, v44, &v77);
            sub_25A130((char *)&v81);
            sub_2F0130(a4, (int *)&v77);
            v50 = *(_QWORD *)(a1 + 8);
            v81.m128_i32[0] = v44;
            v81.m128_i8[8] = 0;
            v54 = v50;
            v51 = *(_QWORD *)(a1 + 192);
            *(_QWORD *)v74 = v66;
            LODWORD(v82) = v44;
            LOBYTE(v83) = 0;
            sub_15DCAD0(v51, (int)v74, 0);
            sub_15D0DF0(&v82);
            sub_15D0DF0(&v81);
            v52 = sub_15E1B70(v54);
            v73 = v52;
            if ( v52 )
              ++*(_DWORD *)(v52 + 8);
            sub_2F13A0((_QWORD *)(a3 + 8), &v73);
            sub_2FC4A0(qword_1C7F2C0, a5, &v77, a5);
            ++v44;
            sub_25A130((char *)&v77);
          }
          while ( v44 != v56 );
        }
        else
        {
          do
          {
            v81 = (__m128)2uLL;
            v82 = 1;
            v83 = 0;
            sub_182CBA0(qword_1C7F2C0, &v82);
            LODWORD(v82) = 1;
            BYTE4(v82) &= ~1u;
            BYTE4(v77) &= 0xFCu;
            BYTE4(v79) &= 0xFCu;
            LODWORD(v77) = 0;
            v78 = 0;
            LODWORD(v79) = 1;
            v80 = 0;
            sub_184BE60(qword_1C7F2C0, &v81, v44, &v77);
            sub_25A130((char *)&v81);
            sub_2F0130(a4, (int *)&v77);
            v45 = *(_QWORD *)(a1 + 8);
            v81.m128_i32[0] = v44;
            v81.m128_i8[8] = 0;
            v58 = v45;
            v46 = *(_QWORD *)(a1 + 192);
            *(_QWORD *)v74 = v66;
            LODWORD(v82) = v44;
            LOBYTE(v83) = 0;
            sub_15DCAD0(v46, (int)v74, 0);
            sub_15D0DF0(&v82);
            sub_15D0DF0(&v81);
            v47 = sub_15E1B70(v58);
            v73 = v47;
            if ( v47 )
              ++*(_DWORD *)(v47 + 8);
            sub_2F13A0((_QWORD *)(a3 + 8), &v73);
            ++v44;
            sub_25A130((char *)&v77);
          }
          while ( v56 != v44 );
        }
      }
      *a6 = v57;
      std::ostringstream::basic_ostringstream(&v81);
      sub_1648CA0(&v81, *(_QWORD *)(a1 + 8), *a8, 2);
      std::operator<<<std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::stringbuf::str(&v77, &v81.m128_u16[4]);
      sub_180C5A0(v74, v77);
      *a7 = *(_QWORD *)v74;
      sub_233E40((__int64)&v77);
      std::ostringstream::~ostringstream();
      sub_2EB430(v55, v53);
    }
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
    v27 = 0;
    v28 = 0;
    do
    {
      v67 = *(_QWORD *)(a1 + 8);
      v30 = *(_QWORD *)(a2 + 8LL * v28 + 32);
      v72 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      v31 = *(_QWORD *)(v15 + 104LL * *a9 + 40);
      v77 = 0;
      v78 = 0;
      v79 = 1;
      v80 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v77, (int *)(v31 + 4 * v27));
      if ( (int)v77 < 0 )
      {
        sub_1831620(qword_1C7F2C0, &v77);
        v32 = sub_15EC2C0(*(_QWORD *)(a1 + 8), v72);
        v64 = (void *)v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        sub_2EB430(v72, v67);
        v33 = qword_1C7F2C0;
        if ( (*(_BYTE *)(a5 + 20) & 1) != 0
          || *(_DWORD *)(a5 + 16) != 1
          || (v79 & 0x100000000LL) != 0
          || (_DWORD)v79 != 1 )
        {
          sub_1852000(qword_1C7F2C0, a5, &v77);
        }
        else
        {
          sub_1832A70(qword_1C7F2C0, a5, &v77);
          sub_182CBA0(v33, a5 + 16);
          *(_BYTE *)(a5 + 20) &= ~1u;
          *(_DWORD *)(a5 + 16) = 1;
        }
        v72 = (__int64)v64;
      }
      v29 = *(_QWORD *)(a1 + 8);
      if ( v72 == *(_QWORD *)(v29 + 856) )
      {
        if ( (unsigned int)sub_180B130() > 4 )
        {
          if ( (unsigned __int8)sub_186A530() )
          {
            sub_186A4C0();
            v34 = sub_180B150();
            v59 = sub_2FCE40(v34, &v77);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(
              &v81,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 104LL * *a9 + 32) + v27),
              *(_QWORD *)(a1 + 8),
              0,
              0,
              0);
            v35 = sub_160E8B0(v59, &v81);
            sub_2EB4A0(v35, " |-> true\n");
            sub_18572D0(&v82);
            sub_186A500(&v82, " |-> true\n");
          }
          else
          {
            v39 = sub_180B150();
            v61 = sub_2FCE40(v39, &v77);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(
              &v81,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 104LL * *a9 + 32) + v27),
              *(_QWORD *)(a1 + 8),
              0,
              0,
              0);
            v40 = sub_160E8B0(v61, &v81);
            sub_2EB4A0(v40, " |-> true\n");
            sub_18572D0(&v82);
          }
        }
      }
      else if ( (_DWORD)v77 )
      {
        if ( v72 == *(_QWORD *)(v29 + 864) )
        {
          if ( (unsigned int)sub_180B130() > 4 )
          {
            if ( (unsigned __int8)sub_186A530() )
            {
              sub_186A4C0();
              v37 = sub_180B150();
              v60 = sub_2FCE40(v37, &v77);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_1606360(
                &v81,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 104LL * *a9 + 32) + v27),
                *(_QWORD *)(a1 + 8),
                0,
                0,
                0);
              v38 = sub_160E8B0(v60, &v81);
              sub_2EB4A0(v38, " |-> false\n");
              sub_18572D0(&v82);
              sub_186A500(&v82, " |-> false\n");
            }
            else
            {
              v48 = sub_180B150();
              v62 = sub_2FCE40(v48, &v77);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_1606360(
                &v81,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 104LL * *a9 + 32) + v27),
                *(_QWORD *)(a1 + 8),
                0,
                0,
                0);
              v49 = sub_160E8B0(v62, &v81);
              sub_2EB4A0(v49, " |-> false\n");
              sub_18572D0(&v82);
            }
          }
          sub_2FC4A0(qword_1C7F2C0, a5, &v77, a5);
        }
        else
        {
          v81.m128_u64[0] = v72;
          if ( v72 )
            ++*(_DWORD *)(v72 + 8);
          sub_2F13A0((_QWORD *)(a3 + 8), &v81);
          sub_2F0130(a4, (int *)&v77);
        }
      }
      ++v28;
      v27 += 8;
      sub_25A130((char *)&v77);
      sub_2EB430(v72, v67);
      v15 = *(_QWORD *)(a1 + 608);
    }
    while ( v28 < *(_DWORD *)(a2 + 24) );
    v16 = v15 + 104LL * *a9;
  }
  v71 = 1;
  *a7 = *(_QWORD *)(v16 + 88);
  return v71;
}

