__int64 __fastcall sub_7B39B0(_QWORD *a1, __int64 a2, _QWORD *a3, unsigned int a4, double a5)
{
  _DWORD **v5; // r8
  unsigned int v6; // r14d
  unsigned int *v8; // rdx
  unsigned int *v9; // r12
  __int64 v10; // rdi
  unsigned int *v11; // r13
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 (__fastcall *v15)(_QWORD); // rax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r12
  __int64 (__fastcall *v19)(_QWORD); // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 (__fastcall *v24)(_QWORD); // rax
  __int64 (__fastcall *v25)(); // rax
  unsigned int v26; // r9d
  unsigned int *v27; // rbp
  unsigned int v28; // eax
  unsigned int *v29; // rcx
  __int64 v30; // r12
  unsigned int *v31; // rdi
  _DWORD *v32; // rdx
  _DWORD *v33; // r10
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rbp
  __int64 (__fastcall *v40)(); // rax
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 (__fastcall *v43)(); // rax
  __int64 (__fastcall *v44)(); // rax
  __int64 v45; // r12
  __int64 v46; // r12
  __int64 (__fastcall *v47)(_QWORD); // rax
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  unsigned int *v54; // r13
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rbx
  __m128i v59; // xmm0
  __m128 v60; // xmm1
  __m128 v61; // xmm2
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rbx
  _DWORD *v66; // r14
  int v67; // r13d
  _DWORD *v68; // rbp
  __int64 v69; // r14
  __int64 v70; // rbp
  __int64 (__fastcall *v71)(); // rax
  __int64 v72; // rdi
  __int64 v73; // r13
  __int64 (__fastcall *v74)(); // rax
  unsigned int *v75; // r13
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rbx
  __m128i v80; // xmm0
  __m128 v81; // xmm1
  __m128 v82; // xmm3
  __int64 v83; // rdi
  __int64 v84; // rbx
  __int64 v85; // rdi
  _DWORD *v86; // r14
  int v87; // r13d
  _DWORD *v88; // rbp
  __int64 v89; // r14
  _DWORD **v91; // [rsp+8h] [rbp-70h]
  __int64 v92; // [rsp+10h] [rbp-68h]
  unsigned int *v93; // [rsp+18h] [rbp-60h]
  unsigned int v94; // [rsp+28h] [rbp-50h]
  _DWORD **v95; // [rsp+38h] [rbp-40h]

  v5 = (_DWORD **)a3;
  v6 = a4;
  v8 = (unsigned int *)*a3;
  v93 = (unsigned int *)a2;
  if ( !v8 )
    goto LABEL_21;
  v9 = &v8[*(v8 - 1)];
  if ( v8 == v9 )
    goto LABEL_21;
  v10 = a4 >> 1;
  v95 = v5;
  v11 = v8;
  v92 = 4LL * a4;
  v12 = v10;
  do
  {
    v13 = *a1;
    v14 = *v11;
    v15 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
    if ( v15 == sub_7C55E0 )
    {
      v16 = a1[20];
      if ( v16 )
      {
        v10 = *(_QWORD *)(v16 + 880);
        a2 = *(unsigned int *)(v10 + 4LL * (v14 >> 1));
        if ( (unsigned int)a2 < *(_DWORD *)(v16 + 888)
          || (a2 = ((unsigned __int8)v14 ^ (unsigned __int8)a2) & 1, (_DWORD)a2) )
        {
LABEL_8:
          sub_180B130(v10);
          if ( (unsigned __int8)sub_186A530(a5) )
          {
            sub_186A4C0(a5);
            v17 = sub_180B150(v10, a2);
            std::__ostream_insert<char,std::char_traits<char>>();
            v18 = sub_7C5DC0(v17, v14);
            std::__ostream_insert<char,std::char_traits<char>>();
            v19 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
            if ( v19 == sub_7C55E0 )
              v20 = (unsigned int)sub_7C55E0(a1);
            else
              v20 = ((unsigned int (__fastcall *)(_QWORD *, _QWORD))v19)(a1, v14);
            v21 = sub_17F35B0(v18, v20);
LABEL_12:
            std::operator<<<std::char_traits<char>>();
            v22 = sub_180B150(v21, "\n");
            (*(void (__fastcall **)(unsigned int *, __int64, _QWORD *, __int64))(*(_QWORD *)v93 + 136LL))(
              v93,
              v22,
              a1 + 10,
              1);
            sub_186A500(v93, v22);
            return 0;
          }
          v45 = sub_180B150(v10, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          v46 = sub_7C5DC0(v45, v14);
          std::__ostream_insert<char,std::char_traits<char>>();
          v47 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
          if ( v47 == sub_7C55E0 )
            v48 = (unsigned int)sub_7C55E0(a1);
          else
            v48 = ((unsigned int (__fastcall *)(_QWORD *, _QWORD))v47)(a1, v14);
          v49 = sub_17F35B0(v46, v48);
          goto LABEL_58;
        }
LABEL_16:
        a2 = *(unsigned int *)(*(_QWORD *)(v16 + 880) + 4 * v12);
        if ( (unsigned int)a2 < *(_DWORD *)(v16 + 888) )
          goto LABEL_19;
        a2 = ((unsigned __int8)a4 ^ (unsigned __int8)a2) & 1;
        if ( (_DWORD)a2 )
          goto LABEL_19;
        v25 = *(__int64 (__fastcall **)())(v13 + 552);
        if ( v25 == sub_7C5680 )
          goto LABEL_19;
        goto LABEL_51;
      }
      v34 = a1[3];
      a2 = *(_QWORD *)(v34 + 3288);
      if ( *(_DWORD *)(a2 + 4LL * v14) != 1 )
        goto LABEL_8;
      goto LABEL_36;
    }
    a2 = v14;
    v10 = (__int64)a1;
    if ( ((unsigned int (__fastcall *)(_QWORD *, _QWORD))v15)(a1, v14) != 1 )
      goto LABEL_8;
    v13 = *a1;
    v24 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
    if ( v24 == sub_7C55E0 )
    {
      v16 = a1[20];
      if ( v16 )
        goto LABEL_16;
      v34 = a1[3];
LABEL_36:
      v10 = v92;
      v35 = *(_DWORD *)(*(_QWORD *)(v34 + 3288) + v92);
      goto LABEL_37;
    }
    a2 = a4;
    v10 = (__int64)a1;
    v35 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v24)(a1, a4);
LABEL_37:
    if ( v35 != 1 )
      goto LABEL_19;
    v25 = *(__int64 (__fastcall **)())(*a1 + 552LL);
    if ( v25 == sub_7C5680 )
    {
      if ( a1[20] )
        goto LABEL_19;
      v36 = a1[3];
      v37 = *(_DWORD *)(*(_QWORD *)(v36 + 3296) + 24LL * (v14 >> 1));
      goto LABEL_41;
    }
LABEL_51:
    a2 = v14;
    v10 = (__int64)a1;
    v37 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v25)(a1, v14);
    v44 = *(__int64 (__fastcall **)())(*a1 + 552LL);
    if ( v44 == sub_7C5680 )
    {
      v38 = 0;
      if ( !a1[20] )
      {
        v36 = a1[3];
LABEL_41:
        v10 = 3 * v12;
        a2 = *(_QWORD *)(v36 + 3296) + 24 * v12;
        v38 = *(_DWORD *)a2;
      }
    }
    else
    {
      a2 = a4;
      v10 = (__int64)a1;
      v94 = v37;
      v38 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v44)(a1, a4);
      v37 = v94;
    }
    if ( v38 < v37 )
    {
      sub_180B130(v10);
      if ( (unsigned __int8)sub_186A530(a5) )
      {
        sub_186A4C0(a5);
        v39 = sub_180B150(v10, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_7C5DC0(v39, v14);
        std::__ostream_insert<char,std::char_traits<char>>();
        v40 = *(__int64 (__fastcall **)())(*a1 + 552LL);
        if ( v40 != sub_7C5680 )
          ((void (__fastcall *)(_QWORD *, _QWORD))v40)(a1, v14);
        v41 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        v42 = sub_180B150(v41, "\n");
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_7C5DC0(v42, a4);
        std::__ostream_insert<char,std::char_traits<char>>();
        v43 = *(__int64 (__fastcall **)())(*a1 + 552LL);
        if ( v43 != sub_7C5680 )
          ((void (__fastcall *)(_QWORD *, _QWORD))v43)(a1, a4);
        v21 = std::ostream::_M_insert<unsigned long>();
        goto LABEL_12;
      }
      v70 = sub_180B150(v10, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_7C5DC0(v70, v14);
      std::__ostream_insert<char,std::char_traits<char>>();
      v71 = *(__int64 (__fastcall **)())(*a1 + 552LL);
      if ( v71 != sub_7C5680 )
        ((void (__fastcall *)(_QWORD *, _QWORD))v71)(a1, v14);
      v72 = std::ostream::_M_insert<unsigned long>();
      std::operator<<<std::char_traits<char>>();
      v73 = sub_180B150(v72, "\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_7C5DC0(v73, a4);
      std::__ostream_insert<char,std::char_traits<char>>();
      v74 = *(__int64 (__fastcall **)())(*a1 + 552LL);
      if ( v74 != sub_7C5680 )
        ((void (__fastcall *)(_QWORD *, _QWORD))v74)(a1, a4);
      v49 = std::ostream::_M_insert<unsigned long>();
LABEL_58:
      std::operator<<<std::char_traits<char>>();
      v50 = sub_180B150(v49, "\n");
      (*(void (__fastcall **)(unsigned int *, __int64, _QWORD *, __int64))(*(_QWORD *)v93 + 136LL))(
        v93,
        v50,
        a1 + 10,
        1);
      return 0;
    }
LABEL_19:
    ++v11;
  }
  while ( v9 != v11 );
  v6 = a4;
  v5 = v95;
LABEL_21:
  v26 = 0;
  v27 = v93 + 19;
  v28 = v93[15];
  v29 = v93 + 19;
  v30 = 2LL * v93[8];
  v31 = &v93[v30 + 19];
  if ( !(v30 * 4) )
  {
    if ( v28 )
    {
LABEL_60:
      sub_180B130(v31);
      if ( (unsigned __int8)sub_186A530(a5) )
      {
        sub_186A4C0(a5);
        v51 = sub_180B150(v31, a2);
        v52 = sub_7C5DC0(v51, v6);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v52, " not found among literals\n");
      }
      else
      {
        v53 = sub_180B150(v31, a2);
        sub_7C5DC0(v53, v6);
        std::operator<<<std::char_traits<char>>();
      }
      return 0;
    }
    else
    {
LABEL_64:
      v91 = v5;
      sub_180B130(v31);
      if ( (unsigned __int8)sub_186A530(a5) )
      {
        sub_186A4C0(a5);
        sub_180B150(v31, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v54 = v93;
        v55 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        v56 = sub_180B150(v55, "\n");
        (*(void (__fastcall **)(unsigned int *, __int64, _QWORD *, __int64))(*(_QWORD *)v93 + 136LL))(
          v93,
          v56,
          a1 + 10,
          1);
        sub_180B150(v93, v56);
        std::__ostream_insert<char,std::char_traits<char>>();
        v57 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        v58 = 8LL * v93[8];
        if ( v58 && (unsigned __int64)(v58 - 8) > 0x18 )
        {
          v59 = 0;
          do
          {
            v60 = (__m128)_mm_loadu_si128((const __m128i *)(v54 + 19));
            v61 = (__m128)_mm_loadu_si128((const __m128i *)(v54 + 23));
            v54 += 8;
            v59 = _mm_add_epi32(v59, (__m128i)_mm_shuffle_ps(v60, v61, 136));
          }
          while ( (unsigned int *)((char *)v93 + ((v58 - 8) & 0xFFFFFFFFFFFFFFE0LL)) != v54 );
        }
        sub_180B150(v57, "\n");
        std::__ostream_insert<char,std::char_traits<char>>();
        v62 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        v63 = sub_180B150(v62, "\n");
        std::__ostream_insert<char,std::char_traits<char>>();
        v64 = sub_7C5DC0(v63, v6);
        std::operator<<<std::char_traits<char>>();
        v65 = sub_180B150(v64, "\n");
        std::__ostream_insert<char,std::char_traits<char>>();
        v66 = *v91;
        if ( *v91 )
        {
          v67 = *(v66 - 1);
          if ( v67 )
          {
            if ( *v66 == -2 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
            }
            if ( v67 != 1 )
            {
              v68 = v66 + 1;
              v69 = (__int64)&v66[v67 - 2 + 2];
              do
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                if ( *v68 == -2 )
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
                else
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                }
                ++v68;
              }
              while ( v68 != (_DWORD *)v69 );
            }
          }
        }
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v65, "\n");
        return 0;
      }
      else
      {
        sub_180B150(v31, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v75 = v93;
        v76 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        v77 = sub_180B150(v76, "\n");
        (*(void (__fastcall **)(unsigned int *, __int64, _QWORD *, __int64))(*(_QWORD *)v93 + 136LL))(
          v93,
          v77,
          a1 + 10,
          1);
        sub_180B150(v93, v77);
        std::__ostream_insert<char,std::char_traits<char>>();
        v78 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        v79 = 8LL * v93[8];
        if ( v79 && (unsigned __int64)(v79 - 8) > 0x18 )
        {
          v80 = 0;
          do
          {
            v81 = (__m128)_mm_loadu_si128((const __m128i *)(v75 + 19));
            v82 = (__m128)_mm_loadu_si128((const __m128i *)(v75 + 23));
            v75 += 8;
            v80 = _mm_add_epi32(v80, (__m128i)_mm_shuffle_ps(v81, v82, 136));
          }
          while ( v75 != (unsigned int *)((char *)v93 + ((v79 - 8) & 0xFFFFFFFFFFFFFFE0LL)) );
        }
        sub_180B150(v78, "\n");
        std::__ostream_insert<char,std::char_traits<char>>();
        v83 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        v84 = sub_180B150(v83, "\n");
        std::__ostream_insert<char,std::char_traits<char>>();
        v85 = sub_7C5DC0(v84, v6);
        std::operator<<<std::char_traits<char>>();
        sub_180B150(v85, "\n");
        std::__ostream_insert<char,std::char_traits<char>>();
        v86 = *v91;
        if ( *v91 )
        {
          v87 = *(v86 - 1);
          if ( v87 )
          {
            if ( *v86 == -2 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
            }
            if ( v87 != 1 )
            {
              v88 = v86 + 1;
              v89 = (__int64)&v86[v87 - 2 + 2];
              do
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                if ( *v88 == -2 )
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
                else
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                }
                ++v88;
              }
              while ( (_DWORD *)v89 != v88 );
            }
          }
        }
        std::operator<<<std::char_traits<char>>();
        return 0;
      }
    }
  }
  while ( 2 )
  {
    while ( 2 )
    {
      a2 = v29[1];
      if ( v6 == (_DWORD)a2 )
      {
LABEL_23:
        v29 += 2;
        if ( v31 == v29 )
          goto LABEL_30;
        continue;
      }
      break;
    }
    v32 = *v5;
    a2 = (unsigned int)a2 ^ 1;
    if ( *v5 )
    {
      v33 = &v32[*(v32 - 1)];
      if ( v32 != v33 )
      {
        while ( *v32 != (_DWORD)a2 )
        {
          if ( v33 == ++v32 )
            goto LABEL_29;
        }
        goto LABEL_23;
      }
    }
LABEL_29:
    v26 += *v29;
    v29 += 2;
    if ( v31 != v29 )
      continue;
    break;
  }
LABEL_30:
  if ( v26 >= v28 )
    goto LABEL_64;
  while ( v6 != v27[1] )
  {
    v27 += 2;
    if ( v27 == v31 )
      goto LABEL_60;
  }
  return 1;
}

