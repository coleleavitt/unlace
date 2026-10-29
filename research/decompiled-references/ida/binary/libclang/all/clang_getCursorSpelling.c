__int64 __fastcall clang_getCursorSpelling(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        const __m128i a8)
{
  unsigned int v8; // ebx
  unsigned int v9; // r12d
  __m128i v10; // xmm0
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __m128i v21; // xmm0
  unsigned __int16 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  void *v29; // rcx
  size_t v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  _WORD *v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 **v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbx
  __m128i v51; // xmm0
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // rdx
  unsigned __int64 v58; // rdx
  _WORD *v59; // rax
  __int64 v60; // rdi
  char v61; // dl
  int v62; // eax
  bool v63; // cf
  unsigned int v64; // edx
  void *v65; // rdi
  size_t v66; // rdx
  __m128i v67; // [rsp+0h] [rbp-1B8h]
  __m128i v68; // [rsp+0h] [rbp-1B8h]
  __m128i v69; // [rsp+0h] [rbp-1B8h]
  __m128i v70; // [rsp+0h] [rbp-1B8h]
  __m128i v71; // [rsp+0h] [rbp-1B8h]
  __m128i v72; // [rsp+0h] [rbp-1B8h]
  __m128i v73; // [rsp+0h] [rbp-1B8h]
  __m128i v74; // [rsp+0h] [rbp-1B8h]
  __m128i v75; // [rsp+0h] [rbp-1B8h]
  __m128i v76; // [rsp+0h] [rbp-1B8h]
  __m128i v77; // [rsp+0h] [rbp-1B8h]
  __m128i v78; // [rsp+0h] [rbp-1B8h]
  __m128i v79; // [rsp+0h] [rbp-1B8h]
  __m128i v80; // [rsp+0h] [rbp-1B8h]
  __m128i v81; // [rsp+0h] [rbp-1B8h]
  __m128i v82; // [rsp+0h] [rbp-1B8h]
  __m128i v83; // [rsp+0h] [rbp-1B8h]
  __m128i v84; // [rsp+0h] [rbp-1B8h]
  __m128i v85; // [rsp+0h] [rbp-1B8h]
  __m128i v86; // [rsp+0h] [rbp-1B8h]
  __m128i si128; // [rsp+0h] [rbp-1B8h]
  __m128i v88; // [rsp+0h] [rbp-1B8h]
  __m128i v89; // [rsp+20h] [rbp-198h] BYREF
  __int64 *v90; // [rsp+30h] [rbp-188h] BYREF
  int v91; // [rsp+38h] [rbp-180h]
  __int128 v92; // [rsp+40h] [rbp-178h]
  __int64 v93; // [rsp+50h] [rbp-168h]
  char v94; // [rsp+58h] [rbp-160h]
  int v95; // [rsp+5Ch] [rbp-15Ch]
  _BYTE *v96; // [rsp+60h] [rbp-158h]
  _BYTE ptr[24]; // [rsp+70h] [rbp-148h] BYREF
  _QWORD v98[38]; // [rsp+88h] [rbp-130h] BYREF

  v8 = a7;
  v9 = DWORD1(a7);
  v10 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
  v11 = a8.m128i_i64[1];
  if ( (_DWORD)a7 == 407 )
    goto LABEL_25;
  if ( (unsigned int)a7 > 0x197 )
  {
    if ( (_DWORD)a7 != 501 )
    {
      if ( (unsigned int)a7 > 0x1F5 )
      {
        if ( (_DWORD)a7 != 503 )
        {
          if ( (unsigned int)a7 <= 0x1F7 )
          {
            *(_DWORD *)&ptr[4] = DWORD1(a7);
            *(__m128i *)&ptr[8] = v10;
            *(_DWORD *)ptr = 502;
            v98[0] = a8.m128i_i64[1];
            v12 = sub_63A030(ptr, a2, a3, a4, a5, a6);
            return sub_6904A0(*(_QWORD *)(v12 + 16) + 16LL);
          }
          if ( (unsigned int)(a7 - 600) > 4 )
            return sub_690460(*(double *)v10.m128i_i64);
          goto LABEL_71;
        }
        v69 = _mm_loadu_si128((const __m128i *)&a7);
        v28 = sub_63A110(a1, a2, a3, a4, a5, a6, v69.m128i_i32[0], v69.m128i_i64[1]);
        v29 = *(void **)(v28 + 16);
        v30 = *(_QWORD *)(v28 + 24);
        return sub_6905C0(v29, v30);
      }
      if ( (_DWORD)a7 == 408 )
        return sub_6904A0("packed");
      if ( (_DWORD)a7 == 417 )
      {
        v71 = _mm_loadu_si128((const __m128i *)&a7);
        v32 = *(_DWORD *)(sub_63A2C0(
                            a1,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6,
                            v71.m128i_i32[0],
                            v71.m128i_i32[2],
                            _mm_loadu_si128(&a8).m128i_i64[0])
                        + 36);
        if ( v32 == 1 )
          return sub_6904A0("hidden");
        if ( v32 == 2 )
          return sub_6904A0("protected");
        return sub_6904A0("default");
      }
      return sub_690460(*(double *)v10.m128i_i64);
    }
    v74 = _mm_loadu_si128((const __m128i *)&a7);
    v36 = *(_QWORD *)(sub_639FD0(a1, a2, a3, a4, a5, a6, v74.m128i_i32[0], v74.m128i_i64[1]) + 16);
    return sub_6904A0(*(_QWORD *)(v36 + 16) + 16LL);
  }
  if ( (unsigned int)a7 > 0x14B )
  {
    if ( (_DWORD)a7 == 350 )
    {
      v73 = _mm_loadu_si128((const __m128i *)&a7);
      v34 = _mm_loadu_si128(&a8);
      v35 = sub_63A300(a1, a2, a3, a4, a5, a6, v73.m128i_i32[0], v73.m128i_i32[2], v34.m128i_i32[0], v34.m128i_i64[1]);
      return clang_getTranslationUnitSpelling(v35);
    }
    if ( (_DWORD)a7 != 406 )
      return sub_690460(*(double *)v10.m128i_i64);
LABEL_25:
    v70 = _mm_loadu_si128((const __m128i *)&a7);
    v31 = sub_63A2C0(a1, a2, a3, a4, a5, a6, v70.m128i_i32[0], v70.m128i_i32[2], _mm_loadu_si128(&a8).m128i_i64[0]);
    v29 = *(void **)(v31 + 40);
    v30 = *(unsigned int *)(v31 + 36);
    return sub_6905C0(v29, v30);
  }
  if ( (unsigned int)a7 > 0xC7 )
  {
    v72 = _mm_loadu_si128((const __m128i *)&a7);
    v10.m128i_i64[0] = _mm_loadu_si128(&a8).m128i_u64[0];
    v33 = (_WORD *)sub_63A2A0(a1, a2, a3, a4, a5, a6, v72.m128i_i32[0], v72.m128i_i32[2], v10.m128i_i64[0]);
    if ( v33 && (*v33 & 0x1FF) == 2 )
    {
      v37 = sub_AC9060(v33);
      return sub_6904A0(v37);
    }
    return sub_690460(*(double *)v10.m128i_i64);
  }
  if ( (unsigned int)a7 <= 0x32 )
  {
    if ( (unsigned int)a7 > 0x27 )
    {
      switch ( (int)a7 )
      {
        case ')':
          v85 = _mm_loadu_si128((const __m128i *)&a7);
          v47 = sub_639C50(
                  a1,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  v85.m128i_i32[0],
                  v85.m128i_i64[1],
                  _mm_loadu_si128(&a8).m128i_u32[0]);
          goto LABEL_63;
        case '*':
          v82 = _mm_loadu_si128((const __m128i *)&a7);
          v47 = sub_639CC0(
                  a1,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  v82.m128i_i32[0],
                  v82.m128i_i64[1],
                  _mm_loadu_si128(&a8).m128i_u32[0]);
          goto LABEL_63;
        case '+':
          v83 = _mm_loadu_si128((const __m128i *)&a7);
          v49 = sub_639D10(
                  a1,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  v83.m128i_i32[0],
                  v83.m128i_i64[1],
                  _mm_loadu_si128(&a8).m128i_u32[0]);
          LODWORD(a7) = 43;
          v50 = v49;
          v84 = _mm_loadu_si128((const __m128i *)&a7);
          v51 = _mm_loadu_si128(&a8);
          v56 = sub_63A2D0(
                  a1,
                  a2,
                  v52,
                  v53,
                  v54,
                  v55,
                  v84.m128i_i32[0],
                  v84.m128i_i32[2],
                  v51.m128i_i32[0],
                  v51.m128i_i64[1]);
          v57 = *(_QWORD *)(v50 + 48);
          if ( v57 )
            v58 = v57 & 0xFFFFFFFFFFFFFFF0LL;
          else
            v58 = sub_6E8D60(v56, v50);
          v90 = (__int64 *)v58;
          sub_B2ACF0(ptr, &v90);
          goto LABEL_52;
        case ',':
          v76 = _mm_loadu_si128((const __m128i *)&a7);
          v42 = **(_QWORD **)(sub_639EB0(a1, a2, a3, a4, a5, a6, v76.m128i_i32[0], v76.m128i_i64[1]) + 16);
          v43 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL);
          v44 = *(_QWORD *)(v43 + 8);
          if ( (v44 & 7) != 0 || (v44 & 8) != 0 )
            v43 = sub_B0CF30(v42, a2);
          v90 = (__int64 *)(v43 & 0xFFFFFFFFFFFFFFF0LL);
          sub_B2ACF0(ptr, &v90);
          goto LABEL_52;
        case '-':
          v80 = _mm_loadu_si128((const __m128i *)&a7);
          v41 = (__int64 **)(sub_639D60(
                               a1,
                               a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               v80.m128i_i32[0],
                               v80.m128i_i64[1],
                               _mm_loadu_si128(&a8).m128i_u32[0])
                           + 40);
          goto LABEL_51;
        case '.':
          v79 = _mm_loadu_si128((const __m128i *)&a7);
          v41 = (__int64 **)(sub_639DB0(
                               a1,
                               a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               v79.m128i_i32[0],
                               v79.m128i_i64[1],
                               _mm_loadu_si128(&a8).m128i_u32[0])
                           + 40);
          goto LABEL_51;
        case '/':
          v78 = _mm_loadu_si128((const __m128i *)&a7);
          v41 = (__int64 **)(sub_639E50(
                               a1,
                               a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               v78.m128i_i32[0],
                               v78.m128i_i64[1],
                               _mm_loadu_si128(&a8).m128i_u32[0])
                           + 40);
          goto LABEL_51;
        case '0':
          v77 = _mm_loadu_si128((const __m128i *)&a7);
          v45 = sub_63A140(
                  a1,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  v77.m128i_i32[0],
                  v77.m128i_i64[1],
                  _mm_loadu_si128(&a8).m128i_u32[0]);
          v46 = sub_AC9060(v45);
          return sub_6904A0(v46);
        case '1':
          v75 = _mm_loadu_si128((const __m128i *)&a7);
          v10.m128i_i64[0] = _mm_loadu_si128(&a8).m128i_u64[0];
          v38 = sub_63A220(a1, a2, a3, a4, a5, a6, v75.m128i_i32[0], v75.m128i_i64[1], v10.m128i_i32[0]);
          v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v38 )
            goto LABEL_49;
          v40 = v38 & 6;
          if ( v40 == 2 )
          {
            if ( v39 )
            {
              if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 16 > 0x3E )
                return sub_690460(*(double *)v10.m128i_i64);
              v41 = (__int64 **)(v39 + 40);
LABEL_51:
              sub_791DD0(ptr, v41);
LABEL_52:
              v13 = sub_6905C0(*(void **)ptr, *(size_t *)&ptr[8]);
              std::string::_M_dispose();
              return v13;
            }
          }
          else if ( !v40 && v39 )
          {
            v41 = &v90;
            v90 = *(__int64 **)(v39 + 16);
            goto LABEL_51;
          }
LABEL_49:
          if ( !(*(_WORD *)(v39 + 2) >> 1) )
            return sub_690460(*(double *)v10.m128i_i64);
          v41 = (__int64 **)(*(_QWORD *)(v39 + 8) + 40LL);
          goto LABEL_51;
        case '2':
          v81 = _mm_loadu_si128((const __m128i *)&a7);
          v41 = (__int64 **)(sub_639E00(
                               a1,
                               a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               v81.m128i_i32[0],
                               v81.m128i_i64[1],
                               _mm_loadu_si128(&a8).m128i_u32[0])
                           + 40);
          goto LABEL_51;
        default:
          LODWORD(a7) = 40;
          v88 = _mm_loadu_si128((const __m128i *)&a7);
          v47 = sub_639C00(
                  a1,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  v88.m128i_i32[0],
                  v88.m128i_i64[1],
                  _mm_loadu_si128(&a8).m128i_u32[0]);
LABEL_63:
          v48 = *(_QWORD *)(v47 + 40);
          v36 = v48 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v48 & 7) != 0 )
            v36 = 0;
          return sub_6904A0(*(_QWORD *)(v36 + 16) + 16LL);
      }
    }
    if ( (unsigned int)(a7 - 1) > 0x26 )
      return sub_690460(*(double *)v10.m128i_i64);
