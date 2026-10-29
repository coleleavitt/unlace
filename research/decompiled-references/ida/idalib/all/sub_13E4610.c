__int64 __fastcall sub_13E4610(
        int a1,
        __int64 *a2,
        unsigned __int8 *a3,
        char *a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        _BYTE *a9,
        int a10)
{
  __int64 *v10; // r12
  _BYTE *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  unsigned int v14; // r13d
  int v16; // edx
  unsigned __int8 *v17; // rcx
  char v18; // r15
  __int64 v19; // rdx
  char v20; // r14
  char v21; // al
  char v22; // dl
  __int64 v24; // rax
  unsigned __int8 *v25; // rdx
  unsigned __int8 v26; // cl
  char v27; // r13
  unsigned __int8 v28; // al
  unsigned __int64 v29; // rax
  char v30; // cl
  char *v31; // r8
  _QWORD *v32; // rcx
  __m128i *v33; // rax
  unsigned __int8 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  char *v37; // rsi
  __int64 v38; // rdx
  _QWORD *v39; // rax
  char *v40; // rdx
  char v41; // cl
  unsigned __int8 *v42; // rax
  char v43; // r15
  __int64 v44; // rdx
  unsigned __int8 *v45; // r14
  _QWORD *v46; // rdx
  __int64 v47; // rax
  void **v48; // r14
  unsigned __int64 v49; // rax
  void **v50; // rdx
  void **v51; // r15
  unsigned int v52; // r12d
  _BYTE *v53; // rbp
  void **v54; // rbx
  void **v55; // rdi
  void **v56; // rdi
  void **v57; // r15
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  _BYTE *v65; // r12
  __int64 v66; // rbx
  unsigned int v67; // r15d
  __int64 v68; // rbp
  void *v69; // rdi
  char v74; // [rsp+20h] [rbp-E8h]
  unsigned __int8 v75; // [rsp+20h] [rbp-E8h]
  char v76; // [rsp+20h] [rbp-E8h]
  __int64 *v77; // [rsp+20h] [rbp-E8h]
  void **v78; // [rsp+20h] [rbp-E8h]
  size_t n; // [rsp+28h] [rbp-E0h]
  void *v80[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v81[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *v82; // [rsp+60h] [rbp-A8h]
  signed __int64 v83; // [rsp+68h] [rbp-A0h]
  __m128i v84; // [rsp+70h] [rbp-98h] BYREF
  void *v85; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v86; // [rsp+88h] [rbp-80h]
  __int64 v87; // [rsp+90h] [rbp-78h]
  void *v88; // [rsp+A0h] [rbp-68h]
  __int64 v89; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v90; // [rsp+C0h] [rbp-48h]

  v10 = a2;
  v11 = (_BYTE *)*a2;
  v12 = *a2 + 2;
  *a2 = v12;
  v13 = (char)v11[1];
  v14 = v13;
  switch ( (char)v13 )
  {
    case '"':
    case '\'':
    case '?':
    case '\\':
      goto LABEL_19;
    case '%':
    case '(':
    case '[':
    case '{':
      if ( !a8 )
        goto LABEL_19;
      sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)(v11 + 2), 1230);
      goto LABEL_69;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      *a2 = v12;
      v24 = (__int64)(v11 + 2);
      v13 = (char)v11[1] - 48;
      if ( (unsigned __int8 *)v12 != a3 && (unsigned __int8)(v11[2] - 48) <= 7u )
      {
        v24 = (__int64)(v11 + 3);
        *a2 = (__int64)(v11 + 3);
        v13 = ((char)v11[2] - 48) | (8 * v13);
        if ( a3 != v11 + 3 && (unsigned __int8)(v11[3] - 48) <= 7u )
        {
          v24 = (__int64)(v11 + 4);
          *a2 = (__int64)(v11 + 4);
          v13 = ((char)v11[3] - 48) | (8 * v13);
        }
      }
      if ( a7 != 32 && v13 >> a7 )
      {
        if ( a8 )
        {
          sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, v24, 1038);
          sub_AE9DF0((unsigned __int8 **)&v85, 1, 2u);
          sub_AEA040((__int64)&v85);
        }
        v13 &= 0xFFFFFFFF >> (32 - a7);
      }
      goto LABEL_19;
    case 'E':
      v13 = 27;
      if ( a8 )
      {
        sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)(v11 + 2), 1230);
        sub_AE9DF0((unsigned __int8 **)&v85, (__int64)"E", 1u);
        sub_AEA040((__int64)&v85);
      }
      goto LABEL_38;
    case 'a':
      return 7;
    case 'b':
      return 8;
    case 'e':
      v13 = 27;
      if ( a8 )
      {
        sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)(v11 + 2), 1230);
        sub_AE9DF0((unsigned __int8 **)&v85, (__int64)"e", 1u);
        sub_AEA040((__int64)&v85);
      }
      goto LABEL_38;
    case 'f':
      return 12;
    case 'n':
      return 10;
    case 'o':
      if ( (unsigned __int8 *)v12 != a3 && v11[2] == 123 )
      {
        v25 = v11 + 3;
        *a2 = (__int64)(v11 + 3);
        if ( v11[3] == 125 )
        {
          *a4 = 1;
          if ( a8 )
          {
            sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)(v11 + 3), 1031);
            sub_AEA040((__int64)&v85);
            v25 = (unsigned __int8 *)*a2;
LABEL_44:
            if ( a3 != v25 )
            {
              if ( *v25 != 125 )
              {
                v13 = 0;
                v26 = *v25;
                v75 = v14;
                v27 = 0;
                do
                {
                  if ( (unsigned __int8)(v26 - 48) <= 7u )
                  {
                    if ( (v13 & 0xE0000000) != 0 )
                      v27 = 1;
                    *a2 = (__int64)(v25 + 1);
                    v13 = ((char)*v25++ - 48) | (8 * v13);
                  }
                  else
                  {
                    *a4 = 1;
                    sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)v25, 1032);
                    sub_AEC220((unsigned __int8 **)&v85, (_BYTE *)*a2, 1);
                    sub_AEA040((__int64)&v85);
                    v25 = (unsigned __int8 *)(*a2 + 1);
                    *a2 = (__int64)v25;
                  }
                  if ( a3 == v25 )
                  {
                    v43 = v27;
                    v14 = v75;
                    v21 = *a4;
                    if ( *a4 )
                      goto LABEL_160;
                    goto LABEL_136;
                  }
                  v26 = *v25;
                }
                while ( *v25 != 125 );
                v43 = v27;
                v14 = v75;
LABEL_115:
                *a2 = (__int64)++v25;
                if ( *a4 )
                {
LABEL_116:
                  if ( a8 )
                    goto LABEL_17;
                  goto LABEL_19;
                }
                v21 = 1;
LABEL_136:
                if ( v43 )
                {
LABEL_137:
                  *a4 = 1;
                  if ( a8 )
                  {
                    v76 = v21;
                    sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)v25, 1038);
                    sub_AE9DF0((unsigned __int8 **)&v85, 1, 2u);
                    sub_AEA040((__int64)&v85);
                    v21 = v76;
                  }
                  v20 = 1;
                  v13 &= 0xFFFFFFFF >> (32 - a7);
                  goto LABEL_14;
                }
