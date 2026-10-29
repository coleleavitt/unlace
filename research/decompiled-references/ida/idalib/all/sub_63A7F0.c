unsigned __int64 __fastcall sub_63A7F0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  unsigned int v8; // eax
  int v9; // ebp
  __int64 v11; // rax
  bool v12; // zf
  int *v13; // r12
  unsigned int v14; // eax
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // ax
  char v19; // al
  char v20; // al
  __int16 v21; // ax
  char v22; // al
  __int16 v23; // ax
  _BOOL4 v24; // edx
  __int16 v25; // ax
  __int16 v26; // ax
  __m128i v27; // xmm5
  __int64 *v28; // r14
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  __m128i si128; // xmm2
  __int16 v35; // ax
  __m128i v36; // xmm4
  __int16 v37; // ax
  _BOOL4 v38; // eax
  Elf64_Sym *v39; // rsi
  __int64 v40; // rbx
  int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // r12
  int v44; // eax
  unsigned int v45; // ebx
  char *v46; // rbp
  __int64 v47; // r15
  __int64 v48; // rsi
  __int64 v49; // r9
  unsigned int v50; // r12d
  __int64 v51; // rsi
  char *v52; // r12
  unsigned int v53; // r13d
  unsigned int v54; // r14d
  __int64 v55; // rsi
  char *v56; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-498h] BYREF
  unsigned int v58; // [rsp+18h] [rbp-480h]
  int v59; // [rsp+1Ch] [rbp-47Ch]
  __int64 v60; // [rsp+20h] [rbp-478h]
  __int64 v61; // [rsp+28h] [rbp-470h]
  int *v62; // [rsp+30h] [rbp-468h]
  __int64 *v63; // [rsp+38h] [rbp-460h]
  __int64 v64; // [rsp+48h] [rbp-450h] BYREF
  char v65[1032]; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v66; // [rsp+458h] [rbp-40h]

  v6 = (__int64)a2;
  v7 = a1;
  v8 = *(unsigned __int16 *)(a1 + 3);
  v66 = __readfsqword(0x28u);
  v9 = a3;
  switch ( (_WORD)v8 )
  {
    case 0x10:
      *(_BYTE *)(a1 + 143) = 0;
      goto LABEL_82;
    case 0x11:
LABEL_82:
      v19 = *(_BYTE *)(a1 + 158);
      *(_BYTE *)(a1 + 155) = 1;
      *(_WORD *)(a1 + 153) = 8;
      *(_BYTE *)(a1 + 152) = v19;
      goto LABEL_83;
    case 0x12:
LABEL_83:
      v20 = 6;
      if ( *(_BYTE *)(a1 + 22) )
        v20 = 0;
      *(_BYTE *)(a1 + 156) = v20;
      *(_WORD *)(a1 + 3) = 19;
      goto LABEL_86;
    case 0x13:
LABEL_86:
      if ( !(_BYTE)a3 )
      {
        netnode_check(&v64, "$ segregs", 0, 0);
        netnode_rename(v64, "$ regs", 0);
      }
      *(_BYTE *)(a1 + 159) = 1;
      *(_WORD *)(a1 + 3) = 20;
      goto LABEL_89;
    case 0x14:
LABEL_89:
      a1 += 162;
      a2 = "a";
      *(_WORD *)(v7 + 160) = 1;
      qstrncpy(v7 + 162, "a", 16);
      *(_BYTE *)(v7 + 187) = -1;
LABEL_90:
      *(_DWORD *)(v7 + 188) = 16811140;
      *(_WORD *)(v7 + 192) = 1;
      *(_WORD *)(v7 + 3) = 22;
      if ( (_BYTE)v9 )
        goto LABEL_39;
      a3 = dword_2CCC3C8 | 1u;
      dword_2CCC3C8 |= 1u;
      v8 = *(unsigned __int16 *)(v7 + 3);
      if ( (_WORD)v8 != 22 )
      {
        if ( (_WORD)v8 != 23 )
        {
          if ( (_WORD)v8 != 24 )
          {
            switch ( (_WORD)v8 )
            {
              case 0x19:
                *(_BYTE *)(v7 + 22) = 0;
                *(_DWORD *)(v7 + 218) = 245612135;
                *(_DWORD *)(v7 + 226) = 104857607;
                *(_WORD *)(v7 + 3) = 27;
                break;
              case 0x1A:
                *(_WORD *)(v7 + 3) = 27;
                break;
              case 0x1B:
                goto LABEL_43;
              default:
                goto LABEL_13;
            }
LABEL_42:
            dword_2CCC3C8 |= 0x50u;
            v8 = *(unsigned __int16 *)(v7 + 3);
            if ( (_WORD)v8 == 27 )
            {
LABEL_43:
              *(_WORD *)(v7 + 3) = 28;
              goto LABEL_44;
            }
LABEL_13:
            if ( (_WORD)v8 != 28 )
              goto LABEL_14;
LABEL_45:
            *(_QWORD *)(v7 + 234) = 7;
            goto LABEL_46;
          }
          goto LABEL_38;
        }
LABEL_37:
        dword_2CCC3C8 = a3 | 4;
        *(_WORD *)(v7 + 3) = 24;
        LODWORD(a3) = dword_2CCC3C8;
LABEL_38:
        a3 = (unsigned int)a3 | 8;
        dword_2CCC3C8 = a3;
        goto LABEL_39;
      }
LABEL_36:
      dword_2CCC3C8 = a3 | 3;
      *(_WORD *)(v7 + 3) = 23;
      LODWORD(a3) = dword_2CCC3C8;
      goto LABEL_37;
    case 0x15:
      goto LABEL_90;
    case 0x16:
      if ( (_BYTE)a3 )
      {
LABEL_39:
        *(_QWORD *)(v7 + 144) = *(unsigned __int16 *)(v7 + 41);
        v11 = *(unsigned __int16 *)(v7 + 43);
        *(_DWORD *)(v7 + 41) = 0;
        *(_QWORD *)(v7 + 194) = v11;
        *(_QWORD *)(v7 + 202) = *(unsigned __int16 *)(v7 + 53);
        goto LABEL_40;
      }
      LODWORD(a3) = dword_2CCC3C8;
      goto LABEL_36;
    case 0x17:
      if ( (_BYTE)a3 )
        goto LABEL_39;
      LODWORD(a3) = dword_2CCC3C8;
      goto LABEL_37;
    case 0x18:
      if ( (_BYTE)a3 )
        goto LABEL_39;
      LODWORD(a3) = dword_2CCC3C8;
      goto LABEL_38;
    case 0x19:
LABEL_40:
      *(_BYTE *)(v7 + 22) = 0;
      *(_DWORD *)(v7 + 218) = 245612135;
      *(_DWORD *)(v7 + 226) = 104857607;
LABEL_41:
      *(_WORD *)(v7 + 3) = 27;
      if ( (_BYTE)v9 )
        goto LABEL_45;
      goto LABEL_42;
    case 0x1A:
      goto LABEL_41;
  }
  if ( (_WORD)v8 != 27 )
    goto LABEL_13;
  *(_WORD *)(a1 + 3) = 28;
  if ( (_BYTE)a3 )
    goto LABEL_45;
