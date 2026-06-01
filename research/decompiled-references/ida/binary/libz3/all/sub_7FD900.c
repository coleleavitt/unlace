__int64 __fastcall sub_7FD900(__int64 a1, __int64 a2, __m128 a3, double a4, __m128 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  const __m128i **v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rbp
  const __m128i *v19; // r14
  char v20; // r12
  _DWORD *v21; // rax
  __int64 v22; // rdi
  char v23; // dl
  __int16 v24; // ax
  _DWORD *v25; // rax
  unsigned int *v26; // rdx
  unsigned int **v27; // rbx
  unsigned int **v28; // rbp
  __m128 *v30; // r13
  unsigned __int32 v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rdx
  int v34; // eax
  __m128 *v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  _DWORD *v41; // rdx
  __int64 v42; // r12
  __int64 v43; // r13
  __int64 v44; // rdi
  unsigned int *v45; // rsi
  __int64 v46; // rbx
  const __m128i *v47; // rsi
  __int64 *v48; // r14
  __int64 v49; // rax
  unsigned int v50; // r12d
  size_t v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 *v54; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // edx
  unsigned int v59; // eax
  __int64 v60; // rax
  unsigned int *v61; // rsi
  unsigned int v62; // eax
  __int64 v63; // rcx
  unsigned int v64; // edx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned int i; // ebx
  unsigned int v70; // edx
  unsigned int v71; // ecx
  unsigned int v72; // r12d
  __int64 v73; // rbp
  __int64 v74; // r13
  __int64 v75; // r14
  _QWORD *v76; // rax
  __int64 v77; // r14
  __int64 v78; // r14
  __int64 v79; // rbx
  const __m128i *v80; // rsi
  __int64 *v81; // r14
  __int64 v82; // rax
  char **exception; // rax
  char **v84; // rbx
  __int64 v85; // r14
  __int64 *v86; // rsi
  __m128i v87; // [rsp+0h] [rbp-A8h] BYREF
  __int64 *v88; // [rsp+18h] [rbp-90h]
  unsigned int *v89; // [rsp+20h] [rbp-88h]
  unsigned int v90; // [rsp+2Ch] [rbp-7Ch]
  __int64 v91[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v92[88]; // [rsp+50h] [rbp-58h] BYREF

  if ( (unsigned int)sub_180B130(a1) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
    {
      sub_186A4C0(*(double *)a3.m128_u64);
      v6 = sub_180B150(a1, a2);
      sub_1606360(v91, a2, *(_QWORD *)(a1 + 8), 0, 0, 0);
      v7 = sub_160E8B0(v6, v91);
      sub_7F5300(v7, "\n");
      sub_18572D0(v92);
      sub_186A500(v92, "\n");
    }
    else
    {
      v38 = sub_180B150(a1, a2);
      sub_1606360(v91, a2, *(_QWORD *)(a1 + 8), 0, 0, 0);
      v39 = sub_160E8B0(v38, v91);
      sub_7F5300(v39, "\n");
      sub_18572D0(v92);
    }
  }
  v8 = *(_DWORD *)(a1 + 96);
  v9 = v8 == -1;
  v10 = v8 + 1;
  *(_DWORD *)(a1 + 96) = v10;
  if ( v9 )
  {
    v11 = *(_QWORD *)(a1 + 72);
    if ( v11 )
    {
      *(_DWORD *)(v11 - 4) = 0;
      v10 = *(_DWORD *)(a1 + 96);
    }
    *(_DWORD *)(a1 + 96) = v10 + 1;
  }
  v12 = *(_QWORD *)(a1 + 48);
  if ( v12 )
    *(_DWORD *)(v12 - 4) = 0;
  v13 = *(_QWORD *)(a1 + 64);
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  v15 = *(_QWORD *)(a1 + 88);
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  v16 = (const __m128i **)(a2 + 32);
  v17 = 8LL * *(unsigned int *)(a2 + 24);
  v18 = a2 + 32 + v17;
  if ( !v17 )
  {
LABEL_92:
    if ( v12 )
    {
      for ( i = 0; i < *(_DWORD *)(v12 - 4); ++i )
      {
        v70 = i;
        do
        {
          v71 = v70;
          v70 = *(_DWORD *)(v12 + 4LL * v70);
        }
        while ( v71 != v70 );
        if ( v70 == i )
        {
          v72 = i;
          v73 = 0;
          v74 = i;
          while ( 1 )
          {
            v75 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v74);
            if ( !v73 )
              goto LABEL_102;
LABEL_101:
            if ( (unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 8), v75, v73) )
              return 1;
            while ( 1 )
            {
LABEL_102:
              v9 = (unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 8), v75) == 0;
              v12 = *(_QWORD *)(a1 + 48);
              if ( !v9 )
                v73 = v75;
              if ( !v12 )
                break;
              if ( v72 < *(_DWORD *)(v12 - 4) )
                v72 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4 * v74);
              if ( v72 == i )
                goto LABEL_98;
              v74 = v72;
              v75 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL * v72);
              if ( v73 )
                goto LABEL_101;
            }
            if ( v72 == i )
              return 0;
          }
        }
