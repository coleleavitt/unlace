__int64 __fastcall sub_3FB7F0(__int64 a1, const char **a2)
{
  __int64 v2; // rdx
  __int16 v4; // ax
  unsigned __int8 v7; // si
  __m128 si128; // xmm1
  __m128 *v9; // rax
  const char *v10; // rdi
  unsigned __int8 v11; // r14
  int v12; // esi
  int v13; // r14d
  int v14; // eax
  const char *v15; // rdi
  unsigned __int8 *v16; // rax
  const char *v17; // rsi
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rdx
  size_t v21; // r8
  const char *v22; // r12
  unsigned __int64 v23; // r12
  size_t v24; // r8
  int v25; // r13d
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // r12
  __int64 v31; // r13
  unsigned int v32; // eax
  __m128i v33; // xmm0
  char v34; // al
  int v35; // r14d
  __int64 v36; // r13
  int v37; // ecx
  __int64 v38; // rdi
  unsigned int v39; // r12d
  __int64 v40; // rsi
  __int64 (__fastcall *v41)(__int64, int); // rax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // rsi
  __int64 (__fastcall *v47)(__int64, int); // rax
  int v48; // eax
  char *v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned __int64 v53; // r12
  __int64 v54; // r12
  _BYTE *v55; // r12
  __int64 v56; // r13
  unsigned __int8 v57; // al
  __int64 v58; // rax
  size_t v59; // r10
  __int64 v60; // r9
  __int64 v61; // rsi
  size_t v62; // r8
  __int64 v63; // r10
  __int64 v64; // r9
  __int64 v65; // rsi
  const void **v66; // rax
  unsigned __int64 v67; // r12
  size_t v68; // r8
  const void *v69; // r9
  void *v70; // rdi
  __int64 v71; // r12
  unsigned __int8 v72; // al
  __int64 v73; // rax
  int v74; // [rsp+8h] [rbp-2F8h]
  __int64 v75; // [rsp+8h] [rbp-2F8h]
  __int64 v76; // [rsp+8h] [rbp-2F8h]
  size_t n; // [rsp+10h] [rbp-2F0h]
  size_t na; // [rsp+10h] [rbp-2F0h]
  size_t nb; // [rsp+10h] [rbp-2F0h]
  size_t nc; // [rsp+10h] [rbp-2F0h]
  __int64 v81; // [rsp+18h] [rbp-2E8h]
  __int64 v82; // [rsp+18h] [rbp-2E8h]
  __int64 v83; // [rsp+18h] [rbp-2E8h]
  __int64 v84; // [rsp+18h] [rbp-2E8h]
  int v85; // [rsp+20h] [rbp-2E0h]
  int v86; // [rsp+30h] [rbp-2D0h]
  int v87; // [rsp+3Ch] [rbp-2C4h]
  int v88; // [rsp+3Ch] [rbp-2C4h]
  __int64 v89; // [rsp+40h] [rbp-2C0h]
  char v90; // [rsp+50h] [rbp-2B0h]
  int v91; // [rsp+58h] [rbp-2A8h]
  char v92; // [rsp+58h] [rbp-2A8h]
  char v93; // [rsp+63h] [rbp-29Dh]
  int v94; // [rsp+64h] [rbp-29Ch]
  int dtype_size; // [rsp+78h] [rbp-288h]
  unsigned __int16 v96; // [rsp+78h] [rbp-288h]
  __int64 v97; // [rsp+80h] [rbp-280h] BYREF
  __int64 v98; // [rsp+88h] [rbp-278h] BYREF
  _DWORD *v99; // [rsp+90h] [rbp-270h] BYREF
  __int128 v100; // [rsp+98h] [rbp-268h]
  _BYTE src[24]; // [rsp+B0h] [rbp-250h] BYREF
  __int128 v102; // [rsp+C8h] [rbp-238h]
  _BYTE v103[80]; // [rsp+E0h] [rbp-220h] BYREF
  char v104[4]; // [rsp+130h] [rbp-1D0h] BYREF
  int v105; // [rsp+134h] [rbp-1CCh]
  _BYTE v106[56]; // [rsp+148h] [rbp-1B8h] BYREF
  _BYTE v107[160]; // [rsp+180h] [rbp-180h] BYREF
  _BYTE v108[16]; // [rsp+220h] [rbp-E0h] BYREF
  __int64 v109; // [rsp+230h] [rbp-D0h]
  _BYTE v110[8]; // [rsp+238h] [rbp-C8h] BYREF
  void *dest; // [rsp+240h] [rbp-C0h] BYREF
  unsigned __int64 v112; // [rsp+248h] [rbp-B8h]
  unsigned __int64 v113; // [rsp+250h] [rbp-B0h]
  _BYTE v114[16]; // [rsp+258h] [rbp-A8h] BYREF
  int v115; // [rsp+268h] [rbp-98h]
  char v116; // [rsp+2C0h] [rbp-40h] BYREF
  unsigned __int64 v117; // [rsp+2C8h] [rbp-38h]

  v2 = 0;
  v4 = *(_WORD *)(a1 + 48);
  v117 = __readfsqword(0x28u);
  while ( v4 != *((_WORD *)a2 + v2 + 4) )
  {
    if ( ++v2 == 6 )
      return 0;
  }
  v7 = *(_BYTE *)(a1 + 69);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v89 = *(_QWORD *)(a1 + 40);
  v9 = (__m128 *)v103;
  do
  {
    v9->m128_i32[1] = -1;
    v9 += 5;
    v9[-5].m128_i16[0] = 0;
    v9[-5].m128_i16[1] = 0;
    v9[-5].m128_u64[1] = 0;
    v9[-4] = si128;
    v9[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v9[-3] + 8) = 0;
    v9[-2].m128_i32[2] = 0;
    v9[-1].m128_u64[0] = 0;
    v9[-1].m128_i32[2] = 0;
  }
  while ( &v116 != (char *)v9 );
  v10 = *a2;
  v87 = v2;
  v11 = v7;
  v91 = *(unsigned __int8 *)*a2 - 67;
  if ( **a2 == 67 )
  {
    v91 = *((unsigned __int8 *)v10 + 1) - 65;
    if ( v10[1] == 65 )
      v91 = *((unsigned __int8 *)v10 + 2) - 83;
  }
  v93 = v10[3];
  v90 = (int)v2 <= 3;
  v86 = strcmp(v10, "load");
  if ( v87 <= 3 && v86 )
  {
    if ( v91 || (v12 = 4, v93 != 80) )
      v12 = 2;
  }
  else
  {
    v12 = 1;
  }
  dtype_size = get_dtype_size(v11);
  v13 = dtype_size;
  v85 = sub_3FB520(a1, v12, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 624LL), 0.0);
  v14 = sub_3F6F80(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), a1 + 64, v93 == 80, 0.0);
  v15 = *a2;
  v94 = v14;
  v97 = 0;
  v98 = 0;
  if ( !strcmp(v15, "exchange")
    && ((unsigned __int8)get_op_tinfo(&v97, v89, 0) || (unsigned __int8)get_op_tinfo(&v97, v89, 1))
    && dtype_size == get_tinfo_size(0, v97, 0) )
  {
    sub_32C870(src, *(_QWORD *)(a1 + 832), &v97);
    copy_tinfo_t(&v98, src);
    clear_tinfo_t(src);
  }
  else
  {
    if ( v93 == 80 )
      v13 = 2 * dtype_size;
    sub_32C760((__int64 *)src, *(_QWORD *)(a1 + 832), v13, 2);
    copy_tinfo_t(&v97, src);
    clear_tinfo_t(src);
    if ( v13 == 1 )
    {
      v17 = "atomic_uchar";
    }
    else
    {
      v16 = *(unsigned __int8 **)(a1 + 800);
      if ( v13 == v16[134] )
      {
        v17 = "atomic_ushort";
      }
      else if ( v13 == v16[130] )
      {
        v17 = "atomic_uint";
      }
      else if ( v13 == v16[136] )
      {
        v17 = "atomic_ullong";
      }
      else if ( v13 == v16[135] )
      {
        v17 = "atomic_ulong";
      }
      else
      {
        switch ( v13 )
        {
          case 8:
            v17 = "atomic_uint64";
            break;
          case 16:
            v17 = "atomic_uint128";
            break;
          case 4:
            v17 = "atomic_uint32";
            break;
          default:
            if ( !under_debugger )
              sub_3835A0(0xCD01u, (__int64)src, 0.0);
            BUG();
        }
      }
    }
    sub_32AFE0(&v99, (__int64)v17);
    sub_32C870(src, *(_QWORD *)(a1 + 832), (__int64 *)&v99);
    copy_tinfo_t(&v98, src);
    clear_tinfo_t(src);
    clear_tinfo_t(&v99);
  }
  v18 = v98;
  if ( (_BYTE)v98 )
  {
    LOBYTE(v18) = v98 | 0x80;
    v98 = v18;
  }
  sub_32F3F0((__int64)v103, v85, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), (__int64)&v98);
  sub_32F3F0((__int64)v104, v94, v13, (__int64)&v97);
  if ( !strcmp(*a2, "fetch_and") )
    sub_120220(v104, *(_QWORD *)(a1 + 832), 7, v89, v105);
  v100 = 0;
  v99 = nullptr;
  v19 = (_DWORD *)qvector_reserve(&v99, 0, 8, 1);
  v99 = v19;
  *(_QWORD *)&v100 = 8;
  *v19 = 1836020833;
  *(_DWORD *)((char *)v19 + 3) = 1600350573;
  *((_BYTE *)v99 + 7) = 0;
  if ( !v91 )
  {
    v20 = 24;
    memset(src, 0, sizeof(src));
    v21 = 23;
    v22 = "compare_exchange_strong";
LABEL_38:
    n = v21;
    v81 = v20;
    *(_QWORD *)src = qvector_reserve(src, 0, v20, 1);
    *(_QWORD *)&src[8] = v81;
    memmove(*(void **)src, v22, n);
    *(_BYTE *)(*(_QWORD *)src + n) = 0;
    v23 = *(_QWORD *)&src[8];
    if ( *(_QWORD *)&src[8] )
    {
      v24 = *(_QWORD *)&src[8] - 1LL;
      if ( *(_QWORD *)&src[8] != 1 )
      {
        v59 = v100;
        v60 = *(_QWORD *)&src[8] - 1LL;
        if ( (_QWORD)v100 )
        {
          v59 = v100 - 1;
          v60 = v24 + v100 - 1;
          v23 = *(_QWORD *)&src[8] + v100 - 1;
        }
        v61 = (__int64)v99;
        if ( *((_QWORD *)&v100 + 1) < v23 )
        {
          v75 = v60;
          na = v59;
          v83 = *(_QWORD *)&src[8] - 1LL;
          v99 = (_DWORD *)qvector_reserve(&v99, v99, v23, 1);
          v60 = v75;
          v61 = (__int64)v99;
          v59 = na;
          v24 = v83;
        }
        *(_QWORD *)&v100 = v23;
        *(_BYTE *)(v61 + v60) = 0;
        memcpy((char *)v99 + v59, *(const void **)src, v24);
      }
    }
    if ( *(_QWORD *)src )
    {
      *(_QWORD *)&src[8] = 0;
      qfree(*(_QWORD *)src);
    }
    v88 = dword_42E5D0[v87];
    if ( v88 == 5 )
    {
      v25 = 3;
      if ( !v91 )
      {
LABEL_44:
        sub_32F430((__int64)v104, *(_QWORD *)(a1 + 832), v94, v13, v13, v13, 2);
        sub_32C870(src, *(_QWORD *)(a1 + 832), &v97);
        copy_tinfo_t(v106, src);
        clear_tinfo_t(src);
        v26 = 104;
        if ( v93 == 80 )
          v26 = 144;
        v27 = sub_3F6F80(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 620LL), a1 + v26, v93 == 80, 0.0);
        sub_32F3F0((__int64)v107, v27, v13, (__int64)&v97);
        v28 = *(_QWORD *)(a1 + 8);
        goto LABEL_47;
      }
      goto LABEL_75;
    }
    goto LABEL_78;
  }
  v22 = *a2;
  memset(src, 0, sizeof(src));
  if ( v22 )
  {
    v21 = strlen(v22);
    v20 = v21 + 1;
    goto LABEL_38;
  }
  v88 = dword_42E5D0[v87];
  if ( v88 == 5 )
  {
LABEL_75:
    v25 = 2;
    v90 |= v86 == 0;
    goto LABEL_76;
  }
