__int64 __fastcall sub_1FBC0(
        __int64 a1,
        char *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int16 a6,
        char a7,
        _WORD *a8,
        __int64 a9)
{
  char *v9; // r12
  char v11; // dl
  char v12; // dl
  unsigned __int8 v13; // bl
  __int64 v14; // r14
  unsigned __int8 v15; // bp
  __int16 v16; // kr00_2
  int v17; // eax
  int v18; // edx
  char v19; // dl
  unsigned __int8 v20; // si
  __int16 v21; // r8
  char v22; // r10
  char *v23; // rcx
  char v24; // al
  __int64 v25; // rcx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  char v31; // al
  int v32; // edx
  char v33; // si
  char v34; // al
  char v35; // dl
  char v36; // al
  char v38; // dl
  __int16 v39; // r12
  int i; // ebx
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // r8
  int v43; // eax
  int v44; // ecx
  char v45; // r9
  char *v46; // rax
  char v47; // dl
  __int64 v48; // rbx
  char *v49; // rax
  char v50; // dl
  __int16 v51; // ax
  char *v52; // rcx
  char v53; // dl
  char *v54; // rax
  char v55; // dl
  char v56; // di
  unsigned __int8 v57; // al
  char *v58; // rax
  char v59; // r15
  char v60; // dl
  char *v61; // rax
  _BYTE v63[12]; // [rsp+1Ch] [rbp-9Ch]
  unsigned __int8 v64; // [rsp+2Ah] [rbp-8Eh]
  char v65; // [rsp+2Bh] [rbp-8Dh]
  char v66; // [rsp+2Ch] [rbp-8Ch]
  char v67; // [rsp+2Dh] [rbp-8Bh]
  char *v68; // [rsp+38h] [rbp-80h] BYREF
  __int64 v69; // [rsp+40h] [rbp-78h] BYREF
  __int128 v70; // [rsp+48h] [rbp-70h]
  int v71; // [rsp+58h] [rbp-60h]
  int v72; // [rsp+5Ch] [rbp-5Ch]
  unsigned __int64 v73; // [rsp+60h] [rbp-58h]
  __int128 v74; // [rsp+68h] [rbp-50h]
  unsigned __int64 v75; // [rsp+78h] [rbp-40h]

  v9 = a2;
  v75 = __readfsqword(0x28u);
  v71 = 0;
  v74 = 0;
  v69 = a9;
  v72 = a4;
  v73 = a5;
  WORD5(v74) = a6;
  v64 = a6;
  BYTE9(v74) = a6;
  v70 = 0;
  if ( a8 )
    LOWORD(v74) = *a8;
  else
    WORD2(v74) = 256;
  v11 = 0;
  if ( a6 > 2u )
    v11 = a7 & 1 | (2 * a7) & 2;
  BYTE6(v74) = v11;
  v12 = *a2;
  if ( *a2 == 9 || v12 == 32 )
  {
    do
    {
      do
        v12 = *++v9;
      while ( v12 == 32 );
    }
    while ( v12 == 9 );
  }
  if ( !v12 )
    return (unsigned int)-2;
  v68 = v9;
  v71 = -1;
  if ( (*v9 & 0xDF) != 0x46 )
  {
    *(_DWORD *)&v63[8] = 0;
    v13 = -1;
    *(_QWORD *)v63 = (unsigned __int8)a6;
    v67 = 0;
    v66 = 0;
    v65 = 0;
    v14 = a3;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      v17 = sub_1E160(a1, &v68, 0, 0xFFu, v63[0], (__int64)&v69);
      v18 = v17;
      if ( v17 == 1 )
      {
        v23 = v68;
        if ( !*v68 )
        {
          v73 = 0;
          a3 = v14;
LABEL_26:
          v20 = BYTE11(v70);
          goto LABEL_27;
        }
      }
      else
      {
        if ( v17 == -1 )
        {
          if ( v64 <= 1u )
          {
            v22 = v15;
            a3 = v14;
            if ( (BYTE5(v74) & 1) == 0 )
              goto LABEL_121;
            goto LABEL_120;
          }
          BYTE11(v70) |= 0x80u;
          v18 = sub_1E160(a1, &v68, 23, 0xFFu, v63[0], (__int64)&v69);
        }
        if ( v18 )
        {
          v22 = v15;
          a3 = v14;
          if ( (BYTE5(v74) & 1) == 0 || v18 > 0 )
            goto LABEL_76;
LABEL_120:
          if ( v13 != 0xFF )
            goto LABEL_23;
LABEL_121:
          v73 = 0;
          goto LABEL_77;
        }
        v19 = BYTE13(v70);
        if ( BYTE13(v70) != BYTE6(v74) || (v20 = BYTE11(v70), (BYTE11(v70) & 8) != 0) && BYTE7(v74) > 0x60u )
        {
          if ( v64 <= 2u )
          {
            v22 = v15;
            v71 = -4;
            a3 = v14;
            if ( (BYTE5(v74) & 1) == 0 || v13 == 0xFF )
              return (unsigned int)-4;
            goto LABEL_23;
          }
          v20 = BYTE11(v70);
        }
        v21 = WORD2(v74) & 0x100;
        if ( (v20 & 6) == 6 || (v20 & 6) != 0 && (BYTE4(v74) & 0x40) == 0 )
        {
          v22 = v15;
          v71 = -5;
          a3 = v14;
          if ( v21 && v13 != 0xFF )
            goto LABEL_23;
          return (unsigned int)-5;
        }
        if ( !v21 )
        {
          a3 = v14;
LABEL_108:
          v73 = 0;
          v18 = 0;
LABEL_27:
          v22 = v20;
LABEL_28:
          v71 = v18;
          v24 = v22 & 0x10;
LABEL_29:
          if ( !v24 )
          {
            v19 = BYTE13(v70);
            goto LABEL_105;
          }
          BYTE10(v70) |= 1u;
          WORD1(v74) = BYTE2(v74) & 3;
          if ( HIBYTE(a6) == 254 )
          {
            v55 = BYTE8(v70);
            BYTE8(v70) += 92;
            if ( (v22 & 8) != 0 )
            {
              if ( BYTE7(v74) > 0x60u )
                return (unsigned int)-5;
              v25 = 768;
              BYTE8(v70) = (v55 + 40) | (8 * BYTE7(v74)) ^ 0xF0;
            }
            else
            {
              v25 = 256;
            }
            v22 &= ~8u;
            v19 = BYTE13(v70);
            BYTE11(v70) = v22;
          }
          else
          {
            v25 = v73;
            v19 = BYTE13(v70);
          }
LABEL_32:
          v26 = 0;
          v27 = (unsigned __int8)(BYTE6(v74) ^ v19);
          v28 = 0;
          v29 = v25 | v22 & 0xEF | (32 * v27);
          v73 = v29;
          while ( 1 )
          {
            if ( (v29 & 1) != 0 )
            {
              if ( a3 )
              {
                v30 = v26;
                if ( v28 == 3 )
                {
                  ++v26;
                  *(_BYTE *)(a3 + v30) = BYTE7(v74);
                  v28 = 4;
                  v29 = v73 >> 1;
                  v73 >>= 1;
                  continue;
                }
                *(_BYTE *)(a3 + v26) = byte_922B8[v28];
                v29 = v73;
              }
              ++v26;
            }
            v29 >>= 1;
            ++v28;
            v73 = v29;
            if ( v28 == 10 )
            {
              if ( v71 )
                goto LABEL_56;
              v31 = BYTE10(v70);
              v32 = v26 + 1;
              v33 = BYTE10(v70) & 1;
              if ( a3 )
              {
                v34 = BYTE9(v70);
                if ( v33 )
                  v34 = BYTE8(v70);
                *(_BYTE *)(a3 + v26) = v34;
                v31 = BYTE10(v70);
                if ( (BYTE10(v70) & 1) == 0 )
                {
                  if ( (BYTE10(v70) & 2) != 0 )
                  {
                    ++v26;
                    goto LABEL_46;
                  }
LABEL_136:
                  ++v26;
LABEL_48:
                  v35 = v31 & 0x1C;
                  if ( (v31 & 0x1C) != 8 )
                  {
                    if ( v35 != 16 )
                    {
                      if ( v35 == 4 )
                        goto LABEL_51;
                      goto LABEL_52;
                    }
                    *(_BYTE *)(a3 + v26 + 3) = BYTE3(v70);
                    *(_BYTE *)(a3 + v26 + 2) = BYTE2(v70);
                  }
                  *(_BYTE *)(a3 + v26 + 1) = BYTE1(v70);
LABEL_51:
                  *(_BYTE *)(a3 + v26) = v70;
                  v31 = BYTE10(v70);
                  v26 += (BYTE10(v70) >> 2) & 7;
LABEL_52:
                  v36 = v31 & 0xE0;
                  if ( v36 != 64 )
                  {
                    if ( v36 != (char)0x80 )
                    {
                      if ( v36 == 32 )
                        goto LABEL_55;
                      goto LABEL_56;
                    }
                    *(_BYTE *)(a3 + v26 + 3) = BYTE7(v70);
                    *(_BYTE *)(a3 + v26 + 2) = BYTE6(v70);
                  }
                  *(_BYTE *)(a3 + v26 + 1) = BYTE5(v70);
LABEL_55:
                  *(_BYTE *)(a3 + v26) = BYTE4(v70);
                  v26 += BYTE10(v70) >> 5;
LABEL_56:
                  if ( a8 )
                    *a8 = WORD1(v74);
                  return (unsigned int)v26;
                }
                v26 += 2;
                *(_BYTE *)(a3 + v32) = BYTE9(v70);
                v31 = BYTE10(v70);
                if ( (BYTE10(v70) & 2) == 0 )
                  goto LABEL_48;
LABEL_46:
                *(_BYTE *)(a3 + v26) = BYTE12(v70);
                v31 = BYTE10(v70);
              }
              else
              {
                v56 = BYTE10(v70) & 2;
                if ( v33 )
                {
                  v26 += 2;
                  if ( !v56 )
                    goto LABEL_48;
                }
                else
                {
                  if ( !v56 )
                    goto LABEL_136;
                  ++v26;
                }
              }
              ++v26;
              goto LABEL_48;
            }
          }
        }
        if ( byte_922B0[v20 >> 5] + byte_922B0[BYTE10(v70) & 3] + (BYTE10(v70) >> 5) + ((BYTE10(v70) >> 2) & 7u) < v13 )
        {
          v13 = byte_922B0[v20 >> 5] + byte_922B0[BYTE10(v70) & 3] + (BYTE10(v70) >> 5) + ((BYTE10(v70) >> 2) & 7);
          v65 = BYTE13(v70);
          v15 = v20;
          v67 = BYTE10(v70);
          *(_QWORD *)&v63[4] = v70;
          v16 = WORD4(v70);
          v66 = BYTE12(v70);
        }
        v68 = v9;
        BYTE11(v70) = 0;
        LOWORD(v74) = WORD1(v74);
        if ( !WORD1(v74) )
        {
          v22 = v15;
          a3 = v14;
          if ( v13 == 0xFF )
          {
            v22 = 0;
            v73 = 0;
            v71 = 0;
            goto LABEL_105;
          }
LABEL_23:
          BYTE11(v70) = v22;
          v18 = 0;
          v73 = 0;
          *(_QWORD *)&v70 = *(_QWORD *)&v63[4];
          WORD4(v70) = v16;
          BYTE10(v70) = v67;
          BYTE12(v70) = v66;
          BYTE13(v70) = v65;
          goto LABEL_28;
        }
        v23 = v9;
      }
      v71 = -1;
      WORD4(v70) = 0;
      BYTE10(v70) = 0;
      if ( (*v23 & 0xDF) == 0x46 )
      {
        a3 = v14;
        v9 = v23;
        v38 = BYTE11(v70) | 0x10;
        goto LABEL_63;
      }
    }
  }
  v38 = 16;
