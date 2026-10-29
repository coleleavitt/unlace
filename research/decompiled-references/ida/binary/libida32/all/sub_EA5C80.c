__int64 __fastcall sub_EA5C80(__int64 a1, __int64 *a2, char **a3, char *a4, int *a5, __int64 a6, __int64 a7)
{
  char *v9; // r15
  char *v11; // rax
  char v12; // dl
  char *v13; // r13
  char *v14; // rax
  char v15; // dl
  char *v16; // rax
  int *v17; // r9
  char v19; // al
  char *v20; // r12
  char v21; // al
  char *v22; // rcx
  __m128i *v23; // rax
  __m128i si128; // xmm0
  int *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  char v29; // si
  _BYTE *v30; // rax
  char *v31; // rcx
  int *v32; // rdi
  __int64 v33; // r12
  unsigned __int64 v34; // rdx
  char *v35; // rcx
  char *i; // rdx
  char *v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned __int8 v41; // cf
  int v42; // ecx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  bool v47; // al
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  char *v50; // [rsp+8h] [rbp-280h]
  __int64 v54; // [rsp+38h] [rbp-250h]
  char v55; // [rsp+57h] [rbp-231h]
  char *v56; // [rsp+68h] [rbp-220h] BYREF
  _BYTE v57[16]; // [rsp+70h] [rbp-218h] BYREF
  void *v58; // [rsp+80h] [rbp-208h]
  __int64 v59; // [rsp+88h] [rbp-200h]
  _QWORD v60[2]; // [rsp+90h] [rbp-1F8h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-1E8h] BYREF
  int v62; // [rsp+B0h] [rbp-1D8h] BYREF
  __int16 v63; // [rsp+B4h] [rbp-1D4h]
  _QWORD v64[55]; // [rsp+D0h] [rbp-1B8h] BYREF

  v9 = *a3;
  v56 = v9;
  if ( v9 == a4 )
    goto LABEL_8;
  if ( !*v9 )
  {
LABEL_23:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 80) = 0x300000000LL;
    *(_QWORD *)(a1 + 104) = "'";
    *(_QWORD *)(a1 + 128) = "-";
    *(_QWORD *)(a1 + 152) = "+";
    *(_QWORD *)(a1 + 176) = " ";
    *(_QWORD *)(a1 + 200) = "#";
    *(_QWORD *)(a1 + 224) = "0";
    *(_QWORD *)(a1 + 248) = "tt";
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_WORD *)(a1 + 36) &= 0xFEu;
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 88) = 0;
    *(_WORD *)(a1 + 92) &= 0xFEu;
    *(_BYTE *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 100) = 0;
    *(_BYTE *)(a1 + 120) = 0;
    *(_BYTE *)(a1 + 144) = 0;
    *(_BYTE *)(a1 + 168) = 0;
    *(_BYTE *)(a1 + 192) = 0;
    *(_BYTE *)(a1 + 216) = 0;
    *(_BYTE *)(a1 + 240) = 0;
    *(_BYTE *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 272) = "private";
    *(_QWORD *)(a1 + 296) = "public";
    *(_BYTE *)(a1 + 288) = 0;
    *(_BYTE *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 320) = "sensitive";
    *(_BYTE *)(a1 + 336) = 0;
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 352) = 0;
    *(_DWORD *)(a1 + 360) = 0;
    *(_WORD *)(a1 + 364) &= 0xFEu;
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 384) = 0;
    *(_BYTE *)(a1 + 392) = 1;
    goto LABEL_22;
  }
  if ( *v9 != 37 )
  {
    v11 = v9 + 1;
    while ( 1 )
    {
      v9 = v11;
      v56 = v11;
      if ( a4 == v11 )
        break;
      v12 = *v11;
      if ( !*v11 )
        goto LABEL_23;
      ++v11;
      if ( v12 == 37 )
        goto LABEL_9;
    }
LABEL_8:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 80) = 0x300000000LL;
    *(_QWORD *)(a1 + 104) = "'";
    *(_QWORD *)(a1 + 128) = "-";
    *(_QWORD *)(a1 + 152) = "+";
    *(_QWORD *)(a1 + 176) = " ";
    *(_QWORD *)(a1 + 200) = "#";
    *(_QWORD *)(a1 + 224) = "0";
    *(_QWORD *)(a1 + 248) = "tt";
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_WORD *)(a1 + 36) &= 0xFEu;
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 88) = 0;
    *(_WORD *)(a1 + 92) &= 0xFEu;
    *(_BYTE *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 100) = 0;
    *(_BYTE *)(a1 + 120) = 0;
    *(_BYTE *)(a1 + 144) = 0;
    *(_BYTE *)(a1 + 168) = 0;
    *(_BYTE *)(a1 + 192) = 0;
    *(_BYTE *)(a1 + 216) = 0;
    *(_BYTE *)(a1 + 240) = 0;
    *(_BYTE *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 272) = "private";
    *(_QWORD *)(a1 + 296) = "public";
    *(_BYTE *)(a1 + 288) = 0;
    *(_BYTE *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 320) = "sensitive";
    *(_BYTE *)(a1 + 336) = 0;
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 352) = 0;
    *(_DWORD *)(a1 + 360) = 0;
    *(_WORD *)(a1 + 364) &= 0xFEu;
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 384) = 0;
    *(_BYTE *)(a1 + 392) = 0;
    goto LABEL_22;
  }
