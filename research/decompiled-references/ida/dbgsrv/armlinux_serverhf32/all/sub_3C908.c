/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C908
// Address: 0x0003C908

//----- (0003C908) --------------------------------------------------------
int __fastcall sub_3C908(int a1, int a2, int a3, int a4)
{
  int *v4; // r5
  int v7; // r3
  int v8; // r3
  int *v9; // r9
  unsigned __int8 *v10; // r7
  int v11; // r1
  int v12; // r2
  int v13; // r1
  const char *v15; // r8
  int v16; // r10
  int v17; // t1
  unsigned int v18; // r4
  int v19; // r3
  int v20; // r4
  int v21; // t1
  int v22; // r0
  int v23; // r0
  signed int v24; // r10
  size_t v25; // r0
  unsigned int v26; // r10
  char *v27; // r3
  char *v28; // r5
  int v29; // r7
  int i; // r0
  unsigned __int8 *v31; // r2
  char *v33; // r12
  int v34; // r0
  int v35; // r1
  char v36; // r0
  size_t v37; // r0
  unsigned __int8 *v38; // r5
  int v39; // r7
  int j; // r0
  unsigned __int8 *v41; // r2
  int v43; // r3
  int v44; // r2
  bool v45; // cc
  size_t v46; // r3
  int *v47; // r3
  signed int v48; // r2
  int v49; // r2
  int v50; // t1
  int v51; // r0
  int *v52; // r3
  unsigned __int8 *v53; // r4
  unsigned __int8 *v54; // r2
  signed int v55; // r3
  const char *v56; // r5
  unsigned __int8 *v57; // r7
  int v58; // t1
  int v59; // r0
  int v60; // r4
  int v61; // r0
  unsigned __int8 *v62; // r4
  int k; // r0
  int v64; // lr
  __int64 v65; // r0
  char v66; // r10
  unsigned __int64 v67; // r2
  int v68; // r2
  int v69; // r3
  signed int v70; // r1
  const char *v71; // r3
  int v72; // r0
  int v73; // r2
  _BOOL4 v74; // r12
  _BOOL4 v75; // r3
  int *v76; // r2
  int v77; // r1
  int v78; // r3
  int v79; // t1
  int v80; // r3
  bool v81; // cf
  double v82; // [sp+0h] [bp-44h]
  int v83; // [sp+10h] [bp-34h]
  char v84; // [sp+24h] [bp-20h]
  int *v85; // [sp+24h] [bp-20h]
  signed int v86; // [sp+28h] [bp-1Ch]
  int *v87; // [sp+28h] [bp-1Ch]
  char *s; // [sp+2Ch] [bp-18h]
  char *sa; // [sp+2Ch] [bp-18h]
  int v90; // [sp+30h] [bp-14h]
  int v91; // [sp+3Ch] [bp-8h] BYREF
  int v92; // [sp+44h] [bp+0h] BYREF
  int v93; // [sp+48h] [bp+4h] BYREF
  _BYTE v94[1024]; // [sp+4Ch] [bp+8h] BYREF
  _DWORD v95[2]; // [sp+44Ch] [bp+408h] BYREF

  v4 = &v91;
  v91 = a3;
  HIDWORD(v82) = a1;
  v92 = *(_DWORD *)(a4 + 8);
  if ( v92 <= 0 )
  {
    v7 = 0;
    *(_DWORD *)(a4 + 8) = 0;
    return v7;
  }
  v8 = *(_DWORD *)(a3 + 12);
  v91 = a3 + 24;
  if ( v8 )
    v9 = *(int **)(a3 + 8);
  else
    v9 = &dword_8DA5C;
  v83 = a4;
  v10 = nullptr;
  v93 = 0;
LABEL_6:
  while ( 2 )
  {
    v11 = *(unsigned __int8 *)v9;
    v9 = (int *)((char *)v9 + 1);
    if ( !v11 )
    {
      v7 = 0;
      *(_DWORD *)(v83 + 8) = v10;
      return v7;
    }
    if ( v11 != 37 )
    {
      v13 = ((int (__fastcall *)(int))HIDWORD(v82))(a2);
      if ( !v13 )
      {
        ++v10;
        continue;
      }
      return v13;
    }
    break;
  }
  v12 = 0;
  while ( 2 )
  {
    v15 = (const char *)v9;
    v17 = *(unsigned __int8 *)v9;
    v9 = (int *)((char *)v9 + 1);
    v16 = v17;
    switch ( v17 )
    {
      case ' ':
        v12 |= 4u;
        continue;
      case '#':
        v12 |= 8u;
        continue;
      case '+':
        v12 |= 2u;
        continue;
      case '-':
        v12 |= 1u;
        continue;
      default:
        v84 = v12;
        if ( v16 == 42 )
        {
          v51 = sub_3C804(&v92, v4, &v93);
          v13 = v93;
          v18 = v51;
          v52 = &v93;
          if ( v93 )
            return v13;
          v16 = *((unsigned __int8 *)v15 + 1);
          if ( v51 < 0 )
          {
            LOBYTE(v52) = v84;
            v18 = -v51;
          }
          ++v15;
          if ( v51 < 0 )
            v84 = (unsigned __int8)v52 | 1;
        }
        else
        {
          if ( v16 == 48 )
          {
            v16 = *(unsigned __int8 *)++v15;
            if ( (v12 & 1) == 0 )
              v84 = v12 | 0x10;
          }
          v18 = v16 & 0xFFFFFF80;
          v19 = v16;
          if ( (v16 & 0xFFFFFF80) != 0 || (unsigned int)(v16 - 48) > 9 )
          {
            v18 = -1;
          }
          else
          {
            while ( 1 )
            {
              v20 = v19 + 10 * v18;
              v21 = *(unsigned __int8 *)++v15;
              v19 = v21;
              v18 = v20 - 48;
              v16 = v21;
              if ( (v21 & 0x80) != 0 || (unsigned int)(v19 - 48) > 9 )
                break;
              if ( v18 == -1 )
                v18 = 0;
            }
          }
        }
        v9 = (int *)(v15 + 1);
        if ( v16 == 46 )
        {
          v16 = *((unsigned __int8 *)v15 + 1);
          if ( v16 == 42 )
          {
            v72 = sub_3C804(&v92, v4, &v93);
            v13 = v93;
            v86 = v72;
            if ( v93 )
              return v13;
            v16 = *((unsigned __int8 *)v15 + 2);
            v9 = (int *)(v15 + 3);
            v15 += 2;
          }
          else
          {
            v47 = (int *)(v15 + 2);
            v86 = v16 & 0xFFFFFF80;
            if ( (v16 & 0xFFFFFF80) != 0 )
            {
              ++v15;
              v86 = 0;
              v9 = v47;
            }
            else if ( (unsigned int)(v16 - 48) > 9 )
            {
              ++v15;
              v9 = v47;
            }
            else
            {
              v48 = 0;
              do
              {
                v15 = (const char *)v47;
                v49 = v16 + 10 * v48;
                v50 = *(unsigned __int8 *)v47;
                v47 = (int *)((char *)v47 + 1);
                v16 = v50;
                v48 = v49 - 48;
                v9 = v47;
              }
              while ( (v50 & 0x80) == 0 && (unsigned int)(v16 - 48) <= 9 );
              v86 = v48;
            }
          }
        }
        else
        {
          v86 = -1;
        }
        switch ( v16 )
        {
          case 'F':
          case 'L':
          case 'N':
          case 'h':
          case 'l':
            v16 = *((unsigned __int8 *)v15 + 1);
            v15 = (const char *)v9;
            v9 = (int *)((char *)v9 + 1);
            break;
          default:
            break;
        }
        switch ( v16 )
        {
          case '%':
            v37 = 1;
            v15 = v94;
            v94[0] = 37;
            v86 = 1;
            goto LABEL_64;
          case 'E':
          case 'G':
          case 'e':
          case 'f':
          case 'g':
            if ( --v92 > 0 )
            {
              v35 = sub_46570(*v4);
              v93 = v35;
              if ( v35 )
                goto LABEL_59;
              v76 = (int *)(*v4 + 8);
              *v4 += 24;
              goto LABEL_171;
            }
            v13 = v93;
            if ( v93 == 1531 )
              goto LABEL_55;
            if ( !v93 )
            {
              v76 = nullptr;
LABEL_171:
              if ( v18 == -1 )
              {
                v18 = 0;
                v77 = 0;
              }
              else
              {
                v77 = v18;
                if ( v18 )
                  v77 = v86 & ~(v86 >> 31);
              }
              v15 = v94;
              sub_72718(v94, 1024, v76, (v18 << 8) | (v77 << 16) | 0xF);
              v78 = v94[0];
              if ( v94[0] == 32 )
              {
                do
                {
                  v79 = *(unsigned __int8 *)++v15;
                  v78 = v79;
                }
                while ( v79 == 32 );
              }
              if ( v78 == 45 )
              {
                ++v15;
                s = "-";
              }
              else if ( (v84 & 2) != 0 )
              {
                s = "+";
              }
              else if ( (v84 & 4) != 0 )
              {
                s = &byte_9C46C;
              }
              else
              {
                s = &byte_8DEAC;
              }
              v24 = strlen(v15);
              goto LABEL_181;
            }
            return v13;
          case 'X':
          case 'x':
            if ( (v84 & 8) != 0 )
            {
              if ( v16 == 120 )
                s = "0x";
              else
                s = "0X";
              v90 = 16;
            }
            else
            {
              s = &byte_8DEAC;
              v90 = 16;
            }
            goto LABEL_37;
          case 'a':
            sub_3C804(&v92, v4, &v93);
            v13 = v93;
            if ( v93 )
              return v13;
            v15 = v94;
            if ( off_D2CE4 )
              ((void (*)(void))off_D2CE4)();
            else
              sub_7EA4C(v94, 1024, "%a", v82);
            goto LABEL_89;
          case 'b':
            if ( (v84 & 8) != 0 )
              s = "0b";
            else
              s = &byte_8DEAC;
            v90 = 2;
            goto LABEL_37;
          case 'c':
            v36 = sub_3C804(&v92, v4, &v93);
            v13 = v93;
            v15 = v94;
            v94[0] = v36;
            if ( v93 == 1531 )
              goto LABEL_55;
            if ( v93 )
              return v13;
            v37 = 1;
            v86 = 1;
            goto LABEL_64;
          case 'd':
          case 'i':
            if ( --v92 > 0 )
            {
              v34 = *v4;
              if ( *(_BYTE *)*v4 != 2 )
              {
                v35 = sub_46404(v34);
                v93 = v35;
                if ( v35 )
                {
LABEL_59:
                  if ( v35 != 1531 )
                    return v35;
LABEL_55:
                  s = &byte_8DEAC;
                  goto LABEL_41;
                }
                v65 = *(_QWORD *)(*v4 + 8);
                *v4 += 24;
                if ( v65 < 0 )
                {
                  v81 = (_DWORD)v65 == 0;
                  LODWORD(v65) = -(int)v65;
                  HIDWORD(v65) -= 2 * HIDWORD(v65) + !v81;
                  s = "-";
                  v90 = 10;
                  goto LABEL_142;
                }
                v64 = 64;
                goto LABEL_191;
              }
              v80 = *(_DWORD *)(v34 + 8);
              *v4 = v34 + 24;
              v93 = 0;
              v65 = v80;
              if ( v80 >> 31 != -1 )
              {
                v64 = 32;
LABEL_191:
                v74 = v65 == 0;
                if ( (v84 & 2) != 0 )
                {
                  s = "+";
                  v90 = 10;
                }
                else
                {
                  if ( (v84 & 4) != 0 )
                    s = &byte_9C46C;
                  else
                    s = &byte_8DEAC;
                  v90 = 10;
                }
                goto LABEL_160;
              }
              LODWORD(v65) = -v80;
              HIDWORD(v65) = v80 == 0;
              LOBYTE(v64) = 32;
              s = "-";
              v90 = 10;
LABEL_141:
              LODWORD(v65) = v65 & ~(-1 << v64);
              HIDWORD(v65) &= ~((-1 << v64) | (-1 << (v64 - 32)) | (0xFFFFFFFF >> (32 - v64)));
LABEL_142:
              if ( v16 == 88 )
                v66 = 7;
              else
                v66 = 39;
              v15 = (const char *)v95;
              do
              {
                v67 = v65 % (unsigned __int64)(unsigned int)v90;
                v65 /= (unsigned __int64)(unsigned int)v90;
                v68 = (char)(v67 + 48);
                if ( v68 > 57 )
                  LOBYTE(v68) = v68 + v66;
                *--v15 = v68;
              }
              while ( v65 );
              v24 = (char *)v95 - v15;
              v69 = v86;
              if ( v86 >= 1024 )
                v69 = 1024;
              v70 = v69;
              if ( v69 <= v24 )
              {
LABEL_181:
                v25 = strlen(s);
                v86 = v24;
              }
              else
              {
                v71 = (char *)v95 - v69;
                do
                  *--v15 = 48;
                while ( v15 != v71 );
                v24 = v70;
                v86 = v70;
                v25 = strlen(s);
              }
LABEL_42:
              v26 = v18 - v25 - v24;
              if ( (v84 & 0x10) != 0 )
              {
                v27 = s;
                if ( *s )
                {
                  sa = (char *)v4;
                  v28 = v27 + 1;
                  v29 = v10 - (unsigned __int8 *)v27;
                  for ( i = ((int (__fastcall *)(int))HIDWORD(v82))(a2); ; i = ((int (__fastcall *)(int))HIDWORD(v82))(a2) )
                  {
                    v33 = v28;
                    if ( i )
                      return i;
                    v31 = (unsigned __int8 *)&v28[v29];
                    if ( !*v28++ )
                      break;
                  }
                  v4 = (int *)sa;
                  v10 = v31;
                  s = v33;
                }
                goto LABEL_125;
              }
              goto LABEL_66;
            }
            v13 = v93;
            if ( v93 == 1531 )
              goto LABEL_55;
            if ( !v93 )
            {
              v64 = 0;
              v65 = 0;
              goto LABEL_191;
            }
            return v13;
          case 'o':
            if ( (v84 & 8) != 0 )
              s = "0";
            else
              s = &byte_8DEAC;
            v90 = 8;
            goto LABEL_37;
          case 's':
            v45 = v92 - 1 <= 0;
            v93 = 0;
            --v92;
            if ( v45 )
              goto LABEL_79;
            v35 = sub_45CC0(*v4);
            v93 = v35;
            if ( v35 )
              goto LABEL_59;
            v43 = *v4;
            v44 = *(_DWORD *)(*v4 + 12);
            *v4 += 24;
            if ( v44 )
              v15 = *(const char **)(v43 + 8);
            else
              v15 = (const char *)&dword_8DA5C;
            if ( !v15 )
LABEL_79:
              v15 = "(null)";
LABEL_89:
            v37 = strlen(v15);
            v45 = v37 > v86;
            v46 = v86;
            if ( v37 > v86 )
              v37 = v86;
            else
              v46 = v37;
            if ( !v45 )
              v37 = v46;
            v86 = v46;
            goto LABEL_64;
          case 'u':
            s = &byte_8DEAC;
            v90 = 10;
LABEL_37:
            if ( --v92 <= 0 )
            {
              v13 = v93;
              if ( v93 == 1531 )
              {
LABEL_41:
                v24 = 5;
                v86 = 5;
                v15 = "<obj>";
                *v4 += 24;
                v25 = strlen(s);
                goto LABEL_42;
              }
              if ( !v93 )
              {
                if ( !v86 )
                {
                  v15 = nullptr;
                  v37 = 0;
                  goto LABEL_64;
                }
                LOBYTE(v64) = v93;
                v65 = 0;
                goto LABEL_141;
              }
              return v13;
            }
            v22 = *v4;
            if ( *(_BYTE *)*v4 == 2 )
            {
              v73 = *(_DWORD *)(v22 + 8);
              *v4 = v22 + 24;
              v64 = 32;
              v93 = 0;
              v65 = v73;
            }
            else
            {
              v23 = sub_46404(v22);
              v13 = v23;
              v93 = v23;
              if ( v23 )
              {
                if ( v23 != 1531 )
                  return v13;
                goto LABEL_41;
              }
              v64 = 64;
              v65 = *(_QWORD *)(*v4 + 8);
              *v4 += 24;
            }
            v74 = v65 == 0;
LABEL_160:
            if ( v86 )
              v75 = 0;
            else
              v75 = v74;
            if ( !v75 )
            {
              if ( v64 == 64 )
                goto LABEL_142;
              goto LABEL_141;
            }
            v86 = 0;
            v37 = 0;
            v15 = nullptr;
LABEL_64:
            v26 = v18 - v37;
            if ( (v84 & 0x10) != 0 )
            {
              s = &byte_8DEAC;
LABEL_125:
              if ( (v84 & 1) != 0 )
                goto LABEL_127;
              v60 = 48;
              goto LABEL_118;
            }
            s = &byte_8DEAC;
LABEL_66:
            if ( (v84 & 1) != 0 )
              goto LABEL_67;
            v60 = 32;
LABEL_118:
            if ( (--v26 & 0x80000000) != 0 )
            {
LABEL_67:
              if ( *s )
              {
                v85 = v4;
                v38 = (unsigned __int8 *)(s + 1);
                v39 = v10 - (unsigned __int8 *)s;
                for ( j = ((int (__fastcall *)(int))HIDWORD(v82))(a2); ; j = ((int (__fastcall *)(int))HIDWORD(v82))(a2) )
                {
                  if ( j )
                    return j;
                  v41 = &v38[v39];
                  if ( !*v38++ )
                    break;
                }
                v4 = v85;
                v53 = v41;
                goto LABEL_111;
              }
LABEL_127:
              v53 = v10;
LABEL_111:
              if ( v86 - 1 < 0 )
              {
                v54 = v53;
                goto LABEL_129;
              }
              v55 = v86;
              v87 = v4;
              v56 = v15;
              v57 = (unsigned __int8 *)&v15[v55];
              do
              {
                v58 = *(unsigned __int8 *)v56++;
                v59 = ((int (__fastcall *)(int, int))HIDWORD(v82))(a2, v58);
                if ( v59 )
                  return v59;
                v54 = &v53[v56 - v15];
              }
              while ( v56 != (const char *)v57 );
              v4 = v87;
LABEL_129:
              if ( (int)(v26 - 1) < 0 )
              {
                v10 = v54;
                goto LABEL_6;
              }
              v10 = &v54[v26];
              v62 = v54;
              for ( k = ((int (__fastcall *)(int, int))HIDWORD(v82))(a2, 32);
                    !k;
                    k = ((int (__fastcall *)(int, int))HIDWORD(v82))(a2, 32) )
              {
                if ( ++v62 == v10 )
                  goto LABEL_6;
              }
              return k;
            }
            while ( 1 )
            {
              v61 = ((int (__fastcall *)(int, int))HIDWORD(v82))(a2, v60);
              if ( v61 )
                return v61;
              --v26;
              ++v10;
              if ( v26 == -1 )
                goto LABEL_67;
            }
          default:
            v9 = (int *)&byte_8DEAC;
            v37 = strlen(v15);
            v86 = v37;
            goto LABEL_64;
        }
    }
  }
}
// 3CE2E: mask 0xFFFFFF80 is shortened because r10.4 <= 0x39
// 3C9A4: variable 'v82' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
// 9C46C: using guessed type char byte_9C46C;
// D2CE4: using guessed type _UNKNOWN *off_D2CE4;