LABEL_63:
  BYTE11(v70) = v38;
  v68 = v9 + 1;
  v39 = HIBYTE(a6);
  if ( HIBYTE(a6) == 255 )
    return (unsigned int)-1;
  BYTE8(v70) = -40;
  i = 0;
  do
  {
    if ( (i & 8) != 0 )
      goto LABEL_71;
    v41 = 0;
    if ( v39 != 254 )
      v41 = HIBYTE(a6);
    BYTE9(v70) = -64;
    if ( !(unsigned int)sub_1E160(a1, &v68, i + 24, 0xFFu, v41, (__int64)&v69) )
    {
LABEL_107:
      v20 = BYTE11(v70);
      goto LABEL_108;
    }
    ++i;
    ++BYTE8(v70);
  }
  while ( (i & 7) != 0 );
  BYTE8(v70) = -40;
  for ( i = 8; i != 16; ++i )
  {
LABEL_71:
    v42 = 0;
    if ( v39 != 254 )
      v42 = HIBYTE(a6);
    BYTE9(v70) = 0;
    v43 = sub_1E160(a1, &v68, i + 24, 7u, v42, (__int64)&v69);
    if ( !v43 )
      goto LABEL_107;
    ++BYTE8(v70);
  }
  v18 = v43;
LABEL_76:
  v73 = 0;
  if ( v18 != -1 )
    goto LABEL_26;