LABEL_44:
  dword_2CCC3C8 |= 0x60u;
  v8 = *(unsigned __int16 *)(v7 + 3);
  if ( (_WORD)v8 == 28 )
    goto LABEL_45;
LABEL_14:
  switch ( (_WORD)v8 )
  {
    case 0x1D:
LABEL_46:
      v12 = *(_BYTE *)(v7 + 161) == 0;
      *(_BYTE *)(v7 + 133) = 0;
      *(_WORD *)(v7 + 3) = 30;
      if ( !v12 )
        *(_BYTE *)(v7 + 160) |= 4u;
      *(_BYTE *)(v7 + 161) = 15;
      *(_WORD *)(v7 + 53) = -1;
      if ( (_BYTE)v9 )
      {
        v33 = *(_BYTE *)(v7 + 140) != 0;
        *(_WORD *)(v7 + 250) = 1;
        *(_DWORD *)(v7 + 242) = 4 * v33;
        LOWORD(ptr[0]) = *(unsigned __int8 *)(v7 + 187);
        LOBYTE(v33) = ptr[0];
        BYTE1(v33) = *(_BYTE *)(v7 + 189);
        LOWORD(ptr[0]) = v33;
        LOWORD(v33) = *(unsigned __int8 *)(v7 + 188);
        si128 = _mm_load_si128((const __m128i *)ptr);
        *(_WORD *)(v7 + 187) = 0;
        *(_WORD *)(v7 + 256) = v33;
        *(_DWORD *)(v7 + 252) = _mm_cvtsi128_si32(_mm_unpacklo_epi8(si128, (__m128i)0LL));
        goto LABEL_142;
      }
      v13 = &dword_2CCC3C8;
      dword_2CCC3C8 |= 0x80u;
      v14 = *(unsigned __int16 *)(v7 + 3);
      if ( (_WORD)v14 != 30 )
      {
        if ( (_WORD)v14 == 31 )
        {
LABEL_117:
          *(_WORD *)(v7 + 3) = 32;
LABEL_118:
          a1 = v6;
          sub_41DB90(v6);
          dword_2CCC3C8 |= 0x200u;
          v8 = *(unsigned __int16 *)(v7 + 3);
          if ( (_WORD)v8 != 32 )
          {
LABEL_18:
            if ( (_WORD)v8 != 33 )
            {
              a3 = v8;
              if ( (_WORD)v8 != 34 )
              {
                if ( (_WORD)v8 != 35 )
                  goto LABEL_21;
LABEL_55:
                *(_WORD *)(v7 + 3) = 36;
                if ( !(_BYTE)v9 )
                {
                  v13 = &dword_2CCC3C8;
                  goto LABEL_104;
                }
LABEL_61:
                *(_BYTE *)(v7 + 275) = *(_BYTE *)(v7 + 187);
LABEL_62:
                *(_BYTE *)(v7 + 138) |= 2u;
                goto LABEL_63;
              }
              goto LABEL_100;
            }
LABEL_98:
            v21 = *(_WORD *)(v7 + 23);
            if ( v21 )
            {
              if ( v21 == 1 )
                *(_WORD *)(v7 + 23) = 23;
            }
            else
            {
              a3 = 22;
              *(_WORD *)(v7 + 23) = 22;
            }
LABEL_100:
            if ( (_BYTE)v9 )
              goto LABEL_61;
            goto LABEL_101;
          }
          goto LABEL_119;
        }
LABEL_51:
        if ( (_WORD)v14 != 32 )
        {
          if ( (_WORD)v14 != 33 )
          {
            a3 = v14;
            if ( (_WORD)v14 != 34 )
            {
              if ( (_WORD)v14 == 35 )
                goto LABEL_55;
              goto LABEL_21;
            }
            goto LABEL_101;
          }
          goto LABEL_98;
        }
LABEL_119:
        v25 = *(unsigned __int8 *)(v7 + 187);
        *(_WORD *)(v7 + 3) = 33;
        LOWORD(ptr[0]) = v25;
        HIBYTE(v25) = *(_BYTE *)(v7 + 189);
        LOWORD(ptr[0]) = v25;
        v26 = *(unsigned __int8 *)(v7 + 188);
        v27 = _mm_load_si128((const __m128i *)ptr);
        *(_WORD *)(v7 + 187) = 0;
        *(_WORD *)(v7 + 256) = v26;
        *(_DWORD *)(v7 + 252) = _mm_cvtsi128_si32(_mm_unpacklo_epi8(v27, (__m128i)0LL));
        goto LABEL_120;
      }
      a3 = 31;
      a4 = 1;
      v38 = *(_BYTE *)(v7 + 140) != 0;
      *(_WORD *)(v7 + 3) = 31;
      *(_WORD *)(v7 + 250) = 1;
      *(_DWORD *)(v7 + 242) = 4 * v38;
LABEL_116:
      dword_2CCC3C8 |= 0x100u;
      v14 = *(unsigned __int16 *)(v7 + 3);
      if ( (_WORD)v14 == 31 )
        goto LABEL_117;
      goto LABEL_51;
    case 0x1E:
      v23 = *(_WORD *)(v7 + 53) >> 15;
      a1 = 31;
      *(_WORD *)(v7 + 3) = 31;
      v24 = *(_BYTE *)(v7 + 140) != 0;
      *(_WORD *)(v7 + 250) = v23;
      a3 = (unsigned int)(4 * v24);
      *(_DWORD *)(v7 + 242) = a3;
      if ( (_BYTE)v9 )
      {
LABEL_58:
        LOWORD(ptr[0]) = *(unsigned __int8 *)(v7 + 187);
        LOBYTE(v15) = ptr[0];
        HIBYTE(v15) = *(_BYTE *)(v7 + 189);
        LOWORD(ptr[0]) = v15;
        v16 = *(unsigned __int8 *)(v7 + 188);
        *(_DWORD *)(v7 + 252) = _mm_cvtsi128_si32(_mm_unpacklo_epi8(_mm_load_si128((const __m128i *)ptr), (__m128i)0LL));
        *(_WORD *)(v7 + 187) = 0;
        *(_WORD *)(v7 + 256) = v16;
        v17 = *(_WORD *)(v7 + 23);
        if ( !v17 )
        {
LABEL_143:
          *(_WORD *)(v7 + 23) = 22;
          goto LABEL_61;
        }
LABEL_59:
        if ( v17 == 1 )
          *(_WORD *)(v7 + 23) = 23;
        goto LABEL_61;
      }
      v13 = &dword_2CCC3C8;
      goto LABEL_116;
    case 0x1F:
      a2 = (const char *)&qword_20;
      *(_WORD *)(v7 + 3) = 32;
      if ( (_BYTE)v9 )
        goto LABEL_58;
      v13 = &dword_2CCC3C8;
      goto LABEL_118;
  }
  if ( (_WORD)v8 != 32 )
    goto LABEL_18;
  v35 = *(unsigned __int8 *)(v7 + 187);
  *(_WORD *)(v7 + 3) = 33;
  LOWORD(ptr[0]) = v35;
  HIBYTE(v35) = *(_BYTE *)(v7 + 189);
  LOWORD(ptr[0]) = v35;
  v36 = _mm_load_si128((const __m128i *)ptr);
  v37 = *(unsigned __int8 *)(v7 + 188);
  *(_WORD *)(v7 + 187) = 0;
  *(_WORD *)(v7 + 256) = v37;
  *(_DWORD *)(v7 + 252) = _mm_cvtsi128_si32(_mm_unpacklo_epi8(v36, (__m128i)0LL));
  if ( (_BYTE)v9 )
  {
LABEL_142:
    v17 = *(_WORD *)(v7 + 23);
    if ( !v17 )
      goto LABEL_143;
    goto LABEL_59;
  }
  v13 = &dword_2CCC3C8;
