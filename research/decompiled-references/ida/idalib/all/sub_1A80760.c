void __fastcall sub_1A80760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r13d
  char v11; // dl
  __int64 v12; // rax
  size_t v13; // r14
  _BYTE *v14; // r12
  unsigned __int64 *v15; // rax
  _BYTE *v16; // rsi
  char *v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  void **p_src; // rdx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  void *v26; // rcx
  void *v27; // rsi
  void *v28; // rcx
  void *v29; // rsi
  void *v30; // rcx
  void *v31; // rax
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 *v41; // rdi
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // rdi
  __int64 v46; // r13
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // r12
  __int64 i; // rax
  unsigned __int64 v58; // rax
  size_t v59; // rbp
  __m128 *v60; // rcx
  unsigned __int16 *v61; // rdi
  void *v62; // rax
  unsigned __int64 v63; // rbp
  __int64 v64; // rax
  _QWORD *v65; // rbx
  char v66; // dl
  char v67; // dl
  __int64 v68; // rdi
  __int64 v69; // rcx
  unsigned __int64 v70; // rbp
  __int64 v71; // rax
  _QWORD *v72; // r12
  unsigned __int64 v73; // r8
  __int64 v74; // rax
  unsigned __int64 *v75; // r9
  __int64 *v76; // rdi
  __int64 v77; // rcx
  _DWORD *v78; // rax
  _DWORD *v79; // rdx
  __int64 *v80; // rdi
  __int64 v81; // rcx
  _DWORD *v82; // rax
  _DWORD *v83; // rdx
  __int64 *v84; // rdi
  __int64 v85; // rcx
  _DWORD *v86; // rax
  _DWORD *v87; // rdx
  __m128 *v88; // [rsp+8h] [rbp-100h] BYREF
  _QWORD **v89; // [rsp+10h] [rbp-F8h]
  unsigned __int64 *v90; // [rsp+18h] [rbp-F0h]
  _QWORD *v91; // [rsp+28h] [rbp-E0h] BYREF
  void *v92; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v93; // [rsp+38h] [rbp-D0h]
  _BYTE v94[16]; // [rsp+40h] [rbp-C8h] BYREF
  void *v95; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v96; // [rsp+58h] [rbp-B0h]
  _BYTE v97[16]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 *v98; // [rsp+70h] [rbp-98h]
  void *src; // [rsp+80h] [rbp-88h] BYREF
  size_t n; // [rsp+88h] [rbp-80h]
  void *v101[2]; // [rsp+90h] [rbp-78h] BYREF
  void *v102[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v103[11]; // [rsp+B0h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 272);
  v8 = *(unsigned int *)(v7 + 520);
  LOBYTE(src) = 0;
  if ( (unsigned int)(v8 + 1) <= 1 )
    goto LABEL_9;
  if ( (int)v8 < 0 )
  {
    v63 = (unsigned int)(-2 - v8);
    v64 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - v8) >> 6));
    if ( _bittest64(&v64, v63) )
    {
      v65 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v63 >> 5));
      if ( *v65 )
      {
        v9 = *v65 + 24 * (v63 & 0x1F);
        goto LABEL_4;
      }
      v76 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v77 = *v76;
      v76[10] += 768;
      v78 = (_DWORD *)((v77 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v76[1] >= (unsigned __int64)(v78 + 192) && v77 )
        *v76 = (__int64)(v78 + 192);
      else
        v78 = (_DWORD *)sub_986170((__int64)v76, 768, 768, 3, a5, a6);
      *v65 = v78;
      v79 = v78 + 192;
      do
      {
        *v78 = 0;
        v78 += 6;
        *((_OWORD *)v78 - 1) = 0;
        *((_QWORD *)v78 - 1) = 0;
      }
      while ( v78 != v79 );
      v7 = *(_QWORD *)(a1 + 272);
      v11 = (char)src;
      v9 = *v65 + 24 * (v63 & 0x1F);
    }
    else
    {
      v9 = sub_101F930(v7, v63, &src);
      v7 = *(_QWORD *)(a1 + 272);
      v11 = (char)src;
    }
    if ( v11 )
      goto LABEL_9;
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(v7 + 184) + 24 * v8;
LABEL_4:
  if ( v9 && *(char *)(v9 + 3) >= 0 )
  {
    v10 = *(_DWORD *)v9 & 0x7FFFFFFF;
    goto LABEL_10;
  }
LABEL_9:
  v10 = 0;