LABEL_77:
  v26 = v71;
  if ( v71 != -1 )
    return (unsigned int)v26;
  WORD2(v74) = 0;
  if ( (unsigned int)sub_1C9C0(&v68, 45, 5, (__int64)&v69) )
  {
    if ( *v68 )
      return (unsigned int)-3;
    v57 = -101;
    if ( HIBYTE(a6) == 254 )
    {
      v73 = 256;
      v57 = 61;
    }
    *(_WORD *)((char *)&v70 + 9) = v57;
    WORD1(v74) = 0;
    v19 = BYTE13(v70);
    v22 = BYTE11(v70) & 0x6F;
    BYTE11(v70) &= 0x6Fu;
    v71 = 0;
LABEL_105:
    v25 = v73;
    goto LABEL_32;
  }
  if ( (BYTE11(v70) & 0x10) != 0 )
    --v68;
  v44 = sub_1C960(&v68);
  if ( v44 )
  {
    if ( *v68 != 58 )
    {
      v68 -= 2;
      goto LABEL_82;
    }
    v58 = v68 + 1;
    BYTE8(v74) = v44;
    v59 = byte_92301[v44];
    ++v68;
    BYTE7(v74) = v59;
    if ( !v59 )
    {
      BYTE11(v70) = v45 | 8;
      goto LABEL_82;
    }
    BYTE11(v70) = v45 & 0x67 | 8;
    while ( 1 )
    {
      v60 = *v58;
      if ( *v58 == 32 || v60 == 9 )
      {
        v61 = v58 + 1;
        do
        {
          do
          {
            v68 = v61;
            v60 = *v61++;
          }
          while ( v60 == 32 );
        }
        while ( v60 == 9 );
      }
      if ( !v60 )
        break;
      BYTE9(v70) = 0;
      if ( (unsigned int)sub_1E160(a1, &v68, 0, 0xFFu, v64, (__int64)&v69) != 1 )
        return (unsigned int)-5;
      v58 = v68;
    }
    BYTE7(v74) = v59;
    v71 = 1;
    WORD1(v74) = 0;
    v24 = BYTE11(v70) & 0x10;
    v22 = BYTE11(v70) | 8;
    BYTE11(v70) |= 8u;
    goto LABEL_29;
  }