LABEL_142:
                v20 = 1;
                if ( a7 == 32 || !(v13 >> a7) )
                  goto LABEL_14;
                goto LABEL_137;
              }
              goto LABEL_140;
            }
LABEL_152:
            v21 = *a4;
            if ( !*a4 )
            {
              v13 = 0;
              v20 = 1;
              goto LABEL_14;
            }
            if ( !a8 )
              goto LABEL_154;
            v13 = 0;
            goto LABEL_160;
          }
        }
        else if ( a8 )
        {
          goto LABEL_44;
        }
        if ( v25 != a3 )
        {
          v41 = v11[3];
          if ( v41 != 125 )
          {
            v42 = v11 + 4;
            v13 = 0;
            v43 = 0;
            while ( 1 )
            {
              if ( (unsigned __int8)(v41 - 48) <= 7u )
              {
                *a2 = (__int64)v42;
                v25 = v42;
                if ( (v13 & 0xE0000000) != 0 )
                  v43 = 1;
                v13 = ((char)*(v42 - 1) - 48) | (8 * v13);
              }
              else
              {
                *a4 = 1;
                v25 = v42;
                *a2 = (__int64)v42;
              }
              if ( a3 == v42 )
                break;
              v41 = *v42++;
              if ( v41 == 125 )
                goto LABEL_115;
            }
            v21 = *a4;
            if ( *a4 )
              goto LABEL_19;
            goto LABEL_136;
          }
LABEL_140:
          ++v25;
          v13 = 0;
          *a2 = (__int64)v25;
          if ( *a4 )
            goto LABEL_116;
          v21 = 1;
          goto LABEL_142;
        }
        goto LABEL_152;
      }
      v13 = 111;
      *a4 = 1;
      if ( a8 )
      {
        sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)(v11 + 2), 1033);
        sub_AE9DF0((unsigned __int8 **)&v85, (__int64)"o", 1u);
        v13 = 111;
        sub_AEA040((__int64)&v85);
      }
