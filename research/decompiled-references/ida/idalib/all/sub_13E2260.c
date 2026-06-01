void __fastcall sub_13E2260(
        __m128 *a1,
        unsigned __int8 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int8 *v8; // rdx
  unsigned __int8 *v9; // rax
  __m128i si128; // xmm0
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  _BYTE *v17; // rsi
  _BYTE *v18; // rdx
  _BYTE *v19; // rdi
  char v20; // r8
  __int8 v21; // r15
  __int64 v22; // r14
  void *v23; // rdi
  void **v24; // r12
  unsigned __int64 v25; // rax
  void **v26; // r13
  void **v27; // rbp
  void **v28; // rdi
  void **v29; // rdi
  void **v30; // rbp
  void **v31; // r13
  char v32; // r9
  char v33; // r11
  char v34; // di
  char v35; // al
  int v36; // eax
  unsigned __int8 *v37; // r12
  _QWORD *v38; // rdx
  __int64 v39; // rax
  void **v40; // r13
  void **v41; // rbp
  void **v42; // rdi
  void **v43; // rdi
  void **v44; // rbp
  void **v45; // r13
  void *v46; // rdi
  char v47; // al
  __int64 (__fastcall *v48)(__int64); // rax
  char v49; // al
  __int8 v50; // al
  _BYTE *v51; // rax
  char v52; // di
  __int8 v53; // al
  __int8 v54; // al
  __int64 v55; // rdx
  char v56; // al
  __int64 v57; // rax
  char v58; // di
  unsigned __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 v63; // r15
  __int64 v64; // r13
  void *v65; // rdi
  char *v66; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+10h] [rbp-98h]
  char v68; // [rsp+1Fh] [rbp-89h]
  void *v69; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v70; // [rsp+28h] [rbp-80h]
  __int64 v71; // [rsp+30h] [rbp-78h]
  void *v72; // [rsp+40h] [rbp-68h]
  _BYTE v73[16]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v74; // [rsp+60h] [rbp-48h]

  v8 = &a2[a3];
  v9 = a2;
  v66 = a6;
  v67 = a5;
  *a1 = _mm_loadh_ps((const double *)&v66);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  a1[1].m128_u64[1] = (unsigned __int64)a2;
  a1[1].m128_u64[0] = a8;
  a1[2].m128_u64[0] = (unsigned __int64)v8;
  a1[4].m128_u64[1] = (unsigned __int64)&a1[6];
  a1[5] = (__m128)si128;
  a1[2].m128_u64[1] = (unsigned __int64)a2;
  a1[3].m128_u64[1] = (unsigned __int64)a2;
  a1[4].m128_i32[1] = 0;
  a1[8].m128_i16[0] &= 0xE000u;
  a1[8].m128_i8[2] = 0;
  v14 = *v8;
  if ( (*(_WORD *)&byte_2411740[2 * v14] & 0x1E8) != 0 && ((a6[89] & 1) == 0 || (_BYTE)v14 != 46) )
  {
    sub_FC70B0((__int64)&v69, a8, a4, 1055);
    if ( (_BYTE)v74 )
    {
      sub_FC7790(v71, (__int64 *)&v69, SHIBYTE(v74));
      v23 = v72;
      v71 = 0;
      v74 = 0;
      if ( v72 == v73 )
        goto LABEL_25;
    }
    else
    {
      v23 = v72;
      if ( v72 == v73 )
      {
LABEL_25:
        v24 = (void **)v69;
        if ( !v69 )
          goto LABEL_40;
        v25 = v70;
        if ( !v70 )
          goto LABEL_40;
        if ( (unsigned __int64)v69 >= v70 && (unsigned __int64)v69 <= v70 + 14848 )
          goto LABEL_165;
        v26 = *((void ***)v69 + 66);
        v27 = &v26[8 * (unsigned __int64)*((unsigned int *)v69 + 134)];
        if ( v26 != v27 )
        {
          do
          {
            while ( 1 )
            {
              v27 -= 8;
              v28 = (void **)v27[3];
              if ( v28 == v27 + 5 )
                break;
              operator delete(v28);
              if ( v26 == v27 )
                goto LABEL_31;
            }
          }
          while ( v26 != v27 );
LABEL_31:
          v27 = (void **)v24[66];
        }
        if ( v27 != v24 + 68 )
          free(v27);
        v29 = (void **)v24[52];
        if ( v29 != v24 + 54 )
          free(v29);
        v30 = v24 + 48;
        v31 = v24 + 8;
        do
        {
          while ( *v30 != v30 + 2 )
          {
            operator delete(*v30);
            v30 -= 4;
            if ( v31 == v30 )
              goto LABEL_39;
          }
          v30 -= 4;
        }
        while ( v30 != v31 );
LABEL_39:
        operator delete(v24, 0x3A0u);
        goto LABEL_40;
      }
    }
    operator delete(v23);
    goto LABEL_25;
  }
  if ( *a2 == 48 )
  {
    sub_13E1090((__int64)a1, a4);
    if ( (a1[8].m128_i8[0] & 1) != 0 )
      return;
LABEL_11:
    v9 = (unsigned __int8 *)a1[3].m128_u64[1];
  }
  else
  {
    a1[4].m128_i32[0] = 10;
    if ( a2 == v8 )
    {
      v9 = a2;
    }
    else
    {
      v15 = *a2;
      if ( (byte_2411740[2 * v15] & 8) == 0 )
        goto LABEL_9;
      while ( v8 != ++v9 )
      {
        v15 = *v9;
        if ( (byte_2411740[2 * v15] & 8) == 0 )
        {
LABEL_9:
          if ( (_BYTE)v15 != 39 )
          {
            a1[3].m128_u64[1] = (unsigned __int64)v9;
            sub_13E0A80((__int64)a1, a4);
            if ( (a1[8].m128_i8[0] & 1) != 0 )
              return;
            goto LABEL_11;
          }
        }
      }
    }
    a1[3].m128_u64[1] = (unsigned __int64)v9;
  }
  a1[3].m128_u64[0] = (unsigned __int64)v9;
  sub_13E0640((__int64)a1, a4, v9, 1);
  v16 = a1[2].m128_u64[0];
  v17 = (_BYTE *)a1[3].m128_u64[1];
  v18 = (_BYTE *)v16;
  if ( (a6[164] & 1) == 0 || v17 == (_BYTE *)v16 )
    goto LABEL_42;
  if ( (*v17 & 0xDF) != 0x52 && (*v17 & 0xDF) != 0x4B )
  {
    v19 = (_BYTE *)a1[3].m128_u64[1];
    while ( ++v19 != (_BYTE *)v16 )
    {
      if ( (*v19 & 0xDF) == 0x52 || (*v19 & 0xDF) == 0x4B )
        goto LABEL_20;
    }
LABEL_42:
    if ( a1[4].m128_i8[5] )
    {
      v21 = a1[4].m128_i8[7];
      v20 = v21;
      LOBYTE(v22) = v21 ^ 1;
      goto LABEL_45;
    }
    LOBYTE(v22) = a1[4].m128_i8[4];
    if ( !(_BYTE)v22 )
    {
      v21 = 0;
      v20 = 1;
      goto LABEL_45;
    }
    v21 = a1[4].m128_i8[7];
    v20 = v21;
LABEL_158:
    LOBYTE(v22) = v21 ^ 1;
LABEL_45:
    if ( (_BYTE *)v16 == v17 )
    {
LABEL_150:
      v18 = v17;
      goto LABEL_151;
    }
    goto LABEL_46;
  }
