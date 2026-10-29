_QWORD *__fastcall sub_21D8010(__int64 a1, __int64 a2)
{
  char *v4; // rax
  char *v5; // rsi
  _QWORD *v6; // rbp
  char *v8; // rax
  char *v9; // rsi
  void *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __m128i v13; // xmm1
  void *v14; // r15
  __int64 v15; // rax
  __m128i v16; // xmm1
  __m128 v17; // xmm0
  __m128i v18; // xmm0
  void *v19; // rcx
  _BYTE *v20; // rax
  char *v21; // rdx
  _QWORD *v22; // rax
  __m128 v23; // xmm0
  __m128i v24; // xmm0
  __int64 v25; // rcx
  char *v26; // rax
  unsigned __int64 v27; // rbx
  char *v28; // rdi
  char *v29; // r12
  void *v30; // rsi
  void **v31; // rcx
  void **v32; // rax
  char *v33; // rdi
  char *v34; // r12
  _OWORD *v35; // rax
  void *v36; // rsi
  _BYTE *v37; // rcx
  _BYTE *v38; // rdx
  int v39; // eax
  char *v40; // rax
  char *v41; // rax
  char v42; // dl
  unsigned __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rax
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  _BYTE *v50; // rdx
  _OWORD *v51; // rsi
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  _BYTE *v54; // rax
  _BYTE *v55; // rsi
  __int64 v56; // r14
  char *v57; // rdi
  _BYTE *v58; // rcx
  __m128 v59; // xmm0
  __m128i v60; // xmm0
  __m128 v61; // xmm0
  __m128i v62; // xmm0
  char *v63; // rax
  __m128i si128; // xmm1
  _BYTE *v65; // rax
  _BYTE *v66; // rsi
  char *v67; // rdi
  void *dest[2]; // [rsp+0h] [rbp-108h] BYREF
  __m128i v69; // [rsp+10h] [rbp-F8h] BYREF
  _QWORD *v70; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD *v71; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v72; // [rsp+30h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+38h] [rbp-D0h]
  void **v74; // [rsp+48h] [rbp-C0h]
  _OWORD v75[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *src[2]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE *v77; // [rsp+80h] [rbp-88h]
  _OWORD v78[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v79[64]; // [rsp+C8h] [rbp-40h] BYREF

  v4 = *(char **)a1;
  v5 = *(char **)(a1 + 8);
  if ( *(char **)a1 == v5 )
  {
LABEL_4:
    LOBYTE(v70) = 0;
    v71 = nullptr;
    v6 = sub_21D7EC0(a1, a2, &v70);
    v71 = v6;
    if ( v6 )
    {
      if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && **(_BYTE **)a1 == 73 )
      {
        if ( !(_BYTE)v70 )
          sub_20D8690((char **)(a1 + 296), (__int64 *)&v71);
        v6 = (_QWORD *)sub_21DEC40(a1, a2 != 0);
        v72 = v6;
        if ( v6 )
        {
          if ( a2 )
            *(_BYTE *)(a2 + 1) = 1;
          return sub_21D5E20(a1 + 808, (unsigned __int64 *)&v71, (unsigned __int64 *)&v72);
        }
      }
      else if ( (_BYTE)v70 )
      {
        return nullptr;
      }
    }
    return v6;
  }
  if ( *v4 != 78 )
  {
    if ( *v4 != 90 )
      goto LABEL_4;
    *(_QWORD *)a1 = v4 + 1;
    v6 = (_QWORD *)sub_21E4F70(a1, 1);
    v70 = v6;
    if ( !v6 )
      return v6;
    v8 = *(char **)a1;
    v9 = *(char **)(a1 + 8);
    v6 = nullptr;
    if ( *(char **)a1 == v9 || *v8 != 69 )
      return v6;
    *(_QWORD *)a1 = v8 + 1;
    if ( v9 != v8 + 1 && v8[1] == 115 )
    {
      *(_QWORD *)a1 = v8 + 2;
      *(_QWORD *)a1 = sub_20D85D0(v8 + 2, v9);
      v6 = (_QWORD *)sub_21D5C20(a1 + 808, "string literal");
      v72 = v6;
      if ( v6 )
        return sub_21D5C90(a1 + 808, (unsigned __int64 *)&v70, (unsigned __int64 *)&v72);
      return v6;
    }
    v10 = *(void **)(a1 + 576);
    v11 = a1 + 688;
    v72 = (_QWORD *)a1;
    v12 = *(_QWORD *)(a1 + 672);
    dest[0] = v78;
    v13 = _mm_loadl_epi64((const __m128i *)dest);
    v14 = (void *)(a1 + 600);
    v74 = src;
    v77 = v79;
    v15 = *(_QWORD *)(a1 + 664);
    v16 = _mm_unpacklo_epi64(v13, v13);
    ptr[0] = v75;
    ptr[1] = v75;
    memset(v75, 0, sizeof(v75));
    *(__m128i *)src = v16;
    memset(v78, 0, sizeof(v78));
    dest[0] = v10;
    if ( v15 == a1 + 688 )
    {
      v56 = v12 - v11;
      if ( v12 != v11 )
      {
        v69 = v16;
        memcpy(v75, (const void *)(a1 + 688), v12 - v11);
        v16 = _mm_load_si128(&v69);
      }
      v21 = (char *)src[0];
      *(_QWORD *)(a1 + 672) = v11;
      ptr[1] = (char *)v75 + v56;
      v57 = v21;
      if ( dest[0] != v14 )
      {
        v19 = *(void **)(a1 + 584);
        v20 = *(_BYTE **)(a1 + 592);
        if ( v21 != (char *)v78 )
        {
          dest[0] = *(void **)(a1 + 584);
          v58 = v77;
          v77 = v20;
          v22 = (_QWORD *)a1;
          v59 = _mm_loadh_ps((const double *)dest);
          dest[0] = v21;
          *(__m128 *)src = v59;
          v60 = _mm_loadl_epi64((const __m128i *)dest);
          *(_QWORD *)(a1 + 592) = v58;
          *(__m128i *)(a1 + 576) = _mm_unpacklo_epi64(v60, v60);
          goto LABEL_25;
        }
        goto LABEL_24;
      }
      *(__m128i *)dest = v16;
      if ( v21 != (char *)v78 )
      {
        free(v21);
        si128 = _mm_load_si128((const __m128i *)dest);
        v77 = v79;
        v57 = (char *)si128.m128i_i64[0];
        *(__m128i *)src = si128;
      }
    }
    else
    {
      v69.m128i_i64[0] = v12;
      v74 = *(void ***)(a1 + 680);
      v17 = _mm_loadh_ps((const double *)v69.m128i_i64);
      v69.m128i_i64[0] = a1 + 688;
      *(__m128 *)ptr = v17;
      v18 = _mm_loadl_epi64(&v69);
      *(_QWORD *)(a1 + 680) = a1 + 720;
      *(__m128i *)(a1 + 664) = _mm_unpacklo_epi64(v18, v18);
      if ( dest[0] != v14 )
      {
        v19 = *(void **)(a1 + 584);
        v20 = *(_BYTE **)(a1 + 592);
LABEL_24:
        dest[0] = v19;
        v21 = (char *)(a1 + 600);
        v77 = v20;
        *(_QWORD *)(a1 + 592) = a1 + 664;
        v22 = (_QWORD *)a1;
        v23 = _mm_loadh_ps((const double *)dest);
        dest[0] = (void *)(a1 + 600);
        *(__m128 *)src = v23;
        v24 = _mm_loadl_epi64((const __m128i *)dest);
        *(__m128i *)(a1 + 576) = _mm_unpacklo_epi64(v24, v24);
        goto LABEL_25;
      }
      v57 = (char *)src[0];
    }
    v65 = *(_BYTE **)(a1 + 584);
    v66 = *(_BYTE **)(a1 + 576);
    if ( v65 != v66 )
    {
      memmove(v57, v66, v65 - v66);
      v57 = (char *)src[0];
      v65 = *(_BYTE **)(a1 + 584);
      v66 = *(_BYTE **)(a1 + 576);
    }
    *(_QWORD *)(a1 + 584) = v66;
    v67 = &v57[v65 - v66];
    v22 = v72;
    src[1] = v67;
    v21 = (char *)v72[72];
LABEL_25:
    v25 = v22[83];
    v22[73] = v21;
    v22[84] = v25;
    v26 = *(char **)a1;
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v26 != 100 )
    {
      v6 = (_QWORD *)sub_21D8010(a1, a2);
      v71 = v6;
      if ( !v6 )
        goto LABEL_30;
      *(_QWORD *)a1 = sub_20D85D0(*(char **)a1, *(char **)(a1 + 8));
      goto LABEL_29;
    }
    *(_QWORD *)a1 = v26 + 1;
    sub_21CFC00((char **)a1, 1);
    v63 = *(char **)a1;
    if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v63 == 95 )
    {
      *(_QWORD *)a1 = v63 + 1;
      v71 = (_QWORD *)sub_21D8010(a1, a2);
      if ( v71 )
      {
LABEL_29:
        v6 = sub_21D5C90(a1 + 808, (unsigned __int64 *)&v70, (unsigned __int64 *)&v71);
        goto LABEL_30;
      }
      v6 = nullptr;
    }
    else
    {
      v6 = nullptr;
    }
LABEL_30:
    v27 = (unsigned __int64)v72;
    v28 = (char *)v72[83];
    v29 = (char *)(v72 + 86);
    if ( ptr[0] == v75 )
    {
      if ( v29 != v28 )
      {
        free(v28);
        dest[0] = v29;
        v52 = _mm_loadl_epi64((const __m128i *)dest);
        *(_QWORD *)(v27 + 680) = v27 + 720;
        v53 = _mm_unpacklo_epi64(v52, v52);
        v28 = (char *)v53.m128i_i64[0];
        *(__m128i *)(v27 + 664) = v53;
      }
      v54 = ptr[1];
      v55 = ptr[0];
      if ( ptr[1] != ptr[0] )
      {
        memmove(v28, ptr[0], (char *)ptr[1] - (char *)ptr[0]);
        v54 = ptr[1];
        v55 = ptr[0];
        v28 = *(char **)(v27 + 664);
      }
      *(_QWORD *)(v27 + 672) = &v28[v54 - v55];
      v27 = (unsigned __int64)v72;
      ptr[1] = v55;
    }
    else
    {
      v30 = ptr[1];
      v31 = v74;
      if ( v29 == v28 )
      {
        dest[0] = ptr[1];
        v72[85] = v74;
        v61 = _mm_loadh_ps((const double *)dest);
        dest[0] = v75;
        *(__m128 *)(v27 + 664) = v61;
        v62 = _mm_loadl_epi64((const __m128i *)dest);
        v74 = src;
        *(__m128i *)ptr = _mm_unpacklo_epi64(v62, v62);
      }
      else
      {
        v72[83] = ptr[0];
        ptr[0] = v28;
        v32 = *(void ***)(v27 + 680);
        *(_QWORD *)(v27 + 672) = v30;
        *(_QWORD *)(v27 + 680) = v31;
        v74 = v32;
        ptr[1] = v28;
      }
    }
    v33 = *(char **)(v27 + 576);
    v34 = (char *)(v27 + 600);
    v35 = v33;
    if ( src[0] == v78 )
    {
      if ( v33 != v34 )
      {
        free(v33);
        dest[0] = (void *)(v27 + 600);
        v48 = _mm_loadl_epi64((const __m128i *)dest);
        *(_QWORD *)(v27 + 592) = v27 + 664;
        v49 = _mm_unpacklo_epi64(v48, v48);
        v33 = (char *)v49.m128i_i64[0];
        *(__m128i *)(v27 + 576) = v49;
      }
      v50 = src[1];
      v51 = src[0];
      if ( src[1] != src[0] )
      {
        memmove(v33, src[0], (char *)src[1] - (char *)src[0]);
        v50 = src[1];
        v51 = src[0];
        v33 = *(char **)(v27 + 576);
      }
      v35 = v51;
      *(_QWORD *)(v27 + 584) = &v33[v50 - (_BYTE *)v51];
      src[1] = v51;
    }
    else
    {
      v36 = src[1];
      v37 = v77;
      if ( v33 == v34 )
      {
        dest[0] = src[1];
        *(_QWORD *)(v27 + 592) = v77;
        *(__m128 *)(v27 + 576) = _mm_loadh_ps((const double *)dest);
LABEL_38:
        if ( ptr[0] != v75 )
          free(ptr[0]);
        return v6;
      }
      *(void **)(v27 + 576) = src[0];
      src[0] = v33;
      v38 = *(_BYTE **)(v27 + 592);
      *(_QWORD *)(v27 + 584) = v36;
      *(_QWORD *)(v27 + 592) = v37;
      v77 = v38;
      src[1] = v33;
    }
    if ( v35 != v78 )
      free(v35);
    goto LABEL_38;
  }
  *(_QWORD *)a1 = v4 + 1;
  if ( v5 != v4 + 1 && v4[1] == 72 )
  {
    v41 = v4 + 2;
    *(_QWORD *)a1 = v41;
    if ( a2 )
    {
      *(_BYTE *)(a2 + 24) = 1;
      v41 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
    }
    goto LABEL_47;
  }
  v39 = sub_21CFF20((char **)a1, v5);
  if ( !a2 )
  {
    v41 = *(char **)a1;
    v5 = *(char **)(a1 + 8);
    if ( v5 != *(char **)a1 && (*v41 == 79 || *v41 == 82) )
      *(_QWORD *)a1 = ++v41;
    goto LABEL_47;
  }
  *(_DWORD *)(a2 + 4) = v39;
  v40 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 )
  {
    if ( *v40 == 79 )
    {
      *(_QWORD *)a1 = v40 + 1;
      *(_BYTE *)(a2 + 8) = 2;
      v41 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
      goto LABEL_47;
    }
    if ( *v40 == 82 )
    {
      *(_QWORD *)a1 = v40 + 1;
      *(_BYTE *)(a2 + 8) = 1;
      v41 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
      goto LABEL_47;
    }
  }
  *(_BYTE *)(a2 + 8) = 0;
  v41 = *(char **)a1;
  v5 = *(char **)(a1 + 8);
