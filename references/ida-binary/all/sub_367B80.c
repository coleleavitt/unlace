__int64 __fastcall sub_367B80(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  bool v10; // bl
  __int64 v11; // r15
  unsigned int v12; // ebx
  __int64 v14; // rdx
  __int64 tinfo_property4; // r12
  __int64 v16; // rax
  __int64 v17; // rdi
  int flags; // eax
  __m128 v19; // xmm0
  _BYTE *v20; // rsi
  __int64 v21; // rbx
  size_t v22; // r12
  __int64 v23; // r13
  const char *v24; // rcx
  const char *v25; // rdx
  int v26; // ebx
  const char *v27; // r8
  const char *v28; // rdx
  const char *v29; // rdx
  int v30; // ecx
  const char *v31; // r8
  int v32; // r9d
  unsigned __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // rsi
  size_t v36; // r14
  __int64 v37; // r13
  size_t v38; // r8
  __int64 v39; // rsi
  unsigned __int64 v40; // r13
  __int64 v41; // r14
  const char *v42; // rsi
  int v43; // r13d
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  int v47; // r14d
  __int64 v48; // rdx
  int *v49; // r10
  __int64 v50; // r8
  _BYTE *v51; // rsi
  __int64 v52; // r11
  __int64 v53; // rdx
  char *v54; // r11
  __int64 v55; // rsi
  __m128i si128; // xmm0
  __int64 v57; // rsi
  __int64 v58; // rax
  __m128 v59; // xmm4
  __m128 v60; // xmm5
  const char *v61; // rdi
  int v62; // r15d
  double v63; // xmm4_8
  double v64; // xmm5_8
  int v65; // [rsp+0h] [rbp-180h]
  __int64 v66; // [rsp+8h] [rbp-178h]
  int *v67; // [rsp+10h] [rbp-170h]
  __int64 v68; // [rsp+18h] [rbp-168h]
  __int64 v69; // [rsp+20h] [rbp-160h]
  size_t v71; // [rsp+40h] [rbp-140h]
  size_t v72; // [rsp+48h] [rbp-138h]
  unsigned __int8 v73; // [rsp+48h] [rbp-138h]
  const char *v74; // [rsp+50h] [rbp-130h] BYREF
  __int128 v75; // [rsp+58h] [rbp-128h]
  const char *v76; // [rsp+70h] [rbp-110h] BYREF
  __int128 v77; // [rsp+78h] [rbp-108h]
  void *v78; // [rsp+90h] [rbp-F0h] BYREF
  __int128 v79; // [rsp+98h] [rbp-E8h]
  void *src; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v81; // [rsp+B8h] [rbp-C8h]
  __int64 v82; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v83; // [rsp+D8h] [rbp-A8h]
  __int64 v84; // [rsp+F0h] [rbp-90h] BYREF
  __int128 v85; // [rsp+F8h] [rbp-88h]
  __int64 v86; // [rsp+110h] [rbp-70h] BYREF
  __int128 v87; // [rsp+118h] [rbp-68h]
  int str_type; // [rsp+128h] [rbp-58h]
  int v89; // [rsp+12Ch] [rbp-54h]
  __int64 v90; // [rsp+130h] [rbp-50h]
  bool v91; // [rsp+138h] [rbp-48h]
  unsigned __int64 v92; // [rsp+148h] [rbp-38h]

  v92 = __readfsqword(0x28u);
  v86 = 0;
  v89 = -1;
  v90 = -1;
  v91 = 0;
  v87 = 0;
  str_type = getinf(52) & 0xFFFFFF;
  v10 = *(_DWORD *)(a1 + 8) == 25 || *(_DWORD *)(a1 + 8) == 58;
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 208);
    if ( (*(_BYTE *)(v11 + 31) & 0xEF) != 0xD )
      goto LABEL_3;
    v14 = *(_QWORD *)(v11 + 32);
    if ( v14 == -1 )
      goto LABEL_3;
    a2 = 297;
    tinfo_property4 = get_tinfo_property4(*(_QWORD *)(v11 + 8), 297, v14, 0, 0, 0);
    v16 = *(_QWORD *)(v11 + 120) & 0xFLL;
    v91 = v16 == 10;
    if ( v16 == 10 )
      str_type = *(_DWORD *)(v11 + 128);
  }
  else
  {
    a2 = (__int64)&v82;
    if ( (unsigned __int8)sub_1F09E0(0, &v82, &v84) )
    {
      v17 = v82;
    }
    else
    {
      v17 = xmmword_8CC810;
      v82 = xmmword_8CC810;
    }
    if ( v17 == -1 )
    {
      v91 = 0;
      goto LABEL_3;
    }
    a2 = 4;
    flags = get_flags_ex(v17, 4);
    tinfo_property4 = v82;
    if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
    {
      v91 = 1;
      str_type = get_str_type(v82);
      tinfo_property4 = v82;
    }
    else
    {
      v91 = 0;
    }
  }
  if ( tinfo_property4 == -1 )
  {
LABEL_3:
    v12 = 0;
    goto LABEL_4;
  }
  v74 = nullptr;
  v76 = nullptr;
  v75 = 0;
  v77 = 0;
  sub_34C220((__int64)&v76, (__int64)&v86, 0.0, a4, a5);
  v78 = nullptr;
  v19 = 0;
  v79 = 0;
  if ( !v10 )
  {
    sub_169A50((__int64 *)&v78, (__int64)"at %a", 0.0);
    goto LABEL_22;
  }
  get_tid_name(&v78, tinfo_property4);
  v20 = v78;
  if ( (_QWORD)v79 )
  {
    v21 = v79 + 4;
    v22 = v79 - 1;
    v23 = v79 + 3;
    if ( *((_QWORD *)&v79 + 1) >= (unsigned __int64)(v79 + 4) )
      goto LABEL_19;
    goto LABEL_87;
  }
  if ( *((_QWORD *)&v79 + 1) <= 4u )
  {
    v22 = 0;
    v21 = 5;
    v23 = 4;
LABEL_87:
    v78 = (void *)qvector_reserve(&v78, v78, v21, 1);
    v20 = v78;
LABEL_19:
    *(_QWORD *)&v79 = v21;
    v20[v23] = 0;
    if ( v22 )
      memmove((char *)v78 + 4, v78, v22);
    goto LABEL_21;
  }
  *(_QWORD *)&v79 = 5;
  *((_BYTE *)v78 + 4) = 0;
