__int64 __fastcall sub_20DD4B0(__int64 a1, __int64 a2)
{
  char *v4; // rax
  char *v5; // rsi
  __int64 v6; // rbp
  __int64 v8; // r13
  __int64 v9; // r12
  char v10; // al
  __int64 v11; // r13
  char *v12; // rax
  char *v13; // rsi
  void *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rdx
  __m128i v17; // xmm1
  void *v18; // rbp
  __int64 v19; // rax
  __m128i v20; // xmm1
  __m128 v21; // xmm0
  __m128i v22; // xmm0
  void *v23; // rsi
  _BYTE *v24; // rax
  char *v25; // rdx
  _QWORD *v26; // rax
  __m128 v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rcx
  char *v30; // rax
  __int64 v31; // r12
  char v32; // al
  __int64 v33; // rbx
  char *v34; // rdi
  char *v35; // r12
  void *v36; // rsi
  void **v37; // rcx
  void **v38; // rax
  char *v39; // rdi
  char *v40; // r12
  _OWORD *v41; // rax
  void *v42; // rsi
  _BYTE *v43; // rcx
  _BYTE *v44; // rdx
  int v45; // eax
  char *v46; // rax
  char *v47; // rax
  char v48; // dl
  unsigned __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // r14
  __int64 v55; // rax
  char v56; // dl
  __int64 v57; // rax
  char *v58; // rax
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  _BYTE *v61; // rax
  _BYTE *v62; // rsi
  __int64 v63; // r8
  char *v64; // rdi
  _BYTE *v65; // rcx
  __m128 v66; // xmm0
  __m128i v67; // xmm0
  __m128i v68; // xmm0
  __m128i v69; // xmm0
  _BYTE *v70; // rdx
  _OWORD *v71; // rsi
  __int64 v72; // r12
  char v73; // al
  __m128 v74; // xmm0
  __m128i v75; // xmm0
  __m128i si128; // xmm1
  _BYTE *v77; // rax
  _BYTE *v78; // rsi
  char *v79; // rdi
  void *dest[2]; // [rsp+0h] [rbp-118h] BYREF
  __int64 v81; // [rsp+18h] [rbp-100h] BYREF
  __m128i v82; // [rsp+20h] [rbp-F8h] BYREF
  char v83; // [rsp+3Fh] [rbp-D9h] BYREF
  __int64 v84; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+48h] [rbp-D0h]
  void **v86; // [rsp+58h] [rbp-C0h]
  _OWORD v87[2]; // [rsp+60h] [rbp-B8h] BYREF
  void *src[2]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE *v89; // [rsp+90h] [rbp-88h]
  _OWORD v90[4]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v91[64]; // [rsp+D8h] [rbp-40h] BYREF

  v4 = *(char **)a1;
  v5 = *(char **)(a1 + 8);
  if ( *(char **)a1 == v5 )
  {
LABEL_4:
    v83 = 0;
    v84 = 0;
    v6 = sub_20DF360(a1, a2, &v83);
    v84 = v6;
    if ( !v6 )
      return 0;
    if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && **(_BYTE **)a1 == 73 )
    {
      if ( !v83 )
        sub_20D8690((char **)(a1 + 296), &v84);
      v8 = sub_20DCBE0(a1, a2 != 0);
      if ( !v8 )
        return 0;
      if ( a2 )
        *(_BYTE *)(a2 + 1) = 1;
      v9 = v84;
      v6 = sub_20CF970(a1 + 816, 32);
      *(_WORD *)(v6 + 8) = 16429;
      v10 = *(_BYTE *)(v6 + 10);
      *(_QWORD *)(v6 + 16) = v9;
      *(_QWORD *)(v6 + 24) = v8;
      *(_BYTE *)(v6 + 10) = v10 & 0xF0 | 5;
      *(_QWORD *)v6 = off_2BE77A0;
    }
    else if ( v83 )
    {
      return 0;
    }
    return v6;
  }
  if ( *v4 != 78 )
  {
    if ( *v4 != 90 )
      goto LABEL_4;
    *(_QWORD *)a1 = v4 + 1;
    v11 = sub_20DF440(a1, 1);
    if ( !v11 )
      return 0;
    v12 = *(char **)a1;
    v13 = *(char **)(a1 + 8);
    if ( *(char **)a1 == v13 || *v12 != 69 )
      return 0;
    *(_QWORD *)a1 = v12 + 1;
    if ( v13 != v12 + 1 && v12[1] == 115 )
    {
      *(_QWORD *)a1 = v12 + 2;
      *(_QWORD *)a1 = sub_20D85D0(v12 + 2, v13);
      v72 = sub_20D1380(a1 + 816, "string literal");
      if ( v72 )
      {
        v6 = sub_20CF970(a1 + 816, 32);
        *(_WORD *)(v6 + 8) = 16410;
        v73 = *(_BYTE *)(v6 + 10);
        *(_QWORD *)(v6 + 16) = v11;
        *(_QWORD *)(v6 + 24) = v72;
        *(_BYTE *)(v6 + 10) = v73 & 0xF0 | 5;
        *(_QWORD *)v6 = off_2BE7140;
        return v6;
      }
      return 0;
    }
    v14 = *(void **)(a1 + 576);
    v15 = a1 + 688;
    v84 = a1;
    v16 = *(_QWORD *)(a1 + 672);
    dest[0] = v90;
    v17 = _mm_loadl_epi64((const __m128i *)dest);
    v18 = (void *)(a1 + 600);
    v86 = src;
    v89 = v91;
    v19 = *(_QWORD *)(a1 + 664);
    v20 = _mm_unpacklo_epi64(v17, v17);
    ptr[0] = v87;
    ptr[1] = v87;
    memset(v87, 0, sizeof(v87));
    *(__m128i *)src = v20;
    memset(v90, 0, sizeof(v90));
    dest[0] = v14;
    if ( v19 == a1 + 688 )
    {
      v63 = v16 - v15;
      if ( v15 != v16 )
      {
        v82 = v20;
        v81 = v16 - v15;
        memcpy(v87, (const void *)(a1 + 688), v16 - v15);
        v20 = _mm_load_si128(&v82);
        v63 = v81;
      }
      v25 = (char *)src[0];
      *(_QWORD *)(a1 + 672) = v15;
      ptr[1] = (char *)v87 + v63;
      v64 = v25;
      if ( v18 != dest[0] )
      {
        v23 = *(void **)(a1 + 584);
        v24 = *(_BYTE **)(a1 + 592);
        if ( v25 != (char *)v90 )
        {
          dest[0] = *(void **)(a1 + 584);
          v65 = v89;
          v89 = v24;
          v26 = (_QWORD *)a1;
          v66 = _mm_loadh_ps((const double *)dest);
          dest[0] = v25;
          *(__m128 *)src = v66;
          v67 = _mm_loadl_epi64((const __m128i *)dest);
          *(_QWORD *)(a1 + 592) = v65;
          *(__m128i *)(a1 + 576) = _mm_unpacklo_epi64(v67, v67);
          goto LABEL_24;
        }
        goto LABEL_23;
      }
      *(__m128i *)dest = v20;
      if ( v25 != (char *)v90 )
      {
        free(v25);
        si128 = _mm_load_si128((const __m128i *)dest);
        v89 = v91;
        v64 = (char *)si128.m128i_i64[0];
        *(__m128i *)src = si128;
      }
    }
    else
    {
      v81 = v16;
      v86 = *(void ***)(a1 + 680);
      v21 = _mm_loadh_ps((const double *)&v81);
      v81 = a1 + 688;
      *(__m128 *)ptr = v21;
      v22 = _mm_loadl_epi64((const __m128i *)&v81);
      *(_QWORD *)(a1 + 680) = a1 + 720;
      *(__m128i *)(a1 + 664) = _mm_unpacklo_epi64(v22, v22);
      if ( v18 != dest[0] )
      {
        v23 = *(void **)(a1 + 584);
        v24 = *(_BYTE **)(a1 + 592);
LABEL_23:
        dest[0] = v23;
        v25 = (char *)(a1 + 600);
        v89 = v24;
        *(_QWORD *)(a1 + 592) = a1 + 664;
        v26 = (_QWORD *)a1;
        v27 = _mm_loadh_ps((const double *)dest);
        dest[0] = (void *)(a1 + 600);
        *(__m128 *)src = v27;
        v28 = _mm_loadl_epi64((const __m128i *)dest);
        *(__m128i *)(a1 + 576) = _mm_unpacklo_epi64(v28, v28);
        goto LABEL_24;
      }
      v64 = (char *)src[0];
    }
    v77 = *(_BYTE **)(a1 + 584);
    v78 = *(_BYTE **)(a1 + 576);
    if ( v77 != v78 )
    {
      memmove(v64, v78, v77 - v78);
      v64 = (char *)src[0];
      v77 = *(_BYTE **)(a1 + 584);
      v78 = *(_BYTE **)(a1 + 576);
    }
    *(_QWORD *)(a1 + 584) = v78;
    v79 = &v64[v77 - v78];
    v26 = (_QWORD *)v84;
    src[1] = v79;
    v25 = *(char **)(v84 + 576);
LABEL_24:
    v29 = v26[83];
    v26[73] = v25;
    v26[84] = v29;
    v30 = *(char **)a1;
    if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v30 == 100 )
    {
      *(_QWORD *)a1 = v30 + 1;
      sub_20CEB80((char **)a1, 1);
      v58 = *(char **)a1;
      if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v58 == 95 )
      {
        *(_QWORD *)a1 = v58 + 1;
        v31 = sub_20DD4B0(a1, a2);
        if ( v31 )
          goto LABEL_28;
      }
    }
    else
    {
      v31 = sub_20DD4B0(a1, a2);
      if ( v31 )
      {
        *(_QWORD *)a1 = sub_20D85D0(*(char **)a1, *(char **)(a1 + 8));
LABEL_28:
        v6 = sub_20CF970(a1 + 816, 32);
        *(_WORD *)(v6 + 8) = 16410;
        v32 = *(_BYTE *)(v6 + 10);
        *(_QWORD *)(v6 + 16) = v11;
        *(_QWORD *)(v6 + 24) = v31;
        *(_BYTE *)(v6 + 10) = v32 & 0xF0 | 5;
        *(_QWORD *)v6 = off_2BE7140;
        goto LABEL_29;
      }
    }
    v6 = 0;
