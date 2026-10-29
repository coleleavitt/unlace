_QWORD *__fastcall sub_1A85240(__int64 a1, int a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6, char a7)
{
  int *v7; // r13
  __int64 v9; // rax
  __int64 (*v10)(); // r10
  _QWORD *v11; // r12
  _BYTE *v13; // rdi
  size_t v14; // rdx
  void *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  int v19; // eax
  char *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rdi
  int v23; // eax
  _BYTE *v24; // rdi
  size_t v25; // rax
  size_t v26; // r14
  size_t v27; // rdx
  _BYTE *v28; // rdi
  size_t v29; // r14
  size_t v30; // rax
  _BYTE *v31; // rdi
  __int64 v32; // r15
  size_t v33; // r14
  unsigned int v34; // eax
  __int64 v35; // r8
  unsigned int v36; // r10d
  __int64 *v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ecx
  size_t v46; // rdx
  char v47; // dl
  __int64 v48; // rax
  bool v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // rax
  size_t v57; // rdx
  size_t v58; // rdx
  __int64 v59; // rax
  _QWORD *v60; // rcx
  char *v61; // rdx
  _QWORD *v62; // r11
  unsigned int v63; // eax
  __int64 *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rdx
  _QWORD *v68; // rax
  __int64 v69; // rax
  size_t v70; // rdx
  _BYTE *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r13
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // [rsp+8h] [rbp-140h]
  __int64 v82; // [rsp+18h] [rbp-130h] BYREF
  void *v83; // [rsp+20h] [rbp-128h]
  unsigned int v84; // [rsp+28h] [rbp-120h]
  unsigned int v85; // [rsp+2Ch] [rbp-11Ch]
  __int64 *v86; // [rsp+30h] [rbp-118h]
  _QWORD *v87; // [rsp+38h] [rbp-110h]
  __int64 v88; // [rsp+48h] [rbp-100h] BYREF
  int v89; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD *v90; // [rsp+58h] [rbp-F0h]
  void *s2; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v92; // [rsp+68h] [rbp-E0h] BYREF
  void *src; // [rsp+80h] [rbp-C8h] BYREF
  size_t n; // [rsp+88h] [rbp-C0h]
  _QWORD v95[2]; // [rsp+90h] [rbp-B8h] BYREF
  unsigned __int8 *v96[11]; // [rsp+A0h] [rbp-A8h] BYREF
  char v97; // [rsp+F8h] [rbp-50h]
  unsigned int v98; // [rsp+100h] [rbp-48h]
  char v99; // [rsp+104h] [rbp-44h]

  v7 = (int *)a5;
  v84 = a3;
  v80 = a6;
  v89 = 0;
  v90 = nullptr;
  s2 = &v92.m128_u16[4];
  v92.m128_u64[0] = 0;
  v92.m128_i8[8] = 0;
  if ( !a7 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 4) == 0 )
      goto LABEL_3;
    sub_1A7E0E0((__int64)&src, a5, a6);
    v13 = s2;
    if ( src == v95 )
    {
      v58 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)s2 = v95[0];
        else
          memcpy(s2, src, n);
        v58 = n;
        v13 = s2;
      }
      v92.m128_u64[0] = v58;
      v13[v58] = 0;
      v13 = src;
    }
    else
    {
      if ( s2 == &v92.m128_u16[4] )
      {
        v82 = v95[0];
        s2 = src;
        v92 = _mm_loadh_ps((const double *)&v82);
      }
      else
      {
        v82 = v95[0];
        v14 = v92.m128_u64[1];
        s2 = src;
        v92 = _mm_loadh_ps((const double *)&v82);
        if ( v13 )
        {
          src = v13;
          v95[0] = v14;
          goto LABEL_12;
        }
      }
      v13 = v95;
      src = v95;
    }
LABEL_12:
    n = 0;
    *v13 = 0;
    v15 = src;
    if ( src == v95 )
      goto LABEL_41;
LABEL_40:
    operator delete(v15);
    goto LABEL_41;
  }
  v20 = "<global>";
  v21 = 8;
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152) - 40);
  v23 = *(_DWORD *)(v22 + 36);
  if ( ((v23 - 6) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v23 - 4) <= 1 )
    {
      v70 = *(_QWORD *)(v22 + 8);
      v20 = *(char **)v22;
      if ( v70 )
      {
        v71 = memchr(*(const void **)v22, 58, v70);
        v21 = v71 - v20;
        if ( !v71 )
          v21 = -1;
        goto LABEL_21;
      }
      v21 = -1;
    }
    else if ( v23 == 7 )
    {
      v72 = sub_FEEE40(v22);
      v20 = *(char **)v72;
      v21 = *(_QWORD *)(v72 + 8);
    }
    else
    {
      v20 = *(char **)v22;
      v21 = *(_QWORD *)(v22 + 8);
    }
    if ( !v20 )
    {
      LOBYTE(v95[0]) = 0;
      v24 = s2;
      v57 = 0;
      src = v95;
LABEL_67:
      v92.m128_u64[0] = v57;
      v24[v57] = 0;
      v24 = src;
      goto LABEL_25;
    }
  }