LABEL_21:
  *(_DWORD *)v78 = 544370534;
LABEL_22:
  v24 = &s1;
  if ( (_QWORD)v77 )
    v24 = v76;
  v25 = &s1;
  if ( (_QWORD)v79 )
    v25 = (const char *)v78;
  sub_169A50(
    (__int64 *)&v74,
    (__int64)"@0:613[]\nString literal %s\n%%/%%* Currently: <%s:B101::::>|\n\n\n Create:\n",
    v25,
    v24);
  v26 = 0;
  do
  {
    v43 = v26 + 2;
    src = nullptr;
    v81 = 0;
    do
    {
      v44 = v26;
      v45 = v87;
      v46 = v86;
      ++v26;
      v47 = v44;
      v48 = v87 + 1;
      v73 = byte_5E84C0[v44];
      if ( *((_QWORD *)&v87 + 1) < (unsigned __int64)(v87 + 1) )
      {
        v58 = qvector_reserve(&v86, v86, v48, 8);
        v45 = v87;
        v86 = v58;
        v46 = v58;
        v48 = v87 + 1;
      }
      v49 = (int *)(v46 + 8 * v45);
      *(_QWORD *)&v87 = v48;
      *v49 = v47;
      v50 = v81;
      if ( (unsigned __int64)v81 > 1 )
      {
        v51 = src;
        v52 = v81 - 1;
        v53 = v81 + 3;
        if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 3) )
        {
          v66 = v81 - 1;
          v67 = v49;
          v68 = v81;
          v69 = v81 + 3;
          src = (void *)qvector_reserve(&src, src, v53, 1);
          v52 = v66;
          v51 = src;
          v49 = v67;
          v50 = v68;
          v53 = v69;
        }
        *(_QWORD *)&v81 = v53;
        v51[v50 + 2] = 0;
        v54 = (char *)src + v52;
        *(_WORD *)v54 = 31776;
        v54[2] = 32;
      }
      v82 = 0;
      v84 = 0;
      v83 = 0;
      v85 = 0;
      if ( v73 == 0xFF )
      {
        v49[1] = getinf(52);
        v55 = v82;
        if ( *((_QWORD *)&v83 + 1) <= 0x14u )
        {
          v82 = qvector_reserve(&v82, v82, 21, 1);
          v55 = v82;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DD120);
        *(_QWORD *)&v83 = 21;
        *(_DWORD *)(v55 + 16) = 1684370529;
        *(__m128i *)v55 = si128;
        *(_BYTE *)(v82 + 20) = 0;
        v57 = v84;
        if ( *((_QWORD *)&v85 + 1) <= 0x37u )
        {
          v84 = qvector_reserve(&v84, v84, 56, 1);
          v57 = v84;
        }
        *(_QWORD *)&v85 = 56;
        *(__m128i *)v57 = _mm_load_si128((const __m128i *)&xmmword_5DD130);
        *(__m128i *)(v57 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DD140);
        v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD150);
        *(__m128 *)(v57 + 32) = v19;
        *(_QWORD *)(v57 + 47) = 0x7372657463617261LL;
        HIDWORD(v90) = v47;
        *(_BYTE *)(v84 + 55) = 0;
      }
      else
      {
        v49[1] = v73;
        print_strlit_type(&v82, v73, &v84, 4);
      }
      v27 = &s1;
      if ( (_QWORD)v83 )
        v27 = (const char *)v82;
      v28 = &s1;
      if ( (_QWORD)v85 )
        v28 = (const char *)v84;
      sub_16FAA0((__int64 *)&src, (__int64)"<#%s#%*s:B%d::%d::>", v28, 20, v27, v47, 20);
      if ( v84 )
      {
        *(_QWORD *)&v85 = 0;
        *(double *)v19.m128_u64 = qfree(v84, "<#%s#%*s:B%d::%d::>", v29, v30, v31, v32, v65);
      }
      if ( v82 )
      {
        *(_QWORD *)&v83 = 0;
        *(double *)v19.m128_u64 = qfree(v82, "<#%s#%*s:B%d::%d::>", *(double *)v19.m128_u64);
      }
    }
    while ( v26 != v43 );
    v33 = 2;
    v34 = v75;
    if ( (_QWORD)v75 )
    {
      v33 = v75 + 1;
      v34 = v75 - 1;
    }
    v35 = (__int64)v74;
    if ( *((_QWORD *)&v75 + 1) < v33 )
    {
      v74 = (const char *)qvector_reserve(&v74, v74, v33, 1);
      v35 = (__int64)v74;
    }
    *(_QWORD *)&v75 = v33;
    *(_BYTE *)(v35 + v34) = 32;
    v74[v34 + 1] = 0;
    v72 = v81;
    if ( (_QWORD)v81 )
    {
      v36 = v81 - 1;
      if ( (_QWORD)v81 != 1 )
      {
        v37 = v75;
        v38 = v81 - 1;
        if ( (_QWORD)v75 )
        {
          v37 = v75 - 1;
          v38 = v36 + v75 - 1;
          v72 = v36 + v75;
        }
        v39 = (__int64)v74;
        if ( *((_QWORD *)&v75 + 1) < v72 )
        {
          v71 = v38;
          v74 = (const char *)qvector_reserve(&v74, v74, v72, 1);
          v38 = v71;
          v39 = (__int64)v74;
        }
        *(_QWORD *)&v75 = v72;
        *(_BYTE *)(v39 + v38) = 0;
        memcpy((void *)&v74[v37], src, v36);
      }
    }
    v40 = 2;
    v41 = v75;
    if ( (_QWORD)v75 )
    {
      v40 = v75 + 1;
      v41 = v75 - 1;
    }
    v42 = v74;
    if ( *((_QWORD *)&v75 + 1) < v40 )
    {
      v74 = (const char *)qvector_reserve(&v74, v74, v40, 1);
      v42 = v74;
    }
    *(_QWORD *)&v75 = v40;
    v42[v41] = 10;
    v74[v41 + 1] = 0;
    if ( src )
    {
      *(_QWORD *)&v81 = 0;
      *(double *)v19.m128_u64 = qfree(src, v42, *(double *)v19.m128_u64);
    }
  }
  while ( v26 <= 9 );
  sub_16FAA0((__int64 *)&v74, (__int64)" <Manage ~d~efaults:k100::::>\n");
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    *(double *)v19.m128_u64 = qfree(v78, " <Manage ~d~efaults:k100::::>\n");
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    *(double *)v19.m128_u64 = qfree(v76, " <Manage ~d~efaults:k100::::>\n");
  }
  v61 = &s1;
  if ( (_QWORD)v75 )
    LODWORD(v61) = (_DWORD)v74;
  a2 = (__int64)sub_367720;
  v12 = 1;
  if ( (unsigned int)sub_1697D0(
                       (int)v61,
                       (__int64)sub_367720,
                       (__int64)&v86,
                       0,
                       0,
                       0,
                       v19,
                       (__m128)0LL,
                       (__m128)0LL,
                       a6,
                       v59,
                       v60,
                       a9,
                       a10,
                       0)
    && v89 != -1 )
  {
    v62 = getinf(52);
    setinf(52, v89);
    a2 = v62;
    LOBYTE(v12) = (int)sub_3327D0(a1, *(double *)v19.m128_u64, (__m128)0LL, (__m128)0LL, a6, v63, v64, a9, a10) > 0;
    setinf(52, v62);
    v12 = (unsigned __int8)v12;
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74, (const char *)a2);
  }
LABEL_4:
  if ( v86 )
  {
    *(_QWORD *)&v87 = 0;
    qfree(v86, (const char *)a2);
  }
  return v12;
}
