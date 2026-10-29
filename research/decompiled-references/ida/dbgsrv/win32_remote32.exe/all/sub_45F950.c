/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F950
// Address: 0x0045F950

//----- (0045F950) --------------------------------------------------------
int __stdcall sub_45F950(__m128i *a1, int a2, __m128i *a3, int a4)
{
  __int32 *v4; // eax
  int v5; // edx
  int v6; // ecx
  bool v7; // zf
  int result; // eax
  unsigned int v9; // edx
  __m128i v10; // xmm1
  int v11; // eax
  __m128i v12; // xmm0
  int v13; // ebx
  __int16 v14; // ax
  const char *v15; // edi
  int v16; // eax
  unsigned int v17; // edi
  int *v18; // eax
  __int128 v19; // xmm1
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ebp
  __int128 *v23; // edx
  unsigned int v24; // edx
  _WORD *v25; // edi
  int i; // ecx
  int v27; // eax
  __int128 *v28; // ecx
  unsigned int v29; // esi
  __int128 *v30; // edx
  bool v31; // cf
  int *v32; // esi
  unsigned int v33; // edi
  int v34; // eax
  int v35; // esi
  __int128 v36; // xmm0
  unsigned __int16 v37; // ax
  int v38; // edi
  int v39; // ebp
  int v40; // kr0C_4
  __int16 v41; // ax
  int v42; // edx
  int v43; // ecx
  char *v44; // edi
  int v45; // ebp
  _BYTE *v46; // esi
  unsigned __int16 v47; // ax
  _BYTE *v48; // ecx
  int v49; // edi
  int v50; // edx
  char v51; // al
  _BYTE *v52; // esi
  int v53; // eax
  unsigned int v54; // eax
  int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // esi
  unsigned int v58; // ebp
  unsigned int v59; // edi
  unsigned int v60; // edx
  unsigned int v61; // ecx
  unsigned int v62; // kr14_4
  unsigned int v63; // edi
  unsigned int v64; // edi
  unsigned int v65; // eax
  unsigned int v66; // esi
  unsigned int v67; // ebx
  char v68; // al
  unsigned int v69; // ecx
  char *v70; // eax
  __m128i *v71; // edi
  unsigned int v72; // ecx
  unsigned int v73; // edi
  int v74; // ecx
  unsigned int v75; // [esp+10h] [ebp-D4h]
  unsigned int v76; // [esp+10h] [ebp-D4h]
  unsigned int v77; // [esp+14h] [ebp-D0h]
  int *v78; // [esp+18h] [ebp-CCh]
  char v79; // [esp+18h] [ebp-CCh]
  int v80; // [esp+1Ch] [ebp-C8h]
  unsigned int v81; // [esp+1Ch] [ebp-C8h]
  const char *v82; // [esp+20h] [ebp-C4h]
  int v83; // [esp+24h] [ebp-C0h]
  int v84; // [esp+28h] [ebp-BCh]
  __int128 v85; // [esp+2Ch] [ebp-B8h] BYREF
  __int128 v86; // [esp+40h] [ebp-A4h] BYREF
  __int128 v87; // [esp+50h] [ebp-94h] BYREF
  int v88; // [esp+60h] [ebp-84h]
  __int16 v89; // [esp+64h] [ebp-80h]
  __m128i v90; // [esp+68h] [ebp-7Ch] BYREF
  int v91; // [esp+78h] [ebp-6Ch]
  __int16 v92; // [esp+7Ch] [ebp-68h]
  __int128 v93; // [esp+80h] [ebp-64h] BYREF
  int v94; // [esp+90h] [ebp-54h]
  __int16 v95; // [esp+94h] [ebp-50h]
  char v96[48]; // [esp+98h] [ebp-4Ch] BYREF
  __int128 v97; // [esp+C8h] [ebp-1Ch] BYREF
  int v98; // [esp+D8h] [ebp-Ch]
  __int16 v99; // [esp+DCh] [ebp-8h]

  if ( a2 < 0 )
  {
LABEL_168:
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( (a3->m128i_i16[7] & 0x7FFF) == 0 || (a3->m128i_i16[7] & 0x7FFF) != 0x7FFF )
  {
LABEL_12:
    v9 = BYTE2(a4);
    v75 = BYTE1(a4);
    v77 = BYTE2(a4);
    if ( BYTE2(a4) && (BYTE1(a4) < (unsigned int)BYTE2(a4) + 3 || (unsigned int)BYTE1(a4) + 3 >= a2) )
    {
      v9 = 0;
      v75 = 0;
      v77 = 0;
    }
    v10 = *a3;
    v11 = (unsigned __int8)a4;
    v12 = (__m128i)xmmword_4A29A0;
    v90 = *a3;
    if ( (unsigned __int8)a4 > 0x21u )
      v11 = 33;
    v13 = 0;
    v80 = v11;
    v85 = xmmword_4A29A0;
    if ( v10.m128i_i16[7] >= 0 )
    {
      v14 = v90.m128i_i16[7];
    }
    else
    {
      v14 = v10.m128i_i16[7] & 0x7FFF;
      v90.m128i_i16[7] = v10.m128i_i16[7] & 0x7FFF;
    }
    v15 = pNodeName;
    if ( v10.m128i_i16[7] < 0 )
      v15 = "-";
    v82 = v15;
    if ( !v14 )
    {
      if ( !v9 )
        return sub_453D50((__m128i)xmmword_4A29A0, a1, a2, "%s0.0", v15);
      *(_DWORD *)v96 = 3157552;
LABEL_102:
      v56 = v75;
      v57 = 0;
      v58 = 0;
      if ( v75 )
      {
        v58 = v9;
        if ( v9 )
        {
          v56 = v75 - (v13 >= 0) - v9 - 2;
          v75 = v56;
        }
        v59 = abs32(v13);
        v81 = v59;
        if ( v59 && v59 <= v56 )
        {
          if ( *(_WORD *)&v96[2] == 48 )
          {
            v96[1] = 0;
          }
          else
          {
            sub_464310((unsigned int)&v96[1], (unsigned int)&v96[2], strlen(&v96[2]) + 1);
            v56 = v75;
          }
          v60 = v77;
          if ( v77 )
          {
            if ( v13 <= 0 )
              v61 = v56 - 1;
            else
              v61 = v56 - v59;
            result = (int)a1;
            v76 = v61;
            if ( v61 )
            {
              sub_464890(a1, 0x20u, v61);
              result = (int)a1;
              v57 = v76;
              v60 = v77;
              a1->m128i_i8[v76] = 0;
            }
          }
          else
          {
            result = (int)a1;
          }
          if ( v13 > 0 )
          {
            v62 = strlen(v96);
            v13 = v81;
            v63 = v62;
            if ( v62 <= v81 )
              goto LABEL_127;
            if ( !v60 )
            {
LABEL_126:
              v63 = v81 + 1;
LABEL_127:
              v66 = sub_453D50(v12, (__int32 *)((char *)a1->m128i_i32 + v57), a2 - v57, "%s%.*s", v82, v63, v96) + v57;
              if ( !v77 && !v96[v63] )
                ++v58;
              if ( v63 <= v81 )
              {
                v67 = 1 - v63 + v81;
                sub_464890((__m128i *)((char *)a1 + v66), 0x30u, v67);
                v66 += v67;
              }
              a1->m128i_i8[v66] = 46;
              v57 = v66 + 1;
              goto LABEL_146;
            }
            v64 = -1 - v81 + v62;
            if ( v64 <= v60 )
            {
LABEL_125:
              v58 = v60 - v64;
              goto LABEL_126;
            }
            v64 = v60;
            v65 = v60 + v81 + 1;
            if ( v65 < 0x30 )
            {
              v96[v65] = 0;
              goto LABEL_125;
            }
            goto LABEL_167;
          }
          if ( *v82 )
            *(_BYTE *)(result + v57++) = *v82;
          *(_WORD *)(result + v57) = 11824;
          v57 += 2;
          if ( !v60 || (int)v59 <= (int)v60 )
          {
            v64 = v59 - 1;
            if ( v64 )
            {
              sub_464890((__m128i *)(v57 + result), 0x30u, v64);
              v57 += v64;
              if ( v77 )
              {
                v58 = v77 - v64;
LABEL_141:
                v69 = &v96[strlen(v96) + 1] - &v96[1];
                if ( v69 <= v58 )
                {
LABEL_144:
                  v58 -= v69;
                  goto LABEL_145;
                }
                v69 = v58;
                if ( v58 < 0x30 )
                {
                  v96[v58] = v68;
                  goto LABEL_144;
                }
LABEL_167:
                sub_4632DD(v13, v64, v57);
                goto LABEL_168;
              }
            }
            else if ( v60 )
            {
              goto LABEL_141;
            }
LABEL_145:
            v63 = 0;
LABEL_146:
            v70 = &v96[v63];
            v71 = a1;
            result = sub_453D50(v12, (__int32 *)((char *)a1->m128i_i32 + v57), a2 - v57, (char *)&dword_489384, v70);
            v57 += result;
            v13 = 0;
            goto LABEL_160;
          }
          v71 = a1;
          v13 = 0;
LABEL_160:
          v74 = a2;
          if ( v58 )
          {
            result = a2 - v57;
            if ( v58 <= a2 - v57 || (v58 = a2 - v57, result) )
            {
              result = (int)sub_464890((__m128i *)((char *)v71 + v57), 0x30u, v58);
              v74 = a2;
              v57 += v58;
              v71->m128i_i8[v57] = 0;
            }
          }
          if ( v13 )
            return sub_453D50(v12, (__int32 *)((char *)v71->m128i_i32 + v57), v74 - v57, "e%d", v13);
          return result;
        }
        if ( v77 )
        {
          v64 = (unsigned int)&v96[3];
          v72 = strlen(&v96[2]);
          if ( v77 < v72 )
          {
            v72 = v77;
            do
            {
              if ( v96[v72 + 1] != 48 )
                break;
              --v72;
            }
            while ( v72 );
            if ( v72 + 2 >= 0x30 )
              goto LABEL_167;
            v96[v72 + 2] = 0;
          }
          v73 = v75;
          v58 = v77 - v72;
          if ( v75 )
          {
            if ( v13 >= 0 || (v73 = v75 - 1, v75 != 1) )
            {
              sub_464890(a1, 0x20u, v73);
              v57 = v73;
              a1->m128i_i8[v73] = 0;
            }
          }
        }
      }
      v71 = a1;
      result = sub_453D50(v12, (__int32 *)((char *)a1->m128i_i32 + v57), a2 - v57, "%s%s", v82, v96);
      v57 += result;
      goto LABEL_160;
    }
    v16 = sub_45EEA0(&xmmword_4A29A0, &v90);
    if ( !v16 )
      goto LABEL_76;
    if ( v16 >= 0 )
    {
      if ( v90.m128i_i16[7] )
      {
        sub_45F620(&v90, &v93);
        v34 = v94;
        v35 = 0;
        v36 = v93;
        do
        {
          if ( (v95 & 7) != 0 )
            break;
          v88 = v34;
          v89 = 0;
          v87 = v36;
          sub_45E090(&v87);
          sub_45E090(&v87);
          sub_45D960(&v93, &v87);
          v37 = WORD1(v87) + 3;
          for ( WORD1(v87) += 3; WORD2(v87); ++WORD1(v87) )
          {
            sub_45E090(&v87);
            v37 = WORD1(v87) + 1;
          }
          if ( v89 )
            break;
          if ( v37 >= 0x3FFFu )
            break;
          v36 = v87;
          v34 = v88;
          ++v35;
          v94 = v88;
          --v13;
          v95 = 0;
          v93 = v87;
        }
        while ( v35 < 34 );
        sub_45F690(&v93, &v90);
      }
      else
      {
        for ( ; (v90.m128i_i16[6] & 0x8000) == 0; --v13 )
          sub_45DFB0(&v90, dword_4A2A98);
      }
      v38 = -4096;
      v86 = (__int128)v90;
      v85 = xmmword_4A29A0;
      if ( sub_45EEA0(&xmmword_4A29A0, &v86) > 0 )
      {
        v39 = 0;
        do
        {
          if ( sub_45EEA0(&dword_4A2AA8[v39], &v86) >= 0 )
          {
            sub_45DFB0(&v86, &dword_4A29D8[v39]);
            sub_45DFB0(&v85, &dword_4A29D8[v39]);
            v13 += v38;
          }
          v40 = v38;
          v38 /= 2;
          if ( !(v40 / 2) )
            break;
          v39 += 4;
        }
        while ( sub_45EEA0(&xmmword_4A29A0, &v86) > 0 );
      }
      sub_45EF70(&xmmword_4A29A0, &v85, &v85);
LABEL_76:
      *(_DWORD *)((char *)&v93 + 2) = HIWORD(v85) & 0x7FFF;
      LOWORD(v93) = -((HIWORD(v85) & 0x8000) != 0);
      WORD3(v93) = WORD6(v85);
      WORD4(v93) = WORD5(v85);
      WORD5(v93) = WORD4(v85);
      WORD6(v93) = WORD3(v85);
      HIWORD(v93) = WORD2(v85);
      LOWORD(v94) = WORD1(v85);
      HIWORD(v94) = v85;
      v98 = v94;
      v99 = 0;
      v97 = v93;
      WORD1(v93) = v90.m128i_i16[7] & 0x7FFF;
      LOWORD(v93) = -(v90.m128i_i16[7] < 0);
      WORD3(v93) = v90.m128i_i16[6];
      WORD4(v93) = v90.m128i_i16[5];
      WORD5(v93) = v90.m128i_i16[4];
      WORD6(v93) = v90.m128i_i16[3];
      HIWORD(v93) = v90.m128i_i16[2];
      LOWORD(v94) = v90.m128i_i16[1];
      HIWORD(v94) = v90.m128i_i16[0];
      v91 = v94;
      v92 = 0;
      v90 = (__m128i)v93;
      v41 = sub_45DBE0(&v97, &v90);
      if ( v41 == 10 )
      {
        LOBYTE(v41) = 1;
        ++v13;
      }
      else if ( !v41 )
      {
        v79 = 0;
        do
        {
          v42 = 2;
          v43 = 0;
          while ( v90.m128i_i16[v43 + 2] == word_4A29C4[v43] )
          {
            ++v42;
            ++v43;
            if ( v42 >= 11 )
            {
              LOBYTE(v41) = v79;
              goto LABEL_84;
            }
          }
          sub_45E2E0(&v90);
          v88 = v91;
          v89 = 0;
          v87 = (__int128)v90;
          sub_45E2E0(&v87);
          sub_45E2E0(&v87);
          sub_45D960(&v87, &v90);
          v41 = sub_45DBE0(&v97, &v90);
          --v13;
          v79 = v41;
        }
        while ( !v41 );
      }
LABEL_84:
      v44 = &v96[2];
      v96[1] = 46;
      v96[0] = v41 + 48;
      v45 = v80 + 1;
      do
      {
        v46 = v44;
        sub_45E2E0(&v90);
        v12 = v90;
        v88 = v91;
        v89 = 0;
        v87 = (__int128)v90;
        sub_45E2E0(&v87);
        sub_45E2E0(&v87);
        sub_45D960(&v87, &v90);
        v47 = sub_45DBE0(&v97, &v90);
        *v44++ = v47 + 48;
        --v45;
      }
      while ( v45 );
      v48 = v46;
      if ( v47 > 4u )
      {
        if ( v47 == 5 )
        {
          v49 = 2;
          v50 = 0;
          while ( v90.m128i_i16[v50 + 2] == word_4A29C4[v50] )
          {
            ++v49;
            ++v50;
            if ( v49 >= 11 )
            {
              if ( (*(v46 - 1) & 1) == 0 )
                goto LABEL_97;
              break;
            }
          }
        }
        v51 = *(v46 - 1);
        v52 = v46 - 1;
        v53 = v51 & 0x7F;
        if ( v53 == 46 )
        {
LABEL_95:
          v55 = (char)*(v52 - 1) + 1;
          *(v52 - 1) = v55;
          if ( v55 > 57 )
          {
            ++v13;
            *(v52 - 1) = 49;
          }
        }
        else
        {
          while ( 1 )
          {
            v54 = v53 + 1;
            *v52 = v54;
            if ( v54 <= 0x39 )
              break;
            *v52-- = 48;
            v53 = *v52 & 0x7F;
            if ( v53 == 46 )
              goto LABEL_95;
          }
        }
      }
LABEL_97:
      while ( *(v48 - 1) == 48 )
        --v48;
      if ( *(v48 - 1) == 46 )
        *v48++ = 48;
      v9 = v77;
      *v48 = 0;
      goto LABEL_102;
    }
    v17 = 16;
    v83 = 16;
    v87 = (__int128)v90;
    HIWORD(v87) = 16494;
    v18 = dword_4A2A58;
    v78 = dword_4A2A58;
    while ( 1 )
    {
      sub_45EF70(&v87, v18, &v85);
      v19 = v85;
      v93 = v85;
      v20 = HIWORD(HIDWORD(v85));
      v84 = HIWORD(HIDWORD(v85));
      v21 = HIWORD(v85) & 0x7FFF;
      if ( v21 <= 0x3FFE )
        break;
      v22 = 16494 - v21;
      v86 = v85;
      if ( (int)(16494 - v21) > 0 )
      {
        v23 = &v86;
        if ( v22 >= 16 )
        {
          v24 = 2 * ((unsigned int)v22 >> 4);
          memset(&v86, 0, 4 * (v24 >> 2));
          v25 = (_WORD *)&v86 + 2 * (v24 >> 2);
          for ( i = (v24 & 2) != 0; i; --i )
            *v25++ = 0;
          v17 = v83;
          v22 += -16 * ((unsigned int)v22 >> 4);
          v23 = (__int128 *)((char *)&v86 + v24);
          LOWORD(v20) = v84;
        }
        *(_WORD *)v23 &= word_4A2B78[v22];
LABEL_39:
        if ( (v20 & 0x8000u) != 0 )
        {
          v27 = 0;
          while ( *(_WORD *)((char *)&v93 + v27) == *(_WORD *)((char *)&v86 + v27) )
          {
            v27 += 2;
            if ( v27 >= 14 )
              goto LABEL_45;
          }
          sub_45EC90(&v86, &xmmword_4A29A0, &v86, 1);
          v19 = v85;
        }
      }
LABEL_45:
      v28 = &v85;
      v29 = 10;
      v30 = &v86;
      while ( *(_DWORD *)v28 == *(_DWORD *)v30 )
      {
        v28 = (__int128 *)((char *)v28 + 4);
        v30 = (__int128 *)((char *)v30 + 4);
        v31 = v29 < 4;
        v29 -= 4;
        if ( v31 )
        {
          if ( *(_WORD *)v28 == *(_WORD *)v30 )
          {
            v87 = v19;
            v13 += v17;
          }
          break;
        }
      }
      v17 >>= 1;
      v18 = v78 + 4;
      v83 = v17;
      v78 += 4;
      if ( !v17 )
      {
        v32 = dword_4A29D8;
        v33 = 4096;
        HIWORD(v87) += v90.m128i_i16[7] - 16494;
        v90 = (__m128i)v87;
        v85 = xmmword_4A29A0;
        do
        {
          if ( sub_45EEA0(dword_4A2A98, &v87) > 0 )
            break;
          if ( sub_45EEA0(v32, &v87) <= 0 )
          {
            sub_45EF70(&v87, v32, &v87);
            sub_45DFB0(&v85, v32);
            v13 += v33;
          }
          v32 += 4;
          v33 >>= 1;
        }
        while ( v33 );
        goto LABEL_76;
      }
    }
    v86 = 0;
    goto LABEL_39;
  }
  v4 = &a3->m128i_i32[3];
  v5 = a3->m128i_i16[7] & 0x8000;
  if ( (a3->m128i_i16[6] & 0x7FFF) == 0 )
  {
    v6 = 1;
    while ( 1 )
    {
      v7 = *((_WORD *)v4 - 1) == 0;
      v4 = (__int32 *)((char *)v4 - 2);
      if ( !v7 )
        break;
      if ( ++v6 >= 7 )
      {
        result = (v5 != 0) + 3;
        switch ( v5 != 0 )
        {
          case 0xFD:
            return result;
          case 0xFE:
            goto LABEL_12;
          case 0xFF:
            return sub_45ACB0((unsigned int)a1, (char *)&dword_4A2B9C, a2);
          case false:
            return sub_45ACB0((unsigned int)a1, "+Inf", a2);
          case true:
            return sub_45ACB0((unsigned int)a1, "-Inf", a2);
        }
      }
    }
  }
  return sub_45ACB0((unsigned int)a1, (char *)&dword_4A2B9C, a2);
}
// 4603DA: variable 'v68' is possibly undefined
// 489384: using guessed type int dword_489384;
// 4A29A0: using guessed type __int128 xmmword_4A29A0;
// 4A29C4: using guessed type __int16 word_4A29C4[];
// 4A29D8: using guessed type int dword_4A29D8[29];
// 4A2A58: using guessed type int dword_4A2A58[2];
// 4A2A98: using guessed type int dword_4A2A98[3];
// 4A2AA8: using guessed type int dword_4A2AA8[52];
// 4A2B78: using guessed type __int16 word_4A2B78[];
// 4A2B9C: using guessed type int dword_4A2B9C;
// 4B70F0: using guessed type char byte_4B70F0;
