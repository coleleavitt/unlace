__int64 __fastcall sub_EA7760(__int64 *a1, char *a2, char *a3, __int64 a4, __int64 a5, char a6)
{
  char *v7; // r14
  char *v9; // rax
  char v10; // dl
  char *v12; // r12
  unsigned __int8 v13; // dl
  char *v14; // rax
  char v15; // dl
  int *v16; // r9
  char v17; // al
  char *v18; // rbx
  void (*v19)(); // rax
  void (*v20)(); // rax
  void (*v21)(); // rax
  __m128i *v22; // rax
  __m128i si128; // xmm0
  _BYTE *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  _BYTE *v28; // rax
  char *v29; // rcx
  void (*v30)(); // rax
  int v31; // ebx
  __int64 (*v32)(); // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  __int64 v35; // r12
  void (*v36)(); // rcx
  char v37; // dl
  char *v38; // r12
  char *v39; // rbp
  void (*v40)(); // rax
  char *v41; // r8
  char v42; // bl
  __int64 v43; // rcx
  unsigned int v44; // eax
  int v45; // edx
  void (*v46)(); // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  bool v49; // al
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  char *v54; // rsi
  char *i; // rax
  __int64 v56; // [rsp+10h] [rbp-3E8h]
  char v59; // [rsp+3Eh] [rbp-3BAh]
  int v61; // [rsp+44h] [rbp-3B4h] BYREF
  char *v62; // [rsp+48h] [rbp-3B0h] BYREF
  _BYTE v63[16]; // [rsp+50h] [rbp-3A8h] BYREF
  void *v64; // [rsp+60h] [rbp-398h]
  __int64 v65; // [rsp+68h] [rbp-390h]
  _QWORD v66[2]; // [rsp+70h] [rbp-388h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-378h] BYREF
  _BYTE v68[32]; // [rsp+90h] [rbp-368h] BYREF
  _QWORD v69[48]; // [rsp+B0h] [rbp-348h] BYREF
  __m128i v70[24]; // [rsp+230h] [rbp-1C8h] BYREF
  char *v71; // [rsp+3B0h] [rbp-48h]
  char v72; // [rsp+3B8h] [rbp-40h]

  v7 = a2;
  v61 = 0;
  if ( a3 == a2 )
    return 0;
LABEL_2:
  v62 = v7;
  if ( a3 == v7 )
    goto LABEL_9;
  if ( !*v7 )
  {
LABEL_45:
    v20 = *(void (**)())(*a1 + 16);
    if ( v20 != nullsub_369 )
      ((void (__fastcall *)(__int64 *, char *))v20)(a1, v7);
    return 1;
  }
  if ( *v7 != 37 )
  {
    v9 = v7 + 1;
    while ( 1 )
    {
      v7 = v9;
      v62 = v9;
      if ( a3 == v9 )
        break;
      v10 = *v9;
      if ( !*v9 )
        goto LABEL_45;
      ++v9;
      if ( v10 == 37 )
        goto LABEL_12;
    }
LABEL_9:
    v71 = nullptr;
    goto LABEL_10;
  }
LABEL_12:
  v62 = v7 + 1;
  if ( a3 == v7 + 1 )
  {
    v21 = *(void (**)())(*a1 + 48);
    if ( v21 != nullsub_373 )
      ((void (__fastcall *)(__int64 *, char *, __int64))v21)(a1, v7, 1);
    return 1;
  }
  WORD2(v69[4]) = BYTE4(v69[4]) & 0xFE;
  v69[10] = 0x300000000LL;
  v69[13] = "'";
  v69[16] = "-";
  v69[19] = "+";
  v69[22] = " ";
  v69[25] = "#";
  v69[28] = "0";
  v69[31] = "tt";
  WORD2(v69[11]) = BYTE4(v69[11]) & 0xFE;
  v69[0] = 0;
  LODWORD(v69[1]) = 0;
  memset(&v69[2], 0, 20);
  LOBYTE(v69[5]) = 1;
  memset(&v69[6], 0, 20);
  v69[9] = 0;
  LODWORD(v69[11]) = 0;
  LOBYTE(v69[12]) = 0;
  HIDWORD(v69[12]) = 0;
  LOBYTE(v69[15]) = 0;
  LOBYTE(v69[18]) = 0;
  LOBYTE(v69[21]) = 0;
  LOBYTE(v69[24]) = 0;
  LOBYTE(v69[27]) = 0;
  LOBYTE(v69[30]) = 0;
  LOBYTE(v69[33]) = 0;
  v69[34] = "private";
  v69[37] = "public";
  v69[40] = "sensitive";
  LOBYTE(v69[36]) = 0;
  WORD2(v69[45]) = BYTE4(v69[45]) & 0xFE;
  LOBYTE(v69[39]) = 0;
  LOBYTE(v69[42]) = 0;
  memset(&v69[43], 0, 20);
  v69[46] = 0;
  v69[47] = 0;
  if ( (unsigned __int8)sub_C78820((__int64)a1, (__int64)v69, (__int64)v7, &v62, a3) )
    return 1;
  v12 = v62;
  if ( a3 == v62 )
    goto LABEL_42;
  if ( *v62 != 123 )
  {
    v13 = *v62 - 32;
    v14 = v62 + 1;
LABEL_17:
    switch ( v13 )
    {
      case 0u:
        LOBYTE(v69[24]) = 1;
        v69[23] = v12;
        goto LABEL_19;
      case 3u:
        LOBYTE(v69[27]) = 1;
        v69[26] = v12;
        goto LABEL_19;
      case 7u:
        LOBYTE(v69[15]) = 1;
        v69[14] = v12;
        goto LABEL_19;
      case 0xBu:
        LOBYTE(v69[21]) = 1;
        v69[20] = v12;
        goto LABEL_19;
      case 0xDu:
        LOBYTE(v69[18]) = 1;
        v69[17] = v12;
        goto LABEL_19;
      case 0x10u:
        LOBYTE(v69[30]) = 1;
        v69[29] = v12;
LABEL_19:
        v62 = v14;
        v12 = v14;
        goto LABEL_20;
      default:
        goto LABEL_22;
    }
  }
  v12 = v62 + 1;
  v56 = 0;
  ++v62;
  v59 = 0;
  do
  {
    while ( 1 )
    {
      v64 = v66;
      v22 = (__m128i *)operator new(0x4Fu);
      *v22 = _mm_load_si128((const __m128i *)&xmmword_2385020);
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385030);
      strcpy(v22[4].m128i_i8, "space:]]*(,|})");
      v22[1] = si128;
      v22[2] = _mm_load_si128((const __m128i *)&xmmword_2385040);
      v22[3] = _mm_load_si128(xmmword_2385050);
      v64 = v22;
      v66[0] = 78;
      v65 = 78;
      sub_220FC00(v63, v22, 78, 0);
      ptr[0] = v68;
      ptr[1] = (void *)0x200000000LL;
      if ( (unsigned __int8)sub_2210080(v63, v12, a3 - v12, ptr, 0) )
      {
        v24 = ptr[0];
        v25 = *((_QWORD *)ptr[0] + 2);
        v62 += *((_QWORD *)ptr[0] + 1);
        v26 = v25;
        v56 = v25;
        v27 = *((_QWORD *)ptr[0] + 3);
        if ( v27 <= 3 )
          goto LABEL_201;
        if ( *(_DWORD *)v26 == 1802723693 )
        {
          if ( v27 == 4 )
          {
            v35 = v26 + 4;
            v34 = 0;
          }
          else
          {
            v34 = v27 - 5;
            v35 = v56 + 5;
            if ( (unsigned int)(v27 - 6) <= 7 )
            {
LABEL_97:
              v69[46] = v35;
              v69[47] = v34;
              goto LABEL_58;
            }
          }
          v36 = *(void (**)())(*a1 + 96);
          if ( v36 != nullsub_377 )
          {
            ((void (__fastcall *)(__int64 *, __int64, unsigned __int64))v36)(a1, v35, v34);
            v24 = ptr[0];
          }
          goto LABEL_97;
        }
        if ( v27 == 9 )
        {
          if ( *(_QWORD *)v26 == 0x76697469736E6573LL && *(_BYTE *)(v26 + 8) == 101 )
          {
            v59 = 5;
            goto LABEL_58;
          }
          if ( v59 == 5 )
            goto LABEL_58;
        }
        else
        {
LABEL_201:
          if ( v59 == 5 )
            goto LABEL_58;
          if ( v27 == 7 && *(_DWORD *)v56 == 1986622064 && *(_WORD *)(v56 + 4) == 29793 && *(_BYTE *)(v56 + 6) == 101 )
          {
            v59 = 1;
            goto LABEL_58;
          }
        }
        if ( !v59 && v27 == 6 && *(_DWORD *)v56 == 1818391920 )
        {
          v42 = 0;
          if ( *(_WORD *)(v56 + 4) == 25449 )
            v42 = 2;
          v59 = v42;
        }
      }
      else
      {
        if ( a3 == v12 )
          goto LABEL_73;
        if ( *v12 == 125 || *v12 == 44 )
        {
          v33 = 1;
        }
        else
        {
          v28 = v12 + 1;
          if ( a3 == v12 + 1 )
            goto LABEL_73;
          while ( 1 )
          {
            v29 = v28 + 1;
            if ( *v28 == 44 || *v28 == 125 )
              break;
            ++v28;
            if ( a3 == v29 )
              goto LABEL_73;
          }
          if ( v28 - v12 == -1 )
          {
LABEL_73:
            v30 = *(void (**)())(*a1 + 48);
            if ( v30 != nullsub_373 )
              ((void (__fastcall *)(__int64 *, char *, signed __int64))v30)(a1, v7, a3 - v7);
            v70[0].m128i_i64[0] = 0;
            v70[5].m128i_i64[0] = 0x300000000LL;
            v70[6].m128i_i64[1] = (__int64)"'";
            v70[8].m128i_i64[0] = (__int64)"-";
            v70[9].m128i_i64[1] = (__int64)"+";
            v70[11].m128i_i64[0] = (__int64)" ";
            v70[12].m128i_i64[1] = (__int64)"#";
            v70[14].m128i_i64[0] = (__int64)"0";
            v70[15].m128i_i64[1] = (__int64)"tt";
            v70[0].m128i_i32[2] = 0;
            memset(&v70[1], 0, 20);
            v70[2].m128i_i16[2] = v70[2].m128i_i8[4] & 0xFE;
            v70[2].m128i_i8[8] = 1;
            memset(&v70[3], 0, 20);
            v70[4].m128i_i64[1] = 0;
            v70[5].m128i_i32[2] = 0;
            v70[5].m128i_i16[6] = v70[5].m128i_i8[12] & 0xFE;
            v70[6].m128i_i8[0] = 0;
            v70[6].m128i_i32[1] = 0;
            v70[7].m128i_i8[8] = 0;
            v70[9].m128i_i8[0] = 0;
            v70[10].m128i_i8[8] = 0;
            v70[12].m128i_i8[0] = 0;
            v70[13].m128i_i8[8] = 0;
            v70[15].m128i_i8[0] = 0;
            v70[16].m128i_i8[8] = 0;
            v70[17].m128i_i64[0] = (__int64)"private";
            v70[18].m128i_i64[1] = (__int64)"public";
            v70[18].m128i_i8[0] = 0;
            v70[19].m128i_i8[8] = 0;
            v70[20].m128i_i64[0] = (__int64)"sensitive";
            v70[21].m128i_i8[0] = 0;
            v70[21].m128i_i64[1] = 0;
            v70[22].m128i_i64[0] = 0;
            v70[22].m128i_i32[2] = 0;
            v70[22].m128i_i16[6] = v70[22].m128i_i8[12] & 0xFE;
            v70[23] = 0u;
            v71 = nullptr;
            v72 = 1;
            if ( ptr[0] != v68 )
              free(ptr[0]);
            sub_220FCB0(v63);
            if ( v64 != v66 )
              operator delete(v64);
            LOBYTE(v31) = v72;
            v7 = v62;
LABEL_80:
            if ( (_BYTE)v31 )
              return 1;
LABEL_81:
            if ( v71 )
            {
              v32 = *(__int64 (**)())(*a1 + 88);
              if ( v32 != sub_C782B0
                && !((unsigned __int8 (__fastcall *)(__int64 *, __m128i *, char *, signed __int64, __int64))v32)(
                      a1,
                      v70,
                      v71,
                      v7 - v71,
                      a5) )
              {
                return 1;
              }
            }
LABEL_10:
            if ( a3 == v7 )
              return 0;
            goto LABEL_2;
          }
          v33 = v28 - v12 + 1;
        }
        v62 += v33;
        v24 = ptr[0];
      }
LABEL_58:
      if ( v24 != v68 )
        free(v24);
      sub_220FCB0(v63);
      if ( v64 == v66 )
        break;
      operator delete(v64);
      v14 = v62;
      v12 = v62;
      if ( *(v62 - 1) != 44 )
        goto LABEL_62;
    }
    v14 = v62;
    v12 = v62;
  }
  while ( *(v62 - 1) == 44 );