LABEL_78:
  memset(src, 0, sizeof(src));
  v51 = qvector_reserve(src, 0, 10, 1);
  *(_QWORD *)src = v51;
  *(_QWORD *)&src[8] = 10;
  *(_QWORD *)v51 = 0x6963696C7078655FLL;
  *(_BYTE *)(v51 + 8) = 116;
  v52 = *(_QWORD *)src;
  *(_BYTE *)(*(_QWORD *)src + 9LL) = 0;
  v53 = *(_QWORD *)&src[8];
  if ( *(_QWORD *)&src[8] )
  {
    v62 = *(_QWORD *)&src[8] - 1LL;
    if ( *(_QWORD *)&src[8] != 1 )
    {
      v63 = v100;
      v64 = *(_QWORD *)&src[8] - 1LL;
      if ( (_QWORD)v100 )
      {
        v63 = v100 - 1;
        v64 = v62 + v100 - 1;
        v53 = *(_QWORD *)&src[8] + v100 - 1;
      }
      v65 = (__int64)v99;
      if ( *((_QWORD *)&v100 + 1) < v53 )
      {
        v76 = v63;
        nb = *(_QWORD *)&src[8] - 1LL;
        v84 = v64;
        v99 = (_DWORD *)qvector_reserve(&v99, v99, v53, 1);
        v63 = v76;
        v65 = (__int64)v99;
        v62 = nb;
        v64 = v84;
      }
      *(_QWORD *)&v100 = v53;
      *(_BYTE *)(v65 + v64) = 0;
      memcpy((char *)v99 + v63, *(const void **)src, v62);
      v52 = *(_QWORD *)src;
    }
  }
  if ( v52 )
  {
    *(_QWORD *)&src[8] = 0;
    qfree(v52);
  }
  if ( v86 )
  {
    if ( v91 )
    {
      v74 = 2;
      v54 = 184;
      v82 = 160;
    }
    else
    {
      v74 = 3;
      v54 = 264;
      v82 = 240;
    }
  }
  else
  {
    v74 = 1;
    v54 = 104;
    v82 = 80;
  }
  v55 = &v103[v54];
  *(_QWORD *)src = 7;
  v56 = *(_QWORD *)(a1 + 832);
  copy_tinfo_t(v55, src);
  clear_tinfo_t(src);
  v57 = getinf(59);
  sub_120450((__int64)&v103[v82], v56, v88, v57, v89, 0);
  v58 = sub_3EFF50(v56);
  copy_tinfo_t(v55, v58);
  if ( !v86 )
  {
    if ( v91 )
    {
      v28 = *(_QWORD *)(a1 + 8);
      v25 = 2;
      goto LABEL_87;
    }
LABEL_105:
    sub_124BC0((__int64)v108, &v103[v82]);
    v109 = *(_QWORD *)&v103[80 * v74 + 16];
    copy_tinfo_t(v110, v55);
    v67 = *(_QWORD *)&v103[v82 + 40];
    if ( v67 && (v68 = v67 - 1, v67 != 1) )
    {
      v66 = (const void **)&v103[v82 + 32];
      v69 = *v66;
      v70 = dest;
      if ( v113 < v67 )
      {
        nc = (size_t)*v66;
        dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)&v103[v82 + 40], 1);
        v69 = (const void *)nc;
        v70 = dest;
        v68 = v67 - 1;
      }
      v112 = v67;
      memmove(v70, v69, v68);
      *((char *)dest + v67 - 1) = 0;
    }
    else
    {
      v112 = 0;
    }
    copy_argloc(v114, &v103[v82 + 56]);
    v115 = *(_DWORD *)&v103[80 * v74 + 72];
    if ( v88 == 3 )
    {
      *(_QWORD *)src = 7;
      v71 = *(_QWORD *)(a1 + 832);
      copy_tinfo_t(v110, src);
      clear_tinfo_t(src);
      v72 = getinf(59);
      sub_120450((__int64)v108, v71, 0, v72, v89, 0);
      v73 = sub_3EFF50(v71);
      copy_tinfo_t(v110, v73);
    }
    v25 = 5;
    goto LABEL_44;
  }
  v25 = 3;
  if ( !v91 )
    goto LABEL_105;