LABEL_29:
    v33 = v84;
    v34 = *(char **)(v84 + 664);
    v35 = (char *)(v84 + 688);
    if ( ptr[0] == v87 )
    {
      if ( v35 != v34 )
      {
        free(v34);
        dest[0] = v35;
        v59 = _mm_loadl_epi64((const __m128i *)dest);
        *(_QWORD *)(v33 + 680) = v33 + 720;
        v60 = _mm_unpacklo_epi64(v59, v59);
        v34 = (char *)v60.m128i_i64[0];
        *(__m128i *)(v33 + 664) = v60;
      }
      v61 = ptr[1];
      v62 = ptr[0];
      if ( ptr[1] != ptr[0] )
      {
        memmove(v34, ptr[0], (char *)ptr[1] - (char *)ptr[0]);
        v61 = ptr[1];
        v62 = ptr[0];
        v34 = *(char **)(v33 + 664);
      }
      *(_QWORD *)(v33 + 672) = &v34[v61 - v62];
      v33 = v84;
      ptr[1] = v62;
    }
    else
    {
      v36 = ptr[1];
      v37 = v86;
      if ( v35 == v34 )
      {
        dest[0] = ptr[1];
        *(_QWORD *)(v84 + 680) = v86;
        v74 = _mm_loadh_ps((const double *)dest);
        dest[0] = v87;
        *(__m128 *)(v33 + 664) = v74;
        v75 = _mm_loadl_epi64((const __m128i *)dest);
        v86 = src;
        *(__m128i *)ptr = _mm_unpacklo_epi64(v75, v75);
      }
      else
      {
        *(void **)(v84 + 664) = ptr[0];
        ptr[0] = v34;
        v38 = *(void ***)(v33 + 680);
        *(_QWORD *)(v33 + 672) = v36;
        *(_QWORD *)(v33 + 680) = v37;
        v86 = v38;
        ptr[1] = v34;
      }
    }
    v39 = *(char **)(v33 + 576);
    v40 = (char *)(v33 + 600);
    v41 = v39;
    if ( src[0] == v90 )
    {
      if ( v39 != v40 )
      {
        free(v39);
        dest[0] = (void *)(v33 + 600);
        v68 = _mm_loadl_epi64((const __m128i *)dest);
        *(_QWORD *)(v33 + 592) = v33 + 664;
        v69 = _mm_unpacklo_epi64(v68, v68);
        v39 = (char *)v69.m128i_i64[0];
        *(__m128i *)(v33 + 576) = v69;
      }
      v70 = src[1];
      v71 = src[0];
      if ( src[1] != src[0] )
      {
        memmove(v39, src[0], (char *)src[1] - (char *)src[0]);
        v39 = *(char **)(v33 + 576);
        v70 = src[1];
        v71 = src[0];
      }
      v41 = v71;
      *(_QWORD *)(v33 + 584) = &v39[v70 - (_BYTE *)v71];
      src[1] = v71;
    }
    else
    {
      v42 = src[1];
      v43 = v89;
      if ( v39 == v40 )
      {
        dest[0] = src[1];
        *(_QWORD *)(v33 + 592) = v89;
        *(__m128 *)(v33 + 576) = _mm_loadh_ps((const double *)dest);
LABEL_37:
        if ( ptr[0] != v87 )
          free(ptr[0]);
        return v6;
      }
      *(void **)(v33 + 576) = src[0];
      src[0] = v39;
      v44 = *(_BYTE **)(v33 + 592);
      *(_QWORD *)(v33 + 584) = v42;
      *(_QWORD *)(v33 + 592) = v43;
      v89 = v44;
      src[1] = v39;
    }
    if ( v41 != v90 )
      free(v41);
    goto LABEL_37;
  }
  *(_QWORD *)a1 = v4 + 1;
  if ( v5 != v4 + 1 && v4[1] == 72 )
  {
    v47 = v4 + 2;
    *(_QWORD *)a1 = v47;
    if ( a2 )
    {
      *(_BYTE *)(a2 + 24) = 1;
      v47 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
    }
    goto LABEL_47;
  }
  v45 = sub_20CFB50((char **)a1, v5);
  if ( !a2 )
  {
    v47 = *(char **)a1;
    v5 = *(char **)(a1 + 8);
    if ( v5 != *(char **)a1 && (*v47 == 79 || *v47 == 82) )
      *(_QWORD *)a1 = ++v47;
    goto LABEL_47;
  }
  *(_DWORD *)(a2 + 4) = v45;
  v46 = *(char **)a1;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
    if ( *v46 == 79 )
    {
      *(_QWORD *)a1 = v46 + 1;
      *(_BYTE *)(a2 + 8) = 2;
      v47 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
      goto LABEL_47;
    }
    if ( *v46 == 82 )
    {
      *(_QWORD *)a1 = v46 + 1;
      *(_BYTE *)(a2 + 8) = 1;
      v47 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
      goto LABEL_47;
    }
  }
  *(_BYTE *)(a2 + 8) = 0;
  v47 = *(char **)a1;
  v5 = *(char **)(a1 + 8);
