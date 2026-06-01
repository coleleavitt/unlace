void __fastcall sub_D0F600(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // r15
  __int64 v5; // r13
  size_t v6; // rdx
  signed __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  size_t v10; // rdx
  signed __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  int v14; // eax
  unsigned int v15; // eax
  _BYTE *v16; // rax
  __m128i v17; // xmm0
  _QWORD *v18; // r15
  __int64 v19; // r13
  size_t v20; // rdx
  signed __int64 v21; // rax
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rcx
  size_t v24; // rax
  signed __int64 v25; // rax
  _QWORD *v26; // rax
  unsigned int v27; // eax
  _BYTE *v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // r13
  size_t v31; // rdx
  signed __int64 v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rcx
  size_t v35; // rax
  signed __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // r13
  size_t v40; // rdx
  signed __int64 v41; // rax
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // r15
  size_t v44; // rdx
  signed __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rdi
  __int64 v48; // r15
  __int64 v49; // r13
  size_t v50; // rdx
  signed __int64 v51; // rax
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // r14
  size_t v54; // rdx
  signed __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rdi
  __m128i *v58; // r13
  __int64 v59; // r14
  _QWORD *v60; // rbp
  size_t v61; // rdx
  signed __int64 v62; // rax
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // r15
  size_t v65; // rdx
  signed __int64 v66; // rax
  _QWORD *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rbp
  __m128i *v70; // r15
  __int64 v71; // r14
  size_t v72; // rdx
  signed __int64 v73; // rax
  unsigned __int64 v74; // r13
  unsigned __int64 v75; // r13
  size_t v76; // rdx
  signed __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // r15
  __m128i *v80; // r14
  __int64 v81; // rbp
  __int64 v82; // r13
  size_t v83; // rdx
  signed __int64 v84; // rax
  unsigned __int64 v85; // r15
  unsigned __int64 v86; // r15
  size_t v87; // rdx
  signed __int64 v88; // rax
  _QWORD *v89; // rax
  bool v90; // bp
  unsigned __int64 v91; // rsi
  unsigned int v92; // eax
  _BYTE *v93; // rax
  __m128i si128; // xmm0
  __int64 v95; // r13
  size_t v96; // rdx
  signed __int64 v97; // rax
  unsigned __int64 v98; // r14
  size_t v99; // rax
  signed __int64 v100; // rax
  _QWORD *v101; // [rsp+0h] [rbp-A8h]
  _QWORD *v102; // [rsp+0h] [rbp-A8h]
  _QWORD *v103; // [rsp+0h] [rbp-A8h]
  __int64 v104; // [rsp+8h] [rbp-A0h]
  unsigned int v105; // [rsp+8h] [rbp-A0h]
  __int64 v106; // [rsp+8h] [rbp-A0h]
  __int64 v107; // [rsp+10h] [rbp-98h]
  __int64 v108; // [rsp+10h] [rbp-98h]
  unsigned int v109; // [rsp+10h] [rbp-98h]
  _QWORD *v110; // [rsp+10h] [rbp-98h]
  _QWORD *v111; // [rsp+10h] [rbp-98h]
  __int64 v112; // [rsp+10h] [rbp-98h]
  unsigned int v113; // [rsp+1Ch] [rbp-8Ch]
  char **v114; // [rsp+28h] [rbp-80h] BYREF
  void *v115[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v116[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v117; // [rsp+50h] [rbp-58h] BYREF
  __int64 v118; // [rsp+58h] [rbp-50h]
  _QWORD s2[9]; // [rsp+60h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  strcpy((char *)s2, "quantifiers");
  v4 = v3[2];
  v5 = (__int64)(v3 + 1);
  v117 = s2;
  v118 = 11;
  if ( !v4 )
    goto LABEL_20;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v4 + 40);
      if ( !v8 )
        break;
      v6 = 11;
      if ( v8 <= 0xB )
        v6 = *(_QWORD *)(v4 + 40);
      LODWORD(v7) = memcmp(*(const void **)(v4 + 32), s2, v6);
      if ( !(_DWORD)v7 )
      {
        v7 = v8 - 11;
        if ( (__int64)(v8 - 11) >= 0x80000000LL )
          goto LABEL_9;
        if ( v7 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          break;
      }
      if ( (int)v7 < 0 )
        break;
LABEL_9:
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_12;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_12:
  if ( v3 + 1 == (_QWORD *)v5 )
    goto LABEL_20;
  v9 = *(_QWORD *)(v5 + 40);
  if ( !v9 )
    goto LABEL_205;
  v10 = 11;
  if ( v9 <= 0xB )
    v10 = *(_QWORD *)(v5 + 40);
  LODWORD(v11) = memcmp(s2, *(const void **)(v5 + 32), v10);
  if ( (_DWORD)v11 )
  {
LABEL_19:
    if ( (int)v11 < 0 )
      goto LABEL_20;
    goto LABEL_205;
  }
  v11 = 11 - v9;
  if ( (__int64)(11 - v9) > 0x7FFFFFFF )
  {
LABEL_205:
    ++*(_QWORD *)(v5 + 64);
    goto LABEL_23;
  }
  if ( v11 >= (__int64)0xFFFFFFFF80000000LL )
    goto LABEL_19;
LABEL_20:
  v115[0] = &v117;
  v12 = sub_D0DD30(v3, v5, (char ***)v115);
  v13 = v117;
  ++v12[8];
  if ( v13 != s2 )
    operator delete(v13, s2[0] + 1LL);
  v3 = *(_QWORD **)(a1 + 8);
LABEL_23:
  v14 = a2[4];
  switch ( v14 )
  {
    case 1:
      v92 = a2[5];
      v117 = s2;
      v113 = v92;
      v93 = (_BYTE *)operator new(0x11u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B6860);
      s2[0] = 16;
      v93[16] = 0;
      v18 = v93;
      *(__m128i *)v93 = si128;
      v95 = v3[2];
      v117 = v93;
      v118 = 16;
      v104 = (__int64)(v3 + 1);
      if ( !v95 )
        goto LABEL_45;
      while ( 1 )
      {
        v98 = *(_QWORD *)(v95 + 40);
        if ( !v98 )
        {
LABEL_193:
          v95 = *(_QWORD *)(v95 + 24);
          goto LABEL_191;
        }
        v96 = 16;
        if ( v98 <= 0x10 )
          v96 = *(_QWORD *)(v95 + 40);
        LODWORD(v97) = memcmp(*(const void **)(v95 + 32), v18, v96);
        if ( !(_DWORD)v97 )
        {
          v97 = v98 - 16;
          if ( (__int64)(v98 - 16) >= 0x80000000LL )
            goto LABEL_190;
          if ( v97 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            goto LABEL_193;
        }
        if ( (int)v97 < 0 )
          goto LABEL_193;
LABEL_190:
        v104 = v95;
        v95 = *(_QWORD *)(v95 + 16);
LABEL_191:
        if ( !v95 )
        {
          if ( v3 + 1 == (_QWORD *)v104 )
            goto LABEL_45;
          v37 = *(_QWORD *)(v104 + 40);
          if ( !v37 )
            goto LABEL_69;
          v99 = 16;
          v112 = *(_QWORD *)(v104 + 40);
          if ( v37 <= 0x10 )
            v99 = *(_QWORD *)(v104 + 40);
          LODWORD(v100) = memcmp(v18, *(const void **)(v104 + 32), v99);
          if ( !(_DWORD)v100 )
          {
            v100 = 16 - v112;
            if ( 16 - v112 > 0x7FFFFFFF )
              goto LABEL_69;
            if ( v100 < (__int64)0xFFFFFFFF80000000LL )
              goto LABEL_45;
          }
          if ( (int)v100 < 0 )
            goto LABEL_45;
          goto LABEL_69;
        }
      }
    case 2:
      v27 = a2[5];
      v117 = s2;
      v113 = v27;
      v28 = (_BYTE *)operator new(0x11u);
      v29 = _mm_load_si128((const __m128i *)&xmmword_18B6870);
      s2[0] = 16;
      v28[16] = 0;
      v18 = v28;
      *(__m128i *)v28 = v29;
      v30 = v3[2];
      v117 = v28;
      v118 = 16;
      v104 = (__int64)(v3 + 1);
      if ( !v30 )
        goto LABEL_45;
      while ( 1 )
      {
        while ( 1 )
        {
          v33 = *(_QWORD *)(v30 + 40);
          if ( !v33 )
            goto LABEL_57;
          v31 = 16;
          if ( v33 <= 0x10 )
            v31 = *(_QWORD *)(v30 + 40);
          LODWORD(v32) = memcmp(*(const void **)(v30 + 32), v18, v31);
          if ( !(_DWORD)v32 )
            break;
LABEL_54:
          if ( (int)v32 >= 0 )
            goto LABEL_55;
LABEL_57:
          v30 = *(_QWORD *)(v30 + 24);
          if ( !v30 )
          {
LABEL_58:
            if ( (_QWORD *)v104 == v3 + 1 )
              goto LABEL_45;
            v34 = *(_QWORD *)(v104 + 40);
            if ( !v34 )
              goto LABEL_69;
            v35 = 16;
            v108 = *(_QWORD *)(v104 + 40);
            if ( v34 <= 0x10 )
              v35 = *(_QWORD *)(v104 + 40);
            LODWORD(v36) = memcmp(v18, *(const void **)(v104 + 32), v35);
            if ( !(_DWORD)v36 )
            {
              v36 = 16 - v108;
              if ( 16 - v108 > 0x7FFFFFFF )
                goto LABEL_69;
              if ( v36 < (__int64)0xFFFFFFFF80000000LL )
                goto LABEL_45;
            }
            if ( (int)v36 < 0 )
              goto LABEL_45;
            goto LABEL_69;
          }
        }
        v32 = v33 - 16;
        if ( (__int64)(v33 - 16) < 0x80000000LL )
        {
          if ( v32 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            goto LABEL_57;
          goto LABEL_54;
        }
LABEL_55:
        v104 = v30;
        v30 = *(_QWORD *)(v30 + 16);
        if ( !v30 )
          goto LABEL_58;
      }
    case 0:
      v15 = a2[5];
      v117 = s2;
      v113 = v15;
      v16 = (_BYTE *)operator new(0x11u);
      v17 = _mm_load_si128((const __m128i *)&xmmword_18B6850);
      s2[0] = 16;
      v16[16] = 0;
      v18 = v16;
      *(__m128i *)v16 = v17;
      v19 = v3[2];
      v117 = v16;
      v118 = 16;
      v104 = (__int64)(v3 + 1);
      if ( !v19 )
        goto LABEL_45;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v19 + 40);
        if ( v22 )
        {
          v20 = 16;
          if ( v22 <= 0x10 )
            v20 = *(_QWORD *)(v19 + 40);
          LODWORD(v21) = memcmp(*(const void **)(v19 + 32), v18, v20);
          if ( (_DWORD)v21 )
            goto LABEL_33;
          v21 = v22 - 16;
          if ( (__int64)(v22 - 16) >= 0x80000000LL )
            goto LABEL_34;
          if ( v21 > (__int64)0xFFFFFFFF7FFFFFFFLL )
          {
LABEL_33:
            if ( (int)v21 >= 0 )
            {
LABEL_34:
              v104 = v19;
              v19 = *(_QWORD *)(v19 + 16);
              if ( !v19 )
                goto LABEL_37;
              continue;
            }
          }
        }
        v19 = *(_QWORD *)(v19 + 24);
        if ( !v19 )
        {
LABEL_37:
          if ( v3 + 1 == (_QWORD *)v104 )
            goto LABEL_45;
          v23 = *(_QWORD *)(v104 + 40);
          if ( v23 )
          {
            v24 = 16;
            v107 = *(_QWORD *)(v104 + 40);
            if ( v23 <= 0x10 )
              v24 = *(_QWORD *)(v104 + 40);
            LODWORD(v25) = memcmp(v18, *(const void **)(v104 + 32), v24);
            if ( (_DWORD)v25 )
            {
LABEL_44:
              if ( (int)v25 < 0 )
                goto LABEL_45;
            }
            else
            {
              v25 = 16 - v107;
              if ( 16 - v107 <= 0x7FFFFFFF )
              {
                if ( v25 >= (__int64)0xFFFFFFFF80000000LL )
                  goto LABEL_44;
LABEL_45:
                v115[0] = &v117;
                v26 = sub_D0DD30(v3, v104, (char ***)v115);
                v18 = v117;
                v26[8] += v113;
                if ( v18 == s2 )
                {
LABEL_71:
                  v3 = *(_QWORD **)(a1 + 8);
                  goto LABEL_72;
                }
LABEL_70:
                operator delete(v18, s2[0] + 1LL);
                goto LABEL_71;
              }
            }
          }
LABEL_69:
          *(_QWORD *)(v104 + 64) += v113;
          goto LABEL_70;
        }
      }
  }
LABEL_72:
  v117 = s2;
  v118 = 8;
  v109 = a2[18];
  strcpy((char *)s2, "patterns");
  v38 = v3[2];
  v39 = (__int64)(v3 + 1);
  if ( !v38 )
    goto LABEL_91;
  while ( 2 )
  {
    while ( 2 )
    {
      v42 = *(_QWORD *)(v38 + 40);
      if ( v42 )
      {
        v40 = 8;
        if ( v42 <= 8 )
          v40 = *(_QWORD *)(v38 + 40);
        LODWORD(v41) = memcmp(*(const void **)(v38 + 32), s2, v40);
        if ( !(_DWORD)v41 )
        {
          v41 = v42 - 8;
          if ( (__int64)(v42 - 8) >= 0x80000000LL )
          {
LABEL_80:
            v39 = v38;
            v38 = *(_QWORD *)(v38 + 16);
            if ( !v38 )
              goto LABEL_83;
            continue;
          }
          if ( v41 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            break;
        }
        if ( (int)v41 < 0 )
          break;
        goto LABEL_80;
      }
      break;
    }
    v38 = *(_QWORD *)(v38 + 24);
    if ( v38 )
      continue;
    break;
  }
LABEL_83:
  if ( v3 + 1 == (_QWORD *)v39 )
    goto LABEL_91;
  v43 = *(_QWORD *)(v39 + 40);
  if ( !v43 )
    goto LABEL_204;
  v44 = 8;
  if ( v43 <= 8 )
    v44 = *(_QWORD *)(v39 + 40);
  LODWORD(v45) = memcmp(s2, *(const void **)(v39 + 32), v44);
  if ( (_DWORD)v45 )
  {
LABEL_90:
    if ( (int)v45 < 0 )
      goto LABEL_91;
    goto LABEL_204;
  }
  v45 = 8 - v43;
  if ( (__int64)(8 - v43) > 0x7FFFFFFF )
  {
LABEL_204:
    *(_QWORD *)(v39 + 64) += v109;
    goto LABEL_94;
  }
  if ( v45 >= (__int64)0xFFFFFFFF80000000LL )
    goto LABEL_90;
LABEL_91:
  v115[0] = &v117;
  v46 = sub_D0DD30(v3, v39, (char ***)v115);
  v47 = v117;
  v46[8] += v109;
  if ( v47 != s2 )
    operator delete(v47, s2[0] + 1LL);
  v3 = *(_QWORD **)(a1 + 8);
LABEL_94:
  v117 = s2;
  v118 = 11;
  v105 = a2[19];
  strcpy((char *)s2, "no-patterns");
  v48 = v3[2];
  v49 = (__int64)(v3 + 1);
  if ( !v48 )
    goto LABEL_113;
  while ( 2 )
  {
    while ( 2 )
    {
      v52 = *(_QWORD *)(v48 + 40);
      if ( v52 )
      {
        v50 = 11;
        if ( v52 <= 0xB )
          v50 = *(_QWORD *)(v48 + 40);
        LODWORD(v51) = memcmp(*(const void **)(v48 + 32), s2, v50);
        if ( !(_DWORD)v51 )
        {
          v51 = v52 - 11;
          if ( (__int64)(v52 - 11) >= 0x80000000LL )
          {
LABEL_102:
            v49 = v48;
            v48 = *(_QWORD *)(v48 + 16);
            if ( !v48 )
              goto LABEL_105;
            continue;
          }
          if ( v51 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            break;
        }
        if ( (int)v51 < 0 )
          break;
        goto LABEL_102;
      }
      break;
    }
    v48 = *(_QWORD *)(v48 + 24);
    if ( v48 )
      continue;
    break;
  }
LABEL_105:
  if ( v3 + 1 == (_QWORD *)v49 )
    goto LABEL_113;
  v53 = *(_QWORD *)(v49 + 40);
  if ( !v53 )
    goto LABEL_206;
  v54 = 11;
  if ( v53 <= 0xB )
    v54 = *(_QWORD *)(v49 + 40);
  LODWORD(v55) = memcmp(s2, *(const void **)(v49 + 32), v54);
  if ( (_DWORD)v55 )
  {
LABEL_112:
    if ( (int)v55 < 0 )
      goto LABEL_113;
    goto LABEL_206;
  }
  v55 = 11 - v53;
  if ( (__int64)(11 - v53) > 0x7FFFFFFF )
  {
LABEL_206:
    *(_QWORD *)(v49 + 64) += v105;
    goto LABEL_116;
  }
  if ( v55 >= (__int64)0xFFFFFFFF80000000LL )
    goto LABEL_112;
LABEL_113:
  v115[0] = &v117;
  v56 = sub_D0DD30(v3, v49, (char ***)v115);
  v57 = v117;
  v56[8] += v105;
  if ( v57 != s2 )
    operator delete(v57, s2[0] + 1LL);
  v3 = *(_QWORD **)(a1 + 8);
LABEL_116:
  ++*(_DWORD *)(a1 + 64);
  v101 = v3 + 1;
  v115[0] = v116;
  v58 = (__m128i *)operator new(0x19u);
  v115[0] = v58;
  v116[0] = 24;
  *v58 = _mm_load_si128((const __m128i *)&xmmword_18B6880);
  strcpy(v58[1].m128i_i8, "on-depth");
  v59 = v3[2];
  v115[1] = &qword_18;
  v60 = v3 + 1;
  if ( !v59 )
    goto LABEL_135;
  while ( 2 )
  {
    while ( 2 )
    {
      v63 = *(_QWORD *)(v59 + 40);
      if ( v63 )
      {
        v61 = 24;
        if ( v63 <= 0x18 )
          v61 = *(_QWORD *)(v59 + 40);
        LODWORD(v62) = memcmp(*(const void **)(v59 + 32), v58, v61);
        if ( !(_DWORD)v62 )
        {
          v62 = v63 - 24;
          if ( (__int64)(v63 - 24) >= 0x80000000LL )
          {
LABEL_124:
            v60 = (_QWORD *)v59;
            v59 = *(_QWORD *)(v59 + 16);
            if ( !v59 )
              goto LABEL_127;
            continue;
          }
          if ( v62 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            break;
        }
        if ( (int)v62 < 0 )
          break;
        goto LABEL_124;
      }
      break;
    }
    v59 = *(_QWORD *)(v59 + 24);
    if ( v59 )
      continue;
    break;
  }
LABEL_127:
  if ( v101 == v60 )
    goto LABEL_135;
  v64 = v60[5];
  if ( v64 )
  {
    v65 = 24;
    if ( v64 <= 0x18 )
      v65 = v60[5];
    LODWORD(v66) = memcmp(v58, (const void *)v60[4], v65);
    if ( (_DWORD)v66 )
    {
LABEL_134:
      if ( (int)v66 < 0 )
        goto LABEL_135;
    }
    else
    {
      v66 = 24 - v64;
      if ( (__int64)(24 - v64) <= 0x7FFFFFFF )
      {
        if ( v66 >= (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_134;
LABEL_135:
        operator delete(v58, 0x19u);
        goto LABEL_136;
      }
    }
  }
  v79 = *(_QWORD **)(a1 + 8);
  v117 = s2;
  v111 = v79;
  v80 = (__m128i *)operator new(0x19u);
  v117 = v80;
  s2[0] = 24;
  v81 = (__int64)(v79 + 1);
  *v80 = _mm_load_si128((const __m128i *)&xmmword_18B6880);
  strcpy(v80[1].m128i_i8, "on-depth");
  v82 = v79[2];
  v118 = 24;
  v103 = v79 + 1;
  if ( !v82 )
  {
    v81 = (__int64)(v79 + 1);
    goto LABEL_174;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v85 = *(_QWORD *)(v82 + 40);
      if ( v85 )
      {
        v83 = 24;
        if ( v85 <= 0x18 )
          v83 = *(_QWORD *)(v82 + 40);
        LODWORD(v84) = memcmp(*(const void **)(v82 + 32), v80, v83);
        if ( !(_DWORD)v84 )
        {
          v84 = v85 - 24;
          if ( (__int64)(v85 - 24) >= 0x80000000LL )
          {
LABEL_165:
            v81 = v82;
            v82 = *(_QWORD *)(v82 + 16);
            if ( !v82 )
              goto LABEL_168;
            continue;
          }
          if ( v84 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            break;
        }
        if ( (int)v84 < 0 )
          break;
        goto LABEL_165;
      }
      break;
    }
    v82 = *(_QWORD *)(v82 + 24);
    if ( v82 )
      continue;
    break;
  }
LABEL_168:
  if ( (_QWORD *)v81 == v103 )
    goto LABEL_174;
  v86 = *(_QWORD *)(v81 + 40);
  if ( !v86 )
    goto LABEL_181;
  v87 = 24;
  if ( v86 <= 0x18 )
    v87 = *(_QWORD *)(v81 + 40);
  LODWORD(v88) = memcmp(v80, *(const void **)(v81 + 32), v87);
  if ( (_DWORD)v88 )
  {
LABEL_173:
    if ( (int)v88 < 0 )
      goto LABEL_174;
LABEL_181:
    v91 = 25;
    v90 = *(_QWORD *)(v81 + 64) < (unsigned __int64)*(unsigned int *)(a1 + 64);
LABEL_176:
    operator delete(v80, v91);
  }
  else
  {
    v88 = 24 - v86;
    if ( (__int64)(24 - v86) > 0x7FFFFFFF )
      goto LABEL_181;
    if ( v88 >= (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_173;
LABEL_174:
    v114 = (char **)&v117;
    v89 = sub_D0DD30(v111, v81, &v114);
    v80 = (__m128i *)v117;
    v90 = v89[8] < (unsigned __int64)*(unsigned int *)(a1 + 64);
    if ( v117 != s2 )
    {
      v91 = s2[0] + 1LL;
      goto LABEL_176;
    }
  }
  if ( v115[0] != v116 )
    operator delete(v115[0], v116[0] + 1LL);
  if ( !v90 )
    goto LABEL_180;
LABEL_136:
  v67 = *(_QWORD **)(a1 + 8);
  v68 = *(unsigned int *)(a1 + 64);
  v117 = s2;
  v110 = v67;
  v69 = (__int64)(v67 + 1);
  v106 = v68;
  v102 = v67 + 1;
  v70 = (__m128i *)operator new(0x19u);
  v117 = v70;
  *v70 = _mm_load_si128((const __m128i *)&xmmword_18B6880);
  s2[0] = 24;
  strcpy(v70[1].m128i_i8, "on-depth");
  v71 = v67[2];
  v118 = 24;
  if ( !v71 )
    goto LABEL_155;
  while ( 2 )
  {
    while ( 2 )
    {
      v74 = *(_QWORD *)(v71 + 40);
      if ( v74 )
      {
        v72 = 24;
        if ( v74 <= 0x18 )
          v72 = *(_QWORD *)(v71 + 40);
        LODWORD(v73) = memcmp(*(const void **)(v71 + 32), v70, v72);
        if ( !(_DWORD)v73 )
        {
          v73 = v74 - 24;
          if ( (__int64)(v74 - 24) >= 0x80000000LL )
          {
LABEL_144:
            v69 = v71;
            v71 = *(_QWORD *)(v71 + 16);
            if ( !v71 )
              goto LABEL_147;
            continue;
          }
          if ( v73 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            break;
        }
        if ( (int)v73 < 0 )
          break;
        goto LABEL_144;
      }
      break;
    }
    v71 = *(_QWORD *)(v71 + 24);
    if ( v71 )
      continue;
    break;
  }
LABEL_147:
  if ( v102 == (_QWORD *)v69 )
    goto LABEL_155;
  v75 = *(_QWORD *)(v69 + 40);
  if ( !v75 )
    goto LABEL_207;
  v76 = 24;
  if ( v75 <= 0x18 )
    v76 = *(_QWORD *)(v69 + 40);
  LODWORD(v77) = memcmp(v70, *(const void **)(v69 + 32), v76);
  if ( (_DWORD)v77 )
  {
LABEL_154:
    if ( (int)v77 < 0 )
      goto LABEL_155;
    goto LABEL_207;
  }
  v77 = 24 - v75;
  if ( (__int64)(24 - v75) > 0x7FFFFFFF )
  {
LABEL_207:
    *(_QWORD *)(v69 + 64) = v106;
    goto LABEL_156;
  }
  if ( v77 >= (__int64)0xFFFFFFFF80000000LL )
    goto LABEL_154;
LABEL_155:
  v115[0] = &v117;
  v78 = sub_D0DD30(v110, v69, (char ***)v115);
  v70 = (__m128i *)v117;
  v78[8] = v106;
  if ( v70 != (__m128i *)s2 )
LABEL_156:
    operator delete(v70, s2[0] + 1LL);
LABEL_180:
  --*(_DWORD *)(a1 + 64);
}

