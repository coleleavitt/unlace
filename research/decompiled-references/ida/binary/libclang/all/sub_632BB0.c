__int64 __fastcall sub_632BB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 *v10; // r14
  _QWORD *v11; // r15
  int v12; // r12d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rbp
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdi
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // al
  unsigned int v28; // edx
  char v29; // al
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v38; // rax
  int v39; // ebp
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // ebp
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  __m128 v47; // xmm0
  int v48; // eax
  void ***v49; // rbx
  void ***v50; // rbp
  void **v51; // r12
  __int8 v52; // dl
  unsigned __int64 v53; // rbp
  __int64 v54; // rax
  _QWORD *v55; // rcx
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  _QWORD *v58; // r12
  __int8 v59; // dl
  __int64 *v60; // rdi
  __int64 v61; // rsi
  _DWORD *v62; // rax
  _DWORD *v63; // rsi
  __int64 *v64; // rdi
  __int64 v65; // rsi
  _DWORD *v66; // rax
  _DWORD *v67; // rsi
  __m128i v68; // [rsp+0h] [rbp-1F8h]
  _QWORD *v70; // [rsp+20h] [rbp-1D8h]
  char v71; // [rsp+20h] [rbp-1D8h]
  __m128i v72; // [rsp+30h] [rbp-1C8h] BYREF
  __m128i v73; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v74; // [rsp+50h] [rbp-1A8h] BYREF
  int v75; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 v76; // [rsp+60h] [rbp-198h]
  int v77; // [rsp+68h] [rbp-190h]
  __int64 v78; // [rsp+70h] [rbp-188h]
  __int64 v79; // [rsp+78h] [rbp-180h]
  void *ptr[2]; // [rsp+80h] [rbp-178h] BYREF
  _BYTE v81[64]; // [rsp+90h] [rbp-168h] BYREF
  __m128i v82; // [rsp+D0h] [rbp-128h] BYREF
  __m128i v83; // [rsp+E0h] [rbp-118h] BYREF
  __int64 (__fastcall *v84)(int, int, int, int, int, int, __int128, __int128); // [rsp+108h] [rbp-F0h]
  __int64 v85; // [rsp+110h] [rbp-E8h]
  __int64 *v86; // [rsp+118h] [rbp-E0h]
  __int16 v87; // [rsp+120h] [rbp-D8h]
  int v88; // [rsp+124h] [rbp-D4h]
  int v89; // [rsp+128h] [rbp-D0h]
  char v90; // [rsp+12Ch] [rbp-CCh]
  __int128 v91; // [rsp+130h] [rbp-C8h]
  __int64 v92; // [rsp+140h] [rbp-B8h]
  void *v93; // [rsp+150h] [rbp-A8h]
  __int64 v94; // [rsp+158h] [rbp-A0h]
  _BYTE v95[40]; // [rsp+160h] [rbp-98h] BYREF
  void ***v96; // [rsp+188h] [rbp-70h]
  __int64 v97; // [rsp+190h] [rbp-68h]
  _BYTE v98[96]; // [rsp+198h] [rbp-60h] BYREF

  if ( !a1 )
    BUG();
  LODWORD(v10) = 0;
  v11 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 32LL);
  v12 = sub_CAB500(v11, a2);
  v68 = _mm_loadu_si128((const __m128i *)&a7);
  v19 = sub_63A250((_DWORD)v11, a2, v13, v14, v15, v16, v68.m128i_i32[0], v68.m128i_i64[1]);
  if ( v19 )
  {
    v82 = _mm_loadu_si128((const __m128i *)&a7);
    v83 = _mm_loadu_si128((const __m128i *)&a8);
    v78 = a3;
    v22 = v19;
    v77 = sub_63A4A0((_DWORD)v11, a2, v17, v18, v20, v21, v82.m128i_i64[0], v82.m128i_i64[1], v83.m128i_i64[0]);
    v74 = a1;
    v79 = a4;
    v75 = v12;
    ptr[0] = v81;
    ptr[1] = (void *)0x800000000LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
        v27 = *(_BYTE *)(v24 + 28);
        v28 = (v27 & 0x7F) - 19;
        v29 = v27 & 0x7F;
        if ( v28 > 1 )
          break;
        v22 = *(_QWORD *)(v24 + 88);
        if ( !v22 )
          goto LABEL_6;
      }
      if ( v29 != 36 )
        break;
      v38 = *(_QWORD *)(sub_79A2E0(v24 + 72) + 16);
      v24 = v38 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v38 & 4) != 0 )
        v24 = *(_QWORD *)v24;
      if ( !v24 )
        break;
      v22 = v24 - 64;
    }
