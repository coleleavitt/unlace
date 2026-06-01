__int64 __fastcall atob32(int *a1, char *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v7; // ebp
  unsigned __int8 *v8; // rbx
  unsigned int v9; // edi
  char v10; // r12
  unsigned int v11; // edi
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // edi
  int v16; // r14d
  char *v17; // r15
  int v18; // r12d
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  unsigned __int8 *v25; // rdx
  int v26; // ecx
  unsigned __int8 v27; // al
  unsigned __int8 *v28; // rdx
  int v29; // edi
  unsigned __int8 v30; // al
  unsigned __int8 *v31; // rdx
  unsigned __int8 v32; // dl
  int v33; // eax
  int v34; // edx
  char *v35; // rsi
  int v36; // eax
  unsigned int v37; // edi
  char v38; // r12
  int v39; // eax
  int v40; // eax
  unsigned __int8 v41; // al
  unsigned __int8 *v42; // rdx
  int v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+8h] [rbp-50h]
  int v45; // [rsp+8h] [rbp-50h]
  int v46; // [rsp+8h] [rbp-50h]
  unsigned __int8 v47; // [rsp+1Fh] [rbp-39h]

  v7 = 0;
  v8 = (unsigned __int8 *)a2;
  v9 = *a2;
  if ( v9 <= 0x7F )
  {
    v10 = *a2;
    while ( 1 )
    {
      v7 = isspace(v9);
      if ( !v7 )
        break;
      v9 = (char)*++v8;
      v10 = v9;
      if ( v9 > 0x7F )
      {
        v7 = 0;
        goto LABEL_8;
      }
    }
    if ( v10 == 45 )
    {
      do
        v11 = (char)*++v8;
      while ( v11 <= 0x7F && isspace(v11) );
      v7 = 1;
    }
  }