LABEL_38:
      if ( a10 == 1 )
      {
LABEL_39:
        sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, *v10, 1194);
        sub_AEC220((unsigned __int8 **)&v85, v11, *v10 - (_QWORD)v11);
        sub_AEA040((__int64)&v85);
        *a4 = 1;
      }
      return v13;
    case 'r':
      return 13;
    case 't':
      return 9;
    case 'v':
      return 11;
    case 'x':
      if ( (unsigned __int8 *)v12 == a3 )
        goto LABEL_58;
      v28 = v11[2];
      if ( v28 != 123 )
      {
        if ( (byte_2411740[2 * v28] & 0x18) == 0 )
        {
LABEL_58:
          v13 = 0;
          if ( a8 )
          {
            sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)(v11 + 2), 1045);
            sub_AE9DF0((unsigned __int8 **)&v85, (__int64)"x", 1u);
            sub_AEA040((__int64)&v85);
          }
          return v13;
        }
        v16 = word_23E43C0[v28];
        if ( (_WORD)v16 != 0xFFFF )
        {
          v17 = v11 + 3;
          v13 = 0;
          v18 = 0;
          do
          {
            *a2 = (__int64)v17;
            if ( (v13 & 0xF0000000) != 0 )
              v18 = 1;
            v13 = v16 | (16 * v13);
            if ( a3 == v17 )
              break;
            v19 = *v17++;
            v16 = word_23E43C0[v19];
          }
          while ( (_WORD)v16 != 0xFFFF );
          v20 = 0;
          v21 = 0;
          goto LABEL_9;
        }
        v20 = 0;
        v13 = 0;
        v18 = 0;
        v22 = *a4;
        v21 = 0;
        goto LABEL_96;
      }
      v34 = v11 + 3;
      *a2 = (__int64)(v11 + 3);
      if ( v11[3] == 125 )
      {
        *a4 = 1;
        if ( a8 )
        {
          sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)(v11 + 3), 1031);
          sub_AEA040((__int64)&v85);
          v34 = (unsigned __int8 *)*a2;
          if ( a3 == (unsigned __int8 *)*a2 )
          {
            v13 = 0;
            goto LABEL_160;
          }
          v35 = *v34;
