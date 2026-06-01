/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A7538
// Address: 0x00000000004A7538

//----- (00000000004A7538) ----------------------------------------------------
__int64 __fastcall sub_4A7538(__int64 a1)
{
  unsigned __int8 *v2; // x4
  __int64 v3; // x20
  __int64 *v5; // x20
  __int64 v6; // x2
  int v7; // w0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x0
  int v11; // w0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  int v15; // w0
  bool v16; // cc
  _BYTE *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  _BYTE *v20; // x21
  __int64 v21; // x20
  _BYTE *v22; // x0
  __int64 v23; // x0
  unsigned int v24; // w0
  int v25; // w0
  int v26; // w5
  __int64 v27; // x0
  __int64 v28; // x3
  char **v29; // x1
  int v30; // w2
  int v31; // w2
  char **v32; // x1
  int v33; // w0
  __int64 v34; // x0
  __int64 v35; // x0
  unsigned __int8 *v36; // x5
  int v37; // w0
  unsigned __int8 *v38; // x1
  int v39; // w0
  int v40; // w2
  int v41; // w6
  __int64 v42; // x4
  __int64 v43; // x0
  __int64 v44; // x20
  int v45; // w0
  __int64 v46; // x0
  __int64 v47; // x20
  __int64 v48; // x3
  int v49; // w0
  __int64 v50; // x2
  __int64 v51; // x0
  const char *v52; // x1
  int v53; // w3
  int v54; // w1
  __int64 v55; // x3
  __int64 v56; // x2
  _DWORD *v57; // x0
  __int64 v58; // x0
  int v59; // w21
  __int64 v60; // x0
  int v61; // w0
  int v62; // w0
  __int64 v63; // x20
  unsigned int v64; // w0
  __int64 v65; // x0
  __int64 v66; // x1
  _BYTE *v67; // x0
  __int16 v68; // w1
  int v69; // w23
  int v70; // w22
  int v71; // w20
  int v72; // w24
  __int64 v73; // x0
  int v74; // w0
  int v75; // w5
  __int64 v76; // x0
  __int64 v77; // x3
  char **v78; // x1
  int v79; // w2
  __int64 v80; // x0
  int v81; // w0
  int v82; // w3
  int v83; // w0
  int v84; // w0
  int v85; // w0
  int v86; // w0
  __int64 v87; // x20
  _BYTE *v88; // x0
  __int64 v89; // x0
  int v90; // w20
  __int64 v91; // x0
  _BYTE *v92; // x0
  int v93; // w2
  int v94; // w21
  __int64 v95; // x0
  __int64 v96; // [xsp+48h] [xbp+48h]
  _DWORD *v97; // [xsp+58h] [xbp+58h] BYREF

  if ( (unsigned int)sub_4A5A40(*(unsigned __int8 **)(a1 + 24)) )
  {
    v5 = sub_4A83A0(a1, (__int64 *)&v97, 0);
    if ( !v5 )
      return 0;
    v8 = **(_BYTE **)(a1 + 24) == 70 ? sub_4A86A8(a1) : sub_4A7538(a1);
    *v5 = v8;
    if ( !v8 )
      return 0;
    v6 = (__int64)v97;
    if ( (unsigned int)(*(_DWORD *)v8 - 31) <= 1 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v8 + 8) = v97;
      v97 = (_DWORD *)*v5;
      *v5 = v9;
      v6 = (__int64)v97;
    }
    if ( !v6 )
      return 0;
    v7 = *(_DWORD *)(a1 + 56);
    if ( v7 >= *(_DWORD *)(a1 + 60) )
      return 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v7) = v6;
    *(_DWORD *)(a1 + 56) = v7 + 1;
    return (__int64)v97;
  }
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
      v3 = sub_4A6FA0(a1);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'A':
      v36 = v2 + 1;
      *(_QWORD *)(a1 + 24) = v2 + 1;
      v37 = v2[1];
      if ( v37 == 95 )
      {
        v44 = 0;
      }
      else
      {
        v38 = v2 + 1;
        if ( (unsigned __int8)(v37 - 48) <= 9u )
        {
          while ( 1 )
          {
            *(_QWORD *)(a1 + 24) = v38 + 1;
            if ( (unsigned __int8)(v38[1] - 48) > 9u )
              break;
            ++v38;
          }
          v39 = *(_DWORD *)(a1 + 40);
          v40 = (_DWORD)v38 - (_DWORD)v2;
          if ( v39 >= *(_DWORD *)(a1 + 44) )
            return 0;
          v41 = v39 + 1;
          v42 = *(_QWORD *)(a1 + 32);
          v43 = 24LL * v39;
          v44 = v42 + v43;
          *(_DWORD *)(v42 + v43 + 4) = 0;
          *(_DWORD *)(a1 + 40) = v41;
          if ( !v40 )
            return 0;
          *(_DWORD *)(v44 + 4) = 0;
          *(_DWORD *)(v42 + v43) = 0;
          *(_QWORD *)(v44 + 8) = v36;
          v36 = v38 + 1;
          *(_DWORD *)(v44 + 16) = v40;
          v45 = v38[1];
        }
        else
        {
          v59 = *(_DWORD *)(a1 + 84);
          *(_DWORD *)(a1 + 84) = 1;
          v60 = sub_4A66F8(a1);
          *(_DWORD *)(a1 + 84) = v59;
          v44 = v60;
          if ( !v60 )
            return 0;
          v36 = *(unsigned __int8 **)(a1 + 24);
          v45 = *v36;
        }
        if ( v45 != 95 )
          return 0;
      }
      *(_QWORD *)(a1 + 24) = v36 + 1;
      v46 = sub_4A7538(a1);
      v3 = sub_4A5090(a1, 42, v44, v46);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'C':
      *(_QWORD *)(a1 + 24) = v2 + 1;
      v35 = sub_4A7538(a1);
      v3 = sub_4A5090(a1, 37, v35, 0);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'D':
      *(_QWORD *)(a1 + 24) = v2 + 1;
      if ( !v2[1] )
        return 0;
      *(_QWORD *)(a1 + 24) = v2 + 2;
      v24 = v2[1];
      if ( v24 == 102 )
        goto LABEL_111;
      if ( v24 <= 0x66 )
        goto LABEL_67;
      if ( v24 == 112 )
      {
        v80 = sub_4A7538(a1);
        v3 = sub_4A5090(a1, 74, v80, 0);
        v97 = (_DWORD *)v3;
        goto LABEL_17;
      }
      if ( v24 > 0x70 )
      {
        if ( v24 == 116 )
          goto LABEL_123;
        if ( v24 != 118 )
        {
          if ( v24 != 115 )
            return 0;
          v61 = *(_DWORD *)(a1 + 40);
          if ( v61 >= *(_DWORD *)(a1 + 44) )
            goto LABEL_66;
          v26 = v61 + 1;
          v27 = 24LL * v61;
          v28 = *(_QWORD *)(a1 + 32);
          v29 = &off_51CFD8;
          v30 = *(_DWORD *)(a1 + 80) + 8;
          v3 = v28 + v27;
LABEL_46:
          *(_DWORD *)(v3 + 4) = 0;
          *(_DWORD *)(a1 + 40) = v26;
          *(_DWORD *)(v28 + v27) = 39;
          *(_QWORD *)(v3 + 8) = v29;
          *(_DWORD *)(a1 + 80) = v30;
          return v3;
        }
        if ( v2[2] == 95 )
        {
          v94 = *(_DWORD *)(a1 + 84);
          *(_QWORD *)(a1 + 24) = v2 + 3;
          *(_DWORD *)(a1 + 84) = 1;
          v95 = sub_4A66F8(a1);
          *(_DWORD *)(a1 + 84) = v94;
          v87 = v95;
        }
        else
        {
          v87 = sub_4A53C0(a1);
        }
        if ( !v87 )
          return 0;
        v88 = *(_BYTE **)(a1 + 24);
        if ( *v88 != 95 )
          return 0;
        *(_QWORD *)(a1 + 24) = v88 + 1;
        v89 = sub_4A7538(a1);
        v3 = sub_4A5090(a1, 45, v87, v89);
        v97 = (_DWORD *)v3;
LABEL_17:
        if ( !v3 )
          return 0;
        goto LABEL_18;
      }
      if ( v24 == 105 )
      {
        v83 = *(_DWORD *)(a1 + 40);
        if ( v83 >= *(_DWORD *)(a1 + 44) )
          goto LABEL_66;
        v75 = v83 + 1;
        v76 = 24LL * v83;
        v77 = *(_QWORD *)(a1 + 32);
        v78 = &off_51CFF8;
        v79 = *(_DWORD *)(a1 + 80) + 8;
        v3 = v77 + v76;
LABEL_104:
        *(_DWORD *)(v3 + 4) = 0;
        *(_DWORD *)(a1 + 40) = v75;
        *(_DWORD *)(v77 + v76) = 39;
        *(_QWORD *)(v3 + 8) = v78;
        *(_DWORD *)(a1 + 80) = v79;
        return v3;
      }
      if ( v24 == 110 )
      {
        v74 = *(_DWORD *)(a1 + 40);
        if ( v74 >= *(_DWORD *)(a1 + 44) )
          goto LABEL_66;
        v75 = v74 + 1;
        v76 = 24LL * v74;
        v77 = *(_QWORD *)(a1 + 32);
        v78 = &off_51D018;
        v79 = *(_DWORD *)(a1 + 80) + 17;
        v3 = v77 + v76;
        goto LABEL_104;
      }
      if ( v24 != 104 )
        return 0;
      v25 = *(_DWORD *)(a1 + 40);
      if ( v25 < *(_DWORD *)(a1 + 44) )
      {
        v26 = v25 + 1;
        v27 = 24LL * v25;
        v28 = *(_QWORD *)(a1 + 32);
        v29 = &off_51CFB8;
        v30 = *(_DWORD *)(a1 + 80) + 4;
        v3 = v28 + v27;
        goto LABEL_46;
      }
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_66:
          v97 = nullptr;
          v24 = MEMORY[8];
          __break(0x3E8u);
