__int64 __fastcall sub_12CEA0(__int64 a1, double a2, double a3, __m128 a4)
{
  bool v4; // bl
  __int64 v5; // r15
  unsigned int v6; // ebx
  int tinfo_property4; // eax
  __int64 v9; // rdx
  int v10; // r15d
  int v11; // edi
  int flags; // eax
  _BYTE *v13; // rsi
  __int64 v14; // r13
  size_t v15; // r15
  __int64 v16; // rbx
  int v17; // ebx
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rsi
  size_t v21; // r14
  __int64 v22; // r13
  size_t v23; // r8
  __int64 v24; // rsi
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rsi
  int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  int v32; // r14d
  __int64 v33; // rdx
  _DWORD *v34; // r10
  __int64 v35; // r8
  _BYTE *v36; // rsi
  __int64 v37; // r11
  __int64 v38; // rdx
  char *v39; // r11
  __m128i *v40; // rsi
  __m128i si128; // xmm0
  __int64 v42; // rsi
  __int64 v43; // rax
  const char *v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // [rsp+8h] [rbp-178h]
  _DWORD *v47; // [rsp+10h] [rbp-170h]
  __int64 v48; // [rsp+18h] [rbp-168h]
  __int64 v49; // [rsp+20h] [rbp-160h]
  size_t v51; // [rsp+40h] [rbp-140h]
  size_t v52; // [rsp+48h] [rbp-138h]
  unsigned __int8 v53; // [rsp+48h] [rbp-138h]
  const char *v54; // [rsp+50h] [rbp-130h] BYREF
  __int128 v55; // [rsp+58h] [rbp-128h]
  __int64 v56; // [rsp+70h] [rbp-110h] BYREF
  __int128 v57; // [rsp+78h] [rbp-108h]
  void *v58; // [rsp+90h] [rbp-F0h] BYREF
  __int128 v59; // [rsp+98h] [rbp-E8h]
  void *src; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v61; // [rsp+B8h] [rbp-C8h]
  __int64 v62; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-A8h]
  __int64 v64; // [rsp+F0h] [rbp-90h] BYREF
  __int128 v65; // [rsp+F8h] [rbp-88h]
  __int64 v66; // [rsp+110h] [rbp-70h] BYREF
  __int128 v67; // [rsp+118h] [rbp-68h]
  int str_type; // [rsp+128h] [rbp-58h]
  int v69; // [rsp+12Ch] [rbp-54h]
  __int64 v70; // [rsp+130h] [rbp-50h]
  bool v71; // [rsp+138h] [rbp-48h]
  unsigned __int64 v72; // [rsp+148h] [rbp-38h]

  v72 = __readfsqword(0x28u);
  v66 = 0;
  v69 = -1;
  v70 = -1;
  v71 = 0;
  v67 = 0;
  str_type = getinf() & 0xFFFFFF;
  v4 = *(_DWORD *)(a1 + 8) == 25 || *(_DWORD *)(a1 + 8) == 58;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 200);
    if ( (*(_BYTE *)(v5 + 31) & 0xEF) != 0xD || *(_QWORD *)(v5 + 32) == -1 )
      goto LABEL_3;
    tinfo_property4 = get_tinfo_property4();
    v9 = *(_QWORD *)(v5 + 120) & 0xFLL;
    v71 = v9 == 10;
    if ( v9 == 10 )
      str_type = *(_DWORD *)(v5 + 128);
    v10 = tinfo_property4;
  }
  else
  {
    if ( (unsigned __int8)sub_161360(0, &v62, &v64) )
    {
      v11 = v62;
    }
    else
    {
      v11 = qword_251700;
      LODWORD(v62) = qword_251700;
    }
    if ( v11 == -1 )
    {
      v71 = 0;
      goto LABEL_3;
    }
    flags = get_flags_ex();
    v10 = v62;
    if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
    {
      v71 = 1;
      str_type = get_str_type();
      v10 = v62;
    }
    else
    {
      v71 = 0;
    }
  }
  if ( v10 == -1 )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v54 = nullptr;
  v56 = 0;
  v55 = 0;
  v57 = 0;
  sub_126AF0((__int64)&v56, (__int64)&v66, 0.0, a3, a4);
  v58 = nullptr;
  v59 = 0;
  if ( v4 )
  {
    get_tid_name();
    v13 = v58;
    if ( (_QWORD)v59 )
    {
      v14 = v59 + 3;
      v15 = v59 - 1;
      v16 = v59 + 4;
      if ( *((_QWORD *)&v59 + 1) >= (unsigned __int64)(v59 + 4) )
        goto LABEL_20;
    }
    else
    {
      if ( *((_QWORD *)&v59 + 1) > 4u )
      {
        *(_QWORD *)&v59 = 5;
        *((_BYTE *)v58 + 4) = 0;
LABEL_22:
        *(_DWORD *)v58 = 544370534;
        goto LABEL_23;
      }
      v15 = 0;
      v16 = 5;
      v14 = 4;
    }
    v58 = (void *)qvector_reserve();
    v13 = v58;
LABEL_20:
    *(_QWORD *)&v59 = v16;
    v13[v14] = 0;
    if ( v15 )
      memmove((char *)v58 + 4, v58, v15);
    goto LABEL_22;
  }
  sub_94360((__int64 *)&v58);
