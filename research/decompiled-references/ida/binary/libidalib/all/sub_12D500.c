__int64 __fastcall sub_12D500(__int64 a1, double a2, double a3, __m128 a4)
{
  bool v4; // bl
  __int64 v5; // r15
  unsigned int v6; // ebx
  __int64 tinfo_property4; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  int flags; // eax
  _BYTE *v12; // rsi
  __int64 v13; // rbx
  size_t v14; // r12
  __int64 v15; // r13
  int v16; // ebx
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  size_t v20; // r14
  __int64 v21; // r13
  size_t v22; // r8
  __int64 v23; // rsi
  unsigned __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rsi
  int v27; // r13d
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  int v31; // r14d
  __int64 v32; // rdx
  _DWORD *v33; // r10
  __int64 v34; // r8
  _BYTE *v35; // rsi
  __int64 v36; // r11
  __int64 v37; // rdx
  char *v38; // r11
  __m128i *v39; // rsi
  __m128i si128; // xmm0
  __int64 v41; // rsi
  __int64 v42; // rax
  const char *v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // [rsp+8h] [rbp-178h]
  _DWORD *v46; // [rsp+10h] [rbp-170h]
  __int64 v47; // [rsp+18h] [rbp-168h]
  __int64 v48; // [rsp+20h] [rbp-160h]
  size_t v50; // [rsp+40h] [rbp-140h]
  size_t v51; // [rsp+48h] [rbp-138h]
  unsigned __int8 v52; // [rsp+48h] [rbp-138h]
  const char *v53; // [rsp+50h] [rbp-130h] BYREF
  __int128 v54; // [rsp+58h] [rbp-128h]
  __int64 v55; // [rsp+70h] [rbp-110h] BYREF
  __int128 v56; // [rsp+78h] [rbp-108h]
  void *v57; // [rsp+90h] [rbp-F0h] BYREF
  __int128 v58; // [rsp+98h] [rbp-E8h]
  void *src; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-C8h]
  __int64 v61; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+D8h] [rbp-A8h]
  __int64 v63; // [rsp+F0h] [rbp-90h] BYREF
  __int128 v64; // [rsp+F8h] [rbp-88h]
  __int64 v65; // [rsp+110h] [rbp-70h] BYREF
  __int128 v66; // [rsp+118h] [rbp-68h]
  int str_type; // [rsp+128h] [rbp-58h]
  int v68; // [rsp+12Ch] [rbp-54h]
  __int64 v69; // [rsp+130h] [rbp-50h]
  bool v70; // [rsp+138h] [rbp-48h]
  unsigned __int64 v71; // [rsp+148h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  v65 = 0;
  v68 = -1;
  v69 = -1;
  v70 = 0;
  v66 = 0;
  str_type = getinf() & 0xFFFFFF;
  v4 = *(_DWORD *)(a1 + 8) == 25 || *(_DWORD *)(a1 + 8) == 58;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 208);
    if ( (*(_BYTE *)(v5 + 31) & 0xEF) != 0xD || *(_QWORD *)(v5 + 32) == -1 )
      goto LABEL_3;
    tinfo_property4 = get_tinfo_property4();
    v9 = *(_QWORD *)(v5 + 120) & 0xFLL;
    v70 = v9 == 10;
    if ( v9 == 10 )
      str_type = *(_DWORD *)(v5 + 128);
  }
  else
  {
    if ( (unsigned __int8)sub_161C80(0, &v61, &v63) )
    {
      v10 = v61;
    }
    else
    {
      v10 = xmmword_2528A0;
      v61 = xmmword_2528A0;
    }
    if ( v10 == -1 )
    {
      v70 = 0;
      goto LABEL_3;
    }
    flags = get_flags_ex();
    tinfo_property4 = v61;
    if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
    {
      v70 = 1;
      str_type = get_str_type();
      tinfo_property4 = v61;
    }
    else
    {
      v70 = 0;
    }
  }
  if ( tinfo_property4 == -1 )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v53 = nullptr;
  v55 = 0;
  v54 = 0;
  v56 = 0;
  sub_1271E0((__int64)&v55, (__int64)&v65, 0.0, a3, a4);
  v57 = nullptr;
  v58 = 0;
  if ( v4 )
  {
    get_tid_name();
    v12 = v57;
    if ( (_QWORD)v58 )
    {
      v13 = v58 + 4;
      v14 = v58 - 1;
      v15 = v58 + 3;
      if ( *((_QWORD *)&v58 + 1) >= (unsigned __int64)(v58 + 4) )
        goto LABEL_19;
    }
    else
    {
      if ( *((_QWORD *)&v58 + 1) > 4u )
      {
        *(_QWORD *)&v58 = 5;
        *((_BYTE *)v57 + 4) = 0;
LABEL_21:
        *(_DWORD *)v57 = 544370534;
        goto LABEL_22;
      }
      v14 = 0;
      v13 = 5;
      v15 = 4;
    }
    v57 = (void *)qvector_reserve();
    v12 = v57;
LABEL_19:
    *(_QWORD *)&v58 = v13;
    v12[v15] = 0;
    if ( v14 )
      memmove((char *)v57 + 4, v57, v14);
    goto LABEL_21;
  }
  sub_94440((__int64 *)&v57);