LABEL_8:
  v12 = qword_2CCB598;
  while ( 2 )
  {
    v13 = *v8;
    switch ( (char)v13 )
    {
      case '#':
        ++v8;
        if ( (*(_DWORD *)(qword_2CCB598 + 1072) & 0x3000) != 0x1000 )
          continue;
        goto LABEL_75;
      case '$':
        v29 = (_DWORD)v8 + 1;
        if ( (*(_DWORD *)(qword_2CCB598 + 1072) & 0xE00) == 0x800 )
          goto LABEL_46;
        return 0;
      case '%':
        if ( (*(_DWORD *)(qword_2CCB598 + 1072) & 0xE0000) != 0x40000 )
          return 0;
        v30 = v8[1];
        v31 = v8 + 1;
        v26 = 0;
        if ( (unsigned __int8)(v30 - 48) <= 1u )
        {
          do
          {
            ++v31;
            v26 = (v30 == 49) + 2 * v26;
            v30 = *v31;
          }
          while ( (unsigned __int8)(*v31 - 48) <= 1u );
        }
        goto LABEL_37;
      case '.':
        LODWORD(v8) = (_DWORD)v8 + 1;
        if ( (~*(_WORD *)(qword_2CCB598 + 1072) & 0x3000) == 0 )
          goto LABEL_75;
        return 0;
      case '0':
        v32 = v8[1];
        v33 = *(_DWORD *)(qword_2CCB598 + 1072);
        if ( v32 == 120 )
        {
          if ( (*(_DWORD *)(qword_2CCB598 + 1072) & 0xE00) == 0x600 )
          {
LABEL_45:
            v29 = (_DWORD)v8 + 2;
LABEL_46:
            if ( (unsigned int)qsscanf(v29, (unsigned int)"%x", (_DWORD)a1, v13, a5, a6) == 1 )
              goto LABEL_25;
          }
          return 0;
        }
        if ( v32 == 98 )
        {
          if ( (v33 & 0xE0000) == 0x60000 )
          {
            v41 = v8[2];
            v42 = v8 + 2;
            v26 = 0;
            if ( (unsigned __int8)(v41 - 48) <= 1u )
            {
              do
              {
                ++v42;
                v26 = (v41 == 49) + 2 * v26;
                v41 = *v42;
              }
              while ( (unsigned __int8)(*v42 - 48) <= 1u );
            }
LABEL_37:
            *a1 = v26;
            goto LABEL_25;
          }
          return 0;
        }
        if ( (v33 & 0x1C000) == 0x4000 )
        {
LABEL_63:
          v34 = (int)a1;
          v35 = "%o";
          goto LABEL_76;
        }
LABEL_14:
        v16 = (char)v13;
        v17 = (char *)v8;
        v18 = *v8;
        v19 = 48;
        do
        {
          v47 = v13;
          v43 = v19;
          v20 = isxdigit(v16);
          v19 = v43;
          v13 = v47;
          if ( !v20 )
          {
            switch ( v18 )
            {
              case '.':
                v21 = *(_DWORD *)(v12 + 1072) & 0x3000;
                if ( v21 == 0x2000 )
                  goto LABEL_18;
                return 0;
              case 'B':
              case 'b':
                if ( (*(_DWORD *)(v12 + 1072) & 0xE0000) == 0 )
                  goto LABEL_21;
                return 0;
              case 'D':
              case 'd':
                goto LABEL_17;
              case 'H':
              case 'h':
                if ( (*(_BYTE *)(v12 + 1073) & 0xE) == 0 )
                  goto LABEL_82;
                return 0;
              case 'O':
              case 'o':
                if ( (*(_WORD *)(v12 + 1073) & 0x1C0) == 0 )
                  goto LABEL_79;
                return 0;
              case 'Q':
              case 'q':
                if ( (*(_DWORD *)(v12 + 1072) & 0x1C000) == 0x14000 )
                  goto LABEL_79;
                return 0;
              default:
                goto LABEL_67;
            }
          }
          if ( v43 < v16 )
            v19 = v16;
          v16 = *++v17;
          v18 = v16;
        }
        while ( (unsigned int)v16 <= 0x7F );
LABEL_67:
        v45 = v19;
        v36 = toupper((unsigned __int8)*(v17 - 1));
        v19 = v45;
        v13 = v47;
        if ( v36 == 68 )
        {
LABEL_17:
          v21 = *(_DWORD *)(v12 + 1072) & 0x3000;
LABEL_18:
          if ( v21 == 4096 )
            return 0;
        }
        else
        {
          if ( v36 == 66 && (*(_DWORD *)(v12 + 1072) & 0xE0000) == 0 )
          {
LABEL_21:
            if ( v19 <= 49 )
            {
              v22 = 0;
              if ( (unsigned __int8)(v13 - 48) <= 1u )
              {
                do
                {
                  ++v8;
                  v23 = (_BYTE)v13 == 49;
                  LOBYTE(v13) = *v8;
                  v22 = v23 + 2 * v22;
                }
                while ( (unsigned __int8)(*v8 - 48) <= 1u );
              }
              *a1 = v22;
              goto LABEL_25;
            }
            return 0;
          }
          v37 = *v17;
          v38 = *v17;
          if ( v37 > 0x7F )
            return 0;
          while ( 1 )
          {
            v46 = v19;
            v39 = isspace(v37);
            v19 = v46;
            if ( !v39 )
              break;
            v37 = *++v17;
            v38 = v37;
            if ( v37 > 0x7F )
              return 0;
          }
          if ( v38 )
            return 0;
          v40 = *(_DWORD *)(v12 + 1072);
          v13 = v40 & 0xE00;
          if ( v13 == 1024 )
          {
LABEL_82:
            v34 = (int)a1;
            v35 = "%x";
            goto LABEL_76;
          }
          if ( (v40 & 0x1C000) == 0x8000 )
          {
LABEL_79:
            if ( v19 > 55 )
              return 0;
            goto LABEL_63;
          }
        }
        if ( v19 > 57 )
          return 0;
LABEL_75:
        v34 = (int)a1;
        v35 = "%d";
LABEL_76:
        if ( (unsigned int)qsscanf((_DWORD)v8, (_DWORD)v35, v34, v13, a5, a6) != 1 )
          return 0;
LABEL_25:
        if ( v7 )
          *a1 = -*a1;
        return 1;
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        goto LABEL_14;
      case '@':
        v14 = (_DWORD)v8 + 1;
        if ( (*(_DWORD *)(qword_2CCB598 + 1072) & 0x1C000) != 0xC000 )
          return 0;
        goto LABEL_31;
      case '^':
        v44 = qword_2CCB598;
        if ( toupper(v8[1]) != 66 || (*(_DWORD *)(v44 + 1072) & 0xE0000) != (_DWORD)&stru_20000 )
          goto LABEL_25;
        v24 = v8[2];
        v25 = v8 + 2;
        v26 = 0;
        if ( (unsigned __int8)(v24 - 48) <= 1u )
        {
          do
          {
            ++v25;
            v26 = (v24 == 49) + 2 * v26;
            v24 = *v25;
          }
          while ( (unsigned __int8)(*v25 - 48) <= 1u );
        }
        goto LABEL_37;
      case 'b':
        if ( (*(_DWORD *)(qword_2CCB598 + 1072) & 0xC0000) != (_DWORD)&stru_80000 || v8[1] != 39 )
          return 0;
        v27 = v8[2];
        v28 = v8 + 2;
        v26 = 0;
        if ( (unsigned __int8)(v27 - 48) <= 1u )
        {
          do
          {
            ++v28;
            v26 = (v27 == 49) + 2 * v26;
            v27 = *v28;
          }
          while ( (unsigned __int8)(*v28 - 48) <= 1u );
        }
        goto LABEL_37;
      case 'h':
        if ( (*(_DWORD *)(qword_2CCB598 + 1072) & 0xE00) == 0x200 && v8[1] == 39 )
          goto LABEL_45;
        return 0;
      case 'o':
        if ( (*(_DWORD *)(qword_2CCB598 + 1072) & 0x1C000) == (_DWORD)&stru_10000 )
          goto LABEL_29;
        return 0;
      case 'q':
        if ( (~*(_DWORD *)(qword_2CCB598 + 1072) & 0x1C000) != 0 )
          return 0;
LABEL_29:
        if ( v8[1] == 39 )
        {
          v14 = (_DWORD)v8 + 2;
LABEL_31:
          if ( (unsigned int)qsscanf(v14, (unsigned int)"%o", (_DWORD)a1, v13, a5, a6) == 1 )
            goto LABEL_25;
        }
        return 0;
      default:
        return 0;
    }
  }
}
