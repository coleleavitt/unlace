__int64 __fastcall sub_160F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r14d
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // ebx
  __m128i v17; // xmm0
  int v18; // eax
  void *v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm1
  char v22; // dl
  __m128i v23; // xmm1
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // r14
  size_t v37; // r12
  void *v38; // r13
  void *v39; // rdi
  __int64 v40; // rdx
  size_t v41; // r9
  void *v42; // r11
  void *v43; // rdi
  __int64 v44; // r14
  size_t v45; // r12
  __int64 v46; // rdx
  unsigned __int8 v47; // al
  int v48; // r14d
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  bool v52; // dl
  int v53; // eax
  size_t v54; // rbx
  void *v55; // r14
  __m128i v56; // xmm0
  void *v57; // r13
  void *v58; // rdi
  void *v59; // [rsp+8h] [rbp-1F8h]
  size_t v60; // [rsp+10h] [rbp-1F0h]
  int v61; // [rsp+18h] [rbp-1E8h]
  unsigned __int64 v62; // [rsp+18h] [rbp-1E8h]
  unsigned __int64 v63; // [rsp+18h] [rbp-1E8h]
  unsigned int v64; // [rsp+2Ch] [rbp-1D4h]
  int v65; // [rsp+38h] [rbp-1C8h]
  __m128i v67; // [rsp+40h] [rbp-1C0h] BYREF
  int v68; // [rsp+54h] [rbp-1ACh] BYREF
  __int64 v69; // [rsp+58h] [rbp-1A8h] BYREF
  void *src; // [rsp+60h] [rbp-1A0h] BYREF
  __int128 v71; // [rsp+68h] [rbp-198h]
  void *v72; // [rsp+80h] [rbp-180h] BYREF
  __int128 v73; // [rsp+88h] [rbp-178h]
  __int64 v74; // [rsp+98h] [rbp-168h]
  __int128 v75; // [rsp+A0h] [rbp-160h]
  __m128i v76; // [rsp+B0h] [rbp-150h]
  int v77; // [rsp+C0h] [rbp-140h]
  char v78; // [rsp+C4h] [rbp-13Ch]
  _BYTE v79[8]; // [rsp+D0h] [rbp-130h] BYREF
  __int64 v80; // [rsp+D8h] [rbp-128h]
  int v81; // [rsp+E0h] [rbp-120h]
  void *v82; // [rsp+E8h] [rbp-118h]
  size_t n[2]; // [rsp+F0h] [rbp-110h]
  __int64 v84; // [rsp+100h] [rbp-100h]
  int v85; // [rsp+110h] [rbp-F0h]
  __m128i v86; // [rsp+118h] [rbp-E8h] BYREF
  int v87; // [rsp+128h] [rbp-D8h]
  void *dest; // [rsp+130h] [rbp-D0h]
  __m128i v89; // [rsp+138h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+148h] [rbp-B8h]
  int v91; // [rsp+158h] [rbp-A8h]
  char v92; // [rsp+160h] [rbp-A0h]
  __int64 v93; // [rsp+168h] [rbp-98h]
  __m128i v94; // [rsp+170h] [rbp-90h] BYREF
  __m128i v95; // [rsp+180h] [rbp-80h] BYREF
  __int64 v96; // [rsp+190h] [rbp-70h]
  char v97; // [rsp+198h] [rbp-68h]
  __m128i v98; // [rsp+1A0h] [rbp-60h]
  __m128i v99; // [rsp+1B0h] [rbp-50h]
  unsigned __int64 v100; // [rsp+1C8h] [rbp-38h]

  v6 = a5;
  v100 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
  v85 = 0;
  v86.m128i_i64[0] = 0;
  v86.m128i_i64[1] = -1;
  v87 = -1;
  dest = nullptr;
  v95 = 0;
  v64 = a6 & 1;
  v91 = -1;
  v65 = a6 & 2;
  v92 = 0;
  v93 = -1;
  v94.m128i_i32[0] = -2;
  v89 = 0;
  v94.m128i_i64[1] = -1;
  v97 = 0;
  v96 = 0xFFFFFFFFLL;
  v10 = *(_QWORD *)a1;
  v72 = nullptr;
  v74 = 0;
  v76.m128i_i64[0] = 0;
  v76.m128i_i64[1] = -1;
  v77 = -1;
  v78 = 0;
  v73 = 0;
  v75 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **))(v10 + 592))(a1, &v72) || v78 )
  {
    v68 = -1;
    v11 = *(_QWORD *)a1;
    src = nullptr;
    v71 = 0;
    v67.m128i_i64[0] = (__int64)&v69;
    (*(void (__fastcall **)(__int64 *, __int64, void **, int *, __int64, __int64, __int64, _QWORD))(v11 + 584))(
      &v69,
      a1,
      &src,
      &v68,
      a3,
      a4,
      v6,
      a6);
    if ( !(_BYTE)v69 )
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
        v68 = sub_120980(v67.m128i_i64[0], v12);
        v13 = v68;
        if ( v68 < 0 )
        {
          v46 = v69;
          v85 = 2;
          v69 = si128.m128i_i64[1];
          v14 = v71;
          si128.m128i_i64[1] = v46;
          v15 = v71;
          if ( !(_QWORD)v71 )
            goto LABEL_7;
        }
        else
        {
          v85 = 3;
          copy_tinfo_t();
          v14 = v71;
          v91 = v13;
          v15 = v71;
          if ( !(_QWORD)v71 )
            goto LABEL_7;
        }
        goto LABEL_27;
      }
      if ( (unsigned __int8)sub_13A680(a1, v64, (__int64 *)&src) )
      {
        v14 = v71;
        v85 = 4;
        v15 = v71;
        if ( !(_QWORD)v71 )
          goto LABEL_7;
        goto LABEL_27;
      }