LABEL_76:
  v28 = *(_QWORD *)(a1 + 8);
  v94 = -1;
  if ( !v90 )
  {
LABEL_47:
    *(_QWORD *)src = 1;
    v29 = 0;
    v92 = 0;
    goto LABEL_48;
  }
LABEL_87:
  *(_QWORD *)src = 0;
  copy_tinfo_t(src, &v97);
  v94 = -1;
  v29 = 1;
  v92 = 1;
LABEL_48:
  v30 = sub_335C70(v28, v89, (__int64)v99, src, v25, (__int64)v103, v29);
  clear_tinfo_t(src);
  v31 = *(_QWORD *)(v30 + 72);
  *(_DWORD *)(v31 + 280) |= 4u;
  memset(src, 0, sizeof(src));
  v102 = 0;
  *(_QWORD *)&src[16] = qvector_reserve(&src[16], 0, 1, 16);
  *(__m128i *)(*(_QWORD *)&src[16] + 16 * v102) = _mm_load_si128((const __m128i *)&xmmword_41F900);
  *(_QWORD *)&v102 = v102 + 1;
  sub_63C80((__int64 *)(v31 + 136), (__int64 *)src);
  sub_317070((__int64 *)(v31 + 152), (__int64 **)&src[16]);
  if ( *(_QWORD *)&src[16] )
  {
    *(_QWORD *)&v102 = 0;
    qfree(*(_QWORD *)&src[16]);
  }
  qfree(*(_QWORD *)src);
  *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_41F900);
  sub_316F70((__int64 *)(v31 + 216), (__m128i *)src, 0.0, si128);
  *(_DWORD *)(v30 + 4) |= 0x80000u;
  if ( !v92 )
    goto LABEL_54;
  v32 = sub_122530(*(_QWORD *)(a1 + 832), *(unsigned __int16 *)(a1 + 40LL * (v86 != 0) + 70));
  v33 = _mm_cvtsi32_si128(*(_DWORD *)(v30 + 68));
  *(_DWORD *)src = 1;
  *(_QWORD *)&src[4] = _mm_unpacklo_epi32(v33, _mm_cvtsi32_si128(v32)).m128i_u64[0];
  v30 = (__int64)sub_124CA0(v30, src);
  sub_11C7E0((__int64)src);
  v34 = sub_3F0900(a1 + 24);
  v35 = *(_DWORD *)(v30 + 68);
  v36 = *(_QWORD *)(a1 + 832);
  if ( !v34 || (v37 = *(_DWORD *)(v36 + 80), v37 <= v35) )
  {
    v96 = *(_WORD *)(a1 + 70);
    if ( !sub_11E2E0(4u) || *(_DWORD *)(v36 + 80) != 8 || (unsigned int)v96 - 8 > 0x107 || v35 != 4 )
      goto LABEL_54;
    v36 = *(_QWORD *)(a1 + 832);
    v37 = *(_DWORD *)(v36 + 80);
  }
  sub_12B130(v30, v36, 9, v37, 1);