LABEL_67:
          if ( v24 == 97 )
          {
            v81 = *(_DWORD *)(a1 + 40);
            v3 = 0;
            if ( v81 >= *(_DWORD *)(a1 + 44) )
              return v3;
            v82 = v81 + 1;
            v50 = *(_QWORD *)(a1 + 32);
            v51 = 24LL * v81;
            *(_DWORD *)(a1 + 40) = v82;
            v53 = 4;
            v52 = "auto";
            goto LABEL_74;
          }
          if ( v24 <= 0x61 )
            break;
          if ( v24 == 100 )
          {
            v86 = *(_DWORD *)(a1 + 40);
            if ( v86 < *(_DWORD *)(a1 + 44) )
            {
              v75 = v86 + 1;
              v76 = 24LL * v86;
              v77 = *(_QWORD *)(a1 + 32);
              v78 = &off_51CF78;
              v79 = *(_DWORD *)(a1 + 80) + 9;
              v3 = v77 + v76;
              goto LABEL_104;
            }
          }
          else
          {
            if ( v24 <= 0x64 )
            {
              if ( v24 != 99 )
                return 0;
              v49 = *(_DWORD *)(a1 + 40);
              v3 = 0;
              if ( v49 >= *(_DWORD *)(a1 + 44) )
                return v3;
              v50 = *(_QWORD *)(a1 + 32);
              *(_DWORD *)(a1 + 40) = v49 + 1;
              v51 = 24LL * v49;
              v52 = "decltype(auto)";
              v53 = 14;
LABEL_74:
              v3 = v50 + v51;
              *(_DWORD *)(v3 + 4) = 0;
              *(_DWORD *)(v50 + v51) = 0;
              *(_QWORD *)(v3 + 8) = v52;
              *(_DWORD *)(v3 + 16) = v53;
              return v3;
            }
            v85 = *(_DWORD *)(a1 + 40);
            if ( v85 < *(_DWORD *)(a1 + 44) )
            {
              v75 = v85 + 1;
              v76 = 24LL * v85;
              v77 = *(_QWORD *)(a1 + 32);
              v78 = &off_51CF98;
              v79 = *(_DWORD *)(a1 + 80) + 10;
              v3 = v77 + v76;
              goto LABEL_104;
            }
          }
        }
        if ( v24 != 70 )
          break;
        v62 = *(_DWORD *)(a1 + 40);
        if ( v62 < *(_DWORD *)(a1 + 44) )
        {
          v63 = *(_QWORD *)(a1 + 32) + 24LL * v62;
          *(_DWORD *)(v63 + 4) = 0;
          *(_DWORD *)(a1 + 40) = v62 + 1;
          v97 = (_DWORD *)v63;
          *(_DWORD *)v63 = 44;
          v64 = (unsigned __int8)(v2[2] - 48);
          *(_WORD *)(v63 + 16) = v64 <= 9;
          if ( v64 <= 9 )
          {
            sub_4A5320((unsigned __int8 **)(a1 + 24));
            v63 = (__int64)v97;
          }
          v65 = sub_4A7538(a1);
          v66 = (__int64)v97;
          *(_QWORD *)(v63 + 8) = v65;
          if ( *(_QWORD *)(v66 + 8) )
          {
            sub_4A5320((unsigned __int8 **)(a1 + 24));
            v67 = *(_BYTE **)(a1 + 24);
            v68 = 0;
            if ( *v67 )
            {
              *(_QWORD *)(a1 + 24) = v67 + 1;
              v68 = *v67 == 115;
            }
            v3 = (__int64)v97;
            *((_WORD *)v97 + 9) = v68;
            return v3;
          }
          return 0;
        }
        MEMORY[0] = 0;
        __break(0x3E8u);
