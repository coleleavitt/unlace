__int64 __fastcall asctoreal(char **a1, _OWORD *a2)
{
  _QWORD *v2; // rbx
  _OWORD *v3; // rbp
  __int64 v4; // r12
  unsigned int v5; // edi
  int v6; // r9d
  unsigned __int8 v7; // al
  _OWORD *v8; // r8
  int v9; // esi
  int v10; // r11d
  int v11; // r14d
  int v12; // r15d
  char *v13; // r12
  int v14; // ebp
  __int64 v15; // r15
  int v16; // edx
  __m128i v17; // xmm0
  __m128i *v18; // rsi
  int v19; // ecx
  __int16 v20; // ax
  int v21; // ecx
  __m128i *v22; // rsi
  __int16 v23; // ax
  unsigned int v24; // r8d
  unsigned __int16 *v25; // rsi
  __m128i *v26; // rcx
  int v27; // eax
  int v28; // r10d
  unsigned int v29; // eax
  __m128i *v30; // rcx
  __int16 v31; // ax
  __m128i v32; // xmm0
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // al
  unsigned int v37; // r9d
  int v38; // ebx
  char *v39; // rbp
  unsigned int v40; // r14d
  char v41; // r13
  __int64 result; // rax
  int v43; // edx
  __m128i *v44; // rcx
  __int16 v45; // ax
  __m128i si128; // xmm0
  int v47; // edi
  __m128i *v48; // r9
  __int16 v49; // cx
  int v50; // edi
  __m128i *v51; // r9
  __int16 v52; // cx
  unsigned int v53; // r9d
  unsigned __int16 *v54; // rdi
  __m128i *v55; // rcx
  int v56; // r12d
  int v57; // r14d
  unsigned int v58; // r12d
  unsigned int v59; // ecx
  __m128i *v60; // r9
  unsigned __int16 *v61; // rdi
  int v62; // eax
  int v63; // r10d
  unsigned int v64; // eax
  bool v65; // zf
  unsigned int v66; // edx
  char *v67; // r15
  unsigned __int8 i; // al
  int v69; // eax
  int v70; // r13d
  int v71; // eax
  char *v72; // rax
  int v73; // ecx
  char *v74; // rax
  int v75; // edx
  __int16 v76; // [rsp+0h] [rbp-136h]
  unsigned __int8 v77; // [rsp+2h] [rbp-134h]
  unsigned int v78; // [rsp+2h] [rbp-134h]
  int v79; // [rsp+6h] [rbp-130h]
  __int16 v80; // [rsp+6h] [rbp-130h]
  int v81; // [rsp+6h] [rbp-130h]
  int v82; // [rsp+6h] [rbp-130h]
  int v83; // [rsp+Eh] [rbp-128h]
  char *v84; // [rsp+Eh] [rbp-128h]
  int v85; // [rsp+Eh] [rbp-128h]
  int v86; // [rsp+Eh] [rbp-128h]
  _QWORD *v87; // [rsp+16h] [rbp-120h]
  int v88; // [rsp+16h] [rbp-120h]
  _OWORD *v89; // [rsp+16h] [rbp-120h]
  _OWORD *v90; // [rsp+1Eh] [rbp-118h]
  __m128i v91; // [rsp+2Eh] [rbp-108h] BYREF
  __m128i v92[2]; // [rsp+3Eh] [rbp-F8h] BYREF
  __m128i v93[2]; // [rsp+5Eh] [rbp-D8h] BYREF
  _BYTE v94[2]; // [rsp+7Eh] [rbp-B8h] BYREF
  unsigned __int16 v95; // [rsp+80h] [rbp-B6h]
  _BYTE v96[88]; // [rsp+9Eh] [rbp-98h] BYREF
  unsigned __int64 v97; // [rsp+F6h] [rbp-40h]

  v2 = a1;
  v97 = __readfsqword(0x28u);
  v3 = a2;
  *a2 = 0;
  v4 = (__int64)*a1;
  v5 = **a1;
  if ( v5 <= 0x7F )
  {
    v41 = v5;
    while ( isspace(v5) )
    {
      v5 = *(char *)++v4;
      v41 = v5;
      if ( v5 > 0x7F )
        goto LABEL_2;
    }
    if ( !v41 )
      return 3;
  }
LABEL_2:
  *v2 = v4;
  qstrncpy(v96, v4, 80);
  v6 = v96[0];
  memset(v92, 0, 22);
  v7 = v96[0];
  if ( !v96[0] )
  {
    v77 = 0;
    v15 = 0;
    v76 = 0;
    goto LABEL_35;
  }
  v77 = 0;
  v8 = a2;
  v76 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = v96;
  v14 = 0;
LABEL_4:
  if ( (unsigned __int8)(v7 - 48) > 9u )
    goto LABEL_5;
  if ( !v11 )
    v11 = 1;
  do
  {
LABEL_51:
    while ( 1 )
    {
      v80 = v6 - 48;
      if ( v6 == 48 )
        break;
      if ( v92[0].m128i_i16[2] )
      {
        v77 = 1;
        goto LABEL_76;
      }
LABEL_54:
      v10 += v12;
      v43 = 0;
      v44 = (__m128i *)((char *)v92[1].m128i_i64 + 4);
      do
      {
        if ( v44->m128i_i16[0] < 0 )
          v43 |= 1u;
        v45 = 2 * v44->m128i_i16[0];
        if ( (v43 & 2) != 0 )
          v45 |= 1u;
        v44 = (__m128i *)((char *)v44 - 2);
        v43 *= 2;
        v44->m128i_i16[1] = v45;
      }
      while ( v44 != (__m128i *)&v92[0].m128i_i16[1] );
      si128 = _mm_load_si128(v92);
      v47 = 0;
      v84 = v13;
      v93[1].m128i_i32[0] = v92[1].m128i_i32[0];
      v93[1].m128i_i16[2] = 0;
      v48 = (__m128i *)((char *)v93[1].m128i_i64 + 4);
      v93[0] = si128;
      do
      {
        if ( v48->m128i_i16[0] < 0 )
          v47 |= 1u;
        v49 = 2 * v48->m128i_i16[0];
        if ( (v47 & 2) != 0 )
          v49 |= 1u;
        v48 = (__m128i *)((char *)v48 - 2);
        v47 *= 2;
        v48->m128i_i16[1] = v49;
      }
      while ( v48 != (__m128i *)&v93[0].m128i_i16[1] );
      v50 = 0;
      v51 = (__m128i *)((char *)v93[1].m128i_i64 + 4);
      do
      {
        if ( v51->m128i_i16[0] < 0 )
          v50 |= 1u;
        v52 = 2 * v51->m128i_i16[0];
        if ( (v50 & 2) != 0 )
          v52 |= 1u;
        v51 = (__m128i *)((char *)v51 - 2);
        v50 *= 2;
        v51->m128i_i16[1] = v52;
      }
      while ( v51 != (__m128i *)&v93[0].m128i_i16[1] );
      v88 = v11;
      v53 = 0;
      v54 = &v92[1].m128i_u16[2];
      v55 = (__m128i *)((char *)v93[1].m128i_i64 + 4);
      do
      {
        v56 = v55->m128i_u16[0];
        v57 = *v54;
        v55 = (__m128i *)((char *)v55 - 2);
        --v54;
        v58 = v53 + v57 + v56;
        v54[1] = v58;
        v53 = HIWORD(v58);
      }
      while ( v55 != (__m128i *)&v93[0].m128i_i16[1] );
      v13 = v84;
      v59 = 0;
      v11 = v88;
      memset(v93, 0, 22);
      v60 = (__m128i *)((char *)v93[1].m128i_i64 + 4);
      v93[1].m128i_i16[1] = v80;
      v61 = &v92[1].m128i_u16[2];
      do
      {
        v62 = v60->m128i_u16[0];
        v63 = *v61;
        v60 = (__m128i *)((char *)v60 - 2);
        --v61;
        v64 = v59 + v63 + v62;
        v61[1] = v64;
        v59 = HIWORD(v64);
      }
      while ( v60 != (__m128i *)&v93[0].m128i_i16[1] );
LABEL_76:
      v6 = *++v13;
      ++v14;
      v7 = v6;
      if ( !v6 )
        goto LABEL_88;
      if ( (unsigned __int8)(v6 - 48) > 9u )
        goto LABEL_5;
    }
    if ( v12 | v14 )
    {
      if ( v92[0].m128i_i16[2] )
        goto LABEL_76;
      goto LABEL_54;
    }
    v6 = *++v13;
    v7 = v6;
    if ( !v6 )
      goto LABEL_88;
    v14 = 0;
    v12 = 0;
  }
  while ( (unsigned __int8)(v6 - 48) <= 9u );
  while ( 1 )
  {
LABEL_5:
    if ( v6 == 46 )
    {
      if ( v12 )
        goto LABEL_89;
      v66 = *v13;
      v67 = v13;
      for ( i = *v13; v66 <= 0x7F; i = v66 )
      {
        if ( v66 - 48 > 9 )
          break;
        v66 = *++v67;
      }
      v89 = v8;
      v81 = v10;
      v69 = tolower(i);
      v10 = v81;
      v8 = v89;
      if ( v69 == 101 )
      {
        if ( !v11 && v13 == v67 )
          goto LABEL_89;
      }
      else
      {
        *v67 = 0;
      }
      if ( v96 < v67 && *(v67 - 1) == 48 )
      {
        v72 = v67 - 1;
        do
        {
          *v72 = 122;
          if ( v72 == v96 )
            break;
          --v72;
        }
        while ( *v72 == 48 );
        v9 = 1;
      }
      v6 = *++v13;
      v7 = v6;
      if ( v11 )
      {
        if ( !v6 )
          goto LABEL_88;
        if ( (unsigned __int8)(v6 - 48) <= 9u )
          goto LABEL_122;
        if ( v6 == 46 )
          goto LABEL_89;
        v12 = 1;
      }
      else
      {
        if ( !v6 )
          goto LABEL_88;
        if ( (unsigned __int8)(v6 - 48) <= 9u )
        {
          v11 = 1;
LABEL_122:
          v12 = 1;
          goto LABEL_51;
        }
        if ( v6 == 46 )
          goto LABEL_89;
        v12 = 1;
        v11 = 1;
      }
    }
    if ( v6 == 122 )
    {
      if ( !v9 )
        goto LABEL_89;
      v6 = *++v13;
      v7 = v6;
      if ( v6 )
        goto LABEL_4;
LABEL_88:
      v3 = v8;
LABEL_11:
      v6 -= v10;
      v15 = (int)(v13 - v96);
      if ( v6 > 0 )
      {
        do
        {
          v16 = v92[0].m128i_u16[2];
          if ( v92[0].m128i_i16[2] )
            break;
          v17 = _mm_load_si128(v92);
          v18 = (__m128i *)((char *)v93[1].m128i_i64 + 4);
          v93[1].m128i_i16[2] = 0;
          v19 = 0;
          v93[1].m128i_i32[0] = v92[1].m128i_i32[0];
          v93[0] = v17;
          do
          {
            if ( v18->m128i_i16[0] < 0 )
              v19 |= 1u;
            v20 = 2 * v18->m128i_i16[0];
            if ( (v19 & 2) != 0 )
              v20 |= 1u;
            v18 = (__m128i *)((char *)v18 - 2);
            v19 *= 2;
            v18->m128i_i16[1] = v20;
          }
          while ( v18 != (__m128i *)&v93[0].m128i_i16[1] );
          v21 = 0;
          v22 = (__m128i *)((char *)v93[1].m128i_i64 + 4);
          do
          {
            if ( v22->m128i_i16[0] < 0 )
              v21 |= 1u;
            v23 = 2 * v22->m128i_i16[0];
            if ( (v21 & 2) != 0 )
              v23 |= 1u;
            v22 = (__m128i *)((char *)v22 - 2);
            v21 *= 2;
            v22->m128i_i16[1] = v23;
          }
          while ( v22 != (__m128i *)&v93[0].m128i_i16[1] );
          v24 = 0;
          v25 = &v93[1].m128i_u16[2];
          v26 = (__m128i *)((char *)v92[1].m128i_i64 + 4);
          do
          {
            v27 = v26->m128i_u16[0];
            v28 = *v25;
            v26 = (__m128i *)((char *)v26 - 2);
            --v25;
            v29 = v24 + v28 + v27;
            v25[1] = v29;
            v24 = HIWORD(v29);
          }
          while ( v26 != (__m128i *)&v92[0].m128i_i16[1] );
          v30 = (__m128i *)((char *)v93[1].m128i_i64 + 4);
          do
          {
            if ( v30->m128i_i16[0] < 0 )
              v16 |= 1u;
            v31 = 2 * v30->m128i_i16[0];
            if ( (v16 & 2) != 0 )
              v31 |= 1u;
            v30 = (__m128i *)((char *)v30 - 2);
            v16 *= 2;
            v30->m128i_i16[1] = v31;
          }
          while ( v30 != (__m128i *)&v93[0].m128i_i16[1] );
          if ( v93[0].m128i_i16[2] )
            break;
          v32 = _mm_load_si128(v93);
          v92[1].m128i_i32[0] = v93[1].m128i_i32[0];
          v92[0] = v32;
          v92[1].m128i_i16[2] = 0;
          --v6;
        }
        while ( v6 );
      }
LABEL_35:
      v79 = v6;
      v33 = sub_80CD40((__int64)v92);
      if ( v33 > 112 )
      {
        memset(v92, 0, 22);
      }
      else
      {
        v36 = emdnorm(v92, v77, 0, (unsigned int)(16494 - v33), 112);
        v37 = v79;
        if ( !v36 )
          goto LABEL_85;
        v78 = v92[0].m128i_u16[1];
        if ( v79 )
        {
          v83 = 1;
          if ( v79 < 0 )
          {
            if ( -v79 > 4096 )
            {
              emovi(&unk_2399800, v94);
              v70 = v95;
              sub_80D0C0((__int64)v94, v92[0].m128i_i32);
              v83 = -1;
              v78 = v78 + 0x3FFF - v70;
              v37 = -4096 - v79;
            }
            else
            {
              v83 = -1;
              v37 = -v79;
            }
          }
          v87 = v2;
          v90 = v3;
          v38 = 1;
          v39 = (char *)&unk_23998C0;
          v40 = v37;
          v91 = _mm_load_si128((const __m128i *)&xmmword_2384840);
          do
          {
            if ( (v38 & v40) != 0 )
              emul(&v91, v39, &v91);
            v39 -= 16;
            v38 *= 2;
          }
          while ( v39 != (char *)&unk_23998C0 - 208 );
          v2 = v87;
          v3 = v90;
          emovi(&v91, v94);
          v65 = v83 == -1;
          v85 = v95;
          if ( v65 )
          {
            v37 = sub_80D0C0((__int64)v94, v92[0].m128i_i32);
            v78 = v78 - v85 + 0x3FFF;
          }
          else
          {
            v37 = sub_80CEE0((__int64)v94, v92[0].m128i_i32);
            v78 = v78 + v85 - 16382;
          }
        }
        if ( !(unsigned __int8)emdnorm(v92, v37, 0, v78, 112) )
        {
LABEL_85:
          result = 2;
          goto LABEL_81;
        }
      }
      v92[0].m128i_i16[0] = v76;
      emovo(v92, v3, v34, v35);
      result = 1;
      goto LABEL_81;
    }
    if ( ((v6 - 43) & 0xFFFFFFFD) != 0 )
      break;
    if ( v11 )
    {
      v3 = v8;
LABEL_10:
      v6 = 0;
      goto LABEL_11;
    }
    if ( v6 == 45 )
    {
      v6 = *++v13;
      v7 = v6;
      if ( !v6 )
      {
        v76 = -1;
        v3 = v8;
        goto LABEL_11;
      }
      if ( (unsigned __int8)(v6 - 48) <= 9u )
      {
        v11 = -1;
        v76 = -1;
        goto LABEL_51;
      }
      v76 = -1;
    }
    else
    {
      v6 = *++v13;
      v7 = v6;
      if ( !v6 )
        goto LABEL_88;
      if ( (unsigned __int8)(v6 - 48) <= 9u )
      {
        v11 = -1;
        goto LABEL_51;
      }
    }
    v11 = -1;
  }
  v86 = v10;
  v82 = v14;
  v3 = v8;
  v71 = tolower(v7);
  v10 = v86;
  if ( v71 == 101 )
  {
    if ( v11 )
    {
      v73 = v13[1];
      v74 = v13 + 2;
      v75 = -1;
      if ( v73 != 45 )
      {
        if ( v73 != 43 )
          v74 = v13 + 1;
        v75 = 1;
      }
      if ( (unsigned __int8)(*v74 - 48) > 9u )
      {
        v15 = (int)(v74 - v96);
        result = 3;
        goto LABEL_81;
      }
      v6 = 0;
      while ( 1 )
      {
        v13 = v74 + 1;
        v6 = *v74 + 10 * v6 - 48;
        if ( (v6 & 0x8000) != 0 )
          break;
        if ( (unsigned __int8)(v74[1] - 48) > 9u )
        {
          if ( v75 != -1 )
            goto LABEL_11;
          if ( v6 )
          {
            v6 = -v6;
            goto LABEL_11;
          }
          break;
        }
        ++v74;
      }
    }
LABEL_89:
    result = 3;
    v15 = (int)((_DWORD)v13 - (unsigned int)v96);
    goto LABEL_81;
  }
  result = 3;
  v15 = (int)((_DWORD)v13 - (unsigned int)v96);
  if ( v11 && (v11 != -1 || v82) )
    goto LABEL_10;
LABEL_81:
  *v2 += v15;
  return result;
}