LABEL_25:
      v36 = sub_15F380(a1, a3, a4, v6, v65 | a6);
      if ( v36 == -1 )
      {
LABEL_8:
        clear_tinfo_t();
        if ( src )
        {
          *(_QWORD *)&v71 = 0;
          qfree();
        }
        goto LABEL_10;
      }
      get_ea_name();
      v14 = v71;
      si128.m128i_i64[0] = v36;
      v85 = 5;
      v15 = v71;
      if ( !(_QWORD)v71 )
      {
LABEL_7:
        v89.m128i_i64[0] = 0;
        goto LABEL_8;
      }
LABEL_27:
      v37 = v14 - 1;
      if ( v14 != 1 )
      {
        v38 = src;
        v39 = dest;
        if ( v89.m128i_i64[1] < v14 )
        {
          dest = (void *)qvector_reserve();
          v39 = dest;
        }
        v89.m128i_i64[0] = v15;
        memmove(v39, v38, v37);
        *((char *)dest + v15 - 1) = 0;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    v61 = v68;
    if ( v68 < 0 )
    {
      v40 = si128.m128i_i64[1];
      v35 = v71;
      v85 = 2;
      si128.m128i_i64[1] = v69;
      v69 = v40;
      if ( !(_QWORD)v71 )
        goto LABEL_24;
    }
    else
    {
      v85 = 3;
      copy_tinfo_t();
      v35 = v71;
      v91 = v61;
      if ( !(_QWORD)v71 )
        goto LABEL_24;
    }
    v41 = v35 - 1;
    if ( v35 != 1 )
    {
      v42 = src;
      v43 = dest;
      if ( v89.m128i_i64[1] < v35 )
      {
        v59 = src;
        v60 = v35 - 1;
        v63 = v35;
        dest = (void *)qvector_reserve();
        v42 = v59;
        v43 = dest;
        v41 = v60;
        v35 = v63;
      }
      v89.m128i_i64[0] = v35;
      v62 = v35;
      memmove(v43, v42, v41);
      *((char *)dest + v62 - 1) = 0;
      goto LABEL_25;
    }
LABEL_24:
    v89.m128i_i64[0] = 0;
    goto LABEL_25;
  }
  v85 = 1;
  v86 = v76;
  v87 = v77;
  v44 = v73;
  if ( (_QWORD)v73 && (v45 = v73 - 1, (_QWORD)v73 != 1) )
  {
    v57 = v72;
    v58 = dest;
    if ( v89.m128i_i64[1] < (unsigned __int64)v73 )
    {
      dest = (void *)qvector_reserve();
      v58 = dest;
    }
    v89.m128i_i64[0] = v44;
    memmove(v58, v57, v45);
    *((char *)dest + v44 - 1) = 0;
  }
  else
  {
    v89.m128i_i64[0] = 0;
  }
