__int64 __fastcall sub_1EDC90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v7; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rax
  const char *v14; // rsi
  __int64 v15; // rdx
  int v16; // r14d
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  const char *v19; // rsi
  unsigned int v20; // ebx
  __m128i v21; // xmm0
  int v22; // eax
  void *v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm1
  char v26; // dl
  __m128i v27; // xmm1
  __int64 v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r14
  size_t v42; // r12
  const char *v43; // r13
  void *v44; // rdi
  __int64 v45; // rdx
  size_t v46; // r9
  void *v47; // r11
  void *v48; // rdi
  __int64 v49; // r14
  size_t v50; // r12
  __int64 v51; // rdx
  unsigned __int8 v52; // al
  unsigned int v53; // r14d
  __int64 v54; // rax
  const char *v55; // rbx
  __int64 v56; // rax
  char v57; // dl
  int v58; // eax
  size_t v59; // rbx
  __int64 v60; // r14
  __m128i v61; // xmm0
  void *v62; // r13
  void *v63; // rdi
  void *v64; // rax
  void *v65; // rax
  void *v66; // [rsp+8h] [rbp-1F8h]
  size_t v67; // [rsp+10h] [rbp-1F0h]
  int v68; // [rsp+18h] [rbp-1E8h]
  unsigned __int64 v69; // [rsp+18h] [rbp-1E8h]
  unsigned __int64 v70; // [rsp+18h] [rbp-1E8h]
  unsigned int v71; // [rsp+2Ch] [rbp-1D4h]
  unsigned int v72; // [rsp+38h] [rbp-1C8h]
  __m128i v74; // [rsp+40h] [rbp-1C0h] BYREF
  int v75; // [rsp+54h] [rbp-1ACh] BYREF
  __int64 v76; // [rsp+58h] [rbp-1A8h] BYREF
  void *src; // [rsp+60h] [rbp-1A0h] BYREF
  __int128 v78; // [rsp+68h] [rbp-198h]
  void *v79; // [rsp+80h] [rbp-180h] BYREF
  __int128 v80; // [rsp+88h] [rbp-178h]
  __int64 v81; // [rsp+98h] [rbp-168h]
  __int128 v82; // [rsp+A0h] [rbp-160h]
  __m128i v83; // [rsp+B0h] [rbp-150h]
  int v84; // [rsp+C0h] [rbp-140h]
  char v85; // [rsp+C4h] [rbp-13Ch]
  _BYTE v86[8]; // [rsp+D0h] [rbp-130h] BYREF
  __int64 v87; // [rsp+D8h] [rbp-128h]
  int v88; // [rsp+E0h] [rbp-120h]
  void *v89; // [rsp+E8h] [rbp-118h]
  size_t n[2]; // [rsp+F0h] [rbp-110h]
  __int64 v91; // [rsp+100h] [rbp-100h]
  int v92; // [rsp+110h] [rbp-F0h]
  __m128i v93; // [rsp+118h] [rbp-E8h] BYREF
  int v94; // [rsp+128h] [rbp-D8h]
  void *dest; // [rsp+130h] [rbp-D0h] BYREF
  __m128i v96; // [rsp+138h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+148h] [rbp-B8h] BYREF
  int v98; // [rsp+158h] [rbp-A8h]
  char v99; // [rsp+160h] [rbp-A0h]
  __int64 v100; // [rsp+168h] [rbp-98h]
  __m128i v101; // [rsp+170h] [rbp-90h] BYREF
  __m128i v102; // [rsp+180h] [rbp-80h] BYREF
  __int64 v103; // [rsp+190h] [rbp-70h]
  char v104; // [rsp+198h] [rbp-68h]
  __m128i v105; // [rsp+1A0h] [rbp-60h]
  __m128i v106; // [rsp+1B0h] [rbp-50h]
  unsigned __int64 v107; // [rsp+1C8h] [rbp-38h]

  v7 = a5;
  v107 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  v92 = 0;
  v93.m128i_i64[0] = 0;
  v93.m128i_i64[1] = -1;
  v94 = -1;
  dest = nullptr;
  v102 = 0;
  v71 = a6 & 1;
  v98 = -1;
  v72 = a6 & 2;
  v99 = 0;
  v100 = -1;
  v101.m128i_i32[0] = -2;
  v96 = 0;
  v101.m128i_i64[1] = -1;
  v104 = 0;
  v103 = 0xFFFFFFFFLL;
  v11 = *a1;
  v79 = nullptr;
  v81 = 0;
  v83.m128i_i64[0] = 0;
  v83.m128i_i64[1] = -1;
  v84 = -1;
  v85 = 0;
  v80 = 0;
  v82 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, void **))(v11 + 896))(a1, &v79) || v85 )
  {
    v75 = -1;
    v12 = *a1;
    src = nullptr;
    v78 = 0;
    v74.m128i_i64[0] = (__int64)&v76;
    (*(void (__fastcall **)(__int64 *, __int64 *, void **, int *, __int64, __int64, __int64, _QWORD))(v12 + 888))(
      &v76,
      a1,
      &src,
      &v75,
      a3,
      a4,
      v7,
      a6);
    if ( !(_BYTE)v76 )
    {
      v13 = (char *)(*(__int64 (__fastcall **)(__int64 *, void **, __int64, __int64, _QWORD, _QWORD))(*a1 + 880))(
                      a1,
                      &src,
                      a3,
                      a4,
                      (unsigned int)v7,
                      a6);
      if ( v13 != (char *)-1LL )
      {
        v14 = v13;
        v75 = sub_192520(v74.m128i_i64[0], v13);
        v16 = v75;
        if ( v75 < 0 )
        {
          v51 = v76;
          v92 = 2;
          v76 = si128.m128i_i64[1];
          v17 = v78;
          si128.m128i_i64[1] = v51;
          v18 = v78;
          if ( !(_QWORD)v78 )
            goto LABEL_7;
        }
        else
        {
          v14 = (const char *)v74.m128i_i64[0];
          v92 = 3;
          copy_tinfo_t(&si128.m128i_u64[1], v74.m128i_i64[0], v15);
          v17 = v78;
          v98 = v16;
          v18 = v78;
          if ( !(_QWORD)v78 )
            goto LABEL_7;
        }
        goto LABEL_27;
      }
      v14 = (const char *)v71;
      if ( (unsigned __int8)sub_32D290(a1, v71, &src) )
      {
        v17 = v78;
        v92 = 4;
        v18 = v78;
        if ( !(_QWORD)v78 )
          goto LABEL_7;
        goto LABEL_27;
      }
LABEL_25:
      v14 = (const char *)a3;
      v40 = sub_1ED530(a1, a3, a4, v7, v72 | a6);
      v41 = v40;
      if ( v40 == -1 )
      {
LABEL_8:
        clear_tinfo_t(v74.m128i_i64[0]);
        if ( src )
        {
          *(_QWORD *)&v78 = 0;
          qfree(src, v14);
        }
        goto LABEL_10;
      }
      v14 = (const char *)v40;
      get_ea_name(&src, v40, 0, 0);
      v17 = v78;
      si128.m128i_i64[0] = v41;
      v92 = 5;
      v18 = v78;
      if ( !(_QWORD)v78 )
      {
LABEL_7:
        v96.m128i_i64[0] = 0;
        goto LABEL_8;
      }
LABEL_27:
      v42 = v17 - 1;
      if ( v17 != 1 )
      {
        v43 = (const char *)src;
        v44 = dest;
        if ( v96.m128i_i64[1] < v17 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v18, 1);
          v44 = dest;
        }
        v14 = v43;
        v96.m128i_i64[0] = v18;
        memmove(v44, v43, v42);
        *((char *)dest + v18 - 1) = 0;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    v68 = v75;
    if ( v75 < 0 )
    {
      v45 = si128.m128i_i64[1];
      v39 = v78;
      v92 = 2;
      si128.m128i_i64[1] = v76;
      v76 = v45;
      if ( !(_QWORD)v78 )
        goto LABEL_24;
    }
    else
    {
      v92 = 3;
      copy_tinfo_t(&si128.m128i_u64[1], v74.m128i_i64[0], (unsigned int)v75);
      v39 = v78;
      v98 = v68;
      if ( !(_QWORD)v78 )
        goto LABEL_24;
    }
    v46 = v39 - 1;
    if ( v39 != 1 )
    {
      v47 = src;
      v48 = dest;
      if ( v96.m128i_i64[1] < v39 )
      {
        v66 = src;
        v67 = v39 - 1;
        v70 = v39;
        dest = (void *)qvector_reserve(&dest, dest, v39, 1);
        v47 = v66;
        v48 = dest;
        v46 = v67;
        v39 = v70;
      }
      v96.m128i_i64[0] = v39;
      v69 = v39;
      memmove(v48, v47, v46);
      *((char *)dest + v69 - 1) = 0;
      goto LABEL_25;
    }
LABEL_24:
    v96.m128i_i64[0] = 0;
    goto LABEL_25;
  }
  v92 = 1;
  v93 = v83;
  v94 = v84;
  v49 = v80;
  if ( (_QWORD)v80 && (v50 = v80 - 1, (_QWORD)v80 != 1) )
  {
    v62 = v79;
    v63 = dest;
    if ( v96.m128i_i64[1] < (unsigned __int64)v80 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v80, 1);
      v63 = dest;
    }
    v96.m128i_i64[0] = v49;
    memmove(v63, v62, v50);
    *((char *)dest + v49 - 1) = 0;
  }
  else
  {
    v96.m128i_i64[0] = 0;
  }