LABEL_120:
  dword_2CCC3C8 |= 0x400u;
  v28 = &v64;
  if ( !strcasecmp((const char *)(v7 + 5), "java") )
  {
    v64 = -1;
    if ( (unsigned __int8)netnode_check(&v64, "$ Constant Pool ~", 0, 1)
      || netnode_supval(v64, 0, 0, 0, 83) <= 0
      || netnode_altval(v64, -1, 65) != 19 )
    {
      sub_378C70((__int64)"Unsupported java database format");
    }
    v60 = v7;
    v39 = &stru_10000;
    v61 = v6;
    v62 = &dword_2CCC3C8;
    v63 = &v64;
    while ( 1 )
    {
      v42 = netnode_supnext(v64, v39, 65);
      LODWORD(v40) = v42;
      if ( v42 == -1 )
        break;
      if ( !(_WORD)v42 )
      {
        v43 = v42 + 1;
        v44 = netnode_altval(v64, v42, 65);
        if ( !v44 )
          goto LABEL_214;
        if ( (_WORD)v44 )
        {
          LODWORD(v40) = v40 + 1;
          v41 = 2 * (unsigned __int16)v44;
          if ( (unsigned __int16)v44 > 0x7Fu )
          {
            ptr[0] = (void *)qalloc(v41);
            if ( !ptr[0] )
              sub_3BC000((int)"java_converter");
            v58 = v41;
            v45 = 254;
            v59 = v9;
            v46 = (char *)ptr[0];
            do
            {
              v47 = v43;
              if ( v45 > v41 )
                v45 = v41;
              v48 = v43++;
              if ( netnode_supval(v64, v48, v46, v45, 83) <= 0 )
                goto LABEL_214;
              v46 += v45;
              v41 -= v45;
            }
            while ( v41 );
            v9 = v59;
            if ( netnode_supval(v64, v43, 0, 0, 83) > 0 )
LABEL_214:
              sub_378C70((__int64)"Internal error in java database format converter");
            v49 = v58;
            if ( (_WORD)v47 )
            {
              v50 = v58;
              do
              {
                v51 = v47;
                v40 = v47--;
                netnode_supdel(v64, v51, 83);
              }
              while ( (_WORD)v47 );
              v49 = v50;
            }
            else
            {
              v40 = v43;
            }
            v52 = (char *)ptr[0];
            v53 = 1024;
            v54 = v49;
            do
            {
              v55 = v40;
              v56 = v52;
              if ( v53 > v54 )
                v53 = v54;
              ++v40;
              v52 += v53;
              netnode_supset(v64, v55, v56, v53, 83, v49);
              v54 -= v53;
            }
            while ( v54 );
            qfree(ptr[0]);
          }
        }
        else
        {
          LODWORD(v40) = v40 + 1;
        }
      }
      v39 = (Elf64_Sym *)((char *)&stru_10000 + ((unsigned int)v40 & 0xFFFF0000));
    }
    v7 = v60;
    v6 = v61;
    v13 = v62;
    v28 = v63;
  }
  a2 = "$ vmm functions";
  netnode_check(v28, "$ vmm functions", 0, 0);
  a1 = (__int64)v28;
  netnode_kill((int)v28);
  a3 = *(unsigned __int16 *)(v7 + 3);
  if ( (_WORD)a3 == 33 )
    goto LABEL_98;
  if ( (_WORD)a3 != 34 )
  {
    if ( (_WORD)a3 == 35 )
      goto LABEL_103;
    goto LABEL_21;
  }
