/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140065D10
// Address: 0x0000000140065D10

//----- (0000000140065D10) ----------------------------------------------------
__int64 __fastcall sub_140065D10(char **a1, _OWORD *a2)
{
  int v2; // esi
  char *v3; // rbx
  int v4; // r15d
  int v5; // r12d
  int v7; // r13d
  char *v8; // rdi
  int v9; // ecx
  __m128i v10; // xmm0
  __int16 v11; // bx
  int v12; // r13d
  __m128i v13; // xmm0
  unsigned __int16 v14; // r9
  unsigned int v15; // r11d
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned int v18; // ebx
  unsigned int v19; // edi
  unsigned int v20; // esi
  int v21; // r14d
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  char v30; // al
  char *v31; // rbx
  char *v32; // rbx
  unsigned __int16 epi16; // si
  unsigned __int16 v34; // r15
  unsigned __int16 v35; // r13
  int v36; // eax
  char v37; // al
  char *v38; // rcx
  int v39; // esi
  int v40; // ecx
  int v41; // r12d
  unsigned __int16 v42; // r9
  unsigned int v43; // edx
  unsigned int v44; // ecx
  unsigned __int16 v45; // r10
  unsigned int v46; // edx
  unsigned __int16 v47; // r11
  unsigned int v48; // ecx
  unsigned int v49; // edx
  unsigned int v50; // ecx
  unsigned int v51; // edx
  int v52; // edx
  int v53; // eax
  int v54; // r15d
  int v55; // eax
  int v56; // r13d
  __int16 *v57; // rsi
  int v58; // ebx
  int v59; // ebx
  _WORD *v60; // rdx
  __int16 v61; // ax
  __int16 v62; // cx
  __int16 v63; // ax
  __int16 v64; // cx
  __int16 v65; // ax
  __int16 v66; // cx
  __int16 v67; // ax
  int v68; // [rsp+30h] [rbp-D0h]
  unsigned int v69; // [rsp+40h] [rbp-C0h]
  unsigned int v70; // [rsp+44h] [rbp-BCh]
  unsigned int v71; // [rsp+48h] [rbp-B8h]
  int v72; // [rsp+4Ch] [rbp-B4h]
  int v73; // [rsp+50h] [rbp-B0h]
  char v74; // [rsp+54h] [rbp-ACh]
  unsigned int v75; // [rsp+58h] [rbp-A8h]
  __int128 v76; // [rsp+60h] [rbp-A0h] BYREF
  int v77; // [rsp+70h] [rbp-90h]
  int v78; // [rsp+74h] [rbp-8Ch]
  int v79; // [rsp+78h] [rbp-88h]
  int v80; // [rsp+7Ch] [rbp-84h]
  int v81; // [rsp+80h] [rbp-80h]
  char **v82; // [rsp+88h] [rbp-78h]
  _WORD *v83; // [rsp+98h] [rbp-68h]
  __m128i v84; // [rsp+A0h] [rbp-60h] BYREF
  int v85; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v86; // [rsp+B4h] [rbp-4Ch]
  __m128i v87; // [rsp+B8h] [rbp-48h] BYREF
  int v88; // [rsp+C8h] [rbp-38h]
  unsigned __int16 v89; // [rsp+CCh] [rbp-34h]
  _BYTE v90[48]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v91; // [rsp+100h] [rbp+0h] BYREF

  v83 = a2;
  v82 = a1;
  v2 = 0;
  LOWORD(v80) = 0;
  *a2 = 0;
  v3 = *a1;
  v4 = 0;
  v74 = 0;
  v5 = 0;
  v77 = 0;
  v73 = 0;
  v68 = 0;
  v78 = 0;
  v75 = 3;
  while ( *v3 >= 0 && isspace((unsigned __int8)*v3) )
    ++v3;
  if ( !*v3 )
    return 3;
  *v82 = v3;
  sub_1400621E0(v90, v3, 80);
  v7 = v90[0];
  v8 = v90;
  v9 = 0;
  *(_QWORD *)&v76 = v90;
  v88 = 0;
  v10 = 0;
  v89 = 0;
  v87 = 0;
  if ( !v90[0] )
  {
    epi16 = _mm_extract_epi16((__m128i)0LL, 6);
    LOWORD(v72) = _mm_extract_epi16((__m128i)0LL, 3);
    v34 = _mm_extract_epi16((__m128i)0LL, 5);
    v35 = _mm_extract_epi16((__m128i)0LL, 4);
    v11 = _mm_extract_epi16((__m128i)0LL, 2);
LABEL_67:
    v41 = v5 - v73;
    if ( v41 > 0 )
    {
      while ( !v10.m128i_i16[2] )
      {
        v85 = v9;
        v84 = v10;
        v86 = 0;
        sub_140065AC0(&v84);
        sub_140065AC0(&v84);
        v43 = v86 + v42;
        v86 += v42;
        v44 = HIWORD(v85) + HIWORD(v43) + HIWORD(v88);
        HIWORD(v85) += HIWORD(v43) + HIWORD(v88);
        v46 = v45 + (HIWORD(v44) & 1) + (unsigned __int16)v85;
        LOWORD(v85) = v45 + (BYTE2(v44) & 1) + v85;
        v48 = v47 + (HIWORD(v46) & 1) + v84.m128i_u16[7];
        v84.m128i_i16[7] += v47 + (BYTE2(v46) & 1);
        v49 = epi16 + (HIWORD(v48) & 1) + v84.m128i_u16[6];
        v84.m128i_i16[6] += epi16 + (BYTE2(v48) & 1);
        v50 = v34 + (HIWORD(v49) & 1) + v84.m128i_u16[5];
        v84.m128i_i16[5] += v34 + (BYTE2(v49) & 1);
        v51 = v35 + (HIWORD(v50) & 1) + v84.m128i_u16[4];
        v84.m128i_i16[4] += v35 + (BYTE2(v50) & 1);
        v52 = v84.m128i_u16[3] + (HIWORD(v51) & 1);
        v84.m128i_i16[3] = v52 + v72;
        v84.m128i_i16[2] += v11 + (((v52 + (unsigned int)(unsigned __int16)v72) >> 16) & 1);
        sub_140065AC0(&v84);
        if ( v84.m128i_i16[2] )
          break;
        v10 = v84;
        v9 = v85;
        --v41;
        v88 = v85;
        v89 = 0;
        v87 = v84;
        if ( v41 <= 0 )
          break;
        epi16 = _mm_extract_epi16(v84, 6);
        LOWORD(v72) = _mm_extract_epi16(v84, 3);
        v34 = _mm_extract_epi16(v84, 5);
        v35 = _mm_extract_epi16(v84, 4);
        v11 = _mm_extract_epi16(v84, 2);
      }
    }
    v53 = sub_1400656A0(&v87);
    if ( v53 <= 112 )
    {
      v75 = 2;
      if ( !sub_140066F00((__int64)&v87, v74, 0, 16494 - v53, 112) )
        goto LABEL_91;
      v54 = v87.m128i_u16[1];
      if ( v41 )
      {
        v56 = 1;
        if ( v41 < 0 )
        {
          v41 = -v41;
          v56 = -1;
          if ( v41 > 4096 )
          {
            v84.m128i_i64[0] = 0xC460000075250000uLL;
            v84.m128i_i64[1] = 0xC94C979A8A205202uLL;
            v85 = -2142563009;
            v86 = 0;
            sub_140065140(&v84, &v87);
            v54 -= 13606;
            v41 -= 4096;
          }
        }
        v57 = (__int16 *)&qword_1400ACC40;
        v58 = 1;
        v76 = xmmword_1400ACB48;
        do
        {
          if ( (v58 & v41) != 0 )
            sub_140067280((__int16 *)&v76, v57, (__int64)&v76);
          v57 -= 8;
          v58 *= 2;
        }
        while ( v58 <= 4096 );
        v84.m128i_i16[0] = SHIWORD(v76) >> 15;
        v86 = 0;
        v84.m128i_i16[3] = WORD6(v76);
        v84.m128i_i16[4] = WORD5(v76);
        v84.m128i_i16[5] = WORD4(v76);
        v84.m128i_i16[6] = WORD3(v76);
        v84.m128i_i16[7] = WORD2(v76);
        v59 = HIWORD(v76) & 0x7FFF;
        LOWORD(v85) = WORD1(v76);
        HIWORD(v85) = v76;
        *(__int32 *)((char *)v84.m128i_i32 + 2) = v59;
        if ( v56 >= 0 )
        {
          v55 = sub_1400654B0(&v84, (__int64)&v87);
          v54 = v59 + v54 - 16382;
        }
        else
        {
          v55 = sub_140065140(&v84, &v87);
          v54 += 0x3FFF - v59;
        }
      }
      else
      {
        v55 = 0;
      }
      if ( !sub_140066F00((__int64)&v87, v55 != 0, 0, v54, 112) )
        goto LABEL_91;
    }
    else
    {
      v87 = 0;
      v88 = 0;
    }
    v60 = v83;
    v61 = v87.m128i_i16[1];
    v75 = 1;
    if ( (_WORD)v80 )
      v61 = v87.m128i_i16[1] | 0x8000;
    v62 = v87.m128i_i16[6];
    v83[7] = v61;
    v63 = v87.m128i_i16[3];
    v60[3] = v62;
    v60[2] = v87.m128i_i16[7];
    v64 = v88;
    v60[6] = v63;
    v65 = v87.m128i_i16[4];
    v60[1] = v64;
    v66 = HIWORD(v88);
    v60[5] = v65;
    v67 = v87.m128i_i16[5];
    *v60 = v66;
    v60[4] = v67;
    goto LABEL_91;
  }
  v11 = v87.m128i_i16[2];
  LOWORD(v70) = v87.m128i_i16[5];
  LOWORD(v69) = v87.m128i_i16[6];
  LOWORD(v72) = v87.m128i_i16[3];
  LOWORD(v71) = v87.m128i_i16[4];
  v79 = v87.m128i_u16[2];
  while ( (v7 & 0x80u) == 0 && isdigit((unsigned __int8)v7) )
  {
    if ( !v2 )
      v2 = 1;
    v81 = v2;
    v12 = v7 - 48;
    if ( v12 || v68 || v4 )
    {
      if ( v11 )
      {
        v30 = v74;
        if ( v12 )
          v30 = 1;
        ++v68;
        v74 = v30;
      }
      else
      {
        if ( v4 )
          ++v73;
        sub_140065AC0(&v87);
        v13 = v87;
        v85 = v88;
        v84 = v87;
        v86 = 0;
        sub_140065AC0(&v84);
        sub_140065AC0(&v84);
        v15 = HIWORD(v85) + HIWORD(v88) + ((v86 + (unsigned int)v89) >> 16);
        v16 = (unsigned __int16)v85 + (HIWORD(v15) & 1) + v14;
        v17 = _mm_extract_epi16(v13, 7) + v84.m128i_u16[7] + (HIWORD(v16) & 1);
        v18 = _mm_extract_epi16(v13, 6) + v84.m128i_u16[6] + (HIWORD(v17) & 1);
        v19 = _mm_extract_epi16(v13, 5) + v84.m128i_u16[5] + (HIWORD(v18) & 1);
        v20 = _mm_extract_epi16(v13, 4) + v84.m128i_u16[4] + (HIWORD(v19) & 1);
        v21 = _mm_extract_epi16(v13, 3) + v84.m128i_u16[3] + (HIWORD(v20) & 1);
        LOWORD(v85) = 0;
        HIWORD(v85) = v12;
        v89 += v86;
        HIWORD(v88) = v15 + v12;
        LOWORD(v88) = ((((unsigned __int16)v15 + (unsigned int)(unsigned __int16)v12) >> 16) & 1) + v16;
        v22 = _mm_extract_epi16((__m128i)0LL, 7);
        v23 = v22
            + (((((((unsigned __int16)v15 + (unsigned int)(unsigned __int16)v12) >> 16) & 1) + (unsigned __int16)v16) >> 16)
             & 1)
            + (unsigned __int16)v17;
        v87.m128i_i16[7] = v22
                         + (((((((unsigned __int16)v15 + (unsigned int)(unsigned __int16)v12) >> 16) & 1)
                            + (unsigned __int16)v16) >> 16)
                          & 1)
                         + v17;
        v24 = _mm_extract_epi16((__m128i)0LL, 6);
        v69 = v24 + (HIWORD(v23) & 1) + (unsigned __int16)v18;
        v87.m128i_i16[6] = v24 + (BYTE2(v23) & 1) + v18;
        v25 = _mm_extract_epi16((__m128i)0LL, 5);
        v26 = (unsigned __int16)v19;
        v8 = (char *)v76;
        v70 = v25 + (HIWORD(v69) & 1) + v26;
        v87.m128i_i16[5] = v25 + (BYTE2(v69) & 1) + v26;
        v27 = _mm_extract_epi16((__m128i)0LL, 4);
        v28 = (unsigned __int16)v20;
        v2 = v81;
        v71 = v27 + (HIWORD(v70) & 1) + v28;
        v87.m128i_i16[4] = v27 + (BYTE2(v70) & 1) + v28;
        v29 = _mm_extract_epi16((__m128i)0LL, 3);
        v72 = v29 + (HIWORD(v71) & 1) + (unsigned __int16)v21;
        v87.m128i_i16[3] = v29 + (BYTE2(v71) & 1) + v21;
        v4 = v77;
        ++v68;
        v79 = (unsigned __int16)(_mm_extract_epi16(v13, 2)
                               + v84.m128i_i16[2]
                               + (BYTE2(v21) & 1)
                               + _mm_extract_epi16((__m128i)0LL, 2)
                               + (BYTE2(v72) & 1));
        v87.m128i_i16[2] = v79;
      }
    }
LABEL_47:
    v7 = *++v8;
    v11 = v79;
    *(_QWORD *)&v76 = v8;
    if ( !v7 )
      goto LABEL_48;
  }
  if ( v7 == 46 )
  {
    if ( v4 )
      goto LABEL_91;
    v31 = v8;
    v4 = 1;
    v77 = 1;
    while ( *v31 >= 0 && isdigit((unsigned __int8)*v31) )
      ++v31;
    if ( tolower((unsigned __int8)*v31) == 101 )
    {
      if ( !v2 && v31 == v8 )
        goto LABEL_91;
    }
    else
    {
      *v31 = 0;
    }
    if ( v31 > v90 )
    {
      v32 = v31 - 1;
      if ( *v32 == 48 )
      {
        v78 = 1;
        do
        {
          *v32 = 122;
          if ( v32 <= v90 )
            break;
          --v32;
        }
        while ( *v32 == 48 );
      }
    }
    if ( !v2 )
      v2 = 1;
    goto LABEL_47;
  }
  if ( v7 == 122 )
  {
    if ( !v78 )
      goto LABEL_91;
    goto LABEL_47;
  }
  if ( ((v7 - 43) & 0xFFFFFFFD) == 0 )
  {
    if ( v2 )
      goto LABEL_48;
    v2 = -1;
    if ( v7 == 45 )
      v80 = 0xFFFF;
    goto LABEL_47;
  }
  v36 = tolower((unsigned __int8)v7);
  if ( !v2 )
    goto LABEL_91;
  if ( v36 == 101 )
  {
    v37 = v8[1];
    v38 = v8 + 1;
    v8 += 2;
    v39 = 1;
    v5 = 0;
    if ( v37 == 45 )
    {
      v39 = -1;
    }
    else if ( v37 != 43 )
    {
      v8 = v38;
    }
    if ( *v8 >= 0 && isdigit((unsigned __int8)*v8) )
    {
      while ( 1 )
      {
        v40 = *v8++;
        v5 = v40 + 2 * (5 * v5 - 24);
        if ( (v5 & 0x8000) != 0 )
          break;
        if ( *v8 < 0 || !isdigit((unsigned __int8)*v8) )
        {
          if ( v39 >= 0 )
            goto LABEL_48;
          if ( v5 )
          {
            v9 = v88;
            v5 = -v5;
            v10 = v87;
            epi16 = v69;
            v34 = v70;
            v35 = v71;
            goto LABEL_67;
          }
          goto LABEL_91;
        }
      }
    }
    goto LABEL_91;
  }
  if ( v2 >= 0 )
  {
LABEL_48:
    v9 = v88;
    v10 = v87;
    epi16 = v69;
    v34 = v70;
    v35 = v71;
    goto LABEL_67;
  }
  if ( v68 )
  {
    v9 = v88;
    v10 = v87;
    epi16 = v69;
    v34 = v70;
    v35 = v71;
    goto LABEL_67;
  }
LABEL_91:
  *v82 += (int)((_DWORD)v8 - ((unsigned int)&v91 - 48));
  return v75;
}
// 140065EBD: variable 'v14' is possibly undefined
// 140066318: variable 'v42' is possibly undefined
// 140066331: variable 'v45' is possibly undefined
// 140066347: variable 'v47' is possibly undefined
// 1400ACB48: using guessed type __int128 xmmword_1400ACB48;
// 1400ACC40: using guessed type __int64 qword_1400ACC40;
