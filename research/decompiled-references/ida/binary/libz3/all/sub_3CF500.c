__int64 __fastcall sub_3CF500(_QWORD *a1, char *a2, unsigned int a3, double a4)
{
  _QWORD *v4; // r13
  __int64 v5; // rax
  int v6; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __m128i v12; // xmm0
  unsigned int v13; // r14d
  _QWORD *v14; // rax
  _DWORD *v15; // rsi
  char *v16; // r15
  size_t v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 *v20; // r14
  __int64 i; // r12
  char *v22; // rbx
  __int64 v23; // r8
  _QWORD *v24; // rdi
  __int64 v25; // r14
  _DWORD **v26; // rbx
  _DWORD **v27; // r15
  bool v28; // zf
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r15
  __int64 v31; // rbx
  __int64 v32; // r15
  unsigned int v33; // r12d
  __int64 v34; // rax
  __int64 v35; // rbx
  int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned int k; // ebx
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // eax
  int v46; // eax
  unsigned __int64 v47; // rcx
  unsigned int v48; // ebx
  __int64 v49; // rcx
  int v50; // eax
  unsigned __int64 *v51; // rcx
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // rcx
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  unsigned int v56; // r12d
  unsigned int v57; // ecx
  unsigned int *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rdx
  _QWORD *v61; // rdx
  unsigned int v62; // ebx
  unsigned int v63; // r12d
  unsigned int v64; // ecx
  unsigned int *v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned __int64 v69; // r12
  __int64 *v70; // rbx
  __int64 v71; // rsi
  __int64 v72; // rdi
  _QWORD *v73; // rax
  char **v74; // r12
  __int64 v75; // rdx
  char **exception; // r12
  __int64 v77; // rdx
  char **v78; // r12
  __int64 v79; // rdx
  __int64 v80; // [rsp+10h] [rbp-C0h]
  unsigned int v81; // [rsp+18h] [rbp-B8h]
  int v82; // [rsp+1Ch] [rbp-B4h]
  unsigned int v84; // [rsp+24h] [rbp-ACh]
  _DWORD *ptr; // [rsp+28h] [rbp-A8h]
  __int64 v86; // [rsp+30h] [rbp-A0h]
  __int64 v87; // [rsp+40h] [rbp-90h]
  __int64 v88; // [rsp+40h] [rbp-90h]
  __int64 v89; // [rsp+40h] [rbp-90h]
  int v90; // [rsp+40h] [rbp-90h]
  int v91; // [rsp+40h] [rbp-90h]
  int v92; // [rsp+40h] [rbp-90h]
  __int64 v93; // [rsp+48h] [rbp-88h]
  _QWORD *src; // [rsp+50h] [rbp-80h]
  void *srca; // [rsp+50h] [rbp-80h]
  int srcb; // [rsp+50h] [rbp-80h]
  unsigned __int64 j; // [rsp+58h] [rbp-78h] BYREF
  __m128i v98; // [rsp+60h] [rbp-70h] BYREF
  __int64 v99[2]; // [rsp+70h] [rbp-60h] BYREF
  _BYTE v100[80]; // [rsp+80h] [rbp-50h] BYREF

  v4 = a1;
  v5 = a1[171];
  v82 = (int)a2;
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  if ( a3 == v6 )
    return 1;
  v84 = 0;
  if ( (_DWORD)a2 )
  {
    v80 = a3;
    if ( (unsigned int)sub_180B130(a1) )
    {
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        a2 = "\n";
        v42 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v42, "\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        a2 = "\n";
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v8 = v4[171];
    if ( v8 )
      v81 = *(_DWORD *)(v8 - 4);
    else
      v81 = 0;
    v9 = *v4;
    v10 = *(_QWORD *)(v8 + 8 * v80);
    v93 = v10;
    sub_654110(*v4, a2);
    v11 = (_QWORD *)sub_63BA90(v9 + 2360, *(_QWORD *)(v10 + 16));
    if ( !*v11 )
      return (unsigned int)-1;
    v12 = _mm_loadl_epi64((const __m128i *)(*v11 - 8LL));
    j = v12.m128i_i64[0];
    v13 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v12, 229));
    v14 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v12) + 8);
    v15 = (_DWORD *)*v11;
    ptr = v14;
    v16 = (char *)(v14 + 1);
    *v14 = v12.m128i_i64[0];
    if ( v15 )
    {
      v17 = 8LL * (unsigned int)*(v15 - 1);
      if ( v17 <= 8 )
      {
        if ( v17 == 8 )
          v14[1] = *(_QWORD *)v15;
      }
      else
      {
        memmove(v14 + 1, v15, v17);
      }
    }
    v18 = 8LL * v13;
    if ( &v16[v18] != v16 )
    {
      src = v4;
      v19 = 8LL * v13;
      v87 = ((v18 >> 3) + 1) >> 1;
      v20 = (__int64 *)&v16[v18];
      for ( i = v87; ; i = (i + 1) >> 1 )
      {
        j = 8 * i;
        v22 = (char *)operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
        if ( v22 )
          break;
        if ( i == 1 )
        {
          v4 = src;
          sub_3CE910(v16, (__int64)v20, (__int64 (__fastcall *)(__int64, __int64))sub_3CD770);
          j = 0;
          goto LABEL_18;
        }
      }
      v23 = v19;
      v4 = src;
      if ( v87 == i )
      {
        v88 = v23;
        sub_3CD840((__int64 *)v16, (__int64 *)&v16[j], v22);
        sub_3CD840((__int64 *)&v16[j], v20, v22);
        sub_3CE010(
          v16,
          &v16[j],
          (char *)v20,
          (__int64)j >> 3,
          (__int64)(v88 - j) >> 3,
          v22,
          (unsigned __int8 (__fastcall *)(_QWORD, _QWORD))sub_3CD770);
      }
      else
      {
        sub_3CF3E0((__int64 *)v16, v20, v22, i, (unsigned __int8 (__fastcall *)(_QWORD, _QWORD))sub_3CD770);
      }
LABEL_18:
      v15 = (_DWORD *)j;
      operator delete(v22, j);
      v13 = ptr[1];
    }
    v86 = 0;
    srca = v4 + 98;
    v84 = -1;
    if ( !v13 )
      goto LABEL_47;
    while ( 1 )
    {
      v24 = v4 + 98;
      v25 = *(_QWORD *)&ptr[2 * v86 + 2];
      sub_8E36C0(srca);
      v26 = (_DWORD **)v4[169];
      if ( v26 )
      {
        v27 = &v26[*((unsigned int *)v26 - 1)];
        if ( v26 >= v27 )
          goto LABEL_28;
        do
        {
          while ( 1 )
          {
            v15 = *v26;
            if ( *v26 )
            {
              v24 = (_QWORD *)v4[168];
              v28 = v15[2]-- == 1;
              if ( v28 )
                break;
            }
            if ( ++v26 >= v27 )
              goto LABEL_27;
          }
          sub_15D7BC0(v24, v15);
          ++v26;
        }
        while ( v26 < v27 );
LABEL_27:
        v26 = (_DWORD **)v4[169];
        if ( v26 )
LABEL_28:
          *((_DWORD *)v26 - 1) = 0;
      }
      v29 = *(_QWORD *)(v25 + 40);
      v30 = v4[1];
      j = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      if ( (unsigned int)sub_180B130(v24) > 1 )
      {
        if ( (unsigned __int8)sub_186A530(*(double *)v12.m128i_i64) )
        {
          sub_186A4C0(*(double *)v12.m128i_i64);
          sub_180B150(v24, v15);
          v31 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v99, j, v4[1], 0, 0, 0);
          sub_160E8B0(v31, v99);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(v100);
          sub_186A500(v100, "\n");
        }
        else
        {
          sub_180B150(v24, v15);
          v41 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v99, j, v4[1], 0, 0, 0);
          sub_160E8B0(v41, v99);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(v100);
        }
      }
      v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&j), (__m128i)v30);
      v98 = v12;
      sub_3CDC10(v4, &v98);
      v32 = v98.m128i_i64[1];
      v33 = 0;
      for ( j = v98.m128i_i64[0]; v33 < *(_DWORD *)(v93 + 24); ++v33 )
      {
        v89 = v4[1];
        v34 = sub_15E1B70(v89);
        v35 = v34;
        if ( v34 )
        {
          ++*(_DWORD *)(v34 + 8);
          sub_8E3610(srca);
          v28 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v28 )
            sub_15D7BC0(v89, v35);
        }
        else
        {
          sub_8E3610(srca);
        }
      }
      for ( k = *(_DWORD *)(v25 + 68); k < *(_DWORD *)(v25 + 56); ++k )
      {
        v39 = *(_QWORD *)(v25 + 8LL * k + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v25 + 8LL * k + 80) > 7u )
          ++*(_DWORD *)(v39 + 8);
        v40 = j;
        if ( j )
        {
          v91 = *(_DWORD *)(j + 8);
          *(_DWORD *)(j + 8) = v91 - 1;
          if ( v91 == 1 )
            sub_15D7BC0(v32, v40);
        }
        v98.m128i_i64[0] = v39;
        v98.m128i_i64[1] = v32;
        sub_3CDC10(v4, &v98);
        v32 = v98.m128i_i64[1];
        j = v98.m128i_i64[0];
        sub_8E3610(srca);
      }
      v36 = sub_8E3730(srca, 0, 0);
      if ( !v36 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C86F2(v99, "undef", v77);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v99);
        sub_233E40((__int64)v99);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      if ( v36 != 1 )
        goto LABEL_43;
      if ( v82 == 1 )
      {
        v43 = a3 + 1;
        v44 = v4[171];
        if ( v44 )
          v45 = *(_DWORD *)(v44 - 4);
        else
          v45 = 0;
        if ( v45 < (unsigned int)v43 || *(_DWORD *)(v25 + 68) )
        {
          v84 = 0;
          goto LABEL_43;
        }
      }
      else
      {
        if ( *(_DWORD *)(v25 + 68) )
        {
          v48 = 0;
          do
          {
            v52 = *(_QWORD *)(v25 + 8LL * v48 + 80) & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_QWORD *)(v25 + 8LL * v48 + 80) > 7u )
              ++*(_DWORD *)(v52 + 8);
            v53 = j;
            if ( j )
            {
              v92 = *(_DWORD *)(j + 8);
              *(_DWORD *)(j + 8) = v92 - 1;
              if ( v92 == 1 )
                sub_15D7BC0(v32, v53);
            }
            v98.m128i_i64[0] = v52;
            v98.m128i_i64[1] = v32;
            sub_3CDC10(v4, &v98);
            v32 = v98.m128i_i64[1];
            j = v98.m128i_i64[0];
            if ( v98.m128i_i64[0] )
              ++*(_DWORD *)(v98.m128i_i64[0] + 8);
            v54 = (_QWORD *)v4[171];
            if ( v54 )
            {
              v55 = *((_DWORD *)v54 - 1);
              if ( v55 == *((_DWORD *)v54 - 2) )
              {
                v56 = (3 * v55 + 1) >> 1;
                v57 = 8 * v56 + 8;
                if ( 8 * v55 + 8 >= v57 || v55 >= v56 )
                {
                  v78 = (char **)__cxa_allocate_exception(0x28u);
                  sub_C86F2(v99, "Overflow encountered when expanding vector", v79);
                  *v78 = (char *)off_1C63128;
                  sub_2333C0(v78 + 1, v99);
                  sub_233E40((__int64)v99);
                  __cxa_throw(v78, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v58 = (unsigned int *)sub_186B300(v54 - 1, v57);
                v59 = v58[1];
                v54 = v58 + 2;
                *v58 = v56;
                v4[171] = v58 + 2;
                LODWORD(v58) = v59;
                v51 = &v54[v59];
                v50 = (_DWORD)v58 + 1;
              }
              else
              {
                v49 = v55;
                v50 = v55 + 1;
                v51 = &v54[v49];
              }
            }
            else
            {
              v60 = (_QWORD *)sub_186B270(0x18u);
              *v60 = 2;
              v50 = 1;
              v54 = v60 + 1;
              v4[171] = v54;
              v51 = v54;
            }
            ++v48;
            *v51 = j;
            *((_DWORD *)v54 - 1) = v50;
          }
          while ( v48 < *(_DWORD *)(v25 + 68) );
        }
        v43 = a3 + 1;
      }
      v46 = sub_3CF500(v4, (unsigned int)(v82 - 1), v43);
      if ( v46 )
      {
        if ( v46 == 1 )
        {
          v47 = j;
          if ( j )
          {
            srcb = *(_DWORD *)(j + 8);
            *(_DWORD *)(j + 8) = srcb - 1;
            if ( srcb == 1 )
              sub_15D7BC0(v32, v47);
          }
          v84 = 1;
LABEL_47:
          sub_186B220(ptr);
          return v84;
        }
      }
      else
      {
        v84 = 0;
      }
      v61 = (_QWORD *)v4[171];
      if ( v61 )
      {
        v62 = *((_DWORD *)v61 - 1);
        if ( v81 >= v62 )
          goto LABEL_99;
        v69 = (unsigned __int64)&v61[v62];
        v70 = &v61[v81];
        if ( (unsigned __int64)v70 >= v69 )
          goto LABEL_113;
        do
        {
          v71 = *v70;
          if ( *v70 )
          {
            v72 = v4[170];
            v28 = (*(_DWORD *)(v71 + 8))-- == 1;
            if ( v28 )
              sub_15D7BC0(v72, v71);
          }
          ++v70;
        }
        while ( (unsigned __int64)v70 < v69 );
        v61 = (_QWORD *)v4[171];
        if ( v61 )
          break;
      }
      if ( v81 )
      {
        v73 = (_QWORD *)sub_186B270(0x18u);
        *v73 = 2;
        v62 = 0;
        v61 = v73 + 1;
        v4[171] = v73 + 1;
LABEL_104:
        while ( 1 )
        {
          v66 = *((_DWORD *)v61 - 2);
          if ( v66 >= v81 )
            break;
          v63 = (3 * v66 + 1) >> 1;
          v64 = 8 * v63 + 8;
          if ( 8 * v66 + 8 >= v64 || v66 >= v63 )
          {
            v74 = (char **)__cxa_allocate_exception(0x28u);
            sub_C86F2(v99, "Overflow encountered when expanding vector", v75);
            *v74 = (char *)off_1C63128;
            sub_2333C0(v74 + 1, v99);
            sub_233E40((__int64)v99);
            __cxa_throw(v74, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = (unsigned int *)sub_186B300(v61 - 1, v64);
          v61 = v65 + 2;
          *v65 = v63;
          v4[171] = v65 + 2;
        }
        *((_DWORD *)v61 - 1) = v81;
        v67 = 8LL * v62;
        v68 = 8LL * v81;
        if ( v67 != v68 )
          memset(&v61[(unsigned __int64)v67 / 8], 0, v68 - v67);
      }
LABEL_43:
      v15 = &dword_0 + 1;
      sub_8E36D0(srca);
      v37 = j;
      if ( j )
      {
        v90 = *(_DWORD *)(j + 8);
        *(_DWORD *)(j + 8) = v90 - 1;
        if ( v90 == 1 )
        {
          v15 = (_DWORD *)v37;
          sub_15D7BC0(v32, v37);
        }
      }
      if ( (unsigned int)++v86 >= ptr[1] )
        goto LABEL_47;
    }
    v62 = *((_DWORD *)v61 - 1);
LABEL_99:
    if ( v62 < v81 )
      goto LABEL_104;
LABEL_113:
    *((_DWORD *)v61 - 1) = v81;
    goto LABEL_43;
  }
  return v84;
}