LABEL_111:
        v84 = *(_DWORD *)(a1 + 40);
        if ( v84 < *(_DWORD *)(a1 + 44) )
        {
          v75 = v84 + 1;
          v76 = 24LL * v84;
          v77 = *(_QWORD *)(a1 + 32);
          v78 = &off_51CF58;
          v79 = *(_DWORD *)(a1 + 80) + 9;
          v3 = v77 + v76;
          goto LABEL_104;
        }
      }
      if ( v24 != 84 )
        return 0;
LABEL_123:
      v90 = *(_DWORD *)(a1 + 84);
      *(_DWORD *)(a1 + 84) = 1;
      v91 = sub_4A66F8(a1);
      *(_DWORD *)(a1 + 84) = v90;
      v97 = (_DWORD *)sub_4A5090(a1, 66, v91, 0);
      v3 = (__int64)v97;
      if ( !v97 )
        return 0;
      v92 = *(_BYTE **)(a1 + 24);
      if ( !*v92 )
        return 0;
      *(_QWORD *)(a1 + 24) = v92 + 1;
      if ( *v92 != 69 )
        return 0;
LABEL_18:
      v11 = *(_DWORD *)(a1 + 56);
      if ( v11 >= *(_DWORD *)(a1 + 60) )
        return 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v11) = v3;
      *(_DWORD *)(a1 + 56) = v11 + 1;
      return (__int64)v97;
    case 'F':
      v3 = sub_4A86A8(a1);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'G':
      *(_QWORD *)(a1 + 24) = v2 + 1;
      v34 = sub_4A7538(a1);
      v3 = sub_4A5090(a1, 38, v34, 0);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'M':
      *(_QWORD *)(a1 + 24) = v2 + 1;
      v47 = sub_4A7538(a1);
      if ( !v47 )
        return 0;
      v48 = sub_4A7538(a1);
      if ( !v48 )
        return 0;
      v3 = sub_4A5090(a1, 43, v47, v48);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'O':
      *(_QWORD *)(a1 + 24) = v2 + 1;
      v12 = sub_4A7538(a1);
      v3 = sub_4A5090(a1, 36, v12, 0);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'P':
      *(_QWORD *)(a1 + 24) = v2 + 1;
      v13 = sub_4A7538(a1);
      v3 = sub_4A5090(a1, 34, v13, 0);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'R':
      *(_QWORD *)(a1 + 24) = v2 + 1;
      v14 = sub_4A7538(a1);
      v3 = sub_4A5090(a1, 35, v14, 0);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'S':
      v15 = v2[1];
      v16 = v15 != 95 && (unsigned __int8)(v15 - 48) > 9u;
      if ( !v16 || (unsigned __int8)(v15 - 65) <= 0x19u )
      {
        v3 = sub_4A5718(a1, 0);
        v17 = *(_BYTE **)(a1 + 24);
        v97 = (_DWORD *)v3;
        if ( *v17 != 73 )
          return v3;
        *(_QWORD *)(a1 + 24) = v17 + 1;
        v18 = sub_4A6E30(a1);
        v3 = sub_4A5090(a1, 4, v3, v18);
        v97 = (_DWORD *)v3;
        goto LABEL_17;
      }
      v57 = (_DWORD *)sub_4A6FA0(a1);
      v97 = v57;
      v3 = (__int64)v57;
      if ( !v57 )
        return 0;
      if ( *v57 == 24 )
        return v3;
      goto LABEL_18;
    case 'T':
      v19 = sub_4A54A0(a1);
      v20 = *(_BYTE **)(a1 + 24);
      v97 = (_DWORD *)v19;
      v3 = v19;
      if ( *v20 != 73 )
        goto LABEL_17;
      if ( *(_DWORD *)(a1 + 88) )
      {
        v69 = *(_DWORD *)(a1 + 56);
        v70 = *(_DWORD *)(a1 + 64);
        v71 = *(_DWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 24) = v20 + 1;
        v72 = *(_DWORD *)(a1 + 40);
        v73 = sub_4A6E30(a1);
        if ( **(_BYTE **)(a1 + 24) != 73 )
        {
          *(_QWORD *)(a1 + 24) = v20;
          *(_DWORD *)(a1 + 40) = v72;
          *(_DWORD *)(a1 + 56) = v69;
          *(_DWORD *)(a1 + 64) = v70;
          *(_DWORD *)(a1 + 80) = v71;
          v3 = (__int64)v97;
          goto LABEL_17;
        }
        if ( v97 )
        {
          v93 = *(_DWORD *)(a1 + 56);
          if ( v93 < *(_DWORD *)(a1 + 60) )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v93) = v97;
            *(_DWORD *)(a1 + 56) = v93 + 1;
            v3 = sub_4A5090(a1, 4, (__int64)v97, v73);
            v97 = (_DWORD *)v3;
            goto LABEL_17;
          }
        }
        return 0;
      }
      if ( !v19 )
        return 0;
      v54 = *(_DWORD *)(a1 + 56);
      if ( v54 >= *(_DWORD *)(a1 + 60) )
        return 0;
      v55 = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v54) = v19;
      *(_DWORD *)(a1 + 56) = v54 + 1;
      v56 = (__int64)v97;
      if ( (unsigned __int8)(*v20 - 73) <= 1u )
      {
        *(_QWORD *)(a1 + 24) = v20 + 1;
        v96 = v56;
        v55 = sub_4A6E30(a1);
        v56 = v96;
      }
      v3 = sub_4A5090(a1, 4, v56, v55);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    case 'U':
      *(_QWORD *)(a1 + 24) = v2 + 1;
      v21 = sub_4A5530(a1);
      v22 = *(_BYTE **)(a1 + 24);
      v97 = (_DWORD *)v21;
      if ( *v22 == 73 )
      {
        *(_QWORD *)(a1 + 24) = v22 + 1;
        v58 = sub_4A6E30(a1);
        v97 = (_DWORD *)sub_4A5090(a1, 4, v21, v58);
      }
      v23 = sub_4A7538(a1);
      v3 = sub_4A5090(a1, 33, v23, (__int64)v97);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
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
      v31 = *(_DWORD *)(a1 + 40);
      v32 = &(&off_51CC18)[4 * *v2 - 388];
      if ( v31 >= *(_DWORD *)(a1 + 44) )
        goto LABEL_66;
      v3 = *(_QWORD *)(a1 + 32) + 24LL * v31;
      v33 = *(_DWORD *)(a1 + 80) + *((_DWORD *)v32 + 2);
      *(_DWORD *)(v3 + 4) = 0;
      *(_DWORD *)(a1 + 40) = v31 + 1;
      *(_DWORD *)v3 = 39;
      *(_QWORD *)(v3 + 8) = v32;
      *(_QWORD *)(a1 + 24) = v2 + 1;
      *(_DWORD *)(a1 + 80) = v33;
      return v3;
    case 'u':
      *(_QWORD *)(a1 + 24) = v2 + 1;
      v10 = sub_4A5530(a1);
      v3 = sub_4A5090(a1, 40, v10, 0);
      v97 = (_DWORD *)v3;
      goto LABEL_17;
    default:
      return 0;
  }
}
// 4A7558: variable 'v2' is possibly undefined
// 51CC18: using guessed type char *off_51CC18;
// 51CF58: using guessed type char *off_51CF58;
// 51CF78: using guessed type char *off_51CF78;
// 51CF98: using guessed type char *off_51CF98;
// 51CFB8: using guessed type char *off_51CFB8;
// 51CFD8: using guessed type char *off_51CFD8;
// 51CFF8: using guessed type char *off_51CFF8;
// 51D018: using guessed type char *off_51D018;