LABEL_54:
  sub_B4CD0(*(_QWORD **)(a1 + 16), v30);
  if ( v93 == 80 && v94 != -1 )
  {
    v38 = *(_QWORD *)(a1 + 832);
    v39 = *(unsigned __int8 *)(a1 + 69);
    v40 = *(unsigned __int16 *)(a1 + 70);
    v41 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v38 + 168LL);
    if ( v41 == sub_3EA010 )
      v42 = sub_3EA010(v38, v40);
    else
      v42 = v41(v38, v40);
    sub_3F56D0(a1, 4u, v39, v94, 0x3BEA45E214ADDC55LL, v42, 0);
    v43 = get_dtype_size(v39);
    v44 = *(_QWORD *)(a1 + 832);
    v45 = v43;
    v46 = (unsigned int)*(unsigned __int16 *)(a1 + 70) + 1;
    v47 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v44 + 168LL);
    if ( v47 == sub_3EA010 )
      v48 = sub_3EA010(v44, v46);
    else
      v48 = v47(v44, v46);
    sub_3F56D0(a1, 4u, v39, v45 + v94, 0x3BEA45E214ADDC55LL, v48, 0);
  }
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    qfree(v99);
  }
  clear_tinfo_t(&v98);
  clear_tinfo_t(&v97);
  v49 = &v116;
  do
  {
    v49 -= 80;
    cleanup_argloc(v49 + 56);
    v50 = *((_QWORD *)v49 + 4);
    if ( v50 )
    {
      *((_QWORD *)v49 + 5) = 0;
      qfree(v50);
    }
    clear_tinfo_t(v49 + 24);
    sub_11C7E0((__int64)v49);
  }
  while ( v49 != v103 );
  return 1;
}