LABEL_47:
  v84 = 0;
  while ( v5 == v47 )
  {
    if ( !a2 )
    {
LABEL_57:
      v50 = v84;
      v51 = 0;
      goto LABEL_58;
    }
LABEL_51:
    *(_BYTE *)(a2 + 1) = 0;
    v47 = *(char **)a1;
    v5 = *(char **)(a1 + 8);
    if ( v5 == *(char **)a1 )
      goto LABEL_57;
LABEL_52:
    v48 = *v47;
    if ( *v47 == 84 )
    {
      if ( v84 )
        return 0;
      v52 = sub_20D1430(a1);
      v84 = v52;
      goto LABEL_59;
    }
    if ( v48 == 73 )
    {
      if ( !v84 )
        return 0;
      v53 = sub_20DCBE0(a1, a2 != 0);
      if ( !v53 )
        return 0;
      v54 = v84;
      if ( *(_BYTE *)(v84 + 8) == 45 )
        return 0;
      if ( a2 )
        *(_BYTE *)(a2 + 1) = 1;
      v55 = sub_20CF970(a1 + 816, 32);
      v56 = *(_BYTE *)(v55 + 10);
      *(_WORD *)(v55 + 8) = 16429;
      *(_QWORD *)(v55 + 16) = v54;
      *(_QWORD *)(v55 + 24) = v53;
      *(_BYTE *)(v55 + 10) = v56 & 0xF0 | 5;
      *(_QWORD *)v55 = off_2BE77A0;
      v84 = v55;
LABEL_60:
      sub_20D8690((char **)(a1 + 296), &v84);
      v47 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
      if ( *(char **)a1 != v5 && *v47 == 77 )
        *(_QWORD *)a1 = ++v47;
    }
    else
    {
      v49 = v5 - v47;
      if ( v48 == 68 && v49 > 1 )
      {
        v50 = v84;
        v51 = 0;
        if ( (v47[1] & 0xDF) == 0x54 )
        {
          if ( v84 )
            return 0;
          v52 = sub_20DC890((_QWORD *)a1);
          v84 = v52;
          goto LABEL_59;
        }
LABEL_58:
        v52 = sub_20DED80(a1, a2, v50, v51);
        v84 = v52;
LABEL_59:
        if ( !v52 )
          return 0;
        goto LABEL_60;
      }
      if ( v48 != 83 )
        goto LABEL_57;
      if ( v49 > 1 && v47[1] == 116 )
      {
        *(_QWORD *)a1 = v47 + 2;
        v51 = sub_20D1380(a1 + 816, "std");
      }
      else
      {
        v51 = sub_20D8880(a1);
      }
      if ( !v51 )
        return 0;
      v50 = v84;
      if ( *(_BYTE *)(v51 + 8) == 27 )
        goto LABEL_58;
      if ( v84 )
        return 0;
      v47 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
      v84 = v51;
    }
  }
  if ( *v47 != 69 )
  {
    if ( !a2 )
      goto LABEL_52;
    goto LABEL_51;
  }
  v6 = v84;
  *(_QWORD *)a1 = v47 + 1;
  if ( v6 )
  {
    v57 = *(_QWORD *)(a1 + 304);
    if ( *(_QWORD *)(a1 + 296) != v57 )
    {
      *(_QWORD *)(a1 + 304) = v57 - 8;
      return v6;
    }
  }
  return 0;
}