LABEL_86:
          v13 = 0;
          v18 = 0;
          if ( (_BYTE)v35 == 125 )
            goto LABEL_149;
          while ( 1 )
          {
            if ( word_23E43C0[v35] == -1 )
            {
              *a4 = 1;
              sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)v34, 1032);
              sub_AEC220((unsigned __int8 **)&v85, (_BYTE *)*a2, 1);
              sub_AEA040((__int64)&v85);
            }
            else
            {
              if ( (v13 & 0xF0000000) != 0 )
                v18 = 1;
              v13 = word_23E43C0[v35] | (16 * v13);
            }
            v36 = *a2;
            v34 = (unsigned __int8 *)(*a2 + 1);
            *a2 = (__int64)v34;
            if ( v34 == a3 )
              break;
            v35 = *(unsigned __int8 *)(v36 + 1);
            if ( (_BYTE)v35 == 125 )
            {
              v14 = (unsigned __int8)v14;
LABEL_149:
              v20 = 1;
              v21 = 1;
              *a2 = (__int64)(v34 + 1);
LABEL_9:
              v22 = *a4;
              if ( a7 != 32 && v13 >> a7 )
              {
                v13 &= 0xFFFFFFFF >> (32 - a7);
                if ( !v22 )
                  goto LABEL_12;
                goto LABEL_14;
              }
LABEL_96:
              if ( (((unsigned __int8)v22 ^ 1) & (unsigned __int8)v18) != 0 )
              {
LABEL_12:
                v74 = v21;
                *a4 = 1;
                if ( !a8 )
                  goto LABEL_38;
                sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, *a2, 1038);
                sub_AE9DF0((unsigned __int8 **)&v85, 0, 2u);
                sub_AEA040((__int64)&v85);
                v21 = v74;
              }
LABEL_14:
              if ( a8 && v20 )
              {
                if ( !v21 )
                  goto LABEL_160;
LABEL_17:
                if ( !*a4 )
                  sub_13D2A10(a5, 0, a9, a8);
              }
              goto LABEL_19;
            }
          }
          v14 = (unsigned __int8)v14;
