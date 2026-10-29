/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85668
// Address: 0x00085668

//----- (00085668) --------------------------------------------------------
_DWORD *__fastcall sub_85668(int a1)
{
  unsigned __int8 *v2; // r1
  int *v3; // r5
  _DWORD *v4; // r0
  unsigned int v5; // r2
  __int64 v6; // kr00_8
  _DWORD *v7; // r5
  int v9; // r3
  int v10; // r5
  int *v11; // r0
  _BYTE *v12; // r3
  _DWORD *v13; // r0
  __int64 v14; // kr08_8
  unsigned int v15; // r5
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  int v21; // r3
  char **v22; // r2
  int v23; // r0
  _DWORD *v24; // r0
  _BYTE *v25; // r3
  _DWORD *v26; // r5
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _BYTE *v29; // r6
  __int64 v30; // r2
  __int64 v31; // kr10_8
  unsigned int v32; // r3
  bool v33; // cc
  int v34; // r0
  _BYTE *v35; // r3
  unsigned __int8 *v36; // r5
  int v37; // r3
  unsigned __int8 *i; // r1
  int v39; // r3
  int v40; // r7
  int v41; // lr
  int *v42; // r6
  int v43; // r3
  _DWORD *v44; // r0
  _DWORD *v45; // r5
  __int64 v46; // r2
  int *v47; // r5
  _BYTE *v48; // r3
  _DWORD *v49; // r0
  __int64 v50; // r2
  int v51; // r0
  int v52; // r2
  int v53; // r6
  char **v54; // r3
  int v55; // r1
  _DWORD *v56; // r0
  __int64 v57; // r2
  int v58; // r1
  __int64 v59; // r2
  int v60; // r1
  __int64 v61; // r2
  int v62; // r1
  __int64 v63; // r2
  int v64; // r1
  __int64 v65; // kr18_8
  int v66; // r0
  __int64 v67; // kr20_8
  int v68; // r0
  __int64 v69; // kr28_8
  unsigned int v70; // r5
  unsigned int v71; // r3
  _DWORD *v72; // r0
  unsigned int v73; // r3
  _BYTE *v74; // r2
  __int16 v75; // r3
  __int64 v76; // r2
  int v77; // r1
  __int64 v78; // r2
  int v79; // r1
  _DWORD *v80; // r0
  int v81; // r0
  int v82; // r5
  int *v83; // r0
  int v84; // r9
  int v85; // r8
  int v86; // r7
  int v87; // r5
  int v88; // r0
  __int64 v89; // r2
  int v90; // r6
  __int64 v91; // r2
  int v92; // r6
  int *v93; // r0
  unsigned int v94; // [sp+4h] [bp-10h]
  unsigned int v95; // [sp+Ch] [bp-8h] BYREF

  if ( !sub_8464C(*(unsigned __int8 **)(a1 + 12)) )
  {
    switch ( *v2 )
    {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case 'N':
      case 'Z':
        v7 = sub_85304(a1);
        v95 = (unsigned int)v7;
        goto LABEL_19;
      case 'A':
        v36 = v2 + 1;
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v37 = v2[1];
        if ( v37 == 95 )
        {
          v42 = nullptr;
LABEL_60:
          *(_DWORD *)(a1 + 12) = v36 + 1;
          v44 = sub_85668(a1);
          v7 = (_DWORD *)sub_84094(a1, 42, __SPAIR64__((unsigned int)v44, (unsigned int)v42));
          v95 = (unsigned int)v7;
          goto LABEL_19;
        }
        if ( (unsigned int)(v37 - 48) > 9 )
        {
          v82 = *(_DWORD *)(a1 + 52);
          *(_DWORD *)(a1 + 52) = 1;
          v83 = sub_84DC0(a1);
          *(_DWORD *)(a1 + 52) = v82;
          v42 = v83;
          if ( v83 )
          {
            v36 = *(unsigned __int8 **)(a1 + 12);
            v43 = *v36;
LABEL_59:
            if ( v43 != 95 )
              return nullptr;
            goto LABEL_60;
          }
        }
        else
        {
          for ( i = v2 + 1; ; ++i )
          {
            *(_DWORD *)(a1 + 12) = i + 1;
            if ( (unsigned int)i[1] - 48 > 9 )
              break;
          }
          v39 = *(_DWORD *)(a1 + 20);
          v40 = i + 1 - v36;
          if ( v39 < *(_DWORD *)(a1 + 24) )
          {
            v41 = *(_DWORD *)(a1 + 16);
            v42 = (int *)(v41 + 16 * v39);
            v42[1] = 0;
            *(_DWORD *)(a1 + 20) = v39 + 1;
            if ( v40 )
            {
              v42[1] = 0;
              *(_DWORD *)(v41 + 16 * v39) = 0;
              v42[2] = (int)v36;
              v36 = i + 1;
              v42[3] = v40;
              v43 = i[1];
              goto LABEL_59;
            }
          }
        }
        break;
      case 'C':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v18 = sub_85668(a1);
        v7 = (_DWORD *)sub_84094(a1, 37, (unsigned int)v18);
        v95 = (unsigned int)v7;
        goto LABEL_19;
      case 'D':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        if ( v2[1] )
        {
          *(_DWORD *)(a1 + 12) = v2 + 2;
          switch ( v2[1] )
          {
            case 'F':
              v69 = *(_QWORD *)(a1 + 20);
              if ( (int)v69 >= SHIDWORD(v69) )
              {
                MEMORY[0] = 0;
                __und(0xFFu);
              }
              v70 = *(_DWORD *)(a1 + 16) + 16 * v69;
              *(_DWORD *)(v70 + 4) = 0;
              v95 = v70;
              *(_DWORD *)(a1 + 20) = v69 + 1;
              *(_DWORD *)v70 = 44;
              v71 = (unsigned __int8)(v2[2] - 48);
              *(_WORD *)(v70 + 12) = v71 <= 9;
              if ( v71 <= 9 )
              {
                sub_84278((unsigned __int8 **)(a1 + 12));
                v70 = v95;
              }
              v72 = sub_85668(a1);
              v73 = v95;
              *(_DWORD *)(v70 + 8) = v72;
              if ( !*(_DWORD *)(v73 + 8) )
                return nullptr;
              sub_84278((unsigned __int8 **)(a1 + 12));
              v74 = *(_BYTE **)(a1 + 12);
              v75 = (unsigned __int8)*v74;
              if ( *v74 )
              {
                *(_DWORD *)(a1 + 12) = v74 + 1;
                v75 = *v74 == 115;
              }
              v7 = (_DWORD *)v95;
              *(_WORD *)(v95 + 14) = v75;
              return v7;
            case 'T':
            case 't':
              v10 = *(_DWORD *)(a1 + 52);
              *(_DWORD *)(a1 + 52) = 1;
              v11 = sub_84DC0(a1);
              *(_DWORD *)(a1 + 52) = v10;
              v7 = (_DWORD *)sub_84094(a1, 66, (unsigned int)v11);
              v95 = (unsigned int)v7;
              if ( !v7 )
                return nullptr;
              v12 = *(_BYTE **)(a1 + 12);
              if ( !*v12 )
                return nullptr;
              *(_DWORD *)(a1 + 12) = v12 + 1;
              if ( *v12 != 69 )
                return nullptr;
              goto LABEL_20;
            case 'a':
              v67 = *(_QWORD *)(a1 + 20);
              if ( (int)v67 >= SHIDWORD(v67) )
                return nullptr;
              v68 = *(_DWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 20) = v67 + 1;
              v7 = (_DWORD *)(v68 + 16 * v67);
              v7[1] = 0;
              *v7 = 0;
              v7[2] = "auto";
              v7[3] = 4;
              return v7;
            case 'c':
              v65 = *(_QWORD *)(a1 + 20);
              if ( (int)v65 >= SHIDWORD(v65) )
                return nullptr;
              v66 = *(_DWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 20) = v65 + 1;
              v7 = (_DWORD *)(v66 + 16 * v65);
              v7[1] = 0;
              *v7 = 0;
              v7[2] = "decltype(auto)";
              v7[3] = 14;
              return v7;
            case 'd':
              v63 = *(_QWORD *)(a1 + 20);
              if ( (int)v63 >= SHIDWORD(v63) )
                goto LABEL_96;
              v53 = *(_DWORD *)(a1 + 16);
              v51 = 16 * v63;
              v64 = *(_DWORD *)(a1 + 48);
              v52 = v63 + 1;
              v7 = (_DWORD *)(v53 + v51);
              *(_DWORD *)(v53 + v51 + 4) = 0;
              v54 = &off_D1038;
              v55 = v64 + 9;
              goto LABEL_71;
            case 'e':
              v61 = *(_QWORD *)(a1 + 20);
              if ( (int)v61 >= SHIDWORD(v61) )
                goto LABEL_96;
              v53 = *(_DWORD *)(a1 + 16);
              v51 = 16 * v61;
              v62 = *(_DWORD *)(a1 + 48);
              v52 = v61 + 1;
              v7 = (_DWORD *)(v53 + v51);
              *(_DWORD *)(v53 + v51 + 4) = 0;
              v54 = &off_D104C;
              v55 = v62 + 10;
              goto LABEL_71;
            case 'f':
              v59 = *(_QWORD *)(a1 + 20);
              if ( (int)v59 >= SHIDWORD(v59) )
                goto LABEL_96;
              v53 = *(_DWORD *)(a1 + 16);
              v51 = 16 * v59;
              v60 = *(_DWORD *)(a1 + 48);
              v52 = v59 + 1;
              v7 = (_DWORD *)(v53 + v51);
              *(_DWORD *)(v53 + v51 + 4) = 0;
              v54 = &off_D1024;
              v55 = v60 + 9;
              goto LABEL_71;
            case 'h':
              v57 = *(_QWORD *)(a1 + 20);
              if ( (int)v57 >= SHIDWORD(v57) )
                goto LABEL_96;
              v53 = *(_DWORD *)(a1 + 16);
              v51 = 16 * v57;
              v58 = *(_DWORD *)(a1 + 48);
              v52 = v57 + 1;
              v7 = (_DWORD *)(v53 + v51);
              *(_DWORD *)(v53 + v51 + 4) = 0;
              v54 = &off_D1060;
              v55 = v58 + 4;
              goto LABEL_71;
            case 'i':
              v78 = *(_QWORD *)(a1 + 20);
              if ( (int)v78 >= SHIDWORD(v78) )
                goto LABEL_96;
              v53 = *(_DWORD *)(a1 + 16);
              v51 = 16 * v78;
              v79 = *(_DWORD *)(a1 + 48);
              v52 = v78 + 1;
              v7 = (_DWORD *)(v53 + v51);
              *(_DWORD *)(v53 + v51 + 4) = 0;
              v54 = &off_D1088;
              v55 = v79 + 8;
              goto LABEL_71;
            case 'n':
              v76 = *(_QWORD *)(a1 + 20);
              if ( (int)v76 >= SHIDWORD(v76) )
                goto LABEL_96;
              v53 = *(_DWORD *)(a1 + 16);
              v51 = 16 * v76;
              v77 = *(_DWORD *)(a1 + 48);
              v52 = v76 + 1;
              v7 = (_DWORD *)(v53 + v51);
              *(_DWORD *)(v53 + v51 + 4) = 0;
              v54 = &off_D109C;
              v55 = v77 + 17;
              goto LABEL_71;
            case 'p':
              v56 = sub_85668(a1);
              v7 = (_DWORD *)sub_84094(a1, 74, (unsigned int)v56);
              v95 = (unsigned int)v7;
              goto LABEL_19;
            case 's':
              v50 = *(_QWORD *)(a1 + 20);
              if ( (int)v50 >= SHIDWORD(v50) )
                goto LABEL_96;
              v51 = 16 * v50;
              v52 = v50 + 1;
              v53 = *(_DWORD *)(a1 + 16);
              v54 = &off_D1074;
              v55 = *(_DWORD *)(a1 + 48) + 8;
              v7 = (_DWORD *)(v53 + v51);
              *(_DWORD *)(v53 + v51 + 4) = 0;
LABEL_71:
              *(_DWORD *)(a1 + 20) = v52;
              *(_DWORD *)(v53 + v51) = 39;
              v7[2] = v54;
              *(_DWORD *)(a1 + 48) = v55;
              return v7;
            case 'v':
              if ( v2[2] == 95 )
              {
                v92 = *(_DWORD *)(a1 + 52);
                *(_DWORD *)(a1 + 12) = v2 + 3;
                *(_DWORD *)(a1 + 52) = 1;
                v93 = sub_84DC0(a1);
                *(_DWORD *)(a1 + 52) = v92;
                v47 = v93;
              }
              else
              {
                v47 = sub_842D4(a1);
              }
              if ( !v47 )
                return nullptr;
              v48 = *(_BYTE **)(a1 + 12);
              if ( *v48 != 95 )
                return nullptr;
              *(_DWORD *)(a1 + 12) = v48 + 1;
              v49 = sub_85668(a1);
              v7 = (_DWORD *)sub_84094(a1, 45, __SPAIR64__((unsigned int)v49, (unsigned int)v47));
              v95 = (unsigned int)v7;
              goto LABEL_19;
            default:
              return nullptr;
          }
        }
        return nullptr;
      case 'F':
        v7 = (_DWORD *)sub_86198(a1);
        v95 = (unsigned int)v7;
        goto LABEL_19;
      case 'G':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v17 = sub_85668(a1);
        v7 = (_DWORD *)sub_84094(a1, 38, (unsigned int)v17);
        v95 = (unsigned int)v7;
        goto LABEL_19;
      case 'M':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v45 = sub_85668(a1);
        if ( !v45 )
          return nullptr;
        HIDWORD(v46) = sub_85668(a1);
        if ( !HIDWORD(v46) )
          return nullptr;
        LODWORD(v46) = v45;
        v7 = (_DWORD *)sub_84094(a1, 43, v46);
        v95 = (unsigned int)v7;
        goto LABEL_19;
      case 'O':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v16 = sub_85668(a1);
        v7 = (_DWORD *)sub_84094(a1, 36, (unsigned int)v16);
        v95 = (unsigned int)v7;
        goto LABEL_19;
      case 'P':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v20 = sub_85668(a1);
        v7 = (_DWORD *)sub_84094(a1, 34, (unsigned int)v20);
        v95 = (unsigned int)v7;
        goto LABEL_19;
      case 'R':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v19 = sub_85668(a1);
        v7 = (_DWORD *)sub_84094(a1, 35, (unsigned int)v19);
        v95 = (unsigned int)v7;
        goto LABEL_19;
      case 'S':
        v32 = v2[1];
        v33 = v32 > 0x5F;
        if ( v32 != 95 )
          v33 = v32 - 48 > 9;
        if ( !v33 || v32 - 65 <= 0x19 )
        {
          v34 = sub_84478((_DWORD *)a1, 0);
          v35 = *(_BYTE **)(a1 + 12);
          v7 = (_DWORD *)v34;
          v95 = v34;
          if ( *v35 != 73 )
            return v7;
          *(_DWORD *)(a1 + 12) = v35 + 1;
          v30 = __PAIR64__(sub_8522C((_DWORD *)a1), v34);
          goto LABEL_41;
        }
        v80 = sub_85304(a1);
        v7 = v80;
        v95 = (unsigned int)v80;
        if ( !v80 )
          return nullptr;
        if ( *v80 == 24 )
          return v7;
        goto LABEL_20;
      case 'T':
        v28 = sub_84338(a1);
        v29 = *(_BYTE **)(a1 + 12);
        v7 = v28;
        v95 = (unsigned int)v28;
        if ( *v29 != 73 )
          goto LABEL_19;
        HIDWORD(v30) = *(_DWORD *)(a1 + 56);
        if ( HIDWORD(v30) )
        {
          *(_DWORD *)(a1 + 12) = v29 + 1;
          v84 = *(_DWORD *)(a1 + 20);
          v85 = *(_DWORD *)(a1 + 32);
          v86 = *(_DWORD *)(a1 + 40);
          v87 = *(_DWORD *)(a1 + 48);
          v88 = sub_8522C((_DWORD *)a1);
          if ( **(_BYTE **)(a1 + 12) == 73 )
          {
            if ( !v95 )
              return nullptr;
            v89 = *(_QWORD *)(a1 + 32);
            if ( (int)v89 >= SHIDWORD(v89) )
              return nullptr;
            v90 = v89 + 1;
            *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v89) = v95;
            v91 = __PAIR64__(v88, v95);
            *(_DWORD *)(a1 + 32) = v90;
            v7 = (_DWORD *)sub_84094(a1, 4, v91);
            v95 = (unsigned int)v7;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = v87;
            *(_DWORD *)(a1 + 12) = v29;
            *(_DWORD *)(a1 + 20) = v84;
            *(_DWORD *)(a1 + 32) = v85;
            *(_DWORD *)(a1 + 40) = v86;
            v7 = (_DWORD *)v95;
          }
        }
        else
        {
          if ( !v28 )
            return nullptr;
          v31 = *(_QWORD *)(a1 + 32);
          if ( (int)v31 >= SHIDWORD(v31) )
            return nullptr;
          *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v31) = v28;
          *(_DWORD *)(a1 + 32) = v31 + 1;
          LODWORD(v30) = v95;
          if ( (unsigned int)(unsigned __int8)*v29 - 73 <= 1 )
          {
            *(_DWORD *)(a1 + 12) = v29 + 1;
            v94 = v30;
            v30 = __PAIR64__(sub_8522C((_DWORD *)a1), v94);
          }
LABEL_41:
          v7 = (_DWORD *)sub_84094(a1, 4, v30);
          v95 = (unsigned int)v7;
        }
LABEL_19:
        if ( !v7 )
          return nullptr;
LABEL_20:
        v14 = *(_QWORD *)(a1 + 32);
        if ( (int)v14 < SHIDWORD(v14) )
        {
          *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v14) = v7;
          v15 = v95;
          *(_DWORD *)(a1 + 32) = v14 + 1;
          return (_DWORD *)v15;
        }
        return nullptr;
      case 'U':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v24 = sub_8437C(a1);
        v25 = *(_BYTE **)(a1 + 12);
        v26 = v24;
        v95 = (unsigned int)v24;
        if ( *v25 == 73 )
        {
          *(_DWORD *)(a1 + 12) = v25 + 1;
          v81 = sub_8522C((_DWORD *)a1);
          v95 = sub_84094(a1, 4, __SPAIR64__(v81, (unsigned int)v26));
        }
        v27 = sub_85668(a1);
        v7 = (_DWORD *)sub_84094(a1, 33, __SPAIR64__(v95, (unsigned int)v27));
        v95 = (unsigned int)v7;
        goto LABEL_19;
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 's':
      case 't':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
        v21 = *(_DWORD *)(a1 + 20);
        v22 = &(&off_D0E1C)[5 * *v2 - 485];
        if ( v21 >= *(_DWORD *)(a1 + 24) )
        {
LABEL_96:
          v95 = 0;
          __und(0xFFu);
        }
        v23 = (int)&v22[1][*(_DWORD *)(a1 + 48)];
        v7 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v21);
        v7[1] = 0;
        *(_DWORD *)(a1 + 20) = v21 + 1;
        *v7 = 39;
        v7[2] = v22;
        *(_DWORD *)(a1 + 12) = v2 + 1;
        *(_DWORD *)(a1 + 48) = v23;
        return v7;
      case 'u':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v13 = sub_8437C(a1);
        v7 = (_DWORD *)sub_84094(a1, 40, (unsigned int)v13);
        v95 = (unsigned int)v7;
        goto LABEL_19;
      default:
        return nullptr;
    }
    return nullptr;
  }
  v3 = sub_85FF0((_DWORD *)a1, (int *)&v95, 0);
  if ( !v3 )
    return nullptr;
  v4 = **(_BYTE **)(a1 + 12) == 70 ? (_DWORD *)sub_86198(a1) : sub_85668(a1);
  *v3 = (int)v4;
  if ( !v4 )
    return nullptr;
  v5 = v95;
  if ( (unsigned int)(*v4 - 31) <= 1 )
  {
    v9 = v4[2];
    v4[2] = v95;
    v95 = *v3;
    *v3 = v9;
    v5 = v95;
  }
  if ( !v5 )
    return nullptr;
  v6 = *(_QWORD *)(a1 + 32);
  if ( (int)v6 >= SHIDWORD(v6) )
    return nullptr;
  *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v6) = v5;
  v7 = (_DWORD *)v95;
  *(_DWORD *)(a1 + 32) = v6 + 1;
  return v7;
}
// 8567C: variable 'v2' is possibly undefined
// D0E1C: using guessed type char *off_D0E1C;
// D1024: using guessed type char *off_D1024;
// D1038: using guessed type char *off_D1038;
// D104C: using guessed type char *off_D104C;
// D1060: using guessed type char *off_D1060;
// D1074: using guessed type char *off_D1074;
// D1088: using guessed type char *off_D1088;
// D109C: using guessed type char *off_D109C;