LABEL_9:
  v56 = v9 + 1;
  if ( a4 == v9 + 1 )
    goto LABEL_20;
  WORD2(v64[4]) = BYTE4(v64[4]) & 0xFE;
  WORD2(v64[11]) = BYTE4(v64[11]) & 0xFE;
  v64[13] = "'";
  v64[16] = "-";
  v64[19] = "+";
  v64[22] = " ";
  v64[25] = "#";
  v64[28] = "0";
  v64[31] = "tt";
  v64[0] = 0;
  LODWORD(v64[1]) = 0;
  memset(&v64[2], 0, 20);
  LOBYTE(v64[5]) = 1;
  memset(&v64[6], 0, 20);
  v64[9] = 0;
  v64[10] = 0x300000000LL;
  LODWORD(v64[11]) = 0;
  LOBYTE(v64[12]) = 0;
  HIDWORD(v64[12]) = 0;
  LOBYTE(v64[15]) = 0;
  LOBYTE(v64[18]) = 0;
  LOBYTE(v64[21]) = 0;
  LOBYTE(v64[24]) = 0;
  LOBYTE(v64[27]) = 0;
  LOBYTE(v64[30]) = 0;
  LOBYTE(v64[33]) = 0;
  v64[34] = "private";
  v64[37] = "public";
  v64[40] = "sensitive";
  LOBYTE(v64[36]) = 0;
  WORD2(v64[45]) = BYTE4(v64[45]) & 0xFE;
  LOBYTE(v64[39]) = 0;
  LOBYTE(v64[42]) = 0;
  memset(&v64[43], 0, 20);
  v64[46] = 0;
  v64[47] = 0;
  if ( (unsigned __int8)sub_C78820((__int64)a2, (__int64)v64, (__int64)v9, &v56, a4) )
  {
    *(_WORD *)(a1 + 36) &= 0xFEu;
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 80) = 0x300000000LL;
LABEL_25:
    *(_DWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = "'";
    *(_QWORD *)(a1 + 128) = "-";
    *(_QWORD *)(a1 + 152) = "+";
    *(_QWORD *)(a1 + 176) = " ";
    *(_QWORD *)(a1 + 200) = "#";
    *(_QWORD *)(a1 + 224) = "0";
    *(_QWORD *)(a1 + 248) = "tt";
    *(_QWORD *)(a1 + 272) = "private";
    *(_QWORD *)(a1 + 296) = "public";
    *(_WORD *)(a1 + 92) &= 0xFEu;
    *(_BYTE *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 100) = 0;
    *(_BYTE *)(a1 + 120) = 0;
    *(_BYTE *)(a1 + 144) = 0;
    *(_BYTE *)(a1 + 168) = 0;
    *(_BYTE *)(a1 + 192) = 0;
    *(_BYTE *)(a1 + 216) = 0;
    *(_BYTE *)(a1 + 240) = 0;
    *(_BYTE *)(a1 + 264) = 0;
    *(_BYTE *)(a1 + 288) = 0;
    *(_BYTE *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 320) = "sensitive";
    *(_BYTE *)(a1 + 336) = 0;
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 352) = 0;
    *(_DWORD *)(a1 + 360) = 0;
    *(_WORD *)(a1 + 364) &= 0xFEu;
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 384) = 0;
    v9 = v56;
    *(_BYTE *)(a1 + 392) = 1;
    goto LABEL_22;
  }
  v13 = v56;
  v14 = v56;
  if ( a4 == v56 )
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_WORD *)(a1 + 36) &= 0xFEu;
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 80) = 0x300000000LL;
    goto LABEL_21;
  }
  v15 = *v56;
  if ( *v56 != 123 )
    goto LABEL_13;
  v13 = v56 + 1;
  v54 = 0;
  ++v56;
  v55 = 0;
  do
  {
    while ( 1 )
    {
      v58 = v60;
      v23 = (__m128i *)operator new(0x4Fu);
      *v23 = _mm_load_si128((const __m128i *)&xmmword_2385020);
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385030);
      strcpy(v23[4].m128i_i8, "space:]]*(,|})");
      v23[1] = si128;
      v23[2] = _mm_load_si128((const __m128i *)&xmmword_2385040);
      v23[3] = _mm_load_si128(xmmword_2385050);
      v58 = v23;
      v60[0] = 78;
      v59 = 78;
      sub_220FC00(v57, v23, 78, 0);
      ptr[0] = &v62;
      ptr[1] = (void *)0x200000000LL;
      if ( (unsigned __int8)sub_2210080(v57, v13, a4 - v13, ptr, 0) )
      {
        v25 = (int *)ptr[0];
        v26 = *((_QWORD *)ptr[0] + 2);
        v56 += *((_QWORD *)ptr[0] + 1);
        v27 = v26;
        v54 = v26;
        v28 = *((_QWORD *)ptr[0] + 3);
        if ( v28 <= 3 )
          goto LABEL_50;
        if ( *(_DWORD *)v27 != 1802723693 )
        {
          if ( v28 == 9 )
          {
            if ( *(_QWORD *)v27 == 0x76697469736E6573LL && *(_BYTE *)(v27 + 8) == 101 )
            {
              v55 = 5;
              goto LABEL_59;
            }
            if ( v55 == 5 )
              goto LABEL_59;
          }
          else
          {
LABEL_50:
            if ( v55 == 5 )
              goto LABEL_59;
            if ( v28 == 7 && *(_DWORD *)v54 == 1986622064 && *(_WORD *)(v54 + 4) == 29793 && *(_BYTE *)(v54 + 6) == 101 )
            {
              v55 = 1;
              goto LABEL_59;
            }
          }
          if ( !v55 && v28 == 6 && *(_DWORD *)v54 == 1818391920 )
          {
            v29 = 0;
            if ( *(_WORD *)(v54 + 4) == 25449 )
              v29 = 2;
            v55 = v29;
          }
          goto LABEL_59;
        }
        v34 = 0;
        if ( v28 != 4 )
        {
          v34 = v28 - 5;
          v28 = 5;
        }
        v64[47] = v34;
        v64[46] = v54 + v28;
      }
      else
      {
        if ( a4 == v13 )
          goto LABEL_76;
        if ( *v13 == 44 || *v13 == 125 )
        {
          v33 = 1;
        }
        else
        {
          v30 = v13 + 1;
          if ( a4 == v13 + 1 )
            goto LABEL_76;
          while ( 1 )
          {
            v31 = v30 + 1;
            if ( *v30 == 44 || *v30 == 125 )
              break;
            ++v30;
            if ( a4 == v31 )
              goto LABEL_76;
          }
          if ( v30 - v13 == -1 )
          {
LABEL_76:
            *(_QWORD *)a1 = 0;
            *(_QWORD *)(a1 + 80) = 0x300000000LL;
            *(_QWORD *)(a1 + 104) = "'";
            *(_QWORD *)(a1 + 128) = "-";
            *(_QWORD *)(a1 + 152) = "+";
            *(_QWORD *)(a1 + 176) = " ";
            *(_QWORD *)(a1 + 200) = "#";
            *(_QWORD *)(a1 + 224) = "0";
            *(_QWORD *)(a1 + 248) = "tt";
            *(_DWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = 0;
            *(_QWORD *)(a1 + 24) = 0;
            *(_DWORD *)(a1 + 32) = 0;
            *(_WORD *)(a1 + 36) &= 0xFEu;
            *(_BYTE *)(a1 + 40) = 1;
            *(_QWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 56) = 0;
            *(_DWORD *)(a1 + 64) = 0;
            *(_QWORD *)(a1 + 72) = 0;
            *(_DWORD *)(a1 + 88) = 0;
            *(_WORD *)(a1 + 92) &= 0xFEu;
            *(_BYTE *)(a1 + 96) = 0;
            *(_DWORD *)(a1 + 100) = 0;
            *(_BYTE *)(a1 + 120) = 0;
            *(_BYTE *)(a1 + 144) = 0;
            *(_BYTE *)(a1 + 168) = 0;
            *(_BYTE *)(a1 + 192) = 0;
            *(_BYTE *)(a1 + 216) = 0;
            *(_BYTE *)(a1 + 240) = 0;
            *(_BYTE *)(a1 + 264) = 0;
            *(_QWORD *)(a1 + 272) = "private";
            v32 = (int *)ptr[0];
            *(_QWORD *)(a1 + 296) = "public";
            *(_BYTE *)(a1 + 288) = 0;
            *(_BYTE *)(a1 + 312) = 0;
            *(_QWORD *)(a1 + 320) = "sensitive";
            *(_BYTE *)(a1 + 336) = 0;
            *(_QWORD *)(a1 + 344) = 0;
            *(_QWORD *)(a1 + 352) = 0;
            *(_DWORD *)(a1 + 360) = 0;
            *(_WORD *)(a1 + 364) &= 0xFEu;
            *(_QWORD *)(a1 + 368) = 0;
            *(_QWORD *)(a1 + 376) = 0;
            *(_QWORD *)(a1 + 384) = 0;
            *(_BYTE *)(a1 + 392) = 1;
            if ( v32 != &v62 )
              free(v32);
            sub_220FCB0(v57);
            if ( v58 != v60 )
              operator delete(v58);
LABEL_80:
            v9 = v56;
            goto LABEL_22;
          }
          v33 = v30 - v13 + 1;
        }
        v56 += v33;
        v25 = (int *)ptr[0];
      }
LABEL_59:
      if ( v25 != &v62 )
        free(v25);
      sub_220FCB0(v57);
      if ( v58 == v60 )
        break;
      operator delete(v58);
      v14 = v56;
      v13 = v56;
      if ( *(v56 - 1) != 44 )
        goto LABEL_63;
    }
    v14 = v56;
    v13 = v56;
  }
  while ( *(v56 - 1) == 44 );
