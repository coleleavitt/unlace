unsigned __int64 __fastcall sub_1D380(
        __int64 a1,
        __m128i *a2,
        const __m128i *a3,
        const __m128i *a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7)
{
  char v7; // r15
  __int32 v11; // eax
  const __m128i *v12; // rcx
  unsigned int v13; // r13d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char v33; // al
  char v34; // al
  char v35; // al
  int v36; // r15d
  unsigned int v37; // r15d
  __m128i *v38; // rsi
  unsigned __int64 v39; // rdx
  __m128i v40; // xmm0
  unsigned __int64 v41; // rax
  char v43; // r8
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __m128i si128; // xmm0
  __int64 v50; // rax
  __int64 v51; // r12
  __m128i v52; // xmm1
  __int64 v53; // rdi
  double v54; // xmm0_8
  __int64 v55; // rdi
  __m128i v56; // xmm1
  unsigned __int64 v57; // r12
  char v58; // cl
  unsigned __int8 default_reftype; // al
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v63; // [rsp+8h] [rbp-180h]
  __m128i v64; // [rsp+10h] [rbp-178h] BYREF
  __int64 v65; // [rsp+20h] [rbp-168h]
  __m128i *v66; // [rsp+28h] [rbp-160h]
  _QWORD v67[4]; // [rsp+30h] [rbp-158h] BYREF
  __int64 v68; // [rsp+50h] [rbp-138h] BYREF
  __m128i v69; // [rsp+58h] [rbp-130h] BYREF
  __m128i v70[2]; // [rsp+70h] [rbp-118h] BYREF
  __int64 v71; // [rsp+90h] [rbp-F8h]
  __int64 v72; // [rsp+98h] [rbp-F0h]
  __int64 selector; // [rsp+A0h] [rbp-E8h]
  __int128 v74; // [rsp+A8h] [rbp-E0h]
  __int128 v75; // [rsp+B8h] [rbp-D0h]
  __int128 v76; // [rsp+C8h] [rbp-C0h]
  __int128 v77; // [rsp+D8h] [rbp-B0h]
  __int128 v78; // [rsp+E8h] [rbp-A0h]
  __int128 v79; // [rsp+F8h] [rbp-90h]
  __int128 v80; // [rsp+108h] [rbp-80h]
  __int128 v81; // [rsp+118h] [rbp-70h]
  unsigned __int64 v82; // [rsp+128h] [rbp-60h]
  __int128 s1; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v84; // [rsp+148h] [rbp-40h]

  v7 = a5;
  v66 = a6;
  v65 = a7;
  v84 = __readfsqword(0x28u);
  qstrncpy(&s1, a3, 17, a4, a5, a6);
  v11 = a3[4].m128i_i32[0];
  v12 = a4;
  v13 = (unsigned __int8)v11;
  if ( (_BYTE)v11 )
  {
    switch ( (unsigned __int8)a3[4].m128i_i32[0] )
    {
      case 1u:
        goto LABEL_95;
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 9u:
      case 0xAu:
      case 0xEu:
        goto LABEL_37;
      case 8u:
        goto LABEL_93;
      default:
        goto LABEL_6;
    }
  }
  if ( (_DWORD)s1 == 1869045599 && WORD2(s1) == 116
    || (_QWORD)s1 == 0x675F687475615F5FLL && *(_DWORD *)((char *)&s1 + 7) == 7630695 )
  {
    v13 = 6;
    v64.m128i_i64[0] = (__int64)"DATA";
  }
  else if ( (_DWORD)s1 == 1702125407 && *(_DWORD *)((char *)&s1 + 3) == 7632997
         || (_QWORD)s1 == 0x65646F6374696E69LL && !BYTE8(s1) )
  {
LABEL_93:
    v64.m128i_i64[0] = (__int64)"CODE";
  }
  else
  {
LABEL_6:
    v64.m128i_i64[0] = (__int64)"CODE";
    if ( (v11 & 0x80000400) == 0 )
    {
      if ( (_DWORD)s1 == 1935826783 && WORD2(s1) == 115 || (_QWORD)s1 == 0x6E6F6D6D6F635F5FLL && !BYTE8(s1) )
      {
LABEL_95:
        v64.m128i_i64[0] = (__int64)"BSS";
      }
      else
      {
        if ( !(*((_QWORD *)&s1 + 1) ^ 0x6874656D5F7473LL | (unsigned __int64)s1 ^ 0x6E695F7461635F5FLL)
          || (_QWORD)s1 == 0x6D5F74736E695F5FLL && DWORD2(s1) == 6845541 )
        {
          goto LABEL_37;
        }
        if ( (_QWORD)s1 == 0x656D5F736C635F5FLL && *(_DWORD *)((char *)&s1 + 7) == 6845541 )
          goto LABEL_37;
        if ( (_DWORD)s1 == 1633967967 && *(_DWORD *)((char *)&s1 + 3) == 6386785 )
          goto LABEL_37;
        if ( (_QWORD)s1 == 0x74736E6F635F5FLL
          || (_QWORD)s1 == 0x6F67657461635F5FLL && *(_DWORD *)((char *)&s1 + 7) == 7959151 )
        {
          goto LABEL_37;
        }
        if ( (_QWORD)s1 == 0x636F746F72705F5FLL && *(_DWORD *)((char *)&s1 + 7) == 7106403 )
          goto LABEL_37;
        if ( !(*((_QWORD *)&s1 + 1) ^ 0x737261765F6563LL | (unsigned __int64)s1 ^ 0x6E6174736E695F5FLL)
          || (_QWORD)s1 == 0x656C75646F6D5F5FLL && *(_QWORD *)((char *)&s1 + 6) == 0x6F666E695F656CLL )
        {
          goto LABEL_37;
        }
        v14 = strcmp((const char *)&s1, "__cfstring");
        v12 = a4;
        v64.m128i_i64[0] = (__int64)"DATA";
        if ( v14 )
        {
          v15 = strcmp((const char *)&s1, "__symbols");
          v12 = a4;
          if ( v15 )
          {
            v16 = strcmp((const char *)&s1, "__class");
            v12 = a4;
            if ( v16 )
            {
              v17 = strcmp((const char *)&s1, "__meta_class");
              v12 = a4;
              if ( v17 )
              {
                v18 = strcmp((const char *)&s1, "__objc_classlist");
                v12 = a4;
                if ( v18 )
                {
                  v19 = strcmp((const char *)&s1, "__objc_nlclslist");
                  v12 = a4;
                  if ( v19 )
                  {
                    v20 = strcmp((const char *)&s1, "__objc_superrefs");
                    v12 = a4;
                    if ( v20 )
                    {
                      v21 = strcmp((const char *)&s1, "__objc_classrefs");
                      v12 = a4;
                      if ( v21 )
                      {
                        v22 = strcmp((const char *)&s1, "__objc_protorefs");
                        v12 = a4;
                        if ( v22 )
                        {
                          v23 = strcmp((const char *)&s1, "__objc_protolist");
                          v12 = a4;
                          if ( v23 )
                          {
                            v24 = strcmp((const char *)&s1, "__objc_catlist");
                            v12 = a4;
                            if ( v24 )
                            {
                              v25 = strcmp((const char *)&s1, "__objc_nlcatlist");
                              v12 = a4;
                              if ( v25 )
                              {
                                v26 = strcmp((const char *)&s1, "__objc_selrefs");
                                v12 = a4;
                                if ( v26 )
                                {
                                  v27 = strcmp((const char *)&s1, "__objc_msgrefs");
                                  v12 = a4;
                                  if ( v27 )
                                  {
                                    v28 = strcmp((const char *)&s1, "__objc_classname");
                                    v12 = a4;
                                    if ( v28 )
                                    {
                                      v29 = strcmp((const char *)&s1, "__objc_imageinfo");
                                      v12 = a4;
                                      if ( v29 )
                                      {
                                        v30 = strcmp((const char *)&s1, "__objc_methname");
                                        v12 = a4;
                                        if ( v30 )
                                        {
                                          v31 = strcmp((const char *)&s1, "__objc_methtype");
                                          v12 = a4;
                                          if ( v31 )
                                          {
                                            v32 = strcmp((const char *)&s1, "__dyld");
                                            v64.m128i_i64[0] = 0;
                                            v12 = a4;
                                            if ( !v32 )
LABEL_37:
                                              v64.m128i_i64[0] = (__int64)"DATA";
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v71 = 0;
  v70[1] = 0;
  v74 = -1;
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v72 = 0;
  selector = 0;
  v82 = 0xFFFFFFFF00000000LL;
  v70[0] = _mm_loadu_si128(v12);
  switch ( a3[3].m128i_i32[1] )
  {
    case 0:
      v33 = 1;
      break;
    case 1:
      v33 = 2;
      break;
    case 2:
      v33 = 5;
      break;
    case 3:
      v33 = 10;
      break;
    case 5:
      v33 = 8;
      break;
    case 6:
      v33 = 9;
      break;
    default:
      v33 = 3;
      break;
  }
  LOBYTE(v72) = v33;
  v34 = *(_BYTE *)(a1 + 13692);
  BYTE1(v72) = 2;
  BYTE3(v72) = v34 + 1;
  v35 = (4 * v7) & 4;
  if ( (v7 & 2) != 0 )
    v35 = (4 * v7) & 4 | 2;
  if ( (v7 & 4) != 0 )
    v35 |= 1u;
  BYTE2(v72) = v35;
  selector = allocate_selector(0);
  v36 = -((a2[22].m128i_i32[3] & 0x50) == 0);
  sub_1CE50(&v68, a2);
  v37 = (v36 & 0xFFFFFFF8) + 42;
  sub_18750(v67, &s1, &v68);
  if ( v68 )
  {
    v69.m128i_i64[0] = 0;
    qfree(v68, (const char *)&s1);
  }
  v38 = (__m128i *)v67[0];
  add_segm_ex(v70, v67[0], v64.m128i_i64[0], v37);
  v39 = v70[0].m128i_i64[0];
  if ( v70[0].m128i_i64[0] < (unsigned __int64)v70[0].m128i_i64[1] )
  {
    v38 = v70;
    sub_132E0(v65, v70);
    v39 = v70[0].m128i_i64[0];
  }
  v40 = _mm_loadu_si128(a3 + 2);
  v41 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & _mm_add_epi64(v40, _mm_srli_si128(v40, 8)).m128i_u64[0];
  v70[0].m128i_i64[1] = v41;
  if ( (_QWORD)s1 == 0x7274736E6F635F5FLL && *(_QWORD *)((char *)&s1 + 6) == 0x726F7463757274LL )
  {
    v43 = 0;
    v13 = 9;
LABEL_67:
    v38 = v66;
    v44 = v41 - v39;
    if ( v44 > (unsigned __int64)v66 )
      v44 = (unsigned __int64)v66;
    v45 = v44 + v39;
    if ( v39 < v44 + v39 )
    {
      v46 = *(_QWORD *)(a1 + 5216);
      v47 = *(_QWORD *)(a1 + 5208);
      if ( *(_QWORD *)(a1 + 5224) < (unsigned __int64)(v46 + 1) )
      {
        v64.m128i_i8[0] = v43;
        v61 = qvector_reserve(a1 + 5208, v47, v46 + 1, 48);
        *(_QWORD *)(a1 + 5208) = v61;
        v47 = v61;
        v43 = v64.m128i_i8[0];
        v46 = *(_QWORD *)(a1 + 5216);
      }
      v48 = v47 + 48 * v46;
      v38 = a2;
      *(_OWORD *)v48 = 0;
      *(_OWORD *)(v48 + 24) = 0;
      si128 = _mm_load_si128(v70);
      *(_QWORD *)(v48 + 16) = 0;
      ++*(_QWORD *)(a1 + 5216);
      *(_DWORD *)(v48 + 40) = v13;
      *(_BYTE *)(v48 + 44) = v43;
      *(__m128i *)v48 = si128;
      v64.m128i_i64[0] = v48;
      sub_1CE50(&v68, a2);
      v50 = v64.m128i_i64[0];
      v51 = v68;
      v68 = 0;
      v52 = _mm_loadu_si128(&v69);
      v69 = 0;
      v53 = *(_QWORD *)(v64.m128i_i64[0] + 16);
      if ( v53 )
      {
        *(_QWORD *)(v64.m128i_i64[0] + 24) = 0;
        v63 = v50;
        v64 = v52;
        v54 = qfree(v53, v38->m128i_i8);
        v55 = v68;
        v56 = _mm_load_si128(&v64);
        *(_QWORD *)(v63 + 16) = v51;
        *(__m128i *)(v63 + 24) = v56;
        if ( v55 )
        {
          v69.m128i_i64[0] = 0;
          qfree(v55, v38->m128i_i8, v54);
        }
      }
      else
      {
        *(_QWORD *)(v64.m128i_i64[0] + 16) = v51;
        *(__m128i *)(v50 + 24) = v52;
      }
      v57 = v70[0].m128i_i64[0];
      if ( v70[0].m128i_i64[0] < v45 )
      {
        v58 = *(_BYTE *)(a1 + 13692);
        do
        {
          if ( v58 )
            create_data(v57, 805306368, 8, -1);
          else
            create_data(v57, 0x20000000, 4, -1);
          default_reftype = get_default_reftype(v57);
          v38 = 0;
          op_offset(v57, 0, default_reftype, -1, 0, 0);
          v58 = *(_BYTE *)(a1 + 13692);
          v60 = (-(__int64)(v58 == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8;
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) - v57 < v60 )
            break;
          v57 += v60;
        }
        while ( v57 < v45 );
      }
    }
    goto LABEL_61;
  }
  if ( (_QWORD)s1 == 0x7572747365645F5FLL && *(_QWORD *)((char *)&s1 + 5) == 0x726F7463757274LL )
  {
    v43 = 0;
    v13 = 10;
    goto LABEL_67;
  }
  if ( v13 == 2 )
  {
    v38 = v70;
    rangeset_t_add(a1 + 5232, v70);
    goto LABEL_61;
  }
  if ( v13 <= 1 )
  {
LABEL_61:
    if ( (_QWORD)s1 == 0x6972747366635F5FLL && *(_DWORD *)((char *)&s1 + 7) == 6778473 )
    {
      v38 = v70;
      rangeset_t_add(a1 + 5272, v70);
    }
    goto LABEL_62;
  }
  if ( v13 > 0xA )
  {
    if ( v13 == 16 )
    {
LABEL_102:
      v43 = 1;
      goto LABEL_67;
    }
    goto LABEL_61;
  }
  if ( v13 > 8 || v13 - 5 <= 2 )
    goto LABEL_102;
  if ( (_QWORD)s1 == 0x6972747366635F5FLL && *(_DWORD *)((char *)&s1 + 7) == 6778473 )
  {
    v38 = v70;
    rangeset_t_add(a1 + 5272, v70);
  }
  if ( v13 == 8 && a2[22].m128i_i8[12] < 0 )
  {
    v38 = v70;
    rangeset_t_add(a1 + 5312, v70);
  }
LABEL_62:
  if ( v67[0] )
  {
    v67[1] = 0;
    qfree(v67[0], v38->m128i_i8);
  }
  return v84 - __readfsqword(0x28u);
}