LABEL_6:
    v76 = v24;
    v10 = &v74;
    sub_632340(a1, (_BYTE *)v24, (__int64)ptr, v23, v25, v26);
    v30 = sub_79AA10(v19, 0);
    if ( v30 )
    {
      v31 = sub_79A2E0(v30);
      sub_639160(&v72, v31, a1, 0, 1, v32);
      LOBYTE(v10) = (unsigned int)clang_visitChildren(
                                    (int)sub_633980,
                                    (int)&v74,
                                    v33,
                                    v34,
                                    v35,
                                    v36,
                                    (__int128)_mm_load_si128(&v72),
                                    (__int128)_mm_load_si128(&v73)) != 0;
LABEL_8:
      if ( ptr[0] != v81 )
        free(ptr[0]);
      return (unsigned int)v10;
    }
    v82.m128i_i8[0] = 0;
    v39 = 0;
    if ( (unsigned int)(v12 + 1) <= 1 )
      goto LABEL_38;
    if ( v12 >= 0 )
    {
      v40 = v11[23];
      v41 = v12;
      v39 = 0;
      v42 = v40 + 24LL * v12;
      if ( *(char *)(v42 + 3) < 0 )
      {
LABEL_21:
        v45 = v40 + 24 * v41;
        goto LABEL_22;
      }
      goto LABEL_19;
    }
    v53 = (unsigned int)(-2 - v12);
    v54 = *(_QWORD *)(v11[32] + 8LL * ((unsigned int)(-2 - v12) >> 6));
    if ( _bittest64(&v54, v53) )
    {
      v55 = (_QWORD *)(v11[26] + 8 * ((unsigned __int64)(int)v53 >> 5));
      if ( *v55 )
      {
        v42 = *v55 + 24LL * ((-2 - (_BYTE)v12) & 0x1F);
        if ( *(char *)(v42 + 3) < 0 )
        {
LABEL_42:
          v39 = 0;
          goto LABEL_43;
        }
        goto LABEL_19;
      }
      v64 = (__int64 *)(v11[28] & 0xFFFFFFFFFFFFFFF8LL);
      v65 = *v64;
      v64[10] += 768;
      v66 = (_DWORD *)((v65 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v64[1] >= (unsigned __int64)(v66 + 192) && v65 )
      {
        *v64 = (__int64)(v66 + 192);
        v59 = 0;
      }
      else
      {
        v70 = v55;
        v66 = (_DWORD *)sub_632560((__int64)v64, 768, 3);
        v59 = v82.m128i_i8[0];
        v55 = v70;
      }
      *v55 = v66;
      v67 = v66 + 192;
      do
      {
        *v66 = 0;
        v66 += 6;
        *((_OWORD *)v66 - 1) = 0;
      }
      while ( v67 != v66 );
      v42 = *v55 + 24LL * ((-2 - (_BYTE)v12) & 0x1F);
    }
    else
    {
      v42 = sub_CA9380(v11, (unsigned int)v53, &v82);
      v59 = v82.m128i_i8[0];
    }
    if ( v59 || !v42 || *(char *)(v42 + 3) < 0 )
    {
      v82.m128i_i8[0] = 0;
      goto LABEL_42;
    }
LABEL_19:
    v43 = *(_DWORD *)v42;
    v44 = sub_CACB30(v11, (unsigned int)v12);
    v82.m128i_i8[0] = 0;
    v39 = v44 + (v43 & 0x7FFFFFFF);
    if ( v12 >= 0 )
    {
      v40 = v11[23];
      v41 = v12;
      goto LABEL_21;
    }
LABEL_43:
    v56 = (unsigned int)(-2 - v12);
    v57 = *(_QWORD *)(v11[32] + 8LL * ((unsigned int)(-2 - v12) >> 6));
    if ( _bittest64(&v57, v56) )
    {
      v58 = (_QWORD *)(v11[26] + 8 * ((unsigned __int64)(int)v56 >> 5));
      if ( *v58 )
      {
        v45 = *v58 + 24 * (v56 & 0x1F);
LABEL_22:
        if ( *(char *)(v45 + 3) >= 0 )
        {
          v46 = *(_DWORD *)v45 & 0x7FFFFFFF;
LABEL_24:
          v88 = v46;
          v47 = _mm_loadh_ps((const double *)(a1 + 8));
          v93 = v95;
          v82 = (__m128i)v47;
          v84 = sub_633980;
          v86 = &v74;
          v89 = v39;
          v85 = 0;
          v87 = 1;
          v90 = 1;
          v92 = 0;
          v94 = 0x500000000LL;
          v96 = (void ***)v98;
          v97 = 0x500000000LL;
          v83.m128i_i32[0] = 71;
          v91 = 0;
          memset(&v83.m128i_u64[1], 0, 32);
          v48 = sub_61ED80((__int64)&v82);
          v49 = v96;
          LODWORD(v10) = v48;
          v50 = &v96[(unsigned int)v97];
          if ( v96 != v50 )
          {
            do
            {
              v51 = *v49;
              if ( *v49 )
              {
                if ( *v51 != v51 + 2 )
                  free(*v51);
                operator delete(v51, 0x290u);
              }
              ++v49;
            }
            while ( v50 != v49 );
            v50 = v96;
          }
          if ( v50 != (void ***)v98 )
            free(v50);
          if ( v93 != v95 )
            free(v93);
          goto LABEL_8;
        }
LABEL_38:
        v46 = 0;
        goto LABEL_24;
      }
      v60 = (__int64 *)(v11[28] & 0xFFFFFFFFFFFFFFF8LL);
      v61 = *v60;
      v60[10] += 768;
      v62 = (_DWORD *)((v61 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v60[1] >= (unsigned __int64)(v62 + 192) && v61 )
      {
        *v60 = (__int64)(v62 + 192);
        v52 = 0;
      }
      else
      {
        v71 = v56;
        v62 = (_DWORD *)sub_632560((__int64)v60, 768, 3);
        LOBYTE(v56) = v71;
        v52 = v82.m128i_i8[0];
      }
      *v58 = v62;
      v63 = v62 + 192;
      do
      {
        *v62 = 0;
        v62 += 6;
        *((_OWORD *)v62 - 1) = 0;
      }
      while ( v62 != v63 );
      v45 = *v58 + 24 * (v56 & 0x1F);
    }
    else
    {
      v45 = sub_CA9380(v11, (unsigned int)v56, &v82);
      v52 = v82.m128i_i8[0];
    }
    if ( v52 || !v45 )
      goto LABEL_38;
    goto LABEL_22;
  }
  return (unsigned int)v10;
}