LABEL_10:
  v19 = (const char *)v72;
  if ( !v72 )
    goto LABEL_12;
  if ( dword_8CC5F0 >= 0 )
    goto LABEL_12;
  v19 = (const char *)v71;
  v52 = sub_330EE0(a1, v71, &unk_5E7EC0);
  if ( (unsigned __int8)(v52 - 41) > 7u )
    goto LABEL_12;
  v53 = v52 - 41;
  v54 = *a1;
  v86[0] = 0;
  v87 = -1;
  v88 = -2;
  v89 = (void *)-1LL;
  v91 = 0xFFFFFFFFLL;
  *(_OWORD *)n = 0;
  v55 = (const char *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))(v54 + 720))(a1, v71);
  v56 = sub_240120();
  v19 = v55;
  v57 = sub_2336E0(v86, v55, v53, v56);
  v58 = v88;
  if ( !v57 )
    goto LABEL_43;
  v94 = v53;
  v99 = v86[0];
  v100 = v87;
  if ( v88 < -1 )
  {
    if ( v101.m128i_i32[0] >= -1 && v101.m128i_i64[1] )
    {
      v102.m128i_i64[0] = 0;
      qfree(v101.m128i_i64[1], v55);
      v58 = v88;
    }
    v101.m128i_i64[1] = (__int64)v89;
    goto LABEL_56;
  }
  v59 = n[0];
  if ( v101.m128i_i32[0] >= -1 )
  {
    v60 = 0;
    if ( n[0] )
    {
      v64 = (void *)qalloc_or_throw(n[0]);
      v19 = (const char *)v89;
      v60 = (__int64)v64;
      memcpy(v64, v89, v59);
    }
    v61 = _mm_unpacklo_epi64((__m128i)v59, (__m128i)v59);
    if ( v101.m128i_i64[1] )
    {
      v74 = v61;
      v102.m128i_i64[0] = 0;
      qfree(v101.m128i_i64[1], v19);
      v61 = _mm_load_si128(&v74);
    }
    v101.m128i_i64[1] = v60;
    v58 = v88;
    v102 = v61;
    goto LABEL_56;
  }
  v101.m128i_i64[1] = 0;
  v102 = 0;
  if ( n[0] )
  {
    v65 = (void *)qalloc_or_throw(n[0]);
    v19 = (const char *)v89;
    v101.m128i_i64[1] = (__int64)v65;
    v102.m128i_i64[1] = v59;
    memcpy(v65, v89, v59);
    v102.m128i_i64[0] = v59;
    v58 = v88;
LABEL_56:
    v101.m128i_i32[0] = v58;
    v104 = 1;
    v103 = v91;
LABEL_43:
    if ( v58 < -1 )
      goto LABEL_12;
    goto LABEL_44;
  }
  v101.m128i_i32[0] = v88;
  v104 = 1;
  v103 = v91;