LABEL_63:
  if ( v55 == 1 )
  {
    LOBYTE(v64[36]) = 1;
    v64[35] = v54;
  }
  else if ( v55 )
  {
    if ( v55 == 2 )
    {
      LOBYTE(v64[39]) = 1;
      v64[38] = v54;
    }
    else
    {
      LOBYTE(v64[42]) = 1;
      v64[41] = v54;
    }
  }
  if ( a4 == v14 )
    goto LABEL_96;
  v15 = *v14;
LABEL_13:
  v16 = v14 + 1;
  while ( 2 )
  {
    switch ( v15 )
    {
      case ' ':
        LOBYTE(v64[24]) = 1;
        v64[23] = v13;
        goto LABEL_27;
      case '#':
        LOBYTE(v64[27]) = 1;
        v64[26] = v13;
        goto LABEL_27;
      case '\'':
        LOBYTE(v64[15]) = 1;
        v64[14] = v13;
        goto LABEL_27;
      case '+':
        LOBYTE(v64[21]) = 1;
        v64[20] = v13;
        goto LABEL_27;
      case '-':
        LOBYTE(v64[18]) = 1;
        v64[17] = v13;
        goto LABEL_27;
      case '0':
        LOBYTE(v64[30]) = 1;
        v64[29] = v13;
LABEL_27:
        v13 = v16;
        v56 = v16;
        if ( a4 == v16 )
          goto LABEL_96;
        v15 = *v16++;
        continue;
      default:
        if ( a4 == v13 )
        {
          v13 = v56;
LABEL_96:
          *(_QWORD *)a1 = 0;
          v9 = v13;
          *(_QWORD *)(a1 + 80) = 0x300000000LL;
          *(_QWORD *)(a1 + 104) = "'";
          *(_QWORD *)(a1 + 128) = "-";
          *(_QWORD *)(a1 + 152) = "+";
          *(_QWORD *)(a1 + 176) = " ";
          *(_QWORD *)(a1 + 200) = "#";
          *(_QWORD *)(a1 + 224) = "0";
          *(_QWORD *)(a1 + 248) = "tt";
          *(_DWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 16) = 0;
          *(_QWORD *)(a1 + 24) = 0;
          *(_DWORD *)(a1 + 32) = 0;
          *(_WORD *)(a1 + 36) &= 0xFEu;
          *(_BYTE *)(a1 + 40) = 1;
          *(_QWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 56) = 0;
          *(_DWORD *)(a1 + 64) = 0;
          *(_QWORD *)(a1 + 72) = 0;
          *(_DWORD *)(a1 + 88) = 0;
          *(_WORD *)(a1 + 92) &= 0xFEu;
          *(_BYTE *)(a1 + 96) = 0;
          *(_DWORD *)(a1 + 100) = 0;
          *(_BYTE *)(a1 + 120) = 0;
          *(_BYTE *)(a1 + 144) = 0;
          *(_BYTE *)(a1 + 168) = 0;
          *(_BYTE *)(a1 + 192) = 0;
          *(_BYTE *)(a1 + 216) = 0;
          *(_BYTE *)(a1 + 240) = 0;
          *(_BYTE *)(a1 + 264) = 0;
          *(_QWORD *)(a1 + 272) = "private";
          *(_QWORD *)(a1 + 296) = "public";
          *(_BYTE *)(a1 + 288) = 0;
          *(_BYTE *)(a1 + 312) = 0;
          *(_QWORD *)(a1 + 320) = "sensitive";
          *(_BYTE *)(a1 + 336) = 0;
          *(_QWORD *)(a1 + 344) = 0;
          *(_QWORD *)(a1 + 352) = 0;
          *(_DWORD *)(a1 + 360) = 0;
          *(_WORD *)(a1 + 364) &= 0xFEu;
          *(_QWORD *)(a1 + 368) = 0;
          *(_QWORD *)(a1 + 376) = 0;
          *(_QWORD *)(a1 + 384) = 0;
          *(_BYTE *)(a1 + 392) = 1;
          goto LABEL_22;
        }
        v17 = nullptr;
        if ( !LOBYTE(v64[12]) )
          v17 = a5;
        if ( (unsigned __int8)sub_C78720((__int64)a2, (__int64)v64, (__int64)v9, &v56, a4, v17) )
          goto LABEL_94;
        if ( a4 == v56 )
          goto LABEL_20;
        if ( *v56 == 46 )
        {
          if ( a4 == ++v56 )
            goto LABEL_20;
          if ( LOBYTE(v64[12]) )
          {
            sub_C78500((__int64)ptr, (__int64)a2, (__int64)v9, &v56, a4, 1u);
            if ( HIDWORD(ptr[1]) == 3 )
            {
LABEL_94:
              *(_QWORD *)a1 = 0;
              *(_DWORD *)(a1 + 8) = 0;
              *(_QWORD *)(a1 + 16) = 0;
              *(_QWORD *)(a1 + 24) = 0;
              *(_DWORD *)(a1 + 32) = 0;
              *(_WORD *)(a1 + 36) &= 0xFEu;
              *(_BYTE *)(a1 + 40) = 1;
              *(_QWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 56) = 0;
              *(_DWORD *)(a1 + 64) = 0;
              *(_QWORD *)(a1 + 72) = 0;
              *(_QWORD *)(a1 + 80) = 0x300000000LL;
              goto LABEL_25;
            }
            *(__m128i *)&v64[43] = _mm_load_si128((const __m128i *)ptr);
          }
          else
          {
            sub_C78430((__int64)ptr, &v56, a4, a5);
            *(__m128i *)&v64[43] = _mm_load_si128((const __m128i *)ptr);
          }
          LODWORD(v64[45]) = v62;
          BYTE4(v64[45]) = v63;
          BYTE5(v64[45]) = 1;
          if ( a4 == v56 )
            goto LABEL_20;
        }
        if ( (unsigned __int8)sub_C78970(a2, (__int64)v64, &v56, a4, a6) )
          goto LABEL_94;
        v19 = sub_C78A60((__int64)v64, &v56, a4, a6, 0);
        v20 = v56;
        if ( v19 && a4 == v56 )
        {
LABEL_20:
          *(_WORD *)(a1 + 36) &= 0xFEu;
          *(_QWORD *)a1 = 0;
          *(_DWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 16) = 0;
          *(_QWORD *)(a1 + 24) = 0;
          *(_DWORD *)(a1 + 32) = 0;
          *(_BYTE *)(a1 + 40) = 1;
          *(_QWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 56) = 0;
          *(_DWORD *)(a1 + 64) = 0;
          *(_QWORD *)(a1 + 72) = 0;
          *(_QWORD *)(a1 + 80) = 0x300000000LL;
LABEL_21:
          *(_DWORD *)(a1 + 88) = 0;
          v9 = a4;
          *(_QWORD *)(a1 + 104) = "'";
          *(_QWORD *)(a1 + 128) = "-";
          *(_QWORD *)(a1 + 152) = "+";
          *(_QWORD *)(a1 + 176) = " ";
          *(_QWORD *)(a1 + 200) = "#";
          *(_QWORD *)(a1 + 224) = "0";
          *(_QWORD *)(a1 + 248) = "tt";
          *(_QWORD *)(a1 + 272) = "private";
          *(_QWORD *)(a1 + 296) = "public";
          *(_WORD *)(a1 + 92) &= 0xFEu;
          *(_BYTE *)(a1 + 96) = 0;
          *(_DWORD *)(a1 + 100) = 0;
          *(_BYTE *)(a1 + 120) = 0;
          *(_BYTE *)(a1 + 144) = 0;
          *(_BYTE *)(a1 + 168) = 0;
          *(_BYTE *)(a1 + 192) = 0;
          *(_BYTE *)(a1 + 216) = 0;
          *(_BYTE *)(a1 + 240) = 0;
          *(_BYTE *)(a1 + 264) = 0;
          *(_BYTE *)(a1 + 288) = 0;
          *(_BYTE *)(a1 + 312) = 0;
          *(_QWORD *)(a1 + 320) = "sensitive";
          *(_BYTE *)(a1 + 336) = 0;
          *(_QWORD *)(a1 + 344) = 0;
          *(_QWORD *)(a1 + 352) = 0;
          *(_DWORD *)(a1 + 360) = 0;
          *(_WORD *)(a1 + 364) &= 0xFEu;
          *(_QWORD *)(a1 + 368) = 0;
          *(_QWORD *)(a1 + 376) = 0;
          *(_QWORD *)(a1 + 384) = 0;
          *(_BYTE *)(a1 + 392) = 1;
          goto LABEL_22;
        }
        v21 = *v56;
        v22 = nullptr;
        if ( *v56 == 91 )
        {
          v35 = ++v56;
          if ( a4 == v20 + 1 )
          {
            v37 = a4;
          }
          else
          {
            if ( v20[1] == 93 )
            {
LABEL_116:
              sub_EA5B00(a1);
              *(_BYTE *)(a1 + 392) = 1;
              v9 = v56;
              *(_QWORD *)(a1 + 384) = 0;
              goto LABEL_22;
            }
            for ( i = v20 + 1; ; ++i )
            {
              v37 = i + 1;
              v56 = i + 1;
              if ( a4 == i + 1 )
                break;
              if ( i[1] == 93 )
              {
                if ( v37 - v35 == 2 && *(_WORD *)(v20 + 1) == 29812 )
                {
                  v64[32] = v20 + 1;
                  v22 = v20;
                  LOBYTE(v64[33]) = 1;
                  v20 = i + 2;
                  v56 = i + 2;
                  v21 = i[2];
                  goto LABEL_45;
                }
                goto LABEL_116;
              }
            }
          }
          *(_QWORD *)a1 = 0;
          v9 = v37;
          *(_QWORD *)(a1 + 80) = 0x300000000LL;
          *(_QWORD *)(a1 + 104) = "'";
          *(_QWORD *)(a1 + 128) = "-";
          *(_QWORD *)(a1 + 152) = "+";
          *(_QWORD *)(a1 + 176) = " ";
          *(_QWORD *)(a1 + 200) = "#";
          *(_QWORD *)(a1 + 224) = "0";
          *(_QWORD *)(a1 + 248) = "tt";
          *(_DWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 16) = 0;
          *(_QWORD *)(a1 + 24) = 0;
          *(_DWORD *)(a1 + 32) = 0;
          *(_WORD *)(a1 + 36) &= 0xFEu;
          *(_BYTE *)(a1 + 40) = 1;
          *(_QWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 56) = 0;
          *(_DWORD *)(a1 + 64) = 0;
          *(_QWORD *)(a1 + 72) = 0;
          *(_DWORD *)(a1 + 88) = 0;
          *(_WORD *)(a1 + 92) &= 0xFEu;
          *(_BYTE *)(a1 + 96) = 0;
          *(_DWORD *)(a1 + 100) = 0;
          *(_BYTE *)(a1 + 120) = 0;
          *(_BYTE *)(a1 + 144) = 0;
          *(_BYTE *)(a1 + 168) = 0;
          *(_BYTE *)(a1 + 192) = 0;
          *(_BYTE *)(a1 + 216) = 0;
          *(_BYTE *)(a1 + 240) = 0;
          *(_BYTE *)(a1 + 264) = 0;
          *(_QWORD *)(a1 + 272) = "private";
          *(_QWORD *)(a1 + 296) = "public";
          *(_BYTE *)(a1 + 288) = 0;
          *(_BYTE *)(a1 + 312) = 0;
          *(_QWORD *)(a1 + 320) = "sensitive";
          *(_BYTE *)(a1 + 336) = 0;
          *(_QWORD *)(a1 + 344) = 0;
          *(_QWORD *)(a1 + 352) = 0;
          *(_DWORD *)(a1 + 360) = 0;
          *(_WORD *)(a1 + 364) &= 0xFEu;
          *(_QWORD *)(a1 + 368) = 0;
          *(_QWORD *)(a1 + 376) = 0;
          *(_QWORD *)(a1 + 384) = 0;
          *(_BYTE *)(a1 + 392) = 1;
        }
        else
        {
LABEL_45:
          if ( v21 )
          {
            v13 = v20 + 1;
            v56 = v20 + 1;
            switch ( *v20 )
            {
              case '%':
                v38 = 24;
                goto LABEL_122;
              case '@':
                v40 = -1;
                LOBYTE(v64[5]) = 1;
                v64[6] = v20;
                v64[7] = 0;
                LODWORD(v64[8]) = 33;
                if ( LOBYTE(v64[12]) )
                  goto LABEL_128;
                goto LABEL_125;
              case 'A':
                v38 = 20;
                goto LABEL_122;
              case 'B':
                v38 = 6;
                goto LABEL_122;
              case 'C':
                v38 = 25;
                goto LABEL_122;
              case 'D':
                v45 = *(unsigned int *)(a7 + 260);
                if ( (unsigned int)v45 > 0x1F )
                  goto LABEL_118;
                v46 = 4160750114LL;
                if ( !_bittest64(&v46, v45) )
                  goto LABEL_118;
                v38 = 3;
                goto LABEL_122;
              case 'E':
                v38 = 16;
                goto LABEL_122;
              case 'F':
                v38 = 14;
                goto LABEL_122;
              case 'G':
                v38 = 18;
                goto LABEL_122;
              case 'K':
                if ( (*(_BYTE *)(a6 + 164) & 1) == 0 )
                  goto LABEL_118;
                v38 = 30;
                goto LABEL_122;
              case 'O':
                v43 = *(unsigned int *)(a7 + 260);
                if ( (unsigned int)v43 > 0x1F )
                  goto LABEL_118;
                v44 = 4160750114LL;
                if ( !_bittest64(&v44, v43) )
                  goto LABEL_118;
                v38 = 8;
                goto LABEL_122;
              case 'P':
                v38 = 27;
                goto LABEL_122;
              case 'R':
                if ( (*(_BYTE *)(a6 + 164) & 1) == 0 )
                  goto LABEL_118;
                v38 = 32;
                goto LABEL_122;
              case 'S':
                v38 = 26;
                goto LABEL_122;
              case 'U':
                v48 = *(unsigned int *)(a7 + 260);
                if ( (unsigned int)v48 > 0x1F )
                  goto LABEL_118;
                v49 = 4160750114LL;
                if ( !_bittest64(&v49, v48) )
                  goto LABEL_118;
                v38 = 10;
                goto LABEL_122;
              case 'X':
                v38 = 12;
                goto LABEL_122;
              case 'Z':
                v50 = v22;
                v47 = sub_EA5AD0(a7 + 216);
                v22 = v50;
                if ( !v47 )
                  goto LABEL_118;
                v38 = 28;
                goto LABEL_122;
              case 'a':
                v38 = 19;
                goto LABEL_122;
              case 'b':
                v38 = 5;
                goto LABEL_122;
              case 'c':
                v38 = 1;
                goto LABEL_122;
              case 'd':
                v38 = 2;
                goto LABEL_122;
              case 'e':
                v38 = 15;
                goto LABEL_122;
              case 'f':
                v38 = 13;
                goto LABEL_122;
              case 'g':
                v38 = 17;
                goto LABEL_122;
              case 'i':
                v38 = 4;
                goto LABEL_122;
              case 'k':
                if ( (*(_BYTE *)(a6 + 164) & 1) == 0 )
                  goto LABEL_118;
                v38 = 29;
                goto LABEL_122;
              case 'm':
                v38 = 38;
                goto LABEL_122;
              case 'n':
                if ( (*(_BYTE *)(a6 + 47) & 0x20) != 0 )
                  goto LABEL_118;
                v38 = 23;
                goto LABEL_122;
              case 'o':
                v38 = 7;
                goto LABEL_122;
              case 'p':
                v38 = 22;
                goto LABEL_122;
              case 'r':
                if ( (*(_BYTE *)(a6 + 164) & 1) == 0 )
                  goto LABEL_118;
                v38 = 31;
LABEL_122:
                if ( v22 )
                  goto LABEL_96;
                v39 = 0x4001000001LL;
                v40 = v38 - 34;
                LOBYTE(v64[5]) = 1;
                v41 = _bittest64(&v39, v38);
                v64[6] = v20;
                v64[7] = 0;
                LODWORD(v64[8]) = v38;
                if ( !v41 && !LOBYTE(v64[12]) )
                {
LABEL_125:
                  v42 = *a5 + 1;
                  HIDWORD(v64[12]) = *a5;
                  *a5 = v42;
                }
                if ( v40 <= 1 )
                  ++*a5;
LABEL_128:
                *(_QWORD *)(a1 + 384) = v9;
                qmemcpy((void *)a1, v64, 0x180u);
                *(_BYTE *)(a1 + 392) = 0;
                v9 = v20 + 1;
                break;
              case 's':
                v38 = 21;
                goto LABEL_122;
              case 'u':
                v38 = 9;
                goto LABEL_122;
              case 'x':
                v38 = 11;
                goto LABEL_122;
              default:
LABEL_118:
                LOBYTE(v64[5]) = 1;
                v64[6] = v20;
                v64[7] = 0;
                LODWORD(v64[8]) = 0;
                LODWORD(ptr[0]) = (_DWORD)v13 - (_DWORD)v9;
                if ( (unsigned __int8)sub_C78CD0((__int64)v9, (unsigned __int64)a4, ptr) )
                {
                  LOBYTE(v64[5]) = 1;
                  v64[6] = v20;
                  LODWORD(v64[8]) = 0;
                  v64[7] = &v9[LODWORD(ptr[0])];
                }
                sub_EA5B00(a1);
                *(_BYTE *)(a1 + 392) = 0;
                *(_QWORD *)(a1 + 384) = 0;
                goto LABEL_80;
            }
          }
          else
          {
            *(_QWORD *)a1 = 0;
            v9 = v20;
            *(_QWORD *)(a1 + 80) = 0x300000000LL;
            *(_QWORD *)(a1 + 104) = "'";
            *(_QWORD *)(a1 + 128) = "-";
            *(_QWORD *)(a1 + 152) = "+";
            *(_QWORD *)(a1 + 176) = " ";
            *(_QWORD *)(a1 + 200) = "#";
            *(_QWORD *)(a1 + 224) = "0";
            *(_QWORD *)(a1 + 248) = "tt";
            *(_DWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = 0;
            *(_QWORD *)(a1 + 24) = 0;
            *(_DWORD *)(a1 + 32) = 0;
            *(_WORD *)(a1 + 36) &= 0xFEu;
            *(_BYTE *)(a1 + 40) = 1;
            *(_QWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 56) = 0;
            *(_DWORD *)(a1 + 64) = 0;
            *(_QWORD *)(a1 + 72) = 0;
            *(_DWORD *)(a1 + 88) = 0;
            *(_WORD *)(a1 + 92) &= 0xFEu;
            *(_BYTE *)(a1 + 96) = 0;
            *(_DWORD *)(a1 + 100) = 0;
            *(_BYTE *)(a1 + 120) = 0;
            *(_BYTE *)(a1 + 144) = 0;
            *(_BYTE *)(a1 + 168) = 0;
            *(_BYTE *)(a1 + 192) = 0;
            *(_BYTE *)(a1 + 216) = 0;
            *(_BYTE *)(a1 + 240) = 0;
            *(_BYTE *)(a1 + 264) = 0;
            *(_QWORD *)(a1 + 272) = "private";
            *(_QWORD *)(a1 + 296) = "public";
            *(_BYTE *)(a1 + 288) = 0;
            *(_BYTE *)(a1 + 312) = 0;
            *(_QWORD *)(a1 + 320) = "sensitive";
            *(_BYTE *)(a1 + 336) = 0;
            *(_QWORD *)(a1 + 344) = 0;
            *(_QWORD *)(a1 + 352) = 0;
            *(_DWORD *)(a1 + 360) = 0;
            *(_WORD *)(a1 + 364) &= 0xFEu;
            *(_QWORD *)(a1 + 368) = 0;
            *(_QWORD *)(a1 + 376) = 0;
            *(_QWORD *)(a1 + 384) = 0;
            *(_BYTE *)(a1 + 392) = 1;
          }
        }
LABEL_22:
        *a3 = v9;
        return a1;
    }
  }
}