LABEL_20:
  v20 = a1[4].m128_i8[5];
  a1[4].m128_i8[7] = 1;
  if ( v20 )
  {
    v21 = v20;
    LOBYTE(v22) = 0;
  }
  else
  {
    v21 = a1[4].m128_i8[4];
    v20 = v21;
    if ( v21 )
      goto LABEL_158;
    LOBYTE(v22) = 0;
    v20 = 1;
  }
LABEL_46:
  v32 = 0;
  v33 = 0;
  while ( 2 )
  {
    v34 = *v17;
    switch ( *v17 )
    {
      case 'F':
      case 'f':
        if ( v33 || v20 )
          goto LABEL_57;
        v48 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a7 + 104LL);
        if ( v48 == sub_F565B0 )
        {
          v49 = *(_BYTE *)(a7 + 279);
        }
        else
        {
          v68 = 0;
          LOBYTE(v66) = v32;
          v49 = ((__int64 (__fastcall *)(__int64, _BYTE *, _BYTE *))v48)(a7, v17, v18);
          v16 = a1[2].m128_u64[0];
          v17 = (_BYTE *)a1[3].m128_u64[1];
          v20 = v68;
          v32 = (char)v66;
          v18 = (_BYTE *)v16;
        }
        if ( (v49
           || (a6[60] & 0x10) != 0
           || (a6[68] & 8) != 0 && (LODWORD(v66) = *(_DWORD *)(a7 + 248), (unsigned int)((_DWORD)v66 - 41) <= 1))
          && (unsigned __int64)(v17 + 2) < v16
          && v17[1] == 49
          && v17[2] == 54 )
        {
          a1[8].m128_i8[1] |= 1u;
          v17 += 2;
          v33 = 1;
        }
        else
        {
          a1[8].m128_i8[0] |= 0x40u;
          v33 = 1;
        }
        goto LABEL_149;
      case 'H':
      case 'h':
        if ( (a6[3] & 8) == 0 && (a6[164] & 1) == 0 )
          goto LABEL_57;
        v47 = a1[4].m128_i8[5] | a1[4].m128_i8[4];
        if ( !a1[4].m128_i16[2] || v33 )
          goto LABEL_57;
        a1[8].m128_i8[0] |= 0x20u;
        v33 = v47;
        goto LABEL_149;
      case 'I':
      case 'i':
        if ( *a6 >= 0 || v16 <= (unsigned __int64)(v17 + 1) || (_BYTE)v22 )
          goto LABEL_56;
        v56 = v17[1];
        if ( v56 == 51 )
        {
          if ( v16 > (unsigned __int64)(v17 + 2) && v17[2] == 50 )
          {
            v57 = 3;
            v58 = 32;
            goto LABEL_174;
          }
LABEL_56:
          v35 = a1[8].m128_i8[0];
          if ( v35 < 0 )
            goto LABEL_57;
          v18 = (_BYTE *)v16;
          a1[8].m128_i8[0] = v35 | 0x80;
LABEL_149:
          a1[3].m128_u64[1] = (unsigned __int64)++v17;
          if ( v17 == (_BYTE *)v16 )
            goto LABEL_150;
          continue;
        }
        if ( v56 > 51 )
        {
          if ( v56 == 54 )
          {
            if ( v16 > (unsigned __int64)(v17 + 2) && v17[2] == 52 )
            {
              v57 = 3;
              v58 = 64;
              goto LABEL_174;
            }
          }
          else if ( v56 == 56 )
          {
            v57 = 2;
            v58 = 8;
            goto LABEL_174;
          }
          goto LABEL_56;
        }
        if ( v56 != 49 )
          goto LABEL_56;
        if ( v16 <= (unsigned __int64)(v17 + 2) || v17[2] != 54 )
        {
          if ( v16 > (unsigned __int64)(v17 + 3) && v17[2] == 50 && v17[3] == 56 )
          {
            v57 = 4;
            v58 = 0x80;
            goto LABEL_174;
          }
          goto LABEL_56;
        }
        v57 = 3;
        v58 = 16;
LABEL_174:
        if ( !v33 )
        {
          v17 += v57;
          a1[8].m128_i8[2] = v58;
          a1[3].m128_u64[1] = (unsigned __int64)v17;
        }
LABEL_57:
        if ( (_BYTE *)v16 == v17 )
        {
LABEL_151:
          if ( a1[8].m128_i8[0] < 0 )
            goto LABEL_58;
          return;
        }
LABEL_58:
        sub_13DFFE0(&a1[4].m128_u64[1], (_BYTE *)a1[3].m128_u64[0], (__int64)&v18[-a1[3].m128_u64[0]]);
        if ( sub_13E0580((__int64)a6, (char *)a1[4].m128_u64[1], a1[5].m128_u64[0]) )
        {
          if ( a1[8].m128_i8[0] >= 0 )
          {
            a1[8].m128_i16[0] &= 0xE201u;
            a1[4].m128_i8[7] = 0;
            a1[8].m128_i8[2] = 0;
          }
          a1[4].m128_i8[6] = 1;
        }
        else if ( a1[3].m128_u64[1] != a1[2].m128_u64[0] )
        {
          v22 = (unsigned __int8)v22;
          v36 = sub_13D1C70(a4, a1[3].m128_i32[0] - a1[1].m128_i32[2], v67, (__int64)a6);
          sub_FC70B0((__int64)&v69, a8, a4 + v36, 1051);
          sub_AEC220((unsigned __int8 **)&v69, (_BYTE *)a1[3].m128_u64[0], a1[2].m128_u64[0] - a1[3].m128_u64[0]);
          v37 = (unsigned __int8 *)v69;
          if ( v21 )
            v22 = 2;
          if ( !v69 )
          {
            v59 = v70;
            v60 = *(_DWORD *)(v70 + 14976);
            if ( v60 )
            {
              v61 = (unsigned int)(v60 - 1);
              *(_DWORD *)(v70 + 14976) = v61;
              v37 = *(unsigned __int8 **)(v59 + 8 * v61 + 14848);
              v62 = *((unsigned int *)v37 + 134);
              v63 = *((_QWORD *)v37 + 66);
              *v37 = 0;
              *((_DWORD *)v37 + 106) = 0;
              v64 = v63 + (v62 << 6);
              while ( v63 != v64 )
              {
                while ( 1 )
                {
                  v64 -= 64;
                  v65 = *(void **)(v64 + 24);
                  if ( v65 == (void *)(v64 + 40) )
                    break;
                  operator delete(v65);
                  if ( v63 == v64 )
                    goto LABEL_190;
                }
              }
LABEL_190:
              *((_DWORD *)v37 + 134) = 0;
            }
            else
            {
              v37 = (unsigned __int8 *)operator new(0x3A0u);
              *v37 = 0;
              *((_QWORD *)v37 + 12) = v37 + 112;
              *((_QWORD *)v37 + 16) = v37 + 144;
              *((_QWORD *)v37 + 20) = v37 + 176;
              *((_QWORD *)v37 + 24) = v37 + 208;
              *((_QWORD *)v37 + 28) = v37 + 240;
              *((_QWORD *)v37 + 32) = v37 + 272;
              *((_QWORD *)v37 + 36) = v37 + 304;
              *((_QWORD *)v37 + 40) = v37 + 336;
              *((_QWORD *)v37 + 44) = v37 + 368;
              *((_QWORD *)v37 + 48) = v37 + 400;
              *((_QWORD *)v37 + 52) = v37 + 432;
              *((_QWORD *)v37 + 13) = 0;
              v37[112] = 0;
              *((_QWORD *)v37 + 17) = 0;
              v37[144] = 0;
              *((_QWORD *)v37 + 21) = 0;
              v37[176] = 0;
              *((_QWORD *)v37 + 25) = 0;
              v37[208] = 0;
              *((_QWORD *)v37 + 29) = 0;
              v37[240] = 0;
              *((_QWORD *)v37 + 33) = 0;
              v37[272] = 0;
              *((_QWORD *)v37 + 37) = 0;
              v37[304] = 0;
              *((_QWORD *)v37 + 41) = 0;
              v37[336] = 0;
              *((_QWORD *)v37 + 45) = 0;
              v37[368] = 0;
              *((_QWORD *)v37 + 49) = 0;
              v37[400] = 0;
              *((_QWORD *)v37 + 53) = 0x800000000LL;
              *((_QWORD *)v37 + 66) = v37 + 544;
              *((_QWORD *)v37 + 67) = 0x600000000LL;
            }
            v69 = v37;
          }
          v37[*v37 + 1] = 2;
          v38 = v69;
          v39 = *(unsigned __int8 *)v69;
          *(_BYTE *)v69 = v39 + 1;
          v38[v39 + 2] = v22;
          if ( (_BYTE)v74 )
          {
            sub_FC7790(v71, (__int64 *)&v69, SHIBYTE(v74));
            v71 = 0;
            v74 = 0;
          }
          if ( v72 != v73 )
            operator delete(v72);
          v24 = (void **)v69;
          if ( v69 )
          {
            v25 = v70;
            if ( v70 )
            {
              if ( (unsigned __int64)v69 < v70 || (unsigned __int64)v69 > v70 + 14848 )
              {
                v40 = *((void ***)v69 + 66);
                v41 = &v40[8 * (unsigned __int64)*((unsigned int *)v69 + 134)];
                if ( v40 != v41 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v41 -= 8;
                      v42 = (void **)v41[3];
                      if ( v42 == v41 + 5 )
                        break;
                      operator delete(v42);
                      if ( v40 == v41 )
                        goto LABEL_74;
                    }
                  }
                  while ( v40 != v41 );
LABEL_74:
                  v41 = (void **)v24[66];
                }
                if ( v41 != v24 + 68 )
                  free(v41);
                v43 = (void **)v24[52];
                if ( v43 != v24 + 54 )
                  free(v43);
                v44 = v24 + 48;
                v45 = v24 + 8;
                while ( 1 )
                {
                  v46 = *v44;
                  if ( *v44 != v44 + 2 )
                    break;
LABEL_83:
                  v44 -= 4;
                  if ( v45 == v44 )
                    goto LABEL_39;
                }
                while ( 1 )
                {
                  operator delete(v46);
                  v44 -= 4;
                  if ( v45 == v44 )
                    goto LABEL_39;
                  v46 = *v44;
                  if ( *v44 == v44 + 2 )
                    goto LABEL_83;
                }
              }
LABEL_165:
              v55 = *(unsigned int *)(v25 + 14976);
              *(_DWORD *)(v25 + 14976) = v55 + 1;
              *(_QWORD *)(v25 + 8 * v55 + 14848) = v24;
            }
          }