LABEL_10:
  v12 = *(_QWORD *)(a1 + 232);
  v13 = *(_QWORD *)(v12 + 496);
  if ( v13 )
  {
    v14 = *(_BYTE **)(v12 + 488);
    goto LABEL_12;
  }
  v54 = *(unsigned int *)(v7 + 520);
  LOBYTE(src) = 0;
  if ( (unsigned int)(v54 + 1) <= 1 )
    goto LABEL_78;
  if ( (int)v54 < 0 )
  {
    v70 = (unsigned int)(-2 - v54);
    v71 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - v54) >> 6));
    if ( _bittest64(&v71, v70) )
    {
      v72 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v70 >> 5));
      if ( *v72 )
      {
        v55 = *v72 + 24 * (v70 & 0x1F);
        goto LABEL_58;
      }
      v80 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v81 = *v80;
      v80[10] += 768;
      v82 = (_DWORD *)((v81 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v80[1] >= (unsigned __int64)(v82 + 192) && v81 )
        *v80 = (__int64)(v82 + 192);
      else
        v82 = (_DWORD *)sub_986170((__int64)v80, 768, 768, 3, a5, a6);
      *v72 = v82;
      v83 = v82 + 192;
      do
      {
        *v82 = 0;
        v82 += 6;
        *((_OWORD *)v82 - 1) = 0;
        *((_QWORD *)v82 - 1) = 0;
      }
      while ( v82 != v83 );
      v66 = (char)src;
      v55 = *v72 + 24 * (v70 & 0x1F);
    }
    else
    {
      v55 = sub_101F930(v7, v70, &src);
      v66 = (char)src;
    }
    if ( v66 )
      goto LABEL_78;
    goto LABEL_58;
  }
  v55 = *(_QWORD *)(v7 + 184) + 24 * v54;