LABEL_101:
  *(_WORD *)(v7 + 3) = 35;
  sub_4C6CE0(a1, (__int64)a2, a3, a4, a5, a6);
  LOWORD(a3) = *(_WORD *)(v7 + 3);
  if ( (_WORD)a3 == 35 )
  {
    v13 = &dword_2CCC3C8;
LABEL_103:
    *(_WORD *)(v7 + 3) = 36;
LABEL_104:
    *v13 |= 0x800u;
    LOWORD(a3) = *(_WORD *)(v7 + 3);
    if ( (_WORD)a3 == 36 )
      goto LABEL_105;
    goto LABEL_22;
  }
LABEL_21:
  if ( (_WORD)a3 == 36 )
    goto LABEL_105;
LABEL_22:
  if ( (_WORD)a3 != 37 )
  {
    switch ( (_WORD)a3 )
    {
      case '&':
        *(_BYTE *)(v7 + 138) |= 2u;
        break;
      case '\'':
        break;
      case '(':
        *(_WORD *)(v7 + 3) = 41;
        if ( (_BYTE)v9 )
        {
          v12 = *(_BYTE *)(v7 + 135) == 0;
          *(_BYTE *)(v7 + 140) = 0;
          *(_WORD *)(v7 + 3) = 42;
          v18 = 42;
          *(_WORD *)(v7 + 281) = 1026;
          *(_BYTE *)(v7 + 283) = 8;
          if ( v12 )
          {
LABEL_67:
            LOWORD(a3) = v18;
            if ( v18 != 42 && v18 != 43 )
            {
              if ( v18 != 44 )
              {
                if ( v18 != 470 )
                  goto LABEL_149;
                *(_WORD *)(v7 + 3) = 471;
                if ( (_BYTE)v9 )
                  goto LABEL_138;
LABEL_153:
                dword_2CCC3C8 |= 0x20000u;
                LOWORD(a3) = *(_WORD *)(v7 + 3);
                if ( (_WORD)a3 == 471 )
                  goto LABEL_72;
                goto LABEL_154;
              }
              *(_WORD *)(v7 + 3) = 470;
              if ( (_BYTE)v9 )
                goto LABEL_138;
              goto LABEL_166;
            }
            *(_WORD *)(v7 + 3) = 44;
            if ( (_BYTE)v9 )
              goto LABEL_138;
LABEL_69:
            dword_2CCC3C8 |= 0x8000u;
            LOWORD(a3) = *(_WORD *)(v7 + 3);
            if ( (_WORD)a3 != 44 )
            {
              if ( (_WORD)a3 == 470 )
                goto LABEL_167;
              goto LABEL_71;
            }
            *(_WORD *)(v7 + 3) = 470;
LABEL_166:
            dword_2CCC3C8 |= 0x10000u;
            LOWORD(a3) = *(_WORD *)(v7 + 3);
            if ( (_WORD)a3 == 470 )
            {
LABEL_167:
              *(_WORD *)(v7 + 3) = 471;
              dword_2CCC3C8 |= 0x20000u;
              LOWORD(a3) = *(_WORD *)(v7 + 3);
              if ( (_WORD)a3 == 471 )
              {
LABEL_150:
                *(_WORD *)(v7 + 3) = 502;
                if ( !(_BYTE)v9 )
                  goto LABEL_73;
LABEL_138:
                *(_DWORD *)(v7 + 289) = 0;
                *(_WORD *)(v7 + 3) = 650;
                *(_OWORD *)(v7 + 344) = 0;
                return v66 - __readfsqword(0x28u);
              }
LABEL_154:
              if ( (_WORD)a3 != 480 )
                goto LABEL_74;
LABEL_72:
              *(_WORD *)(v7 + 3) = 502;
LABEL_73:
              dword_2CCC3C8 |= 0x40000u;
              LOWORD(a3) = *(_WORD *)(v7 + 3);
              goto LABEL_74;
            }
LABEL_71:
            if ( (_WORD)a3 == 471 )
              goto LABEL_72;
            goto LABEL_154;
          }
LABEL_137:
          LOWORD(a3) = *(_WORD *)(v7 + 3);
          *(_BYTE *)(v7 + 135) = *(_BYTE *)(v7 + 131);
          if ( (_WORD)a3 == 42 || (_WORD)a3 == 43 || (_WORD)a3 == 44 || (_WORD)a3 == 470 || (_WORD)a3 == 471 )
            goto LABEL_138;
          goto LABEL_160;
        }
        goto LABEL_129;
      default:
        goto LABEL_26;
    }
    if ( !(_BYTE)v9 )
      goto LABEL_127;
LABEL_63:
    *(_BYTE *)(v7 + 140) = 0;
    goto LABEL_64;
  }
