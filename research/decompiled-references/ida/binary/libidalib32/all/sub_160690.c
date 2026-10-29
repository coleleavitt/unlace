__int64 __fastcall sub_160690(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // eax
  int v13; // r14d
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  void *v21; // rax
  void *v22; // rdx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  __int64 v26; // rax
  __m128i si128; // xmm2
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v34; // r8
  int v35; // r14d
  size_t v36; // r12
  void *v37; // r13
  void *v38; // rdi
  __int64 v39; // rdx
  size_t v40; // r9
  void *v41; // r11
  void *v42; // rdi
  __int64 v43; // r14
  size_t v44; // r12
  __int64 v45; // rdx
  unsigned __int8 v46; // al
  int v47; // r14d
  __int64 v48; // rax
  unsigned int v49; // ebx
  __int64 v50; // rax
  bool v51; // dl
  int v52; // eax
  size_t v53; // rbx
  void *v54; // r14
  __m128i v55; // xmm0
  void *v56; // r13
  void *v57; // rdi
  void *v58; // [rsp+8h] [rbp-1D8h]
  size_t v59; // [rsp+10h] [rbp-1D0h]
  int v60; // [rsp+18h] [rbp-1C8h]
  unsigned __int64 v61; // [rsp+18h] [rbp-1C8h]
  unsigned __int64 v62; // [rsp+18h] [rbp-1C8h]
  unsigned int v63; // [rsp+2Ch] [rbp-1B4h]
  int v64; // [rsp+38h] [rbp-1A8h]
  __m128i v66; // [rsp+40h] [rbp-1A0h] BYREF
  int v67; // [rsp+54h] [rbp-18Ch] BYREF
  __int64 v68; // [rsp+58h] [rbp-188h] BYREF
  void *src; // [rsp+60h] [rbp-180h] BYREF
  __int128 v70; // [rsp+68h] [rbp-178h]
  void *v71; // [rsp+80h] [rbp-160h] BYREF
  __int128 v72; // [rsp+88h] [rbp-158h]
  __int64 v73; // [rsp+98h] [rbp-148h]
  __int128 v74; // [rsp+A0h] [rbp-140h]
  __int64 v75; // [rsp+B0h] [rbp-130h]
  __int64 v76; // [rsp+B8h] [rbp-128h]
  char v77; // [rsp+C0h] [rbp-120h]
  char v78[4]; // [rsp+D0h] [rbp-110h] BYREF
  unsigned __int64 v79; // [rsp+D4h] [rbp-10Ch]
  void *v80; // [rsp+E0h] [rbp-100h]
  size_t n[2]; // [rsp+E8h] [rbp-F8h]
  __int64 v82; // [rsp+F8h] [rbp-E8h]
  int v83; // [rsp+100h] [rbp-E0h]
  __int64 v84; // [rsp+108h] [rbp-D8h]
  __int64 v85; // [rsp+110h] [rbp-D0h]
  void *dest; // [rsp+118h] [rbp-C8h]
  __m128i v87; // [rsp+120h] [rbp-C0h] BYREF
  int v88; // [rsp+130h] [rbp-B0h]
  __int64 v89; // [rsp+138h] [rbp-A8h]
  int v90; // [rsp+140h] [rbp-A0h]
  char v91; // [rsp+148h] [rbp-98h]
  _BYTE v92[20]; // [rsp+14Ch] [rbp-94h] BYREF
  __m128i v93; // [rsp+160h] [rbp-80h] BYREF
  __int64 v94; // [rsp+170h] [rbp-70h]
  char v95; // [rsp+178h] [rbp-68h]
  __m128i v96; // [rsp+180h] [rbp-60h]
  __m128i v97; // [rsp+190h] [rbp-50h]
  unsigned __int64 v98; // [rsp+1A8h] [rbp-38h]

  v6 = a5;
  v98 = __readfsqword(0x28u);
  v91 = 0;
  v83 = 0;
  v84 = 0;
  v85 = -1;
  dest = nullptr;
  v88 = -1;
  v93 = 0;
  v63 = a6 & 1;
  v89 = 0;
  v64 = a6 & 2;
  *(_QWORD *)v92 = 0xFFFFFFFEFFFFFFFFLL;
  v90 = -1;
  *(_QWORD *)&v92[12] = -1;
  v87 = 0;
  v94 = 0xFFFFFFFFLL;
  v10 = *(_QWORD *)a1;
  v95 = 0;
  v71 = nullptr;
  v73 = 0;
  v75 = 0;
  v76 = -1;
  v77 = 0;
  v72 = 0;
  v74 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **))(v10 + 592))(a1, &v71) || v77 )
  {
    v67 = -1;
    v11 = *(_QWORD *)a1;
    src = nullptr;
    v70 = 0;
    v66.m128i_i64[0] = (__int64)&v68;
    (*(void (__fastcall **)(__int64 *, __int64, void **, int *, __int64, __int64, __int64, _QWORD))(v11 + 584))(
      &v68,
      a1,
      &src,
      &v67,
      a3,
      a4,
      v6,
      a6);
    if ( !(_BYTE)v68 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 576LL))(
              a1,
              &src,
              a3,
              a4,
              (unsigned int)v6,
              a6);
      if ( v12 != -1 )
      {
        v67 = sub_120440(v66.m128i_i64[0], v12);
        v13 = v67;
        if ( v67 < 0 )
        {
          v45 = v68;
          v83 = 2;
          v68 = v89;
          v14 = v70;
          v89 = v45;
          v15 = v70;
          if ( !(_QWORD)v70 )
            goto LABEL_7;
        }
        else
        {
          v83 = 3;
          copy_tinfo_t();
          v14 = v70;
          v90 = v13;
          v15 = v70;
          if ( !(_QWORD)v70 )
            goto LABEL_7;
        }
        goto LABEL_27;
      }
      if ( (unsigned __int8)sub_13A0A0(a1, v63, (__int64 *)&src) )
      {
        v14 = v70;
        v83 = 4;
        v15 = v70;
        if ( !(_QWORD)v70 )
          goto LABEL_7;
        goto LABEL_27;
      }
