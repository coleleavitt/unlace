__int64 __fastcall sub_387400(
        __int64 a1,
        const char *a2,
        const char *a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rcx
  __int64 ph; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  int v18; // eax
  __int64 v19; // rdx
  const char *v20; // r12
  char *v21; // rsi
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rdx
  const char *v25; // rsi
  char *v26; // r15
  char *v27; // r14
  unsigned __int64 v28; // rax
  char *v29; // r14
  unsigned int v30; // edx
  __int64 v31; // rcx
  size_t v32; // r14
  size_t v33; // r12
  size_t v34; // rdx
  char *v35; // rax
  __int64 v36; // r12
  __int64 v37; // r14
  char *v38; // rax
  unsigned int v39; // r15d
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int16 v43; // r12
  __int64 v44; // rax
  size_t v45; // r12
  __int64 v46; // r14
  __m128 v47; // xmm0
  __int64 v48; // rdx
  int *v49; // rax
  int v50; // r14d
  int *v51; // rcx
  int v52; // edx
  __int64 v53; // r15
  int v54; // r12d
  const char *v55; // rdx
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  int v59; // ecx
  int v60; // eax
  unsigned int v61; // eax
  __int64 v62; // r9
  __m128 v63; // xmm4
  __m128 v64; // xmm5
  __int64 v65; // rbx
  __m128 v66; // xmm4
  __m128 v67; // xmm5
  __int64 v68; // rsi
  __int64 v69; // rbx
  void *v70; // rax
  __int64 v71; // rdi
  unsigned int v72; // r14d
  __int64 v73; // rdx
  __int64 v74; // r12
  __int64 v75; // rbx
  __int64 *v76; // rax
  __int64 v77; // rdi
  __int64 v79; // r12
  int v80; // eax
  __int64 v81; // r12
  unsigned __int64 v82; // r15
  char *v83; // rsi
  __m128i si128; // xmm0
  char *v85; // r12
  __int64 v86; // [rsp+0h] [rbp-F0h]
  unsigned __int8 v88; // [rsp+18h] [rbp-D8h]
  char v89; // [rsp+1Fh] [rbp-D1h]
  __int64 v91; // [rsp+20h] [rbp-D0h]
  __int64 v92; // [rsp+28h] [rbp-C8h]
  __int64 v93; // [rsp+28h] [rbp-C8h]
  __int64 v94; // [rsp+28h] [rbp-C8h]
  void *v95; // [rsp+28h] [rbp-C8h]
  unsigned __int64 v96; // [rsp+28h] [rbp-C8h]
  __int64 v97; // [rsp+28h] [rbp-C8h]
  int v98; // [rsp+3Ch] [rbp-B4h] BYREF
  char *v99; // [rsp+40h] [rbp-B0h] BYREF
  __int128 v100; // [rsp+48h] [rbp-A8h]
  __int64 v101; // [rsp+60h] [rbp-90h] BYREF
  __int128 v102; // [rsp+68h] [rbp-88h]
  unsigned int *v103; // [rsp+80h] [rbp-70h] BYREF
  __int128 v104; // [rsp+88h] [rbp-68h]
  void *src; // [rsp+A0h] [rbp-50h] BYREF
  size_t n[2]; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v107; // [rsp+B8h] [rbp-38h]

  v88 = (unsigned __int8)a2;
  v89 = (char)a2;
  v107 = __readfsqword(0x28u);
  ph = get_ph(a1, a2);
  v18 = *(_DWORD *)(ph + 72);
  v19 = *(unsigned int *)(ph + 68);
  if ( v18 == (_DWORD)v19 )
  {
    v72 = 0;
    sub_169630(
      (int)"No segment registers defined by the processor module",
      (__int64)a2,
      v19,
      v12,
      v14,
      v15,
      a5,
      a6,
      a7,
      a8,
      v16,
      v17,
      a11,
      a12,
      v86);
    return v72;
  }
  if ( (unsigned __int16)word_8CF308 > v18 - (int)v19 )
    word_8CF308 = 0;
  if ( a4 == -1 )
    a4 = xmmword_8CC810;
  v100 = 0;
  v99 = nullptr;
  v99 = (char *)qvector_reserve(&v99, 0, 13, 1);
  v20 = "BUTTON YES NONE\nBUTTON NO NONE\nBUTTON CANCEL NONE\n";
  *(_QWORD *)&v100 = 13;
  strcpy(v99, "STARTITEM 1\n");
  v21 = v99;
  v92 = 50;
  if ( v88 )
  {
    v92 = 0;
    v20 = (const char *)&unk_5C2F25;
  }
  v22 = v100;
  v23 = v92;
  if ( (_QWORD)v100 )
  {
    v22 = v100 - 1;
    v23 = v100 - 1 + v92;
    v24 = v100 + v92;
    if ( *((_QWORD *)&v100 + 1) >= (unsigned __int64)(v100 + v92) )
      goto LABEL_10;
  }
  else
  {
    v24 = v92 + 1;
    if ( *((_QWORD *)&v100 + 1) >= (unsigned __int64)(v92 + 1) )
      goto LABEL_10;
  }
  v86 = v24;
  v99 = (char *)qvector_reserve(&v99, v99, v24, 1);
  v24 = v86;
  v21 = v99;
LABEL_10:
  *(_QWORD *)&v100 = v24;
  v21[v23] = 0;
  v25 = (const char *)v92;
  v26 = v99;
  v27 = &v99[v22];
  if ( (unsigned int)v92 >= 8 )
  {
    *(_QWORD *)v27 = *(_QWORD *)v20;
    *(_QWORD *)&v27[v92 - 8] = *(_QWORD *)&v20[v92 - 8];
    v28 = (unsigned __int64)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v29 = &v27[-v28];
    v25 = (const char *)(((_DWORD)v29 + (_DWORD)v92) & 0xFFFFFFF8);
    if ( (unsigned int)v25 >= 8 )
    {
      v30 = 0;
      do
      {
        v31 = v30;
        v30 += 8;
        v25 = *(const char **)(v20 - v29 + v31);
        *(_QWORD *)(v28 + v31) = v25;
      }
      while ( v30 < (((_DWORD)v29 + (_DWORD)v92) & 0xFFFFFFF8) );
    }
    v26 = v99;
  }
  if ( a3 )
  {
    v93 = v100;
    v32 = strlen(a3);
    v33 = v32;
    if ( v93 )
    {
      --v93;
      v33 = v32 + v93;
    }
    v34 = v33 + 1;
    v35 = v26;
    if ( *((_QWORD *)&v100 + 1) < v33 + 1 )
    {
      LOBYTE(v86) = v33 + 1;
      v35 = (char *)qvector_reserve(&v99, v26, v34, 1);
      v99 = v35;
      v34 = v33 + 1;
    }
    *(_QWORD *)&v100 = v34;
    v25 = a3;
    v35[v33] = 0;
    memmove(&v99[v93], a3, v32);
    v26 = v99;
  }
  v94 = v100;
  if ( (_QWORD)v100 )
  {
    v36 = v100 + 3;
    v37 = v100 + 4;
    v94 = v100 - 1;
    v38 = v26;
    if ( *((_QWORD *)&v100 + 1) >= (unsigned __int64)(v100 + 4) )
      goto LABEL_23;
  }
  else
  {
    v37 = 5;
    v36 = 4;
    v38 = v26;
    if ( *((_QWORD *)&v100 + 1) >= 5u )
      goto LABEL_23;
  }
  v25 = v26;
  v38 = (char *)qvector_reserve(&v99, v26, v37, 1);
  v99 = v38;
LABEL_23:
  *(_QWORD *)&v100 = v37;
  v38[v36] = 0;
  *(_DWORD *)&v99[v94] = 170861834;
  src = nullptr;
  *(_OWORD *)n = 0;
  v39 = *(_DWORD *)(ph + 68);
  v101 = 0;
  *(_QWORD *)&xmmword_8CF2F8 = 0;
  v102 = 0;
  if ( (signed int)v39 <= *(_DWORD *)(ph + 72) )
  {
    do
    {
      if ( *(_DWORD *)(ph + 80) != v39 )
      {
        get_reg_name(&src, v39, *(int *)(ph + 76), 0xFFFFFFFFLL);
        v95 = nullptr;
        v45 = n[0];
        if ( n[0] )
        {
          v95 = (void *)qalloc_or_throw(n[0]);
          memcpy(v95, src, v45);
        }
        v40 = v102;
        v41 = v101;
        if ( *((_QWORD *)&v102 + 1) < (unsigned __int64)(v102 + 1) )
        {
          v101 = qvector_reserve(&v101, v101, v102 + 1, 24);
          v40 = v102;
          v41 = v101;
        }
        v42 = v41 + 24 * v40;
        *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
        *(_QWORD *)v42 = v95;
        *(_QWORD *)&v102 = v102 + 1;
        LOWORD(v103) = get_sreg_range_num(a4, v39);
        v43 = (__int16)v103;
        v44 = xmmword_8CF2F8;
        v25 = (const char *)qword_8CF2F0;
        if ( *((_QWORD *)&xmmword_8CF2F8 + 1) < (unsigned __int64)(xmmword_8CF2F8 + 1) )
        {
          qword_8CF2F0 = qvector_reserve(&qword_8CF2F0, qword_8CF2F0, xmmword_8CF2F8 + 1, 2);
          v25 = (const char *)qword_8CF2F0;
          v44 = xmmword_8CF2F8;
        }
        *(_WORD *)&v25[2 * v44] = v43;
        *(_QWORD *)&xmmword_8CF2F8 = xmmword_8CF2F8 + 1;
      }
      ++v39;
    }
    while ( *(_DWORD *)(ph + 72) >= (signed int)v39 );
    if ( src )
    {
      n[0] = 0;
      qfree(src, v25);
    }
  }
  v46 = qalloc_or_throw(240);
  v91 = v46;
  sub_386F40(v46, (const char *)ph, (__int64)&word_8CF308, v88);
  v47 = 0;
  v103 = nullptr;
  v104 = 0;
  v48 = *(int *)(v46 + 48);
  if ( (int)v48 <= 0 )
  {
    v50 = 0;
  }
  else
  {
    v49 = *(int **)(v46 + 56);
    v50 = 0;
    v51 = &v49[v48];
    do
    {
      v52 = *v49++;
      v50 += v52 + 4;
    }
    while ( v49 != v51 );
  }
  byte_8CF2E0 = (unsigned __int64)v102 > 9;
  if ( (unsigned __int64)v102 > 9 )
  {
    v81 = v100;
    if ( (_QWORD)v100 )
    {
      v82 = v100 + 29;
      v81 = v100 - 1;
      v97 = v100 + 28;
    }
    else
    {
      v97 = 29;
      v82 = 30;
    }
    v83 = v99;
    if ( *((_QWORD *)&v100 + 1) < v82 )
    {
      v99 = (char *)qvector_reserve(&v99, v99, v82, 1);
      v83 = v99;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD3C0);
    *(_QWORD *)&v100 = v82;
    v83[v97] = 0;
    v85 = &v99[v81];
    v61 = 0;
    *(__m128i *)v85 = si128;
    v47 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD3D0);
    *(__m128 *)(v85 + 13) = v47;
  }
  else
  {
    v53 = v101;
    LODWORD(v96) = 24 * v102;
    if ( 24LL * (_QWORD)v102 )
    {
      v96 = 0;
      v54 = 1;
      do
      {
        v58 = *(_QWORD *)(v53 + 8);
        v55 = &s1;
        if ( v54 <= 9 && v89 )
        {
          if ( v58 )
            v55 = *(const char **)v53;
          sub_16FAA0((__int64 *)&v99, (__int64)"<%s (~%d~):R>", v55, v54);
        }
        else
        {
          if ( v58 )
            v55 = *(const char **)v53;
          sub_16FAA0((__int64 *)&v99, (__int64)"<%s:R>", v55);
        }
        v56 = *(_QWORD *)(v53 + 8);
        v57 = v56 - 1;
        if ( v96 >= v56 - 1 )
          v57 = v96;
        if ( !v56 )
          v57 = v96;
        v53 += 24;
        ++v54;
        v96 = v57;
      }
      while ( v53 != v101 + 24LL * (_QWORD)v102 );
    }
    else
    {
      v54 = 1;
    }
    sub_16FAA0((__int64 *)&v99, (__int64)"%d>\n", 3);
    v59 = v54 - 1;
    v60 = v59 * v96 + 2 * v59;
    if ( v54 - 1 > 9 )
      v59 = 9;
    v61 = 3 * v59 + v60;
  }
  if ( v50 >= (int)v61 )
    v61 = v50;
  sub_16FAA0((__int64 *)&v99, (__int64)"<Segment register change points:E2::%d::>\n", v61);
  v98 = (unsigned __int16)word_8CF308;
  if ( v88 )
  {
    v79 = qword_8CF2E8;
    v68 = (__int64)sub_386B20;
    if ( byte_8CF2E0 )
      v80 = sub_1697D0(
              (int)v99,
              (__int64)sub_386B20,
              (__int64)&v101,
              (__int64)&v98,
              v91,
              (__int64)&v103,
              v47,
              a6,
              a7,
              a8,
              v63,
              v64,
              a11,
              a12,
              v86);
    else
      v80 = sub_1697D0(
              (int)v99,
              (__int64)sub_386B20,
              (__int64)&word_8CF308,
              v91,
              (__int64)&v103,
              v62,
              v47,
              a6,
              a7,
              a8,
              v63,
              v64,
              a11,
              a12,
              v86);
    qword_8CF2E8 = v79;
    if ( v80 && (_QWORD)v104 )
    {
      v68 = *(_DWORD *)(ph + 68) + (unsigned int)(unsigned __int16)word_8CF308;
      if ( (int)v68 >= *(_DWORD *)(ph + 80) )
        v68 = (unsigned int)(v68 + 1);
      v72 = getn_sreg_range(a1, v68, *v103);
      goto LABEL_71;
    }
  }
  else
  {
    v65 = sub_17FC20(a3);
    if ( byte_8CF2E0 )
    {
      v68 = 4194308;
      sub_2EF360(
        (int)v99,
        4194308,
        (__int64)sub_386B20,
        (__int64)&v101,
        (__int64)&v98,
        v91,
        v47,
        a6,
        a7,
        a8,
        v66,
        v67,
        a11,
        a12,
        (char)&v103);
      if ( v65 )
      {
LABEL_67:
        if ( qword_8CF2E8 )
        {
          v69 = *(unsigned __int16 *)(qword_8CF2F0 + 2LL * (unsigned __int16)word_8CF308);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_8CF2E8 + 56LL))(qword_8CF2E8, 2);
          v47.m128_u64[0] = 0;
          src = nullptr;
          *(_OWORD *)n = 0;
          v70 = (void *)qvector_reserve(&src, 0, 1, 8);
          v71 = qword_8CF2E8;
          src = v70;
          *((_QWORD *)v70 + n[0]++) = v69;
          (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v71 + 8LL))(v71, 2, &src);
          v68 = 2;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_8CF2E8 + 48LL))(qword_8CF2E8, 2);
          if ( src )
          {
            n[0] = 0;
            *(double *)v47.m128_u64 = qfree(src, (_BYTE *)&dword_0 + 2);
          }
        }
      }
    }
    else
    {
      v68 = 4194308;
      sub_2EF360(
        (int)v99,
        4194308,
        (__int64)sub_386B20,
        (__int64)&word_8CF308,
        v91,
        (__int64)&v103,
        v47,
        a6,
        a7,
        a8,
        v66,
        v67,
        a11,
        a12,
        v86);
      if ( v65 )
        goto LABEL_67;
    }
  }
  v72 = 0;
LABEL_71:
  if ( v103 )
  {
    *(_QWORD *)&v104 = 0;
    *(double *)v47.m128_u64 = qfree(v103, (const char *)v68);
  }
  v73 = v101;
  if ( v101 )
  {
    v74 = v102;
    if ( (_QWORD)v102 )
    {
      v75 = 0;
      do
      {
        v76 = (__int64 *)(v73 + 24 * v75);
        v77 = *v76;
        if ( *v76 )
        {
          v76[1] = 0;
          *(double *)v47.m128_u64 = qfree(v77, (const char *)v68, *(double *)v47.m128_u64);
          v73 = v101;
        }
        ++v75;
      }
      while ( v74 != v75 );
    }
    *(_QWORD *)&v102 = 0;
    *(double *)v47.m128_u64 = qfree(v73, (const char *)v68, *(double *)v47.m128_u64);
  }
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    qfree(v99, (const char *)v68, *(double *)v47.m128_u64);
  }
  return v72;
}