LABEL_23:
  sub_94360((__int64 *)&v54);
  v17 = 0;
  do
  {
    v28 = v17 + 2;
    src = nullptr;
    v61 = 0;
    do
    {
      v29 = v17;
      v30 = v67;
      v31 = v66;
      ++v17;
      v32 = v29;
      v33 = v67 + 1;
      v53 = byte_1D5B58[v29];
      if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
      {
        v43 = qvector_reserve();
        v30 = v67;
        v66 = v43;
        v31 = v43;
        v33 = v67 + 1;
      }
      v34 = (_DWORD *)(v31 + 8 * v30);
      *(_QWORD *)&v67 = v33;
      *v34 = v32;
      v35 = v61;
      if ( (unsigned __int64)v61 > 1 )
      {
        v36 = src;
        v37 = v61 - 1;
        v38 = v61 + 3;
        if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v61 + 3) )
        {
          v46 = v61 - 1;
          v47 = v34;
          v48 = v61;
          v49 = v61 + 3;
          src = (void *)qvector_reserve();
          v37 = v46;
          v36 = src;
          v34 = v47;
          v35 = v48;
          v38 = v49;
        }
        *(_QWORD *)&v61 = v38;
        v36[v35 + 2] = 0;
        v39 = (char *)src + v37;
        *(_WORD *)v39 = 31776;
        v39[2] = 32;
      }
      v62 = 0;
      v64 = 0;
      v63 = 0;
      v65 = 0;
      if ( v53 == 0xFF )
      {
        v34[1] = getinf();
        v40 = (__m128i *)v62;
        if ( *((_QWORD *)&v63 + 1) <= 0x14u )
        {
          v62 = qvector_reserve();
          v40 = (__m128i *)v62;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D2670);
        *(_QWORD *)&v63 = 21;
        v40[1].m128i_i32[0] = 1684370529;
        *v40 = si128;
        *(_BYTE *)(v62 + 20) = 0;
        v42 = v64;
        if ( *((_QWORD *)&v65 + 1) <= 0x37u )
        {
          v64 = qvector_reserve();
          v42 = v64;
        }
        *(_QWORD *)&v65 = 56;
        *(__m128i *)v42 = _mm_load_si128((const __m128i *)&xmmword_1D2680);
        *(__m128i *)(v42 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2690);
        *(__m128i *)(v42 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D26A0);
        *(_QWORD *)(v42 + 47) = 0x7372657463617261LL;
        HIDWORD(v70) = v32;
        *(_BYTE *)(v64 + 55) = 0;
      }
      else
      {
        v34[1] = v53;
        print_strlit_type();
      }
      sub_96570((__int64 *)&src);
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree();
      }
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree();
      }
    }
    while ( v17 != v28 );
    v18 = 2;
    v19 = v55;
    if ( (_QWORD)v55 )
    {
      v18 = v55 + 1;
      v19 = v55 - 1;
    }
    v20 = (__int64)v54;
    if ( *((_QWORD *)&v55 + 1) < v18 )
    {
      v54 = (const char *)qvector_reserve();
      v20 = (__int64)v54;
    }
    *(_QWORD *)&v55 = v18;
    *(_BYTE *)(v20 + v19) = 32;
    v54[v19 + 1] = 0;
    v52 = v61;
    if ( (_QWORD)v61 )
    {
      v21 = v61 - 1;
      if ( (_QWORD)v61 != 1 )
      {
        v22 = v55;
        v23 = v61 - 1;
        if ( (_QWORD)v55 )
        {
          v22 = v55 - 1;
          v23 = v21 + v55 - 1;
          v52 = v21 + v55;
        }
        v24 = (__int64)v54;
        if ( *((_QWORD *)&v55 + 1) < v52 )
        {
          v51 = v23;
          v54 = (const char *)qvector_reserve();
          v23 = v51;
          v24 = (__int64)v54;
        }
        *(_QWORD *)&v55 = v52;
        *(_BYTE *)(v24 + v23) = 0;
        memcpy((void *)&v54[v22], src, v21);
      }
    }
    v25 = 2;
    v26 = v55;
    if ( (_QWORD)v55 )
    {
      v25 = v55 + 1;
      v26 = v55 - 1;
    }
    v27 = (__int64)v54;
    if ( *((_QWORD *)&v55 + 1) < v25 )
    {
      v54 = (const char *)qvector_reserve();
      v27 = (__int64)v54;
    }
    *(_QWORD *)&v55 = v25;
    *(_BYTE *)(v27 + v26) = 10;
    v54[v26 + 1] = 0;
    if ( src )
    {
      *(_QWORD *)&v61 = 0;
      qfree();
    }
  }
  while ( v17 <= 9 );
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree();
  }
  v44 = s1;
  if ( (_QWORD)v55 )
    v44 = v54;
  v6 = 1;
  if ( (unsigned int)sub_8F730((__int64)v44, sub_12CA30, &v66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) && v69 != -1 )
  {
    getinf();
    v45 = v69;
    setinf();
    LOBYTE(v6) = (int)sub_13C850(a1, v45) > 0;
    setinf();
    v6 = (unsigned __int8)v6;
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
LABEL_4:
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree();
  }
  return v6;
}