LABEL_82:
  if ( !(unsigned int)sub_1C9C0(&v68, 212, 6, (__int64)&v69) )
    return (unsigned int)-1;
  v46 = v68;
  v47 = *v68;
  if ( !*v68 )
    return (unsigned int)-9;
  v48 = 0;
  while ( 1 )
  {
    if ( v47 == 32 || v47 == 9 )
    {
      v49 = v46 + 1;
      do
      {
        do
        {
          v68 = v49;
          v50 = *v49++;
        }
        while ( v50 == 9 );
      }
      while ( v50 == 32 );
    }
    v51 = sub_1CF40(a1, &v68, (__int64)&v69);
    if ( v51 == -1 || (v51 & 0xFE) != 0 )
      break;
    if ( a3 )
      *(_BYTE *)(a3 + v48) = BYTE4(v70);
    v52 = v68;
    v53 = *v68;
    if ( *v68 == 32 || v53 == 9 )
    {
      v54 = v68 + 1;
      do
      {
        do
        {
          v68 = v54;
          v53 = *v54;
          v52 = v54++;
        }
        while ( v53 == 32 );
      }
      while ( v53 == 9 );
    }
    if ( !v53 )
      return (unsigned int)(v48 + 1);
    if ( v53 != 44 )
      break;
    v46 = v52 + 1;
    ++v48;
    v68 = v52 + 1;
    if ( v48 == 16 )
      return (unsigned int)-8;
    v47 = v52[1];
  }
  return (unsigned int)-7;
}