LABEL_58:
  if ( v55 && *(char *)(v55 + 3) >= 0 )
  {
    v56 = *(_QWORD **)((*(_QWORD *)(v55 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    goto LABEL_61;
  }
LABEL_78:
  v56 = nullptr;
LABEL_61:
  for ( i = v56[1]; i; i = *(_QWORD *)(v58 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v58 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v58 )
      break;
    v56 = (_QWORD *)v58;
  }
  v59 = *v56;
  v14 = v56 + 4;
  if ( !v14 )
  {
    v60 = *(__m128 **)(a1 + 232);
    LOBYTE(v101[0]) = 0;
    src = v101;
    v61 = (unsigned __int16 *)v60[30].m128_u64[1];
LABEL_83:
    v60[31].m128_u64[0] = v13;
    *((_BYTE *)v61 + v13) = 0;
    v61 = (unsigned __int16 *)src;
    goto LABEL_70;
  }
  src = v101;
  sub_1A7BE10(&src, v14, (__int64)&v14[v59]);
  v60 = *(__m128 **)(a1 + 232);
  v61 = (unsigned __int16 *)v60[30].m128_u64[1];
  if ( src == v101 )
  {
    v13 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *(_BYTE *)v61 = v101[0];
        v13 = n;
        v61 = (unsigned __int16 *)v60[30].m128_u64[1];
      }
      else
      {
        v88 = *(__m128 **)(a1 + 232);
        memcpy(v61, src, n);
        v60 = v88;
        v13 = n;
        v61 = (unsigned __int16 *)v88[30].m128_u64[1];
      }
    }
    goto LABEL_83;
  }
  if ( v61 == &v60[31].m128_u16[4] )
  {
    v88 = (__m128 *)v101[0];
    v60[30].m128_u64[1] = (unsigned __int64)src;
    v60[31] = _mm_loadh_ps((const double *)&v88);
    goto LABEL_89;
  }
  v88 = (__m128 *)v101[0];
  v62 = (void *)v60[31].m128_u64[1];
  v60[30].m128_u64[1] = (unsigned __int64)src;
  v60[31] = _mm_loadh_ps((const double *)&v88);
  if ( !v61 )
  {
LABEL_89:
    v61 = (unsigned __int16 *)v101;
    src = v101;
    goto LABEL_70;
  }
  src = v61;
  v101[0] = v62;
LABEL_70:
  n = 0;
  *(_BYTE *)v61 = 0;
  if ( src != v101 )
    operator delete(src);
  v7 = *(_QWORD *)(a1 + 272);
  v13 = v59;
LABEL_12:
  sub_FD9C70((__int64)&src, *(_QWORD *)(v7 + 16), v14, v13, 0, 1, 1);
  if ( (n & 1) != 0 )
  {
    v91 = src;
    v89 = &v91;
    src = nullptr;
    sub_A05760(&v92, &v91);
    if ( v91 )
      (*(void (__fastcall **)(_QWORD *))(*v91 + 8LL))(v91);
    sub_A04D90((__int64 *)&src);
  }
  else
  {
    v88 = (__m128 *)src;
    sub_A04D90((__int64 *)&src);
    v15 = (unsigned __int64 *)v88;
    if ( v88 )
    {
      v89 = &v91;
      goto LABEL_15;
    }
    v89 = &v91;
  }
  v51 = *(_QWORD *)(a1 + 272);
  v52 = *(unsigned int *)(v51 + 520);
  LOBYTE(src) = 0;
  if ( (unsigned int)(v52 + 1) <= 1 )
    goto LABEL_81;
  if ( (int)v52 < 0 )
  {
    v73 = (unsigned int)(-2 - v52);
    v74 = *(_QWORD *)(*(_QWORD *)(v51 + 320) + 8LL * ((unsigned int)(-2 - v52) >> 6));
    if ( _bittest64(&v74, v73) )
    {
      v75 = (unsigned __int64 *)(*(_QWORD *)(v51 + 272) + 8 * ((unsigned __int64)(int)v73 >> 5));
      if ( *v75 )
      {
        v53 = *v75 + 24 * (v73 & 0x1F);
        goto LABEL_52;
      }
      v84 = (__int64 *)(*(_QWORD *)(v51 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v85 = *v84;
      v84[10] += 768;
      v86 = (_DWORD *)((v85 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v84[1] >= (unsigned __int64)(v86 + 192) && v85 )
      {
        *v84 = (__int64)(v86 + 192);
      }
      else
      {
        v90 = v75;
        LODWORD(v88) = v73;
        v86 = (_DWORD *)sub_986170((__int64)v84, 768, 768, 3, v73, (__int64)v75);
        v75 = v90;
        LOBYTE(v73) = (_BYTE)v88;
      }
      *v75 = (unsigned __int64)v86;
      v87 = v86 + 192;
      do
      {
        *v86 = 0;
        v86 += 6;
        *((_OWORD *)v86 - 1) = 0;
        *((_QWORD *)v86 - 1) = 0;
      }
      while ( v86 != v87 );
      v67 = (char)src;
      v53 = *v75 + 24 * (v73 & 0x1F);
    }
    else
    {
      v53 = sub_101F930(v51, v73, &src);
      v67 = (char)src;
    }
    if ( v67 )
      goto LABEL_81;
    goto LABEL_52;
  }
  v53 = *(_QWORD *)(v51 + 184) + 24 * v52;
LABEL_52:
  if ( v53 && *(char *)(v53 + 3) >= 0 )
  {
    v15 = *(unsigned __int64 **)((*(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    goto LABEL_15;
  }
LABEL_81:
  v15 = nullptr;
LABEL_15:
  if ( v14 )
  {
    v92 = v94;
    v90 = v15;
    v88 = (__m128 *)&v14[v13];
    sub_1A7BE10(&v92, v14, (__int64)&v14[v13]);
    v95 = v97;
    sub_1A7BE10(&v95, v14, (__int64)v88);
    v16 = v92;
    v15 = v90;
    v17 = (char *)v92 + v93;
  }
  else
  {
    v17 = v94;
    v94[0] = 0;
    v92 = v94;
    v16 = v94;
    v93 = 0;
    v95 = v97;
    v96 = 0;
    v97[0] = 0;
  }
  v98 = v15;
  v88 = (__m128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 104LL) + 632LL);
  src = v101;
  sub_1A7BED0(&src, v16, (__int64)v17);
  v102[0] = v103;
  v90 = v103;
  sub_1A7BED0(v102, v95, (__int64)v95 + v96);
  v103[2] = v98;
  v19 = sub_1401140((__int64)v88, v10, v14, v13, (__int64)&src, v18);
  if ( v102[0] != v90 )
    operator delete(v102[0]);
  if ( src != v101 )
    operator delete(src);
  v20 = *(unsigned int *)(a1 + 10152);
  p_src = &src;
  v22 = *(_QWORD *)(a1 + 10144);
  LODWORD(src) = 0;
  v23 = *(unsigned int *)(a1 + 10156);
  n = 0;
  v102[1] = nullptr;
  v24 = v20 + 1;
  v101[0] = nullptr;
  v101[1] = nullptr;
  v25 = v22 + 48 * v20;
  v102[0] = nullptr;
  if ( v24 > v23 )
  {
    v68 = a1 + 10144;
    if ( v22 > (unsigned __int64)&src || v25 <= (unsigned __int64)&src )
    {
      sub_1A7FD60(v68, v24);
      p_src = &src;
      v25 = *(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152);
    }
    else
    {
      sub_1A7FD60(v68, v24);
      v69 = *(_QWORD *)(a1 + 10144);
      p_src = (void **)((char *)&src + v69 - v22);
      v25 = v69 + 48LL * *(unsigned int *)(a1 + 10152);
    }
  }
  *(_DWORD *)v25 = *(_DWORD *)p_src;
  v26 = p_src[1];
  *(_QWORD *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 24) = 0;
  *(_QWORD *)(v25 + 32) = 0;
  *(_QWORD *)(v25 + 8) = v26;
  *(_QWORD *)(v25 + 16) = p_src[2];
  v27 = p_src[3];
  p_src[2] = nullptr;
  v28 = *(void **)(v25 + 24);
  *(_QWORD *)(v25 + 24) = v27;
  v29 = p_src[4];
  p_src[3] = v28;
  v30 = *(void **)(v25 + 32);
  *(_QWORD *)(v25 + 32) = v29;
  LODWORD(v29) = *((_DWORD *)p_src + 10);
  p_src[4] = v30;
  *(_DWORD *)(v25 + 40) = (_DWORD)v29 != 0;
  v31 = p_src[2];
  ++*((_DWORD *)p_src + 10);
  p_src[3] = v31;
  v32 = v101[0];
  v33 = (unsigned int)(*(_DWORD *)(a1 + 10152) + 1);
  *(_DWORD *)(a1 + 10152) = v33;
  if ( v32 )
  {
    operator delete(v32);
    v33 = *(unsigned int *)(a1 + 10152);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v33 - 48) = v10;
  *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152) - 40) = v19;
  sub_FF1730(a1 + 11128, v19, v10, 1, (__int64)nullsub_1204, (__int64)v89, (char)nullsub_1205);
  v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v37 = *(_QWORD *)(v36 + 72);
  if ( (v37 & 1) != 0 )
  {
    v38 = v37 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v45 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v37 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v40 = 0;
      goto LABEL_32;
    }
    v40 = v37 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v37 & 2) == 0 )
      goto LABEL_32;
    v46 = v45[2295];
    v47 = v36 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v46 )
    {
      v48 = v45[294];
      v45[304] += 24LL;
      v49 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v45[295] >= v49 + 24 && v48 )
      {
        v45[294] = v49 + 24;
        v50 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v50 = sub_986170((__int64)(v45 + 294), 24, 24, 3, v34, v35);
        v49 = v50 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v50 = v46;
      v47 = v49 | 4;
      *(_DWORD *)(v50 + 8) = 0;
      *(_QWORD *)(v50 + 16) = v36;
    }
    v38 = v47 & 0xFFFFFFFFFFFFFFFELL;
    v37 = v38 | 1;
    *(_QWORD *)(v36 + 72) = v38 | 1;
  }
  v39 = v37 & 0xFFFFFFFFFFFFFFF8LL;
  v40 = v39;
  if ( v38 )
  {
    if ( (v38 & 4) != 0 )
    {
      v40 = 0;
      if ( v39 )
      {
        v41 = *(__int64 **)v39;
        v42 = *(_DWORD *)(*(_QWORD *)v39 + 12LL);
        if ( *(_DWORD *)(v39 + 8) != v42 )
        {
          *(_DWORD *)(v39 + 8) = v42;
          v43 = *v41;
          v88 = (__m128 *)v39;
          (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v43 + 152))(v41, v36, v43, 0);
          v39 = (unsigned __int64)v88;
        }
        v40 = *(_QWORD *)(v39 + 16);
      }
    }
  }
LABEL_32:
  v44 = *(_QWORD *)(v40 + 8);
  *(_QWORD *)(v40 - 8) = v19;
  *(_QWORD *)(v40 + 8) = v44 & 0xFFFFFFFFFFFFFFF8LL | 1;
  if ( v95 != v97 )
    operator delete(v95);
  if ( v92 != v94 )
    operator delete(v92);
}