LABEL_98:
        ;
      }
    }
    return 0;
  }
  do
  {
    v19 = *v16;
    v20 = 0;
    if ( !(*v16)->m128i_i16[2] )
    {
      v21 = *(_DWORD **)(v19[1].m128i_i64[0] + 24);
      if ( v21 )
      {
        if ( !*v21 && v21[1] == 8 && v19[1].m128i_i32[2] == 1 )
        {
          v19 = (const __m128i *)v19[2].m128i_i64[0];
          v20 = 1;
        }
      }
    }
    v22 = *(_QWORD *)(a1 + 8);
    v23 = sub_15D2CB0(v22, v19);
    v24 = v19->m128i_i16[2];
    if ( v23 )
    {
      if ( !v24
        && (v25 = *(_DWORD **)(v19[1].m128i_i64[0] + 24)) != nullptr
        && !*v25
        && v25[1] == 2
        && v19[1].m128i_i32[2] == 2 )
      {
        a3 = (__m128)_mm_loadu_si128(v19 + 2);
        if ( v20 )
        {
          v30 = *(__m128 **)(a1 + 88);
          if ( v30 )
          {
            v31 = v30[-1].m128_u32[3];
            v32 = v30[-1].m128_u32[2];
            if ( v31 == v32 )
            {
              v50 = (3 * v32 + 1) >> 1;
              v51 = 16 * v50 + 8;
              if ( 16 * v32 + 8 >= (unsigned int)v51 || v32 >= v50 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                v88 = v91;
                v84 = exception;
                sub_24ABB0(v91, "Overflow encountered when expanding vector");
                v85 = (__int64)v88;
                v86 = v88;
                *v84 = (char *)off_1C63128;
                sub_2333C0(v84 + 1, v86);
                sub_233E40(v85);
                __cxa_throw(v84, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v87 = (__m128i)a3;
              v52 = sub_186B270(v51);
              v53 = *(_QWORD *)(a1 + 88);
              a3 = (__m128)_mm_load_si128(&v87);
              v54 = (__int64 *)v52;
              v30 = (__m128 *)(v52 + 8);
              if ( v53 )
              {
                v55 = *(unsigned int *)(v53 - 4);
                *(_DWORD *)(v52 + 4) = v55;
                v56 = 0;
                v57 = 16 * v55;
                if ( v57 )
                {
                  do
                  {
                    *(__m128i *)&v54[v56 / 8 + 1] = _mm_loadu_si128((const __m128i *)(v53 + v56));
                    v56 += 16LL;
                  }
                  while ( v57 != v56 );
                }
                v88 = v54;
                v87 = (__m128i)a3;
                sub_186B220((void *)(v53 - 8));
                v54 = v88;
                a3 = (__m128)_mm_load_si128(&v87);
                v35 = &v30[*((unsigned int *)v88 + 1)];
                v34 = *((_DWORD *)v88 + 1) + 1;
              }
              else
              {
                *(_DWORD *)(v52 + 4) = 0;
                v35 = (__m128 *)(v52 + 8);
                v34 = 1;
              }
              *(_QWORD *)(a1 + 88) = v30;
              *(_DWORD *)v54 = v50;
            }
            else
            {
              v33 = v31;
              v34 = v31 + 1;
              v35 = &v30[v33];
            }
          }
          else
          {
            v87 = (__m128i)a3;
            v76 = (_QWORD *)sub_186B270(0x28u);
            a3 = (__m128)_mm_load_si128(&v87);
            v30 = (__m128 *)(v76 + 1);
            *v76 = 2;
            v34 = 1;
            *(_QWORD *)(a1 + 88) = v30;
            v35 = v30;
          }
          *v35 = a3;
          v30[-1].m128_i32[3] = v34;
          goto LABEL_41;
        }
        a5 = _mm_movehl_ps(a5, a3);
        sub_7FD600(a1, a3.m128_i64[0], (unsigned int *)a5.m128_u64[0], *(double *)a3.m128_u64);
      }
      else if ( v20 )
      {
LABEL_41:
        v26 = *(unsigned int **)(*(_QWORD *)(a1 + 8) + 864LL);
        goto LABEL_26;
      }
      v26 = *(unsigned int **)(*(_QWORD *)(a1 + 8) + 856LL);
LABEL_26:
      sub_7FD600(a1, (__int64)v19, v26, *(double *)a3.m128_u64);
      goto LABEL_27;
    }
    if ( v24 || *(_QWORD *)(*(_QWORD *)(a1 + 8) + 848LL) != *(_QWORD *)(v19[1].m128i_i64[0] + 40) )
    {
      sub_180B130(v22);
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
      {
        sub_186A4C0(*(double *)a3.m128_u64);
        v36 = sub_180B150(v22, v19);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v91, v19, *(_QWORD *)(a1 + 8), 0, 0, 0);
        sub_160E8B0(v36, v91);
        std::__ostream_insert<char,std::char_traits<char>>();
LABEL_46:
        sub_18572D0(v92);
        sub_186A500(v92, "\n");
        return 0;
      }
      v37 = sub_180B150(v22, v19);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v91, v19, *(_QWORD *)(a1 + 8), 0, 0, 0);
      sub_160E8B0(v37, v91);
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_49:
      sub_18572D0(v92);
      return 0;
    }
    if ( v19[1].m128i_i32[2] != 1 )
      return 0;
    v40 = v19[2].m128i_i64[0];
    if ( *(_WORD *)(v40 + 4) )
      return 0;
    v41 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
    if ( !v41 )
      return 0;
    if ( *v41 )
      return 0;
    if ( v41[1] != 2 )
      return 0;
    if ( *(_DWORD *)(v40 + 24) != 2 )
      return 0;
    v42 = *(_QWORD *)(v40 + 32);
    v43 = *(_QWORD *)(v40 + 40);
    v88 = v91;
    sub_180C5A0(v91, "cc");
    v44 = (__int64)v88;
    v45 = (unsigned int *)"comm";
    v89 = *(unsigned int **)(v19[1].m128i_i64[0] + 16);
    v87.m128i_i64[0] = v91[0];
    sub_180C5A0(v88, "comm");
    if ( v89 != (unsigned int *)v87.m128i_i64[0] && *(_QWORD *)(v19[1].m128i_i64[0] + 16) != v91[0] )
      return 0;
    if ( *(_WORD *)(v42 + 4) || *(_WORD *)(v43 + 4) )
      return 0;
    if ( *(_QWORD *)(v42 + 16) != *(_QWORD *)(v43 + 16) )
      goto LABEL_65;
    v58 = *(_DWORD *)(v42 + 24);
    if ( v58 != *(_DWORD *)(v43 + 24) )
      goto LABEL_65;
    if ( v89 == (unsigned int *)v87.m128i_i64[0] )
    {
      v87.m128i_i32[0] = 0;
      if ( v58 )
      {
        while ( 1 )
        {
          v60 = v87.m128i_u32[0] + 4LL;
          v61 = *(unsigned int **)(v42 + 8 * v60);
          v89 = *(unsigned int **)(v43 + 8 * v60);
          v62 = sub_7FD040(a1, v61);
          v63 = *(_QWORD *)(a1 + 48);
          v64 = v62;
          if ( v63 && v62 < *(_DWORD *)(v63 - 4) )
          {
            do
            {
              v65 = v64;
              v64 = *(_DWORD *)(v63 + 4LL * v64);
              if ( v65 == v64 )
                break;
              v66 = v64;
              v64 = *(_DWORD *)(v63 + 4LL * v64);
            }
            while ( v66 != v64 );
          }
          v44 = a1;
          v90 = v64;
          v59 = sub_7FD040(a1, v89);
          v45 = *(unsigned int **)(a1 + 48);
          if ( v45 && v59 < *(v45 - 1) )
          {
            do
            {
              v67 = v59;
              v59 = v45[v59];
              if ( v67 == v59 )
                break;
              v68 = v59;
              v59 = v45[v59];
            }
            while ( v68 != v59 );
          }
          if ( v59 != v90 )
            break;
          if ( ++v87.m128i_i32[0] >= *(_DWORD *)(v42 + 24) )
            goto LABEL_117;
        }
LABEL_65:
        sub_180B130(v44);
        if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
        {
          sub_186A4C0(*(double *)a3.m128_u64);
          v46 = sub_180B150(v44, v45);
          std::__ostream_insert<char,std::char_traits<char>>();
          v47 = v19;
          v48 = v88;
          sub_1606360(v88, v47, *(_QWORD *)(a1 + 8), 0, 0, 0);
          v49 = sub_160E8B0(v46, v48);
          sub_7F5300(v49, "\n");
          goto LABEL_46;
        }
        v79 = sub_180B150(v44, v45);
        std::__ostream_insert<char,std::char_traits<char>>();
        v80 = v19;
        v81 = v88;
        sub_1606360(v88, v80, *(_QWORD *)(a1 + 8), 0, 0, 0);
        v82 = sub_160E8B0(v79, v81);
        sub_7F5300(v82, "\n");
        goto LABEL_49;
      }
    }
    else
    {
      if ( v58 != 2 )
        goto LABEL_65;
      v45 = *(unsigned int **)(v42 + 32);
      v44 = a1;
      if ( !sub_7FD560(a1, v45, *(unsigned int **)(v43 + 40)) )
        goto LABEL_65;
      v45 = *(unsigned int **)(v43 + 32);
      v44 = a1;
      if ( !sub_7FD560(a1, v45, *(unsigned int **)(v42 + 40)) )
        goto LABEL_65;
    }
LABEL_117:
    sub_7FD600(a1, v42, (unsigned int *)v43, *(double *)a3.m128_u64);
    if ( (unsigned int)sub_180B130(a1) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
      {
        sub_186A4C0(*(double *)a3.m128_u64);
        v77 = sub_180B150(a1, v42);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v77, *(_QWORD *)(a1 + 8), v42, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v77, *(_QWORD *)(a1 + 8), v43, 3);
        sub_7F5300(v77, "\n");
        sub_186A500(v77, "\n");
      }
      else
      {
        v78 = sub_180B150(a1, v42);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v78, *(_QWORD *)(a1 + 8), v42, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v78, *(_QWORD *)(a1 + 8), v43, 3);
        sub_7F5300(v78, "\n");
      }
    }
LABEL_27:
    ++v16;
  }
  while ( (const __m128i **)v18 != v16 );
  v27 = *(unsigned int ***)(a1 + 88);
  if ( !v27 || (v28 = &v27[2 * *((unsigned int *)v27 - 1)], v27 == v28) )
  {
LABEL_91:
    v12 = *(_QWORD *)(a1 + 48);
    goto LABEL_92;
  }
  while ( !sub_7FD560(a1, *v27, v27[1]) )
  {
    v27 += 2;
    if ( v28 == v27 )
      goto LABEL_91;
  }
  return 1;
}