LABEL_62:
  if ( v59 == 1 )
  {
    LOBYTE(v69[36]) = 1;
    v69[35] = v56;
  }
  else if ( v59 )
  {
    if ( v59 == 2 )
    {
      LOBYTE(v69[39]) = 1;
      v69[38] = v56;
    }
    else
    {
      LOBYTE(v69[42]) = 1;
      v69[41] = v56;
    }
  }
LABEL_20:
  if ( a3 == v14 )
    goto LABEL_42;
  v15 = *v14++;
  v13 = v15 - 32;
  if ( v13 <= 0x10u )
    goto LABEL_17;
LABEL_22:
  if ( a3 == v12 )
    goto LABEL_42;
  v16 = nullptr;
  if ( !LOBYTE(v69[12]) )
    v16 = &v61;
  if ( (unsigned __int8)sub_C78720((__int64)a1, (__int64)v69, (__int64)v7, &v62, a3, v16) )
    return 1;
  if ( a3 == v62 )
    goto LABEL_42;
  if ( *v62 == 46 )
  {
    if ( a3 == ++v62 )
      goto LABEL_42;
    if ( LOBYTE(v69[12]) )
    {
      sub_C78500((__int64)v70, (__int64)a1, (__int64)v7, &v62, a3, 1u);
      if ( v70[0].m128i_i32[3] == 3 )
        return 1;
      *(__m128i *)&v69[43] = _mm_load_si128(v70);
    }
    else
    {
      sub_C78430((__int64)v70, &v62, a3, &v61);
      *(__m128i *)&v69[43] = _mm_load_si128(v70);
    }
    LODWORD(v69[45]) = v70[1].m128i_i32[0];
    BYTE4(v69[45]) = v70[1].m128i_i8[4];
    BYTE5(v69[45]) = 1;
    if ( a3 == v62 )
      goto LABEL_42;
  }
  if ( (unsigned __int8)sub_C78970(a1, (__int64)v69, &v62, a3, a4) )
    return 1;
  v17 = sub_C78A60((__int64)v69, &v62, a3, a4, 0);
  v18 = v62;
  if ( v17 )
  {
    if ( a3 == v62 )
      goto LABEL_42;
  }
  v37 = *v62;
  if ( *v62 != 91 )
  {
    v38 = nullptr;
    v39 = nullptr;
    goto LABEL_105;
  }
  v54 = ++v62;
  if ( a3 == v18 + 1 )
  {
LABEL_42:
    v19 = *(void (**)())(*a1 + 48);
    if ( v19 != nullsub_373 )
      ((void (__fastcall *)(__int64 *, char *, signed __int64))v19)(a1, v7, a3 - v7);
    return 1;
  }
  if ( v18[1] == 93 )
    goto LABEL_196;
  for ( i = v18 + 1; ; ++i )
  {
    v38 = i + 1;
    v62 = i + 1;
    if ( a3 == i + 1 )
      goto LABEL_42;
    if ( i[1] == 93 )
      break;
  }
  if ( v38 - v54 != 2 )
  {
    if ( v38 != v54 )
    {
LABEL_189:
      (*(void (__fastcall **)(__int64 *))(*a1 + 64))(a1);
LABEL_190:
      sub_EA5B00((__int64)v70);
      return 1;
    }
LABEL_196:
    (*(void (__fastcall **)(__int64 *, char *, _QWORD))(*a1 + 56))(a1, v54, 0);
    goto LABEL_190;
  }
  if ( *(_WORD *)(v18 + 1) != 29812 )
    goto LABEL_189;
  LOBYTE(v69[33]) = 1;
  v39 = v18;
  v69[32] = v18 + 1;
  v18 = i + 2;
  v62 = i + 2;
  v37 = i[2];