LABEL_21:
  src = v95;
  sub_1A7BE10(&src, v20, (__int64)&v20[v21]);
  v24 = s2;
  if ( src == v95 )
  {
    v57 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)s2 = v95[0];
      else
        memcpy(s2, src, n);
      v57 = n;
      v24 = s2;
    }
    goto LABEL_67;
  }
  if ( s2 == &v92.m128_u16[4] )
  {
    v82 = v95[0];
    s2 = src;
    v92 = _mm_loadh_ps((const double *)&v82);
  }
  else
  {
    v82 = v95[0];
    v25 = v92.m128_u64[1];
    s2 = src;
    v92 = _mm_loadh_ps((const double *)&v82);
    if ( v24 )
    {
      src = v24;
      v95[0] = v25;
      goto LABEL_25;
    }
  }
  v24 = v95;
  src = v95;
LABEL_25:
  n = 0;
  *v24 = 0;
  if ( src != v95 )
    operator delete(src);
  v26 = v92.m128_u64[0];
  if ( v92.m128_u64[0] == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  if ( s2 == &v92.m128_u16[4] )
    v27 = 15;
  else
    v27 = v92.m128_u64[1];
  if ( v92.m128_u64[0] + 1 > v27 )
    sub_998B30((__int64)&s2, v92.m128_u64[0], 0, ":", 1u);
  else
    *((_BYTE *)s2 + v92.m128_u64[0]) = 58;
  v92.m128_u64[0] = v26 + 1;
  *((_BYTE *)s2 + v26 + 1) = 0;
  sub_1A7E0E0((__int64)&src, (__int64)v7, v80);
  v28 = s2;
  v29 = n + v92.m128_u64[0];
  if ( s2 == &v92.m128_u16[4] )
    v30 = 15;
  else
    v30 = v92.m128_u64[1];
  if ( v29 > v30 )
  {
    sub_998B30((__int64)&s2, v92.m128_u64[0], 0, src, n);
    v28 = s2;
  }
  else if ( n )
  {
    v31 = (char *)s2 + v92.m128_u64[0];
    if ( n == 1 )
      *v31 = *(_BYTE *)src;
    else
      memcpy(v31, src, n);
    v28 = s2;
  }
  v92.m128_u64[0] = v29;
  v28[v29] = 0;
  v15 = src;
  if ( src != v95 )
    goto LABEL_40;
LABEL_41:
  v32 = *(_QWORD *)(a1 + 240);
  v33 = v92.m128_u64[0];
  v83 = s2;
  v82 = v32 + 552;
  v34 = sub_2244B30(s2, v92.m128_u64[0]);
  v36 = sub_2244CB0(v82, v83, v33, v34);
  v37 = (__int64 *)(*(_QWORD *)(v32 + 552) + 8LL * v36);
  if ( *v37 )
  {
    if ( *v37 != -8 )
    {
      sub_989490((__int64 **)&src, v37, 0);
      v39 = *(_QWORD *)src;
      v40 = *(_QWORD **)(*(_QWORD *)src + 8LL);
      if ( v40 )
        goto LABEL_44;
      goto LABEL_83;
    }
    --*(_DWORD *)(v32 + 568);
  }
  v59 = *(_QWORD *)(v32 + 576);
  *(_QWORD *)(v32 + 656) += v33 + 17;
  v60 = (_QWORD *)((v59 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v61 = (char *)v60 + v33 + 17;
  if ( *(_QWORD *)(v32 + 584) >= (unsigned __int64)v61 && v59 )
  {
    *(_QWORD *)(v32 + 576) = v61;
  }
  else
  {
    v86 = v37;
    v85 = v36;
    v69 = sub_986170(v32 + 576, v33 + 17, v33 + 17, 3, v35, (__int64)v37);
    v37 = v86;
    v36 = v85;
    v60 = (_QWORD *)v69;
  }
  v62 = v60 + 2;
  if ( v33 )
  {
    v87 = v60;
    v86 = v37;
    v85 = v36;
    v68 = memcpy(v60 + 2, v83, v33);
    v60 = v87;
    v37 = v86;
    v36 = v85;
    v62 = v68;
  }
  *((_BYTE *)v62 + v33) = 0;
  *v60 = v33;
  v60[1] = 0;
  *v37 = (__int64)v60;
  ++*(_DWORD *)(v32 + 564);
  v63 = sub_22450D0(v82, v36);
  sub_989490((__int64 **)&src, (__int64 *)(*(_QWORD *)(v32 + 552) + 8LL * v63), 0);
  v39 = *(_QWORD *)src;
  v40 = *(_QWORD **)(*(_QWORD *)src + 8LL);
  if ( !v40 )
  {
LABEL_83:
    v64 = *(__int64 **)(v32 + 672);
    if ( !v64
      || (v65 = *v64,
          v82 = v39,
          v40 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, void *, size_t))(v65 + 16))(v64, v83, v33),
          v39 = v82,
          (*(_QWORD *)(v82 + 8) = v40) == 0) )
    {
      v66 = *(_QWORD *)(v32 + 576);
      *(_QWORD *)(v32 + 656) += 24LL;
      v40 = (_QWORD *)((v66 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(v32 + 584) >= (unsigned __int64)(v40 + 3) && v66 )
      {
        *(_QWORD *)(v32 + 576) = v40 + 3;
      }
      else
      {
        v82 = v39;
        v40 = (_QWORD *)sub_986170(v32 + 576, 24, 24, 3, v38, v39);
        v39 = v82;
      }
      v67 = *v40 & 0xFFFFF80000000000LL;
      v40[1] = 0;
      *v40 = v67 | 0x1FFFC05;
      *(_QWORD *)(v39 + 8) = v40;
      v40[2] = v39;
    }
  }
LABEL_44:
  v80 = 1;
  v41 = *v7;
  v90 = v40;
  v42 = *(_QWORD *)(a1 + 232);
  v89 = v41;
  if ( (*(_BYTE *)(v42 + 21) & 4) == 0
    || (v43 = *(unsigned int *)(a1 + 10152), !(_DWORD)v43)
    || (v44 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v43 - 40)) == 0
    || (v45 = *(_DWORD *)(v44 + 36), v45 > 8)
    || ((1LL << v45) & 0x1BC) == 0 )
  {
    v7 = &v89;
    goto LABEL_3;
  }
  v46 = *(_QWORD *)(v44 + 8);
  v7 = &v89;
  if ( v46 == v92.m128_u64[0] && (!v46 || !memcmp(*(const void **)v44, s2, v46)) )
  {
    sub_168B9F0((__int64)&src, (__int64 *)(a1 + 8), a4, 0x1076u, 0);
    if ( v97 )
    {
      sub_AEC220(v96, s2, v92.m128_i64[0]);
    }
    else
    {
      v47 = v99;
      if ( !v99 )
      {
        v48 = *(unsigned int *)(a1 + 10152);
        if ( !(_DWORD)v48 )
        {
LABEL_61:
          sub_15F7200(&src);
LABEL_4:
          v11 = nullptr;
          goto LABEL_5;
        }
        goto LABEL_55;
      }
      v77 = sub_168B9E0(&src);
      v78 = v95[0];
      if ( v95[0] )
        v78 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v95[0] + 32LL))(v95[0]);
      v88 = v78;
      v79 = sub_1587BC0(v77, &v88, v73, v74, v75, v76);
      sub_AEC220((unsigned __int8 **)(*v79 + 32LL * v98 + 8), s2, v92.m128_i64[0]);
    }
    v48 = *(unsigned int *)(a1 + 10152);
    v47 = v97;
    v49 = 0;
    if ( !(_DWORD)v48 )
    {
LABEL_56:
      if ( v47 )
      {
        sub_AE9DF0(v96, v49, 2u);
      }
      else if ( v99 )
      {
        v52 = sub_168B9E0(&src);
        v55 = v95[0];
        if ( v95[0] )
          v55 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v95[0] + 32LL))(v95[0]);
        v88 = v55;
        v56 = sub_1587BC0(v52, &v88, v50, v51, v53, v54);
        sub_AE9DF0((unsigned __int8 **)(*v56 + 32LL * v98 + 8), v49, 2u);
      }
      goto LABEL_61;
    }
LABEL_55:
    v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v48 - 40) + 36LL) == 3;
    goto LABEL_56;
  }
LABEL_3:
  v9 = sub_15F0FB0(a1);
  v10 = *(__int64 (**)())(*(_QWORD *)v9 + 16LL);
  if ( v10 == sub_12DAB10 )
    goto LABEL_4;
  v16 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, __int64, __int64, _QWORD))v10)(v9, a4, v7, v80, 1, 0)
      & 0xFFFFFFFFFFFFFFF8LL;
  v18 = v16;
  if ( !v16 )
    goto LABEL_4;
  v19 = *(_DWORD *)(v16 + 36);
  if ( v19 != 2 && (unsigned int)(v19 - 4) > 1 && v92.m128_u64[0] && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 4) == 0 )
  {
    sub_168B9F0((__int64)&src, (__int64 *)(a1 + 8), a4, 0x106Cu, 0);
    sub_1682A40((__int64)&src, (__int64)&s2);
    goto LABEL_61;
  }
  v11 = sub_1A84440(a1, a2, v84, a4, v18, v17, v7, v80);
LABEL_5:
  if ( s2 != &v92.m128_u16[4] )
    operator delete(s2);
  return v11;
}