LABEL_151:
          v20 = 1;
          v21 = 0;
          goto LABEL_9;
        }
        if ( v34 == a3 )
        {
LABEL_154:
          v13 = 0;
          goto LABEL_19;
        }
        v35 = (unsigned __int8)v11[3];
      }
      else
      {
        if ( v34 == a3 )
        {
          v13 = 0;
          if ( !a8 )
            goto LABEL_19;
LABEL_160:
          sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, *a2, 14);
          v45 = (unsigned __int8 *)v85;
          if ( !v85 )
          {
            v59 = v86;
            v60 = *(_DWORD *)(v86 + 14976);
            if ( v60 )
            {
              v61 = (unsigned int)(v60 - 1);
              *(_DWORD *)(v86 + 14976) = v61;
              v45 = *(unsigned __int8 **)(v59 + 8 * v61 + 14848);
              v62 = *((unsigned int *)v45 + 134);
              *v45 = 0;
              v63 = *((_QWORD *)v45 + 66);
              *((_DWORD *)v45 + 106) = 0;
              v64 = v63 + (v62 << 6);
              if ( v63 != v64 )
              {
                v65 = v11;
                v66 = v64;
                v67 = v13;
                v68 = v63;
                do
                {
                  while ( 1 )
                  {
                    v66 -= 64;
                    v69 = *(void **)(v66 + 24);
                    if ( v69 == (void *)(v66 + 40) )
                      break;
                    operator delete(v69);
                    if ( v68 == v66 )
                      goto LABEL_194;
                  }
                }
                while ( v68 != v66 );
LABEL_194:
                v11 = v65;
                v13 = v67;
                v10 = a2;
              }
              *((_DWORD *)v45 + 134) = 0;
            }
            else
            {
              v45 = (unsigned __int8 *)operator new(0x3A0u);
              *v45 = 0;
              *((_QWORD *)v45 + 12) = v45 + 112;
              *((_QWORD *)v45 + 16) = v45 + 144;
              *((_QWORD *)v45 + 20) = v45 + 176;
              *((_QWORD *)v45 + 24) = v45 + 208;
              *((_QWORD *)v45 + 28) = v45 + 240;
              *((_QWORD *)v45 + 32) = v45 + 272;
              *((_QWORD *)v45 + 36) = v45 + 304;
              *((_QWORD *)v45 + 40) = v45 + 336;
              *((_QWORD *)v45 + 44) = v45 + 368;
              *((_QWORD *)v45 + 48) = v45 + 400;
              *((_QWORD *)v45 + 52) = v45 + 432;
              *((_QWORD *)v45 + 13) = 0;
              v45[112] = 0;
              *((_QWORD *)v45 + 17) = 0;
              v45[144] = 0;
              *((_QWORD *)v45 + 21) = 0;
              v45[176] = 0;
              *((_QWORD *)v45 + 25) = 0;
              v45[208] = 0;
              *((_QWORD *)v45 + 29) = 0;
              v45[240] = 0;
              *((_QWORD *)v45 + 33) = 0;
              v45[272] = 0;
              *((_QWORD *)v45 + 37) = 0;
              v45[304] = 0;
              *((_QWORD *)v45 + 41) = 0;
              v45[336] = 0;
              *((_QWORD *)v45 + 45) = 0;
              v45[368] = 0;
              *((_QWORD *)v45 + 49) = 0;
              v45[400] = 0;
              *((_QWORD *)v45 + 53) = 0x800000000LL;
              *((_QWORD *)v45 + 66) = v45 + 544;
              *((_QWORD *)v45 + 67) = 0x600000000LL;
            }
            v85 = v45;
          }
          v45[*v45 + 1] = 4;
          v46 = v85;
          v47 = *(unsigned __int8 *)v85;
          *(_BYTE *)v85 = v47 + 1;
          v46[v47 + 2] = 25;
          if ( (_BYTE)v90 )
          {
            sub_FC7790(v87, (__int64 *)&v85, SHIBYTE(v90));
            v87 = 0;
            v90 = 0;
          }
          if ( v88 != &v89 )
            operator delete(v88);
          v48 = (void **)v85;
          if ( !v85 )
            goto LABEL_19;
          v49 = v86;
          if ( !v86 )
            goto LABEL_19;
          if ( (unsigned __int64)v85 >= v86 && (unsigned __int64)v85 <= v86 + 14848 )
          {
            v58 = *(unsigned int *)(v86 + 14976);
            *(_DWORD *)(v86 + 14976) = v58 + 1;
            *(_QWORD *)(v49 + 8 * v58 + 14848) = v48;
            goto LABEL_19;
          }
          v50 = *((void ***)v85 + 66);
          v51 = &v50[8 * (unsigned __int64)*((unsigned int *)v85 + 134)];
          if ( v50 != v51 )
          {
            v77 = v10;
            v52 = v13;
            v53 = v11;
            v54 = *((void ***)v85 + 66);
            do
            {
              while ( 1 )
              {
                v51 -= 8;
                v55 = (void **)v51[3];
                if ( v55 == v51 + 5 )
                  break;
                operator delete(v55);
                if ( v54 == v51 )
                  goto LABEL_172;
              }
            }
            while ( v54 != v51 );
LABEL_172:
            v11 = v53;
            v51 = (void **)v48[66];
            v13 = v52;
            v10 = v77;
          }
          if ( v51 != v48 + 68 )
            free(v51);
          v56 = (void **)v48[52];
          if ( v56 != v48 + 54 )
            free(v56);
          v57 = v48 + 48;
          v78 = v48 + 8;
          while ( 1 )
          {
            if ( *v57 == v57 + 2 )
            {
              v57 -= 4;
              if ( v78 == v57 )
              {
LABEL_180:
                operator delete(v48, 0x3A0u);
                goto LABEL_19;
              }
            }
            else
            {
              operator delete(*v57);
              v57 -= 4;
              if ( v78 == v57 )
                goto LABEL_180;
            }
          }
        }
        v35 = (unsigned __int8)v11[3];
        if ( a8 )
          goto LABEL_86;
      }
      if ( (_BYTE)v35 == 125 )
      {
        v13 = 0;
        v18 = 0;
        goto LABEL_149;
      }
      v18 = 0;
      v13 = 0;
      while ( 1 )
      {
        if ( word_23E43C0[v35] == -1 )
        {
          *a4 = 1;
        }
        else
        {
          if ( (v13 & 0xF0000000) != 0 )
            v18 = 1;
          v13 = word_23E43C0[v35] | (16 * v13);
        }
        v44 = *a2;
        v34 = (unsigned __int8 *)(*a2 + 1);
        *a2 = (__int64)v34;
        if ( a3 == v34 )
          goto LABEL_151;
        v35 = *(unsigned __int8 *)(v44 + 1);
        if ( (_BYTE)v35 == 125 )
          goto LABEL_149;
      }
    default:
      if ( !a8 )
        goto LABEL_19;
      if ( (*(_WORD *)&byte_2411740[2 * (unsigned __int8)v13] & 0x3EC) == 0 )
      {
        sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)(v11 + 2), 1258);
        v29 = v13;
        if ( !v13 )
        {
          v30 = 48;
          v80[0] = v81;
LABEL_76:
          LOBYTE(v81[0]) = v30;
          v31 = (_BYTE *)(&dword_0 + 1);
          v32 = v81;
LABEL_77:
          v80[1] = v31;
          v31[(_QWORD)v32] = 0;
          v33 = (__m128i *)sub_99BDC0(v80, 0, 0, "x", 1u);
          v82 = &v84;
          if ( (__m128i *)v33->m128i_i64[0] == &v33[1] )
          {
            v84 = _mm_loadu_si128(v33 + 1);
          }
          else
          {
            v82 = (void *)v33->m128i_i64[0];
            v84.m128i_i64[0] = v33[1].m128i_i64[0];
          }
          v83 = v33->m128i_i64[1];
          v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
          v33->m128i_i64[1] = 0;
          v33[1].m128i_i8[0] = 0;
          sub_AEC220((unsigned __int8 **)&v85, v82, v83);
          if ( v82 != &v84 )
            operator delete(v82);
          if ( v80[0] != v81 )
            operator delete(v80[0]);
          goto LABEL_71;
        }
        v37 = &v84.m128i_i8[1];
        do
        {
          --v37;
          v38 = v29 & 0xF;
          v29 >>= 4;
          v30 = a0123456789abcd_3[v38];
          *v37 = v30;
        }
        while ( v29 );
        v39 = v81;
        v80[0] = v81;
        v40 = (char *)(&v84.m128i_i8[1] - v37);
        v31 = (char *)(&v84.m128i_i8[1] - v37);
        if ( (unsigned __int64)(&v84.m128i_i8[1] - v37) <= 0xF )
        {
          if ( v40 == (_BYTE *)&dword_0 + 1 )
            goto LABEL_76;
          v32 = v81;
          if ( !v40 )
            goto LABEL_77;
        }
        else
        {
          if ( (__int64)v40 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v39 = (_QWORD *)operator new((unsigned __int64)(v40 + 1));
          v40 = (char *)(&v84.m128i_i8[1] - v37);
          v80[0] = v39;
          v31 = (char *)(&v84.m128i_i8[1] - v37);
          v81[0] = &v84.m128i_i8[1] - v37;
        }
        n = (size_t)v31;
        memcpy(v39, v37, (size_t)v40);
        v32 = v80[0];
        v31 = (char *)n;
        goto LABEL_77;
      }
      sub_13DFB00((__int64)&v85, a8, (__int64)a9, a5, a6, a1, (__int64)v11, (__int64)(v11 + 2), 1258);
LABEL_69:
      v82 = &v84;
      v84.m128i_i16[0] = (unsigned __int8)v13;
      v83 = 1;
      sub_AEC220((unsigned __int8 **)&v85, &v84, 1);
LABEL_71:
      sub_AEA040((__int64)&v85);
LABEL_19:
      if ( a10 == 1 )
      {
        switch ( v14 )
        {
          case '"':
          case '\'':
          case '?':
          case '\\':
          case 'a':
          case 'b':
          case 'f':
          case 'n':
          case 'r':
          case 't':
          case 'v':
            return v13;
          default:
            goto LABEL_39;
        }
      }
      return v13;
  }
}