LABEL_22:
  sub_94440((__int64 *)&v53);
  v16 = 0;
  do
  {
    v27 = v16 + 2;
    src = nullptr;
    v60 = 0;
    do
    {
      v28 = v16;
      v29 = v66;
      v30 = v65;
      ++v16;
      v31 = v28;
      v32 = v66 + 1;
      v52 = byte_1D6B78[v28];
      if ( *((_QWORD *)&v66 + 1) < (unsigned __int64)(v66 + 1) )
      {
        v42 = qvector_reserve();
        v29 = v66;
        v65 = v42;
        v30 = v42;
        v32 = v66 + 1;
      }
      v33 = (_DWORD *)(v30 + 8 * v29);
      *(_QWORD *)&v66 = v32;
      *v33 = v31;
      v34 = v60;
      if ( (unsigned __int64)v60 > 1 )
      {
        v35 = src;
        v36 = v60 - 1;
        v37 = v60 + 3;
        if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 3) )
        {
          v45 = v60 - 1;
          v46 = v33;
          v47 = v60;
          v48 = v60 + 3;
          src = (void *)qvector_reserve();
          v36 = v45;
          v35 = src;
          v33 = v46;
          v34 = v47;
          v37 = v48;
        }
        *(_QWORD *)&v60 = v37;
        v35[v34 + 2] = 0;
        v38 = (char *)src + v36;
        *(_WORD *)v38 = 31776;
        v38[2] = 32;
      }
      v61 = 0;
      v63 = 0;
      v62 = 0;
      v64 = 0;
      if ( v52 == 0xFF )
      {
        v33[1] = getinf();
        v39 = (__m128i *)v61;
        if ( *((_QWORD *)&v62 + 1) <= 0x14u )
        {
          v61 = qvector_reserve();
          v39 = (__m128i *)v61;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D3690);
        *(_QWORD *)&v62 = 21;
        v39[1].m128i_i32[0] = 1684370529;
        *v39 = si128;
        *(_BYTE *)(v61 + 20) = 0;
        v41 = v63;
        if ( *((_QWORD *)&v64 + 1) <= 0x37u )
        {
          v63 = qvector_reserve();
          v41 = v63;
        }
        *(_QWORD *)&v64 = 56;
        *(__m128i *)v41 = _mm_load_si128((const __m128i *)&xmmword_1D36A0);
        *(__m128i *)(v41 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D36B0);
        *(__m128i *)(v41 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D36C0);
        *(_QWORD *)(v41 + 47) = 0x7372657463617261LL;
        HIDWORD(v69) = v31;
        *(_BYTE *)(v63 + 55) = 0;
      }
      else
      {
        v33[1] = v52;
        print_strlit_type();
      }
      sub_96630((__int64 *)&src);
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree();
      }
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree();
      }
    }
    while ( v16 != v27 );
    v17 = 2;
    v18 = v54;
    if ( (_QWORD)v54 )
    {
      v17 = v54 + 1;
      v18 = v54 - 1;
    }
    v19 = (__int64)v53;
    if ( *((_QWORD *)&v54 + 1) < v17 )
    {
      v53 = (const char *)qvector_reserve();
      v19 = (__int64)v53;
    }
    *(_QWORD *)&v54 = v17;
    *(_BYTE *)(v19 + v18) = 32;
    v53[v18 + 1] = 0;
    v51 = v60;
    if ( (_QWORD)v60 )
    {
      v20 = v60 - 1;
      if ( (_QWORD)v60 != 1 )
      {
        v21 = v54;
        v22 = v60 - 1;
        if ( (_QWORD)v54 )
        {
          v21 = v54 - 1;
          v22 = v20 + v54 - 1;
          v51 = v20 + v54;
        }
        v23 = (__int64)v53;
        if ( *((_QWORD *)&v54 + 1) < v51 )
        {
          v50 = v22;
          v53 = (const char *)qvector_reserve();
          v22 = v50;
          v23 = (__int64)v53;
        }
        *(_QWORD *)&v54 = v51;
        *(_BYTE *)(v23 + v22) = 0;
        memcpy((void *)&v53[v21], src, v20);
      }
    }
    v24 = 2;
    v25 = v54;
    if ( (_QWORD)v54 )
    {
      v24 = v54 + 1;
      v25 = v54 - 1;
    }
    v26 = (__int64)v53;
    if ( *((_QWORD *)&v54 + 1) < v24 )
    {
      v53 = (const char *)qvector_reserve();
      v26 = (__int64)v53;
    }
    *(_QWORD *)&v54 = v24;
    *(_BYTE *)(v26 + v25) = 10;
    v53[v25 + 1] = 0;
    if ( src )
    {
      *(_QWORD *)&v60 = 0;
      qfree();
    }
  }
  while ( v16 <= 9 );
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  v43 = s1;
  if ( (_QWORD)v54 )
    v43 = v53;
  v6 = 1;
  if ( (unsigned int)sub_8F810((__int64)v43, sub_12D080, &v65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) && v68 != -1 )
  {
    getinf();
    v44 = v68;
    setinf();
    LOBYTE(v6) = (int)sub_13CE60(a1, v44) > 0;
    setinf();
    v6 = (unsigned __int8)v6;
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
LABEL_4:
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  return v6;
}