LABEL_25:
      v35 = sub_15EAC0(a1, a3, a4, v6, v64 | a6);
      if ( v35 == -1 )
      {
LABEL_8:
        clear_tinfo_t();
        if ( src )
        {
          *(_QWORD *)&v70 = 0;
          qfree();
        }
        goto LABEL_10;
      }
      get_ea_name();
      v14 = v70;
      v88 = v35;
      v83 = 5;
      v15 = v70;
      if ( !(_QWORD)v70 )
      {
LABEL_7:
        v87.m128i_i64[0] = 0;
        goto LABEL_8;
      }
LABEL_27:
      v36 = v14 - 1;
      if ( v14 != 1 )
      {
        v37 = src;
        v38 = dest;
        if ( v87.m128i_i64[1] < v14 )
        {
          dest = (void *)qvector_reserve();
          v38 = dest;
        }
        v87.m128i_i64[0] = v15;
        memmove(v38, v37, v36);
        *((char *)dest + v15 - 1) = 0;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    v60 = v67;
    if ( v67 < 0 )
    {
      v39 = v89;
      v34 = v70;
      v83 = 2;
      v89 = v68;
      v68 = v39;
      if ( !(_QWORD)v70 )
        goto LABEL_24;
    }
    else
    {
      v83 = 3;
      copy_tinfo_t();
      v34 = v70;
      v90 = v60;
      if ( !(_QWORD)v70 )
        goto LABEL_24;
    }
    v40 = v34 - 1;
    if ( v34 != 1 )
    {
      v41 = src;
      v42 = dest;
      if ( v87.m128i_i64[1] < v34 )
      {
        v58 = src;
        v59 = v34 - 1;
        v62 = v34;
        dest = (void *)qvector_reserve();
        v41 = v58;
        v42 = dest;
        v40 = v59;
        v34 = v62;
      }
      v87.m128i_i64[0] = v34;
      v61 = v34;
      memmove(v42, v41, v40);
      *((char *)dest + v61 - 1) = 0;
      goto LABEL_25;
    }
LABEL_24:
    v87.m128i_i64[0] = 0;
    goto LABEL_25;
  }
  v83 = 1;
  v84 = v75;
  v85 = v76;
  v43 = v72;
  if ( (_QWORD)v72 && (v44 = v72 - 1, (_QWORD)v72 != 1) )
  {
    v56 = v71;
    v57 = dest;
    if ( v87.m128i_i64[1] < (unsigned __int64)v72 )
    {
      dest = (void *)qvector_reserve();
      v57 = dest;
    }
    v87.m128i_i64[0] = v43;
    memmove(v57, v56, v44);
    *((char *)dest + v43 - 1) = 0;
  }
  else
  {
    v87.m128i_i64[0] = 0;
  }