LABEL_71:
    v86 = _mm_loadu_si128((const __m128i *)&a7);
    v25 = sub_63A250(a1, a2, a3, a4, a5, a6, v86.m128i_i32[0], v86.m128i_i64[1]);
    return sub_5FB4A0(v25, a2, v23, v24, v26, v27);
  }
  if ( (unsigned int)(a7 - 100) > 0x38 )
    return sub_690460(*(double *)v10.m128i_i64);
  v89 = v10;
  v67 = _mm_loadu_si128((const __m128i *)&a7);
  v15 = sub_63A260(a1, a2, a3, a4, a5, a6, v67.m128i_i32[0], v67.m128i_i32[2], _mm_loadu_si128(&a8).m128i_i64[0]);
  v20 = v15;
  if ( v8 == 109 || (v21 = _mm_load_si128(&v89), v8 == 137) )
  {
    if ( (*(_WORD *)v15 & 0x1FF) == 0x1E )
      v20 = *(_QWORD *)(v15 + 16);
    v96 = ptr;
    v90 = (__int64 *)&off_49DA340;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
    v92 = 0;
    *(_QWORD *)ptr = v98;
    v91 = 2;
    v94 = 0;
    v95 = 1;
    v93 = 0;
    sub_2623850(&v90, 0, 0, 0, v18, v19);
    sub_8098A0(v20, &v90);
    v13 = sub_6905C0(*(void **)v96, *((_QWORD *)v96 + 1));
    v90 = &qword_4A6EA70[2];
    sub_2623770(&v90);
    if ( *(_QWORD **)ptr != v98 )
      free(*(void **)ptr);
    return v13;
  }
  if ( v8 - 114 > 1 )
  {
    v68 = _mm_loadu_si128((const __m128i *)&a7);
    v10.m128i_i64[0] = _mm_loadu_si128(&a8).m128i_u64[0];
    v22 = (unsigned __int16 *)sub_63A260(
                                a1,
                                a2,
                                v16,
                                v17,
                                v18,
                                v19,
                                v68.m128i_i32[0],
                                v68.m128i_i32[2],
                                v10.m128i_i64[0]);
    v25 = sub_5F7F90(v22);
    if ( v25 )
      return sub_5FB4A0(v25, a2, v23, v24, v26, v27);
    return sub_690460(*(double *)v10.m128i_i64);
  }
  *(_QWORD *)ptr = __PAIR64__(v9, v8);
  *(__m128i *)&ptr[8] = v21;
  v98[0] = v11;
  si128 = _mm_load_si128((const __m128i *)ptr);
  v59 = (_WORD *)sub_63A260(
                   a1,
                   a2,
                   v16,
                   v17,
                   v18,
                   v19,
                   si128.m128i_i32[0],
                   si128.m128i_i32[2],
                   _mm_load_si128((const __m128i *)&ptr[16]).m128i_i64[0]);
  v60 = 0xFFFFFFFFLL;
  if ( ((*v59 + 393) & 0x1FFu) <= 1 )
  {
    v61 = v59[1] >> 3;
    v62 = v61 & 0x3F;
    v63 = (v61 & 0x3Fu) < 0x21;
    v64 = -1;
    if ( v63 )
      v64 = v62;
    v60 = v64;
  }
  v65 = (void *)sub_80CE10(v60);
  return sub_6905C0(v65, v66);
}