LABEL_47:
  v71 = nullptr;
  while ( v5 == v41 )
  {
    if ( !a2 )
    {
LABEL_57:
      v44 = (__int64)v71;
      v45 = 0;
LABEL_58:
      v46 = (_QWORD *)sub_21E2640(a1, a2, v44, v45);
      v71 = v46;
      goto LABEL_59;
    }
LABEL_51:
    *(_BYTE *)(a2 + 1) = 0;
    v41 = *(char **)a1;
    v5 = *(char **)(a1 + 8);
    if ( v5 == *(char **)a1 )
      goto LABEL_57;
LABEL_52:
    v42 = *v41;
    if ( *v41 == 84 )
    {
      if ( v71 )
        return nullptr;
      v46 = sub_21D5230(a1);
      v71 = v46;
      goto LABEL_59;
    }
    if ( v42 == 73 )
    {
      if ( !v71 )
        return nullptr;
      v72 = (_QWORD *)sub_21DEC40(a1, a2 != 0);
      if ( !v72 || *((_BYTE *)v71 + 8) == 45 )
        return nullptr;
      if ( a2 )
        *(_BYTE *)(a2 + 1) = 1;
      v46 = sub_21D5E20(a1 + 808, (unsigned __int64 *)&v71, (unsigned __int64 *)&v72);
      v71 = v46;
      goto LABEL_59;
    }
    v43 = v5 - v41;
    if ( v42 == 68 && v43 > 1 )
    {
      v44 = (__int64)v71;
      v45 = 0;
      if ( (v41[1] & 0xDF) != 0x54 )
        goto LABEL_58;
      if ( v71 )
        return nullptr;
      v46 = (_QWORD *)sub_21DC350(a1, v43, 0, 0);
      v71 = v46;
LABEL_59:
      if ( !v46 )
        return nullptr;
      sub_20D8690((char **)(a1 + 296), (__int64 *)&v71);
      v41 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
      if ( *(char **)a1 != v5 && *v41 == 77 )
        *(_QWORD *)a1 = ++v41;
    }
    else
    {
      if ( v42 != 83 )
        goto LABEL_57;
      if ( v43 > 1 && v41[1] == 116 )
      {
        *(_QWORD *)a1 = v41 + 2;
        v45 = sub_21D4FC0(a1 + 808, "std");
      }
      else
      {
        v45 = (__int64)sub_21D7440(a1);
      }
      if ( !v45 )
        return nullptr;
      v44 = (__int64)v71;
      if ( *(_BYTE *)(v45 + 8) == 27 )
        goto LABEL_58;
      if ( v71 )
        return nullptr;
      v41 = *(char **)a1;
      v5 = *(char **)(a1 + 8);
      v71 = (_QWORD *)v45;
    }
  }
  if ( *v41 != 69 )
  {
    if ( !a2 )
      goto LABEL_52;
    goto LABEL_51;
  }
  v6 = v71;
  *(_QWORD *)a1 = v41 + 1;
  if ( v6 )
  {
    v47 = *(_QWORD *)(a1 + 304);
    if ( *(_QWORD *)(a1 + 296) != v47 )
    {
      *(_QWORD *)(a1 + 304) = v47 - 8;
      return v6;
    }
  }
  return nullptr;
}
