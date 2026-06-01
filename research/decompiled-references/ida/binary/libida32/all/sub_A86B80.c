unsigned __int64 __fastcall sub_A86B80(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        char a7)
{
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  bool v19; // zf
  __int64 v20; // rdx
  _BOOL8 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  bool v29; // bp
  unsigned __int16 v30; // si
  unsigned int v31; // eax
  unsigned __int64 result; // rax
  int v33; // ecx
  int v34; // edx
  int v35; // r8d
  __int64 v36; // r8
  __int16 v37; // si
  __int64 v38; // rcx
  _DWORD *v39; // rdi
  unsigned __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  bool v50; // al
  unsigned __int64 v51; // rsi
  unsigned __int64 *v52; // r15
  unsigned __int64 v53; // rax
  _QWORD *v54; // r14
  _QWORD *v55; // rdx
  __int64 v56; // rax
  bool v57; // r10
  __int16 v58; // ax
  bool v59; // si
  __int64 v60; // r15
  bool v61; // di
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  void *v64; // rax
  unsigned int v65; // [rsp+8h] [rbp-270h]
  char v66; // [rsp+8h] [rbp-270h]
  __int64 v67; // [rsp+8h] [rbp-270h]
  unsigned __int64 v68; // [rsp+8h] [rbp-270h]
  unsigned __int64 v69; // [rsp+8h] [rbp-270h]
  unsigned __int64 v70; // [rsp+8h] [rbp-270h]
  __int64 v71; // [rsp+10h] [rbp-268h]
  __int64 v72; // [rsp+10h] [rbp-268h]
  unsigned __int8 v73; // [rsp+24h] [rbp-254h]
  bool v74; // [rsp+30h] [rbp-248h]
  unsigned int v75; // [rsp+38h] [rbp-240h]
  bool v77; // [rsp+4Bh] [rbp-22Dh]
  bool v78; // [rsp+4Bh] [rbp-22Dh]
  char v79; // [rsp+54h] [rbp-224h] BYREF
  char v80; // [rsp+55h] [rbp-223h] BYREF
  __int16 v81; // [rsp+56h] [rbp-222h] BYREF
  __int64 v82; // [rsp+58h] [rbp-220h] BYREF
  unsigned __int64 v83; // [rsp+60h] [rbp-218h] BYREF
  unsigned __int64 v84; // [rsp+68h] [rbp-210h] BYREF
  void *v85; // [rsp+70h] [rbp-208h] BYREF
  size_t n; // [rsp+78h] [rbp-200h]
  void *v87; // [rsp+80h] [rbp-1F8h]
  __int64 v88; // [rsp+88h] [rbp-1F0h]
  void *v89; // [rsp+90h] [rbp-1E8h] BYREF
  size_t v90; // [rsp+98h] [rbp-1E0h]
  __int64 v91; // [rsp+A0h] [rbp-1D8h]
  __int64 v92; // [rsp+A8h] [rbp-1D0h]
  void *ptr; // [rsp+B0h] [rbp-1C8h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-1C0h]
  __int64 v95; // [rsp+C8h] [rbp-1B0h] BYREF
  void *v96; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v97; // [rsp+D8h] [rbp-1A0h]
  _BYTE v98[80]; // [rsp+E0h] [rbp-198h] BYREF
  __m128 v99; // [rsp+130h] [rbp-148h] BYREF
  __int64 v100; // [rsp+140h] [rbp-138h]
  __int64 v101; // [rsp+148h] [rbp-130h]
  void *v102; // [rsp+178h] [rbp-100h]
  __int128 v103; // [rsp+188h] [rbp-F0h]
  __int64 v104; // [rsp+198h] [rbp-E0h]
  __int64 v105; // [rsp+1A0h] [rbp-D8h]
  _OWORD v106[4]; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+1F0h] [rbp-88h]
  unsigned int v108; // [rsp+1F8h] [rbp-80h]
  char v109; // [rsp+230h] [rbp-48h]

  v73 = a4;
  v11 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 25 > 1 )
  {
    v65 = a4;
    v12 = sub_F3F310(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
    a4 = v65;
    v11 = v12;
  }
  v13 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(unsigned __int8 *)(v13 + 16);
  if ( (unsigned int)(v14 - 25) > 1 )
  {
    v66 = a4;
    v15 = sub_F3F310(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, v14, a4);
    LOBYTE(a4) = v66;
    LOBYTE(v14) = *(_BYTE *)(v15 + 16);
    v13 = v15;
  }
  v82 = 0;
  v16 = 0;
  v17 = 0;
  v18 = *(_QWORD *)(v11 + 24);
  if ( *(_BYTE *)(v11 + 16) == 26 )
    v17 = v11;
  v19 = (_BYTE)v14 == 26;
  v20 = *(_QWORD *)(v13 + 24);
  if ( v19 )
    v16 = v13;
  v67 = v17;
  v71 = v16;
  if ( (_BYTE)a4 )
  {
    v21 = 1;
    if ( !a5 )
    {
      v21 = 0;
      if ( !(*(_QWORD *)(v13 + 24) & 7LL | (*(__int64 *)(v13 + 24) >> 3) & 1)
        && !(*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
           | (*(__int64 *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1) )
      {
        v21 = 1;
        if ( !(*(_QWORD *)(v11 + 24) & 7LL | (*(__int64 *)(v11 + 24) >> 3) & 1) )
          v21 = (*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
               | (*(__int64 *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1) != 0;
      }
    }
    v82 = sub_A85470(a1, v18, v20, 1, v21, 1u);
  }
  else
  {
    v82 = sub_A85470(a1, v18, v20, 0, a5, 0);
  }
  LOBYTE(v22) = v82;
  v23 = v82 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v82 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( a5 )
  {
    v22 = sub_6B4E70(&v82);
    v82 = v22;
    v23 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v24 = *(_QWORD *)&byte_8[*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL];
  v25 = v24 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v24 | (unsigned __int8)*(_QWORD *)(v11 + 24)) & 7;
  v26 = *(_QWORD *)&byte_8[*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFF0LL];
  v27 = v26 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v26 | (unsigned __int8)*(_QWORD *)(v13 + 24)) & 7;
  if ( a5 )
  {
    v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
    v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
  }
  v28 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)(v23 + 8) | (unsigned __int8)v22) & 7;
  v77 = v28 == v25;
  v19 = v28 == v27;
  v31 = *(unsigned __int16 *)(v13 + 20);
  v29 = v19;
  v30 = *(_WORD *)(v11 + 20) >> 2;
  LOWORD(v31) = (unsigned __int16)v31 >> 2;
  if ( (v30 & 0x3F) != (v31 & 0x3F) )
    return 0;
  v33 = (v31 >> 9) & 7;
  v34 = ((int)v30 >> 9) & 7;
  if ( (v33 != 0) != (v34 != 0) )
    return 0;
  v35 = (v31 >> 9) & 7;
  if ( v34 )
  {
    --v34;
    if ( !v33 )
      goto LABEL_46;
  }
  else if ( !v33 )
  {
    goto LABEL_28;
  }
  v35 = v33 - 1;
LABEL_46:
  if ( v35 != v34 )
    return 0;
LABEL_28:
  if ( (unsigned __int8)v31 >> 7 != (unsigned __int8)v30 >> 7
    || (BYTE1(v31) & 1) != (HIBYTE(v30) & 1)
    || ((v31 & 0x1000) != 0) != ((v30 & 0x1000) != 0) )
  {
    return 0;
  }
  v36 = v31;
  LOWORD(v36) = v31 & 0x40;
  if ( !a7 )
  {
    v57 = v77;
    v58 = ((unsigned __int16)(v30 | v31) >> 6) & 1;
    if ( (((*(_WORD *)(v11 + 20) >> 2) & 0x40) != 0) != (_BYTE)v58 )
      v57 = 0;
    v77 = v57;
    if ( (_BYTE)v58 != ((_WORD)v36 != 0) )
      v29 = 0;
    if ( !(_BYTE)v58 )
      goto LABEL_35;
    goto LABEL_77;
  }
  if ( (v30 & 0x40) == 0 )
  {
    if ( (v31 & 0x40) != 0 )
      v29 = 0;
    goto LABEL_35;
  }
  if ( (v31 & 0x40) != 0 )
  {
LABEL_77:
    v37 = v30 | 0x40;
    goto LABEL_36;
  }
  v77 = 0;
LABEL_35:
  v37 = v30 & 0x3FBF;
LABEL_36:
  v81 = v37;
  v38 = 34;
  v39 = v106;
  while ( v38 )
  {
    *v39++ = 0;
    --v38;
  }
  v74 = v71 != 0 && v67 != 0;
  if ( v74 )
  {
    if ( *(_WORD *)(v71 + 22) == *(_WORD *)(v67 + 22) )
    {
      v40 = *(_QWORD *)(v71 + 16);
      v41 = v40 >> 24;
      if ( BYTE3(v40) >> 7 == (unsigned __int8)BYTE3(*(_QWORD *)(v67 + 16)) >> 7 )
      {
        LOBYTE(v41) = BYTE3(v40) >> 7;
        v42 = sub_A39EA0(v71, v40, v41, 0, v36);
        if ( sub_A39EA0(v67, v40, v43, v44, v45) == v42 )
        {
          sub_A3A020(&v85, v67);
          sub_A3A020(&v89, v71);
          if ( !(unsigned __int8)sub_A39E00((__int64)&v85, (__int64)&v89) )
          {
            if ( a7 )
            {
              sub_F3B6A0(
                (unsigned int)&v99,
                (unsigned int)&v89,
                v46,
                v47,
                v48,
                v49,
                (__int64)v85,
                n,
                (__int64)v87,
                v88,
                (__int64)v89,
                v90,
                v91,
                v92);
              sub_A62620((__int64)v106, (__int64)&v99);
              sub_A40220((__int64)&v99);
            }
            else
            {
              v97 = 0x100000000LL;
              v96 = v98;
              sub_F3B9D0((int)&v99, (int)&v96, v46, v47, v48, v49, v85, n, v87, v88, v89, v90, v91, v92);
              sub_A62620((__int64)v106, (__int64)&v99);
              sub_A40220((__int64)&v99);
              if ( v96 != v98 )
                free(v96);
            }
            v99 = (__m128)v106[0];
            v100 = v107;
            v101 = v108;
            v19 = (unsigned __int8)sub_A39E00((__int64)&v99, (__int64)&v85) == 0;
            v50 = v77;
            if ( v19 )
              v50 = 0;
            v77 = v50;
            if ( !(unsigned __int8)sub_A39E00((__int64)&v99, (__int64)&v89) )
              v29 = 0;
          }
          ptr = &v95;
          si128 = _mm_load_si128((const __m128i *)&xmmword_2383D40);
          if ( (unsigned __int8)sub_A404A0(a1, v67, v71, &v79, &v80, (__int64)&ptr) )
          {
            v59 = v77;
            if ( !v79 )
              v59 = 0;
            if ( !v80 )
              v29 = 0;
            v60 = 0;
            v96 = v98;
            v78 = v59;
            v97 = 0xA00000000LL;
            v75 = *(unsigned __int16 *)(v67 + 22);
            while ( v75 > (unsigned int)v60 )
            {
              v99.m128_u64[0] = *(_QWORD *)(v67 + 8 * v60 + 48);
              v83 = sub_6B4E70(&v99);
              v99.m128_u64[0] = *(_QWORD *)(v71 + 8 * v60 + 48);
              v84 = sub_6B4E70(&v99);
              v63 = sub_A86B00(a1, v83, v84, v73, a5);
              v99.m128_u64[0] = v63;
              if ( (v63 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
              {
                result = 0;
                goto LABEL_110;
              }
              if ( a5 )
              {
                v99.m128_u64[0] = sub_6B4E70(&v99);
                sub_A46760((__int64)&v96, v99.m128_i64[0]);
                v83 = sub_6B4E70(&v83);
                v84 = sub_6B4E70(&v84);
              }
              else
              {
                sub_A46760((__int64)&v96, v63);
              }
              v61 = v78;
              v62 = *(_QWORD *)&byte_8[v99.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                  | ((unsigned __int8)*(_QWORD *)&byte_8[v99.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL] | v99.m128_i8[0]) & 7;
              if ( v62 != (*(_QWORD *)&byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                         | ((unsigned __int8)*(_QWORD *)&byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v83) & 7) )
                v61 = 0;
              v78 = v61;
              if ( v62 != (*(_QWORD *)&byte_8[v84 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                         | ((unsigned __int8)*(_QWORD *)&byte_8[v84 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v84) & 7) )
                v29 = 0;
              ++v60;
            }
            result = a2;
            if ( !v78 )
            {
              if ( v29 )
              {
                result = a3;
              }
              else
              {
                sub_A3A3D0(&v99, v67);
                v99.m128_i16[0] = v81;
                v64 = nullptr;
                if ( si128.m128i_i64[0] )
                  v64 = ptr;
                v102 = v64;
                if ( v109 )
                {
                  v103 = v106[0];
                  v104 = v107;
                  v105 = v108;
                }
                result = sub_A4F8D0(a1, v82, (__int64 *)v96, (unsigned int)v97, (const __m128i *)&v99, 0);
              }
            }
LABEL_110:
            if ( v96 != v98 )
            {
              v70 = result;
              free(v96);
              result = v70;
            }
          }
          else
          {
            result = 0;
          }
          if ( ptr != &v95 )
          {
            v69 = result;
            free(ptr);
            result = v69;
          }
          goto LABEL_42;
        }
      }
    }
    goto LABEL_41;
  }
  if ( v67 )
  {
    v29 = 0;
    v74 = v77;
  }
  else
  {
    if ( !v71 )
    {
      result = a2;
      if ( v77 )
        goto LABEL_42;
      if ( v29 )
        goto LABEL_85;
      result = sub_A4D8D0(a1, v82, (unsigned __int16 *)&v81);
      goto LABEL_42;
    }
    v67 = v71;
  }
  if ( *(char *)(v67 + 19) < 0 )
  {
LABEL_41:
    result = 0;
    goto LABEL_42;
  }
  v51 = v67;
  if ( *(_WORD *)(v67 + 22) )
  {
    v52 = (unsigned __int64 *)(v67 + 48);
    v72 = v67 + 8LL * ((unsigned int)*(unsigned __int16 *)(v67 + 22) - 1) + 56;
    do
    {
      v53 = *v52;
      v54 = (_QWORD *)(*v52 & 0xFFFFFFFFFFFFFFF0LL);
      v55 = (_QWORD *)(*(_QWORD *)(*v54 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v55 + 16LL) == 47 )
      {
        v56 = sub_F3D1D0(*v55, v51, v55, v38, v36);
        v53 = sub_6D3020(v56);
        v54 = (_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v53 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_41;
      }
      v51 = v53;
      if ( sub_A3F0D0(a1, v53, (__int64)v55, v38, v36)
        || (*(_QWORD *)(v54[1] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(a1 + 18800) )
      {
        goto LABEL_41;
      }
      ++v52;
    }
    while ( (unsigned __int64 *)v72 != v52 );
  }
  result = a2;
  if ( !v74 )
  {
    if ( !v29 )
    {
      sub_A3A3D0(&v99, v67);
      v99.m128_i16[0] = v81;
      if ( v109 )
      {
        v103 = v106[0];
        v104 = v107;
        v105 = v108;
      }
      result = sub_A4F8D0(a1, v82, (__int64 *)(v67 + 48), *(unsigned __int16 *)(v67 + 22), (const __m128i *)&v99, 0);
      goto LABEL_42;
    }
LABEL_85:
    result = a3;
  }
LABEL_42:
  if ( v109 )
  {
    v68 = result;
    sub_A40220((__int64)v106);
    return v68;
  }
  return result;
}