LABEL_105:
  if ( v37 )
  {
    v41 = v18 + 1;
    v62 = v18 + 1;
    switch ( *v18 )
    {
      case '%':
        if ( v39 )
          goto LABEL_121;
        LOBYTE(v69[5]) = 1;
        v69[6] = v18;
        v69[7] = 0;
        LODWORD(v69[8]) = 24;
        goto LABEL_135;
      case '@':
        v44 = -1;
        LOBYTE(v69[5]) = 1;
        v69[6] = v18;
        v69[7] = 0;
        LODWORD(v69[8]) = 33;
        if ( !LOBYTE(v69[12]) )
          goto LABEL_148;
        goto LABEL_135;
      case 'A':
        v44 = -14;
        v45 = 20;
        break;
      case 'B':
        v44 = -28;
        v45 = 6;
        break;
      case 'C':
        v44 = -9;
        v45 = 25;
        break;
      case 'D':
        if ( a6 )
        {
          v44 = 1;
          v45 = 35;
          break;
        }
        v47 = *(unsigned int *)(a5 + 260);
        if ( (unsigned int)v47 > 0x1F )
          goto LABEL_115;
        v48 = 4160750114LL;
        if ( !_bittest64(&v48, v47) )
          goto LABEL_115;
        v44 = -31;
        v45 = 3;
        break;
      case 'E':
        v44 = -18;
        v45 = 16;
        break;
      case 'F':
        v44 = -20;
        v45 = 14;
        break;
      case 'G':
        v44 = -16;
        v45 = 18;
        break;
      case 'K':
        if ( (*(_BYTE *)(a4 + 164) & 1) == 0 )
          goto LABEL_115;
        v44 = -4;
        v45 = 30;
        break;
      case 'O':
        v52 = *(unsigned int *)(a5 + 260);
        if ( (unsigned int)v52 > 0x1F )
          goto LABEL_115;
        v53 = 4160750114LL;
        if ( !_bittest64(&v53, v52) )
          goto LABEL_115;
        v44 = -26;
        v45 = 8;
        break;
      case 'P':
        v44 = -7;
        v45 = 27;
        break;
      case 'R':
        if ( (*(_BYTE *)(a4 + 164) & 1) == 0 )
          goto LABEL_115;
        v44 = -2;
        v45 = 32;
        break;
      case 'S':
        v44 = -8;
        v45 = 26;
        break;
      case 'U':
        v50 = *(unsigned int *)(a5 + 260);
        if ( (unsigned int)v50 > 0x1F )
          goto LABEL_115;
        v51 = 4160750114LL;
        if ( !_bittest64(&v51, v50) )
          goto LABEL_115;
        v44 = -24;
        v45 = 10;
        break;
      case 'X':
        v44 = -22;
        v45 = 12;
        break;
      case 'Z':
        v49 = sub_EA5AD0(a5 + 216);
        v41 = v18 + 1;
        if ( !v49 )
          goto LABEL_115;
        v44 = -6;
        v45 = 28;
        break;
      case 'a':
        v44 = -15;
        v45 = 19;
        break;
      case 'b':
        v44 = a6 == 0 ? 0xFFFFFFE3 : 0;
        v45 = v44 + 34;
        break;
      case 'c':
        v44 = -33;
        v45 = 1;
        break;
      case 'd':
        v44 = -32;
        v45 = 2;
        break;
      case 'e':
        v44 = -19;
        v45 = 15;
        break;
      case 'f':
        v44 = -21;
        v45 = 13;
        break;
      case 'g':
        v44 = -17;
        v45 = 17;
        break;
      case 'i':
        v44 = -30;
        v45 = 4;
        break;
      case 'k':
        if ( (*(_BYTE *)(a4 + 164) & 1) == 0 )
          goto LABEL_115;
        v44 = -5;
        v45 = 29;
        break;
      case 'm':
        if ( v39 )
          goto LABEL_121;
        LOBYTE(v69[5]) = 1;
        v69[6] = v18;
        v69[7] = 0;
        LODWORD(v69[8]) = 38;
        goto LABEL_135;
      case 'n':
        if ( (*(_BYTE *)(a4 + 47) & 0x20) != 0 )
          goto LABEL_115;
        v44 = -11;
        v45 = 23;
        break;
      case 'o':
        v44 = -27;
        v45 = 7;
        break;
      case 'p':
        v44 = -12;
        v45 = 22;
        break;
      case 'r':
        if ( a6 )
        {
          v44 = 2;
          v45 = 36;
        }
        else
        {
          if ( (*(_BYTE *)(a4 + 164) & 1) == 0 )
          {
LABEL_115:
            LOBYTE(v69[5]) = 1;
            v69[6] = v18;
            v69[7] = 0;
            LODWORD(v69[8]) = 0;
            LODWORD(ptr[0]) = (_DWORD)v41 - (_DWORD)v7;
            if ( (unsigned __int8)sub_C78CD0((__int64)v7, (unsigned __int64)a3, ptr) )
            {
              LOBYTE(v69[5]) = 1;
              v69[6] = v18;
              LODWORD(v69[8]) = 0;
              v43 = LODWORD(ptr[0]);
              v69[7] = &v7[LODWORD(ptr[0])];
            }
            else
            {
              v43 = LODWORD(ptr[0]);
            }
            v31 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, char *, __int64))(*a1 + 80))(a1, v69, v7, v43) ^ 1;
            sub_EA5B00((__int64)v70);
            v72 = v31;
            v7 = v62;
            v71 = nullptr;
            goto LABEL_80;
          }
          v44 = -3;
          v45 = 31;
        }
        break;
      case 's':
        v44 = -13;
        v45 = 21;
        break;
      case 'u':
        v44 = -25;
        v45 = 9;
        break;
      case 'x':
        v44 = -23;
        v45 = 11;
        break;
      case 'y':
        if ( !a6 )
          goto LABEL_115;
        v44 = 3;
        v45 = 37;
        break;
      default:
        goto LABEL_115;
    }
    if ( !v39 )
    {
      LOBYTE(v69[5]) = 1;
      v69[6] = v18;
      v69[7] = 0;
      LODWORD(v69[8]) = v45;
      if ( !LOBYTE(v69[12]) )
LABEL_148:
        HIDWORD(v69[12]) = v61++;
      if ( v44 <= 1 )
        ++v61;
LABEL_135:
      v71 = v7;
      qmemcpy(v70, v69, sizeof(v70));
      v72 = 0;
      v7 = v41;
      goto LABEL_81;
    }
LABEL_121:
    v46 = *(void (**)())(*a1 + 72);
    if ( v46 != nullsub_376 )
      ((void (__fastcall *)(__int64 *, char *, char *, char *))v46)(a1, v39, v38 + 1, v18);
    return 1;
  }
  v40 = *(void (**)())(*a1 + 16);
  if ( v40 != nullsub_369 )
    ((void (__fastcall *)(__int64 *, char *))v40)(a1, v18);
  return 1;
}