LABEL_10:
  if ( !v65 )
    goto LABEL_12;
  if ( dword_25274C >= 0 )
    goto LABEL_12;
  v47 = sub_13C140(a1, v64, byte_1D7080);
  if ( (unsigned __int8)(v47 - 41) > 7u )
    goto LABEL_12;
  v48 = v47 - 41;
  v49 = *(_QWORD *)a1;
  v79[0] = 0;
  v80 = -1;
  v81 = -2;
  v82 = (void *)-1LL;
  v84 = 0xFFFFFFFFLL;
  *(_OWORD *)n = 0;
  v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v49 + 416))(a1, v64);
  v51 = sub_D0DA0();
  v52 = sub_C44C0((__int64)v79, v50, v48, v51);
  v53 = v81;
  if ( !v52 )
    goto LABEL_43;
  v87 = v48;
  v92 = v79[0];
  v93 = v80;
  if ( v81 < -1 )
  {
    if ( v94.m128i_i32[0] >= -1 && v94.m128i_i64[1] )
    {
      v95.m128i_i64[0] = 0;
      qfree();
      v53 = v81;
    }
    v94.m128i_i64[1] = (__int64)v82;
    goto LABEL_56;
  }
  v54 = n[0];
  if ( v94.m128i_i32[0] >= -1 )
  {
    v55 = nullptr;
    if ( n[0] )
    {
      v55 = (void *)qalloc_or_throw();
      memcpy(v55, v82, v54);
    }
    v56 = _mm_unpacklo_epi64((__m128i)v54, (__m128i)v54);
    if ( v94.m128i_i64[1] )
    {
      v67 = v56;
      v95.m128i_i64[0] = 0;
      qfree();
      v56 = _mm_load_si128(&v67);
    }
    v94.m128i_i64[1] = (__int64)v55;
    v53 = v81;
    v95 = v56;
    goto LABEL_56;
  }
  v94.m128i_i64[1] = 0;
  v95 = 0;
  if ( n[0] )
  {
    v94.m128i_i64[1] = qalloc_or_throw();
    v95.m128i_i64[1] = v54;
    memcpy((void *)v94.m128i_i64[1], v82, v54);
    v95.m128i_i64[0] = v54;
    v53 = v81;
LABEL_56:
    v94.m128i_i32[0] = v53;
    v97 = 1;
    v96 = v84;
LABEL_43:
    if ( v53 < -1 )
      goto LABEL_12;
    goto LABEL_44;
  }
  v94.m128i_i32[0] = v81;
  v97 = 1;
  v96 = v84;
LABEL_44:
  if ( v82 )
  {
    n[0] = 0;
    qfree();
  }
LABEL_12:
  v16 = v85;
  v17 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v85 = *(_DWORD *)a2;
  v18 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v87;
  v87 = v18;
  v19 = *(void **)(a2 + 32);
  *(_QWORD *)(a2 + 32) = dest;
  dest = v19;
  v20 = *(_QWORD *)(a2 + 56);
  v21 = _mm_loadu_si128(&v86);
  *(_QWORD *)(a2 + 56) = si128.m128i_i64[0];
  si128.m128i_i64[0] = v20;
  v22 = v92;
  LOBYTE(v20) = *(_BYTE *)(a2 + 80);
  *(__m128i *)(a2 + 8) = v21;
  v23 = _mm_loadu_si128(&v89);
  *(_BYTE *)(a2 + 80) = v22;
  v92 = v20;
  v24 = *(_QWORD *)(a2 + 88);
  v86 = v17;
  v25 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 88) = v93;
  v93 = v24;
  v89 = v25;
  *(_DWORD *)a2 = v16;
  *(__m128i *)(a2 + 40) = v23;
  v26 = _mm_loadu_si128((const __m128i *)(a2 + 96));
  v27 = _mm_load_si128(&v94);
  v28 = *(_QWORD *)(a2 + 128);
  v98 = v26;
  v29 = _mm_loadu_si128((const __m128i *)(a2 + 112));
  v99 = v29;
  *(__m128i *)(a2 + 96) = v27;
  *(__m128i *)(a2 + 112) = _mm_load_si128(&v95);
  v30 = v96;
  v31 = v74;
  v96 = v28;
  LOBYTE(v28) = *(_BYTE *)(a2 + 136);
  *(_QWORD *)(a2 + 128) = v30;
  LOBYTE(v30) = v97;
  v97 = v28;
  v32 = *(_QWORD *)(a2 + 64);
  *(_BYTE *)(a2 + 136) = v30;
  v33 = si128.m128i_i64[1];
  si128.m128i_i64[1] = v32;
  LODWORD(v32) = *(_DWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = v33;
  v94 = v26;
  *(_DWORD *)(a2 + 72) = v91;
  v91 = v32;
  v95 = v29;
  if ( v31 )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  if ( v94.m128i_i32[0] >= -1 && v94.m128i_i64[1] )
  {
    v95.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( dest )
  {
    v89.m128i_i64[0] = 0;
    qfree();
  }
  return v16;
}