LABEL_105:
  v22 = *(_BYTE *)(v7 + 187);
  *(_WORD *)(v7 + 3) = 38;
  *(_BYTE *)(v7 + 275) = v22;
  if ( (_BYTE)v9 )
    goto LABEL_62;
  dword_2CCC3C8 |= 0x1000u;
  v18 = *(_WORD *)(v7 + 3);
  LOWORD(a3) = v18;
  if ( v18 == 38 )
  {
    *(_BYTE *)(v7 + 138) |= 2u;
LABEL_127:
    *(_WORD *)(v7 + 3) = 40;
    dword_2CCC3C8 |= 0x2000u;
    LOWORD(a3) = *(_WORD *)(v7 + 3);
    if ( (_WORD)a3 != 40 )
      goto LABEL_26;
    goto LABEL_128;
  }
  if ( v18 == 39 )
    goto LABEL_127;
  if ( v18 != 40 )
  {
    if ( v18 != 41 )
    {
      if ( (unsigned __int16)v18 > 0x1F6u )
        goto LABEL_28;
      if ( !*(_BYTE *)(v7 + 135) )
        goto LABEL_67;
      goto LABEL_112;
    }
    goto LABEL_64;
  }
LABEL_128:
  *(_WORD *)(v7 + 3) = 41;