LABEL_40:
          a1[8].m128_i8[0] |= 1u;
        }
        return;
      case 'J':
      case 'j':
        goto LABEL_56;
      case 'K':
      case 'k':
        if ( (a6[164] & 1) == 0 )
          goto LABEL_57;
        v50 = a1[8].m128_i8[1];
        if ( (v50 & 4) != 0 || (v50 & 8) != 0 || !a1[4].m128_i8[5] && !a1[4].m128_i8[4] )
          goto LABEL_57;
        a1[8].m128_i8[1] |= 8u;
        goto LABEL_149;
      case 'L':
      case 'l':
        if ( v33 )
          goto LABEL_57;
        if ( v34 == v17[1] )
        {
          if ( (_BYTE)v22 )
            goto LABEL_57;
          a1[8].m128_i8[0] |= 8u;
          ++v17;
          v18 = (_BYTE *)v16;
          v33 = 1;
        }
        else
        {
          a1[8].m128_i8[0] |= 4u;
          v18 = (_BYTE *)v16;
          v33 = 1;
        }
        goto LABEL_149;
      case 'Q':
      case 'q':
        if ( v33 || v20 )
          goto LABEL_57;
        a1[8].m128_i8[1] |= 2u;
        v18 = (_BYTE *)v16;
        v33 = 1;
        goto LABEL_149;
      case 'R':
      case 'r':
        if ( (a6[164] & 1) == 0 )
          goto LABEL_57;
        v54 = a1[8].m128_i8[1];
        if ( (v54 & 4) != 0 || (v54 & 8) != 0 || !a1[4].m128_i8[5] && !a1[4].m128_i8[4] )
          goto LABEL_57;
        a1[8].m128_i8[1] |= 4u;
        goto LABEL_149;
      case 'U':
      case 'u':
        if ( (_BYTE)v22 )
          goto LABEL_57;
        v53 = a1[8].m128_i8[0];
        if ( (v53 & 2) != 0 )
          goto LABEL_57;
        v18 = (_BYTE *)v16;
        a1[8].m128_i8[0] = v53 | 2;
        goto LABEL_149;
      case 'W':
      case 'w':
        if ( v33 )
          goto LABEL_57;
        if ( (_BYTE)v22 )
          goto LABEL_57;
        v33 = v32 | (((unsigned __int8)a6[1] >> 3) ^ 1) & 1;
        if ( !v33 || (unsigned __int64)(v17 + 1) >= v16 )
          goto LABEL_57;
        if ( v34 == 119 )
        {
          if ( v17[1] != 98 )
            goto LABEL_57;
        }
        else if ( v34 != 87 || v17[1] != 66 )
        {
          goto LABEL_57;
        }
        a1[8].m128_i8[1] |= 0x10u;
        ++v17;
        goto LABEL_149;
      case 'Z':
      case 'z':
        if ( v33 || (_BYTE)v22 )
          goto LABEL_57;
        a1[8].m128_i8[0] |= 0x10u;
        v18 = (_BYTE *)v16;
        v33 = 1;
        goto LABEL_149;
      case '_':
        if ( v33 )
          goto LABEL_57;
        if ( (_BYTE)v22 )
          goto LABEL_57;
        if ( (a6[1] & 8) == 0 )
          goto LABEL_57;
        v51 = v17 + 2;
        if ( (unsigned __int64)(v17 + 2) >= v16 || v17[1] != 95 )
          goto LABEL_57;
        a1[3].m128_u64[1] = (unsigned __int64)v51;
        if ( (unsigned __int64)(v17 + 3) < v16 && (v17[2] & 0xDF) == 0x55 )
        {
          a1[8].m128_i8[0] |= 2u;
          v51 = v17 + 3;
          a1[3].m128_u64[1] = (unsigned __int64)(v17 + 3);
        }
        v17 = v51 + 1;
        if ( (unsigned __int64)(v51 + 1) >= v16 )
          goto LABEL_199;
        v52 = *v51;
        if ( *v51 != 119 )
          goto LABEL_122;
        a1[3].m128_u64[1] = (unsigned __int64)v17;
        v52 = v51[1];
        if ( v52 == 98 )
          goto LABEL_124;
        ++v51;
LABEL_122:
        if ( v52 != 87 )
        {
LABEL_199:
          v17 = v51;
          goto LABEL_57;
        }
        v17 = v51 + 1;
        a1[3].m128_u64[1] = (unsigned __int64)(v51 + 1);
        if ( v51[1] != 66 )
          goto LABEL_57;
LABEL_124:
        a1[8].m128_i8[1] |= 0x10u;
        v18 = (_BYTE *)v16;
        v32 = 1;
        v33 = 1;
        goto LABEL_149;
      default:
        goto LABEL_57;
    }
  }
}