LABEL_44:
  if ( v89 )
  {
    n[0] = 0;
    qfree(v89, v19);
  }
LABEL_12:
  v20 = v92;
  v21 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v92 = *(_DWORD *)a2;
  v22 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v94;
  v94 = v22;
  v23 = *(void **)(a2 + 32);
  *(_QWORD *)(a2 + 32) = dest;
  dest = v23;
  v24 = *(_QWORD *)(a2 + 56);
  v25 = _mm_loadu_si128(&v93);
  *(_QWORD *)(a2 + 56) = si128.m128i_i64[0];
  si128.m128i_i64[0] = v24;
  v26 = v99;
  LOBYTE(v24) = *(_BYTE *)(a2 + 80);
  *(__m128i *)(a2 + 8) = v25;
  v27 = _mm_loadu_si128(&v96);
  *(_BYTE *)(a2 + 80) = v26;
  v99 = v24;
  v28 = *(_QWORD *)(a2 + 88);
  v93 = v21;
  v29 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 88) = v100;
  v100 = v28;
  v96 = v29;
  *(_DWORD *)a2 = v20;
  *(__m128i *)(a2 + 40) = v27;
  v30 = _mm_loadu_si128((const __m128i *)(a2 + 96));
  v31 = _mm_load_si128(&v101);
  v32 = *(_QWORD *)(a2 + 128);
  v105 = v30;
  v33 = _mm_loadu_si128((const __m128i *)(a2 + 112));
  v106 = v33;
  *(__m128i *)(a2 + 96) = v31;
  *(__m128i *)(a2 + 112) = _mm_load_si128(&v102);
  v34 = v103;
  v35 = v81;
  v103 = v32;
  LOBYTE(v32) = *(_BYTE *)(a2 + 136);
  *(_QWORD *)(a2 + 128) = v34;
  LOBYTE(v34) = v104;
  v104 = v32;
  v36 = *(_QWORD *)(a2 + 64);
  *(_BYTE *)(a2 + 136) = v34;
  v37 = si128.m128i_i64[1];
  si128.m128i_i64[1] = v36;
  LODWORD(v36) = *(_DWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = v37;
  v101 = v30;
  *(_DWORD *)(a2 + 72) = v98;
  v98 = v36;
  v102 = v33;
  if ( v35 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v35, v19);
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79, v19);
  }
  if ( v101.m128i_i32[0] >= -1 && v101.m128i_i64[1] )
  {
    v102.m128i_i64[0] = 0;
    qfree(v101.m128i_i64[1], v19);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( dest )
  {
    v96.m128i_i64[0] = 0;
    qfree(dest, v19);
  }
  return v20;
}