LABEL_10:
  if ( !v64 )
    goto LABEL_12;
  if ( dword_2515A4 >= 0 )
    goto LABEL_12;
  v46 = sub_13BB40(a1, v63, byte_1D6060);
  if ( (unsigned __int8)(v46 - 41) > 7u )
    goto LABEL_12;
  v47 = v46 - 41;
  v48 = *(_QWORD *)a1;
  v78[0] = 0;
  v79 = 0xFFFFFFFEFFFFFFFFLL;
  v80 = (void *)-1LL;
  v82 = 0xFFFFFFFFLL;
  *(_OWORD *)n = 0;
  v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v48 + 416))(a1, v63);
  v50 = sub_CF7E0();
  v51 = sub_C32C0((__int64)v78, v49, v47, v50);
  v52 = HIDWORD(v79);
  if ( !v51 )
    goto LABEL_43;
  HIDWORD(v85) = v47;
  v91 = v78[0];
  *(_DWORD *)v92 = v79;
  if ( SHIDWORD(v79) < -1 )
  {
    if ( *(int *)&v92[4] >= -1 && *(_QWORD *)&v92[12] )
    {
      v93.m128i_i64[0] = 0;
      qfree();
      v52 = HIDWORD(v79);
    }
    *(_QWORD *)&v92[12] = v80;
    goto LABEL_56;
  }
  v53 = n[0];
  if ( *(int *)&v92[4] >= -1 )
  {
    v54 = nullptr;
    if ( n[0] )
    {
      v54 = (void *)qalloc_or_throw();
      memcpy(v54, v80, v53);
    }
    v55 = _mm_unpacklo_epi64((__m128i)v53, (__m128i)v53);
    if ( *(_QWORD *)&v92[12] )
    {
      v66 = v55;
      v93.m128i_i64[0] = 0;
      qfree();
      v55 = _mm_load_si128(&v66);
    }
    *(_QWORD *)&v92[12] = v54;
    v52 = HIDWORD(v79);
    v93 = v55;
    goto LABEL_56;
  }
  *(_QWORD *)&v92[12] = 0;
  v93 = 0;
  if ( n[0] )
  {
    *(_QWORD *)&v92[12] = qalloc_or_throw();
    v93.m128i_i64[1] = v53;
    memcpy(*(void **)&v92[12], v80, v53);
    v93.m128i_i64[0] = v53;
    v52 = HIDWORD(v79);
LABEL_56:
    *(_DWORD *)&v92[4] = v52;
    v95 = 1;
    v94 = v82;
LABEL_43:
    if ( v52 < -1 )
      goto LABEL_12;
    goto LABEL_44;
  }
  *(_DWORD *)&v92[4] = HIDWORD(v79);
  v95 = 1;
  v94 = v82;
LABEL_44:
  if ( v80 )
  {
    n[0] = 0;
    qfree();
  }
LABEL_12:
  v16 = a2->m128i_i64[1];
  v17 = v83;
  v18 = v84;
  v83 = a2->m128i_i32[0];
  v19 = a2[1].m128i_i64[0];
  v84 = v16;
  v20 = v85;
  v85 = v19;
  v21 = (void *)a2[1].m128i_i64[1];
  a2[1].m128i_i64[0] = v20;
  v22 = dest;
  dest = v21;
  LODWORD(v21) = a2[3].m128i_i32[0];
  a2[1].m128i_i64[1] = (__int64)v22;
  LODWORD(v22) = v88;
  v88 = (int)v21;
  LOBYTE(v21) = a2[4].m128i_i8[8];
  a2[3].m128i_i32[0] = (int)v22;
  LOBYTE(v22) = v91;
  v23 = _mm_loadu_si128(a2 + 2);
  v24 = _mm_load_si128(&v87);
  v91 = (char)v21;
  a2[4].m128i_i8[8] = (char)v22;
  LODWORD(v21) = a2[4].m128i_i32[3];
  LODWORD(v22) = *(_DWORD *)v92;
  v87 = v23;
  *(_DWORD *)v92 = (_DWORD)v21;
  a2[4].m128i_i32[3] = (int)v22;
  a2->m128i_i32[0] = v17;
  a2->m128i_i64[1] = v18;
  a2[2] = v24;
  v25 = _mm_loadu_si128(a2 + 5);
  v26 = a2[7].m128i_i64[0];
  si128 = _mm_load_si128((const __m128i *)&v92[4]);
  v96 = v25;
  v28 = _mm_loadu_si128(a2 + 6);
  v97 = v28;
  a2[5] = si128;
  a2[6] = _mm_load_si128(&v93);
  v29 = v94;
  v30 = v73;
  v94 = v26;
  LOBYTE(v26) = a2[7].m128i_i8[8];
  a2[7].m128i_i64[0] = v29;
  LOBYTE(v29) = v95;
  v95 = v26;
  v31 = a2[3].m128i_i64[1];
  a2[7].m128i_i8[8] = v29;
  v32 = v89;
  v89 = v31;
  LODWORD(v31) = a2[4].m128i_i32[0];
  a2[3].m128i_i64[1] = v32;
  *(__m128i *)&v92[4] = v25;
  a2[4].m128i_i32[0] = v90;
  v90 = v31;
  v93 = v28;
  if ( v30 )
  {
    *(_QWORD *)&v74 = 0;
    qfree();
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree();
  }
  if ( *(int *)&v92[4] >= -1 && *(_QWORD *)&v92[12] )
  {
    v93.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( dest )
  {
    v87.m128i_i64[0] = 0;
    qfree();
  }
  return v17;
}