LABEL_129:
  dword_2CCC3C8 |= 0x4000u;
  if ( sub_7BE950(v6 + 1520, v6, 2, v65, 1024, 83) > 0 )
    sub_632C30(v6, 71, v65, 0, v29, v30);
  if ( sub_7BE950(v6 + 1520, v6, 3, v65, 1024, 83) > 0 )
    sub_632C30(v6, 72, v65, 0, v31, v32);
  sub_7BE850(v6 + 1520, v6, 2, 83);
  sub_7BE850(v6 + 1520, v6, 3, 83);
  *(_BYTE *)(v7 + 140) = 0;
  LOWORD(a3) = *(_WORD *)(v7 + 3);
LABEL_26:
  if ( (_WORD)a3 == 41 )
  {
LABEL_64:
    *(_BYTE *)(v7 + 283) = 8;
    *(_WORD *)(v7 + 3) = 42;
    *(_WORD *)(v7 + 281) = 1026;
    goto LABEL_65;
  }
  if ( (unsigned __int16)a3 > 0x1F6u )
    goto LABEL_28;
LABEL_65:
  if ( !*(_BYTE *)(v7 + 135) )
  {
    v18 = *(_WORD *)(v7 + 3);
    goto LABEL_67;
  }
  if ( (_BYTE)v9 )
    goto LABEL_137;
LABEL_112:
  netnode_check(&v64, &unk_22D9076, 0, 0);
  netnode_rename(v64, "$ segs", 0);
  netnode_check(&v64, &unk_22D908B, 0, 0);
  netnode_rename(v64, "$ segs sarray", 0);
  LOWORD(a3) = *(_WORD *)(v7 + 3);
  *(_BYTE *)(v7 + 135) = *(_BYTE *)(v7 + 131);
  switch ( (_WORD)a3 )
  {
    case 0x2A:
    case 0x2B:
      *(_WORD *)(v7 + 3) = 44;
      goto LABEL_69;
    case 0x2C:
      *(_WORD *)(v7 + 3) = 470;
      goto LABEL_166;
    case 0x1D6:
      *(_WORD *)(v7 + 3) = 471;
      goto LABEL_153;
  }
LABEL_149:
  if ( (_WORD)a3 == 471 )
    goto LABEL_150;
LABEL_160:
  if ( (_WORD)a3 == 480 )
    goto LABEL_150;
LABEL_74:
  if ( (_WORD)a3 == 502 )
    goto LABEL_75;
LABEL_28:
  if ( (_WORD)a3 == 550 )
  {
LABEL_75:
    *(_DWORD *)(v7 + 289) = 0;
    *(_OWORD *)(v7 + 344) = 0;
    goto LABEL_76;
  }
  if ( (_WORD)a3 != 560 )
  {
    if ( (_WORD)a3 != 600 )
      goto LABEL_31;
    *(_WORD *)(v7 + 3) = 610;
    if ( (_BYTE)v9 )
      goto LABEL_80;
LABEL_79:
    dword_2CCC3C8 |= 0x80000u;
    LOWORD(a3) = *(_WORD *)(v7 + 3);
    if ( (_WORD)a3 == 610 )
      goto LABEL_80;
    goto LABEL_32;
  }
LABEL_76:
  *(_WORD *)(v7 + 3) = 600;
  if ( (_BYTE)v9 )
    goto LABEL_80;
  sub_6301B0(v6, 92);
  LOWORD(a3) = *(_WORD *)(v7 + 3);
  if ( (_WORD)a3 == 600 )
  {
    *(_WORD *)(v7 + 3) = 610;
    goto LABEL_79;
  }
LABEL_31:
  if ( (_WORD)a3 == 610 )
  {
LABEL_80:
    *(_WORD *)(v7 + 3) = 650;
    return v66 - __readfsqword(0x28u);
  }
LABEL_32:
  if ( (_WORD)a3 == 640 )
    goto LABEL_80;
  return v66 - __readfsqword(0x28u);
}
