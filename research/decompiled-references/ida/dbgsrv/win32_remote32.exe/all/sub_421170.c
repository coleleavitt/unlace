/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_421170
// Address: 0x00421170

//----- (00421170) --------------------------------------------------------
int __userpurge sub_421170@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, unsigned int a4)
{
  char *v5; // esi
  int v6; // edi
  int result; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // edi
  int v17; // edx
  int v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // esi
  BOOL v22; // eax
  int v23; // esi
  int v24; // eax
  BOOL v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // esi
  int v31; // eax
  int v32; // esi
  int v33; // eax
  int v34; // edx
  int v35; // esi
  int v36; // eax
  int v37; // edx
  int v38; // esi
  int v39; // eax
  int v40; // esi
  char *v41; // eax
  int v42; // edx
  char v43; // al
  int v44; // edx
  char v45; // al
  __int16 v46; // ax
  int v47; // eax
  int v48; // esi
  int v49; // ecx
  _WORD *v50; // esi
  unsigned int v51; // ecx
  unsigned int v52; // edi
  int v53; // edx
  int v54; // ecx
  unsigned int v55; // edi
  bool v56; // cf
  unsigned __int8 v57; // al
  unsigned __int8 v58; // al
  unsigned __int8 v59; // al
  int v60; // ecx
  int v61; // edi
  unsigned int v62; // ecx
  bool v63; // cf
  int v64; // eax
  int v65; // eax
  unsigned int v66; // eax
  int v67; // esi
  int v68; // ecx
  _WORD *v69; // esi
  unsigned int v70; // ecx
  unsigned int v71; // edi
  int v72; // edx
  int v73; // ecx
  unsigned int v74; // edi
  bool v75; // cf
  unsigned __int8 v76; // al
  unsigned __int8 v77; // al
  unsigned __int8 v78; // al
  int v79; // ecx
  int v80; // edi
  unsigned int v81; // ecx
  bool v82; // cf
  int v83; // eax
  int v84; // eax
  unsigned int v85; // eax
  int v86; // esi
  int v87; // ecx
  _WORD *v88; // esi
  unsigned int v89; // ecx
  unsigned int v90; // edi
  int v91; // edx
  int v92; // ecx
  unsigned int v93; // edi
  bool v94; // cf
  unsigned __int8 v95; // al
  unsigned __int8 v96; // al
  unsigned __int8 v97; // al
  int v98; // ecx
  int v99; // edi
  unsigned int v100; // ecx
  bool v101; // cf
  int v102; // eax
  int v103; // eax
  unsigned int v104; // eax
  int v105; // esi
  int v106; // ecx
  _WORD *v107; // esi
  unsigned int v108; // ecx
  unsigned int v109; // edi
  int v110; // edx
  int v111; // ecx
  unsigned int v112; // edi
  bool v113; // cf
  unsigned __int8 v114; // al
  unsigned __int8 v115; // al
  unsigned __int8 v116; // al
  int v117; // eax
  signed int v118; // ecx
  int v119; // edi
  unsigned int v120; // ecx
  bool v121; // cf
  int v122; // eax
  int v123; // eax
  unsigned int v124; // eax
  int v125; // edi
  unsigned int v126; // esi
  int v127; // esi
  int v128; // ecx
  _WORD *v129; // esi
  unsigned int v130; // ecx
  unsigned int v131; // edi
  int v132; // edx
  int v133; // ecx
  unsigned int v134; // edi
  bool v135; // cf
  unsigned __int8 v136; // al
  unsigned __int8 v137; // al
  unsigned __int8 v138; // al
  int v139; // ecx
  int v140; // edi
  unsigned int v141; // ecx
  bool v142; // cf
  int v143; // eax
  int v144; // eax
  unsigned int v145; // eax
  char v146[8]; // [esp+Ch] [ebp-38h] BYREF
  __int128 v147; // [esp+14h] [ebp-30h] BYREF
  __int64 v148; // [esp+24h] [ebp-20h]
  unsigned int v149; // [esp+2Ch] [ebp-18h]
  unsigned int v150; // [esp+30h] [ebp-14h]
  int v151; // [esp+34h] [ebp-10h]
  int v152; // [esp+40h] [ebp-4h]

  v151 = 0;
  switch ( (char)a4 )
  {
    case -80:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 0;
      sub_423420(a1, v146);
      v5 = sub_4239C0((char *)(*a1 + 24 * a1[1] - 24), 2);
      if ( *v5 == 7 )
      {
        v6 = sub_424980(v146);
        v151 = v6;
        if ( v6 )
        {
          v152 = 1;
          sub_423B70((int)v146);
          return v6;
        }
        sub_40CC20((int)(v5 + 8), (unsigned int *)&v147);
      }
      else
      {
        switch ( sub_420FB0(a2, v5, (int)v146) )
        {
          case 2:
            *((_DWORD *)v5 + 2) += v147;
            break;
          case 3:
            v8 = sub_45EC90((_WORD *)v5 + 4, &v147, (_WORD *)v5 + 4, 0);
            if ( v8 != 1 )
              sub_420440(v8);
            break;
          case 5:
            if ( !sub_423750((int)v5, (int)v5) )
              sub_41C770(*((int **)v5 + 2), **(_DWORD **)v147, *(_DWORD *)v147);
            break;
          case 6:
          case 8:
            sub_45CC20(1531);
            break;
          case 7:
            if ( !sub_4246D0(a2, a3, v5) && !sub_4246D0(a2, a3, v146) )
              goto LABEL_10;
            break;
          case 9:
LABEL_10:
            v56 = __CFADD__((_DWORD)v147, *((_DWORD *)v5 + 2));
            *((_DWORD *)v5 + 2) += v147;
            *((_DWORD *)v5 + 3) += DWORD1(v147) + v56;
            break;
          default:
            break;
        }
      }
      v152 = 2;
      sub_423B70((int)v146);
      return v151;
    case -79:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 3;
      sub_423420(a1, v146);
      v9 = *a1 + 8 * (3 * a1[1] - 3);
      switch ( sub_420FB0(a2, (char *)v9, (int)v146) )
      {
        case 2:
          *(_DWORD *)(v9 + 8) -= v147;
          goto LABEL_19;
        case 3:
          v10 = sub_45EC90((_WORD *)(v9 + 8), &v147, (_WORD *)(v9 + 8), 1);
          if ( v10 == 1 )
            goto LABEL_19;
          v151 = sub_420440(v10);
          goto LABEL_20;
        case 5:
          v151 = sub_423750(v9, v9);
          if ( v151 )
            goto LABEL_20;
          v11 = (_DWORD *)v147;
          v12 = *(_DWORD *)v147;
          v13 = **(_DWORD **)v147;
          a4 = v13;
          if ( v13 != v12 )
          {
            do
            {
              sub_41FD80(*(int ***)(v9 + 8), v13 + 16);
              sub_40B5E0((int *)&a4);
              v13 = a4;
            }
            while ( a4 != *v11 );
          }
          goto LABEL_19;
        case 6:
        case 8:
          v151 = sub_45CC20(1531);
          goto LABEL_20;
        case 7:
          v151 = sub_4246D0(a2, v9, (char *)v9);
          if ( !v151 )
          {
            v151 = sub_4246D0(a2, v9, v146);
            if ( !v151 )
              goto LABEL_23;
          }
          goto LABEL_20;
        case 9:
LABEL_23:
          v56 = *(_DWORD *)(v9 + 8) < (unsigned int)v147;
          *(_DWORD *)(v9 + 8) -= v147;
          *(_DWORD *)(v9 + 12) -= v56 + DWORD1(v147);
          goto LABEL_19;
        default:
LABEL_19:
          v151 = 0;
LABEL_20:
          v152 = 4;
          sub_423B70((int)v146);
          result = v151;
          break;
      }
      return result;
    case -78:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 5;
      sub_423420(a1, v146);
      v14 = *a1 + 8 * (3 * a1[1] - 3);
      switch ( sub_420FB0(a2, (char *)v14, (int)v146) )
      {
        case 2:
          *(_DWORD *)(v14 + 8) *= (_DWORD)v147;
          goto LABEL_33;
        case 3:
          v15 = sub_45F700((_WORD *)(v14 + 8), &v147, (_WORD *)(v14 + 8));
          if ( v15 == 1 )
            goto LABEL_33;
          v151 = sub_420440(v15);
          goto LABEL_34;
        case 5:
          v151 = sub_45CC20(1531);
          if ( v151 )
            goto LABEL_34;
          goto LABEL_33;
        case 6:
        case 8:
          v151 = sub_45CC20(1531);
          goto LABEL_34;
        case 7:
          v151 = sub_4246D0(a2, v14, (char *)v14);
          if ( !v151 )
          {
            v151 = sub_4246D0(a2, v14, v146);
            if ( !v151 )
              goto LABEL_37;
          }
          goto LABEL_34;
        case 9:
LABEL_37:
          *(_QWORD *)(v14 + 8) = sub_4633C0(*(_QWORD *)(v14 + 8), v147);
          goto LABEL_33;
        default:
LABEL_33:
          v151 = 0;
LABEL_34:
          v152 = 6;
          sub_423B70((int)v146);
          result = v151;
          break;
      }
      return result;
    case -77:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 7;
      sub_423420(a1, v146);
      v16 = *a1 + 8 * (3 * a1[1] - 3);
      switch ( sub_420FB0(a2, (char *)v16, (int)v146) )
      {
        case 2:
          if ( !(_DWORD)v147 )
            goto LABEL_45;
          *(int *)(v16 + 8) /= (int)v147;
          goto LABEL_47;
        case 3:
          v18 = sub_45EF70((_WORD *)(v16 + 8), &v147, (_WORD *)(v16 + 8));
          if ( v18 == 1 )
            goto LABEL_47;
          v151 = sub_420440(v18);
          goto LABEL_48;
        case 5:
          v151 = sub_45CC20(1531);
          if ( v151 )
            goto LABEL_48;
          goto LABEL_47;
        case 6:
        case 8:
          v151 = sub_45CC20(1531);
          goto LABEL_48;
        case 7:
          v151 = sub_4246D0(a2, v16, (char *)v16);
          if ( !v151 )
          {
            v151 = sub_4246D0(a2, v16, v146);
            if ( !v151 )
              goto LABEL_51;
          }
          goto LABEL_48;
        case 9:
LABEL_51:
          if ( (_QWORD)v147 )
          {
            *(_DWORD *)(v16 + 8) = sub_462A90(*(_QWORD *)(v16 + 8), v147);
            *(_DWORD *)(v16 + 12) = v17;
LABEL_47:
            v151 = 0;
          }
          else
          {
LABEL_45:
            v151 = sub_45CC20(86);
          }
LABEL_48:
          v152 = 8;
          sub_423B70((int)v146);
          result = v151;
          break;
        default:
          goto LABEL_47;
      }
      return result;
    case -76:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 30;
      sub_423420(a1, v146);
      v38 = *a1 + 8 * (3 * a1[1] - 3);
      v39 = sub_420FB0(a2, (char *)v38, (int)v146) - 2;
      if ( v39 )
      {
        if ( v39 != 7 )
        {
          v21 = sub_45CC20(61);
          v152 = 33;
          goto LABEL_61;
        }
        if ( !(_QWORD)v147 )
        {
          v21 = sub_45CC20(86);
          v152 = 32;
          goto LABEL_61;
        }
        *(_QWORD *)(v38 + 8) = sub_463400(*(_QWORD *)(v38 + 8), v147);
      }
      else
      {
        if ( !(_DWORD)v147 )
        {
          v21 = sub_45CC20(86);
          v152 = 31;
          goto LABEL_61;
        }
        *(int *)(v38 + 8) %= (int)v147;
      }
      v152 = 34;
      sub_423B70((int)v146);
      return v151;
    case -75:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 9;
      sub_423420(a1, v146);
      v19 = *a1 + 8 * (3 * a1[1] - 3);
      v20 = sub_420FB0(a2, (char *)v19, (int)v146) - 2;
      if ( v20 )
      {
        if ( v20 != 7 )
        {
          v21 = sub_45CC20(61);
          v152 = 10;
          goto LABEL_61;
        }
        if ( *(_QWORD *)(v19 + 8) || (_QWORD)v147 )
        {
          v22 = 1;
          *(_DWORD *)(v19 + 12) = 0;
        }
        else
        {
          v148 = 0;
          v22 = 0;
          *(_DWORD *)(v19 + 12) = 0;
        }
      }
      else
      {
        v22 = *(_DWORD *)(v19 + 8) || (_DWORD)v147;
      }
      *(_DWORD *)(v19 + 8) = v22;
      v152 = 11;
      sub_423B70((int)v146);
      return v151;
    case -74:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 12;
      sub_423420(a1, v146);
      v23 = *a1 + 8 * (3 * a1[1] - 3);
      v24 = sub_420FB0(a2, (char *)v23, (int)v146) - 2;
      if ( v24 )
      {
        if ( v24 != 7 )
        {
          v21 = sub_45CC20(61);
          v152 = 13;
          goto LABEL_61;
        }
        if ( *(_QWORD *)(v23 + 8) && (_QWORD)v147 )
        {
          v25 = 1;
          *(_DWORD *)(v23 + 12) = 0;
        }
        else
        {
          v148 = 0;
          v25 = 0;
          *(_DWORD *)(v23 + 12) = 0;
        }
      }
      else
      {
        v25 = *(_DWORD *)(v23 + 8) && (_DWORD)v147;
      }
      *(_DWORD *)(v23 + 8) = v25;
      v152 = 14;
      sub_423B70((int)v146);
      return v151;
    case -73:
      v40 = *a1 + 8 * (3 * a1[1] - 3);
      v41 = sub_4239C0((char *)v40, 0);
      if ( v41 && *v41 == 5 )
      {
        sub_423B70(v40);
        *(_DWORD *)(v40 + 8) = 1;
      }
      if ( *(_BYTE *)v40 == 2 )
      {
        *(_DWORD *)(v40 + 8) = *(_DWORD *)(v40 + 8) == 0;
        return v151;
      }
      if ( *(_BYTE *)v40 != 9 )
        return sub_45CC20(61);
      if ( *(_QWORD *)(v40 + 8) )
      {
        v148 = 0;
        *(_DWORD *)(v40 + 8) = 0;
      }
      else
      {
        *(_DWORD *)(v40 + 8) = 1;
      }
      result = v151;
      *(_DWORD *)(v40 + 12) = 0;
      return result;
    case -72:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 15;
      sub_423420(a1, v146);
      v26 = *a1 + 8 * (3 * a1[1] - 3);
      v27 = sub_420FB0(a2, (char *)v26, (int)v146) - 2;
      if ( v27 )
      {
        if ( v27 != 7 )
        {
          v21 = sub_45CC20(61);
          v152 = 16;
          goto LABEL_61;
        }
        *(_QWORD *)(v26 + 8) |= v147;
      }
      else
      {
        *(_DWORD *)(v26 + 8) |= v147;
      }
      v152 = 17;
      sub_423B70((int)v146);
      return v151;
    case -71:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 18;
      sub_423420(a1, v146);
      v28 = *a1 + 8 * (3 * a1[1] - 3);
      v29 = sub_420FB0(a2, (char *)v28, (int)v146) - 2;
      if ( v29 )
      {
        if ( v29 != 7 )
        {
          v21 = sub_45CC20(61);
          v152 = 19;
          goto LABEL_61;
        }
        *(_QWORD *)(v28 + 8) &= v147;
      }
      else
      {
        *(_DWORD *)(v28 + 8) &= v147;
      }
      v152 = 20;
      sub_423B70((int)v146);
      return v151;
    case -70:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 21;
      sub_423420(a1, v146);
      v30 = *a1 + 8 * (3 * a1[1] - 3);
      v31 = sub_420FB0(a2, (char *)v30, (int)v146) - 2;
      if ( v31 )
      {
        if ( v31 != 7 )
        {
          v21 = sub_45CC20(61);
          v152 = 22;
          goto LABEL_61;
        }
        *(_QWORD *)(v30 + 8) ^= v147;
      }
      else
      {
        *(_DWORD *)(v30 + 8) ^= v147;
      }
      v152 = 23;
      sub_423B70((int)v146);
      return v151;
    case -69:
      v42 = *a1 + 24 * a1[1];
      v43 = *(_BYTE *)(v42 - 24);
      if ( v43 == 2 )
      {
        *(_DWORD *)(v42 - 16) = ~*(_DWORD *)(v42 - 16);
        return v151;
      }
      if ( v43 != 9 )
        return sub_45CC20(61);
      *(_DWORD *)(v42 - 16) = ~*(_DWORD *)(v42 - 16);
      *(_DWORD *)(v42 - 12) = ~*(_DWORD *)(v42 - 12);
      return v151;
    case -68:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 24;
      sub_423420(a1, v146);
      v32 = *a1 + 8 * (3 * a1[1] - 3);
      v33 = sub_420FB0(a2, (char *)v32, (int)v146) - 2;
      if ( v33 )
      {
        if ( v33 != 7 )
        {
          v21 = sub_45CC20(61);
          v152 = 25;
          goto LABEL_61;
        }
        *(_DWORD *)(v32 + 8) = sub_4634E0(*(_QWORD *)(v32 + 8), v147);
        *(_DWORD *)(v32 + 12) = v34;
      }
      else
      {
        *(int *)(v32 + 8) >>= v147;
      }
      v152 = 26;
      sub_423B70((int)v146);
      return v151;
    case -67:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 27;
      sub_423420(a1, v146);
      v35 = *a1 + 8 * (3 * a1[1] - 3);
      v36 = sub_420FB0(a2, (char *)v35, (int)v146) - 2;
      if ( !v36 )
      {
        *(_DWORD *)(v35 + 8) <<= v147;
        goto LABEL_112;
      }
      if ( v36 == 7 )
      {
        *(_DWORD *)(v35 + 8) = sub_4634C0(*(_QWORD *)(v35 + 8), v147);
        *(_DWORD *)(v35 + 12) = v37;
LABEL_112:
        v152 = 29;
        sub_423B70((int)v146);
        return v151;
      }
      v21 = sub_45CC20(61);
      v152 = 28;
LABEL_61:
      sub_423B70((int)v146);
      return v21;
    case -66:
      v44 = *a1 + 24 * a1[1];
      v45 = *(_BYTE *)(v44 - 24);
      switch ( v45 )
      {
        case 3:
          v46 = *(_WORD *)(v44 - 2);
          if ( !v46 )
            return v151;
          *(_WORD *)(v44 - 2) = v46 ^ 0x8000;
          return v151;
        case 2:
          *(_DWORD *)(v44 - 16) = -*(_DWORD *)(v44 - 16);
          return v151;
        case 9:
          v47 = *(_DWORD *)(v44 - 12);
          v56 = *(_DWORD *)(v44 - 16) != 0;
          *(_DWORD *)(v44 - 16) = -*(_DWORD *)(v44 - 16);
          *(_DWORD *)(v44 - 12) = -(v56 + v47);
          return v151;
        default:
          return sub_45CC20(61);
      }
    case -65:
      return sub_424980((char *)(*a1 + 24 * a1[1] - 24));
    case -56:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 35;
      sub_423420(a1, v146);
      v48 = *a1 + 8 * (3 * a1[1] - 3);
      v149 = v48;
      switch ( sub_420FB0(a2, (char *)v48, (int)v146) )
      {
        case 2:
        case 6:
          v64 = *(_DWORD *)(v48 + 8);
          v50 = (_WORD *)(v48 + 8);
          if ( v64 > (int)v147 )
            goto LABEL_181;
          if ( v64 >= (int)v147 )
            goto LABEL_172;
          v60 = -1;
          goto LABEL_182;
        case 3:
          v50 = (_WORD *)(v48 + 8);
          v60 = sub_45EEA0(v50, &v147);
          goto LABEL_182;
        case 5:
          v65 = *(_DWORD *)(v48 + 8);
          v50 = (_WORD *)(v48 + 8);
          v60 = v65 != v147;
          goto LABEL_182;
        case 7:
          v49 = *(_DWORD *)(v48 + 12);
          v50 = (_WORD *)(v48 + 8);
          v51 = v49 != 0 ? v49 - 1 : 0;
          a4 = v51;
          v150 = DWORD1(v147) != 0 ? DWORD1(v147) - 1 : 0;
          v52 = v150;
          v53 = v147;
          if ( v51 < v150 )
            v52 = v51;
          v54 = *(_DWORD *)v50;
          v56 = v52 < 4;
          v55 = v52 - 4;
          if ( v56 )
            goto LABEL_151;
          break;
        case 8:
          v66 = *(_DWORD *)(v48 + 8);
          v50 = (_WORD *)(v48 + 8);
          v63 = v66 < (unsigned int)v147;
          if ( v66 > (unsigned int)v147 )
            goto LABEL_181;
          goto LABEL_170;
        case 9:
          v61 = *(_DWORD *)(v48 + 12);
          v50 = (_WORD *)(v48 + 8);
          v62 = *(_DWORD *)v50;
          if ( v61 < SDWORD1(v147) )
            goto LABEL_171;
          if ( v61 > SDWORD1(v147) || v62 > (unsigned int)v147 )
          {
LABEL_181:
            v60 = 1;
          }
          else
          {
            if ( v61 > SDWORD1(v147) )
              goto LABEL_172;
            if ( v61 < SDWORD1(v147) )
              goto LABEL_171;
            v63 = v62 < (unsigned int)v147;
LABEL_170:
            if ( v63 )
LABEL_171:
              v60 = -1;
            else
LABEL_172:
              v60 = 0;
          }
          goto LABEL_182;
        default:
          v50 = (_WORD *)(v48 + 8);
          goto LABEL_181;
      }
      while ( *(_DWORD *)v54 == *(_DWORD *)v53 )
      {
        v54 += 4;
        v53 += 4;
        v56 = v55 < 4;
        v55 -= 4;
        if ( v56 )
        {
LABEL_151:
          if ( v55 == -4 )
            goto LABEL_160;
          break;
        }
      }
      v56 = *(_BYTE *)v54 < *(_BYTE *)v53;
      if ( *(_BYTE *)v54 != *(_BYTE *)v53
        || v55 != -3
        && ((v57 = *(_BYTE *)(v54 + 1), v56 = v57 < *(_BYTE *)(v53 + 1), v57 != *(_BYTE *)(v53 + 1))
         || v55 != -2
         && ((v58 = *(_BYTE *)(v54 + 2), v56 = v58 < *(_BYTE *)(v53 + 2), v58 != *(_BYTE *)(v53 + 2))
          || v55 != -1 && (v59 = *(_BYTE *)(v54 + 3), v56 = v59 < *(_BYTE *)(v53 + 3), v59 != *(_BYTE *)(v53 + 3)))) )
      {
        v60 = v56 ? -1 : 1;
        goto LABEL_161;
      }
LABEL_160:
      v60 = 0;
LABEL_161:
      if ( !v60 )
      {
        if ( a4 < v150 )
          goto LABEL_171;
        v60 = a4 > v150;
      }
LABEL_182:
      a4 = v60 == 0;
      sub_423B70(v149);
      sub_423B70((int)v146);
      *(_DWORD *)v50 = a4;
      v152 = 36;
      sub_423B70((int)v146);
      return v151;
    case -55:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 37;
      sub_423420(a1, v146);
      v67 = *a1 + 8 * (3 * a1[1] - 3);
      v150 = v67;
      switch ( sub_420FB0(a2, (char *)v67, (int)v146) )
      {
        case 2:
        case 6:
          v83 = *(_DWORD *)(v67 + 8);
          v69 = (_WORD *)(v67 + 8);
          if ( v83 > (int)v147 )
            goto LABEL_219;
          if ( v83 >= (int)v147 )
            goto LABEL_210;
          v79 = -1;
          goto LABEL_220;
        case 3:
          v69 = (_WORD *)(v67 + 8);
          v79 = sub_45EEA0(v69, &v147);
          goto LABEL_220;
        case 5:
          v84 = *(_DWORD *)(v67 + 8);
          v69 = (_WORD *)(v67 + 8);
          v79 = v84 != v147;
          goto LABEL_220;
        case 7:
          v68 = *(_DWORD *)(v67 + 12);
          v69 = (_WORD *)(v67 + 8);
          v70 = v68 != 0 ? v68 - 1 : 0;
          a4 = v70;
          v149 = DWORD1(v147) != 0 ? DWORD1(v147) - 1 : 0;
          v71 = v149;
          v72 = v147;
          if ( v70 < v149 )
            v71 = v70;
          v73 = *(_DWORD *)v69;
          v56 = v71 < 4;
          v74 = v71 - 4;
          if ( v56 )
            goto LABEL_189;
          break;
        case 8:
          v85 = *(_DWORD *)(v67 + 8);
          v69 = (_WORD *)(v67 + 8);
          v82 = v85 < (unsigned int)v147;
          if ( v85 > (unsigned int)v147 )
            goto LABEL_219;
          goto LABEL_208;
        case 9:
          v80 = *(_DWORD *)(v67 + 12);
          v69 = (_WORD *)(v67 + 8);
          v81 = *(_DWORD *)v69;
          if ( v80 < SDWORD1(v147) )
            goto LABEL_209;
          if ( v80 > SDWORD1(v147) || v81 > (unsigned int)v147 )
          {
LABEL_219:
            v79 = 1;
          }
          else
          {
            if ( v80 > SDWORD1(v147) )
              goto LABEL_210;
            if ( v80 < SDWORD1(v147) )
              goto LABEL_209;
            v82 = v81 < (unsigned int)v147;
LABEL_208:
            if ( v82 )
LABEL_209:
              v79 = -1;
            else
LABEL_210:
              v79 = 0;
          }
          goto LABEL_220;
        default:
          v69 = (_WORD *)(v67 + 8);
          goto LABEL_219;
      }
      while ( *(_DWORD *)v73 == *(_DWORD *)v72 )
      {
        v73 += 4;
        v72 += 4;
        v56 = v74 < 4;
        v74 -= 4;
        if ( v56 )
        {
LABEL_189:
          if ( v74 == -4 )
            goto LABEL_198;
          break;
        }
      }
      v75 = *(_BYTE *)v73 < *(_BYTE *)v72;
      if ( *(_BYTE *)v73 != *(_BYTE *)v72
        || v74 != -3
        && ((v76 = *(_BYTE *)(v73 + 1), v75 = v76 < *(_BYTE *)(v72 + 1), v76 != *(_BYTE *)(v72 + 1))
         || v74 != -2
         && ((v77 = *(_BYTE *)(v73 + 2), v75 = v77 < *(_BYTE *)(v72 + 2), v77 != *(_BYTE *)(v72 + 2))
          || v74 != -1 && (v78 = *(_BYTE *)(v73 + 3), v75 = v78 < *(_BYTE *)(v72 + 3), v78 != *(_BYTE *)(v72 + 3)))) )
      {
        v79 = v75 ? -1 : 1;
        goto LABEL_199;
      }
LABEL_198:
      v79 = 0;
LABEL_199:
      if ( !v79 )
      {
        if ( a4 < v149 )
          goto LABEL_209;
        v79 = a4 > v149;
      }
LABEL_220:
      a4 = v79 != 0;
      sub_423B70(v150);
      sub_423B70((int)v146);
      *(_DWORD *)v69 = a4;
      v152 = 38;
      sub_423B70((int)v146);
      return v151;
    case -54:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 39;
      sub_423420(a1, v146);
      v86 = *a1 + 8 * (3 * a1[1] - 3);
      v150 = v86;
      switch ( sub_420FB0(a2, (char *)v86, (int)v146) )
      {
        case 2:
        case 6:
          v102 = *(_DWORD *)(v86 + 8);
          v88 = (_WORD *)(v86 + 8);
          if ( v102 > (int)v147 )
            goto LABEL_257;
          if ( v102 >= (int)v147 )
            goto LABEL_248;
          v98 = -1;
          goto LABEL_258;
        case 3:
          v88 = (_WORD *)(v86 + 8);
          v98 = sub_45EEA0(v88, &v147);
          goto LABEL_258;
        case 5:
          v103 = *(_DWORD *)(v86 + 8);
          v88 = (_WORD *)(v86 + 8);
          v98 = v103 != v147;
          goto LABEL_258;
        case 7:
          v87 = *(_DWORD *)(v86 + 12);
          v88 = (_WORD *)(v86 + 8);
          v89 = v87 != 0 ? v87 - 1 : 0;
          a4 = v89;
          v149 = DWORD1(v147) != 0 ? DWORD1(v147) - 1 : 0;
          v90 = v149;
          v91 = v147;
          if ( v89 < v149 )
            v90 = v89;
          v92 = *(_DWORD *)v88;
          v56 = v90 < 4;
          v93 = v90 - 4;
          if ( v56 )
            goto LABEL_227;
          break;
        case 8:
          v104 = *(_DWORD *)(v86 + 8);
          v88 = (_WORD *)(v86 + 8);
          v101 = v104 < (unsigned int)v147;
          if ( v104 > (unsigned int)v147 )
            goto LABEL_257;
          goto LABEL_246;
        case 9:
          v99 = *(_DWORD *)(v86 + 12);
          v88 = (_WORD *)(v86 + 8);
          v100 = *(_DWORD *)v88;
          if ( v99 < SDWORD1(v147) )
            goto LABEL_247;
          if ( v99 > SDWORD1(v147) || v100 > (unsigned int)v147 )
          {
LABEL_257:
            v98 = 1;
          }
          else
          {
            if ( v99 > SDWORD1(v147) )
              goto LABEL_248;
            if ( v99 < SDWORD1(v147) )
              goto LABEL_247;
            v101 = v100 < (unsigned int)v147;
LABEL_246:
            if ( v101 )
LABEL_247:
              v98 = -1;
            else
LABEL_248:
              v98 = 0;
          }
          goto LABEL_258;
        default:
          v88 = (_WORD *)(v86 + 8);
          goto LABEL_257;
      }
      while ( *(_DWORD *)v92 == *(_DWORD *)v91 )
      {
        v92 += 4;
        v91 += 4;
        v56 = v93 < 4;
        v93 -= 4;
        if ( v56 )
        {
LABEL_227:
          if ( v93 == -4 )
            goto LABEL_236;
          break;
        }
      }
      v94 = *(_BYTE *)v92 < *(_BYTE *)v91;
      if ( *(_BYTE *)v92 != *(_BYTE *)v91
        || v93 != -3
        && ((v95 = *(_BYTE *)(v92 + 1), v94 = v95 < *(_BYTE *)(v91 + 1), v95 != *(_BYTE *)(v91 + 1))
         || v93 != -2
         && ((v96 = *(_BYTE *)(v92 + 2), v94 = v96 < *(_BYTE *)(v91 + 2), v96 != *(_BYTE *)(v91 + 2))
          || v93 != -1 && (v97 = *(_BYTE *)(v92 + 3), v94 = v97 < *(_BYTE *)(v91 + 3), v97 != *(_BYTE *)(v91 + 3)))) )
      {
        v98 = v94 ? -1 : 1;
        goto LABEL_237;
      }
LABEL_236:
      v98 = 0;
LABEL_237:
      if ( !v98 )
      {
        if ( a4 < v149 )
          goto LABEL_247;
        v98 = a4 > v149;
      }
LABEL_258:
      a4 = v98 <= 0;
      sub_423B70(v150);
      sub_423B70((int)v146);
      *(_DWORD *)v88 = a4;
      v152 = 40;
      sub_423B70((int)v146);
      return v151;
    case -53:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 41;
      sub_423420(a1, v146);
      v105 = *a1 + 8 * (3 * a1[1] - 3);
      HIDWORD(v148) = v105;
      switch ( sub_420FB0(a2, (char *)v105, (int)v146) )
      {
        case 2:
        case 6:
          v122 = *(_DWORD *)(v105 + 8);
          v107 = (_WORD *)(v105 + 8);
          if ( v122 > (int)v147 )
            goto LABEL_297;
          if ( v122 >= (int)v147 )
            goto LABEL_288;
          v118 = -1;
          goto LABEL_298;
        case 3:
          v107 = (_WORD *)(v105 + 8);
          v118 = sub_45EEA0(v107, &v147);
          goto LABEL_298;
        case 5:
          v123 = *(_DWORD *)(v105 + 8);
          v107 = (_WORD *)(v105 + 8);
          v118 = v123 != v147;
          goto LABEL_298;
        case 7:
          v106 = *(_DWORD *)(v105 + 12);
          v107 = (_WORD *)(v105 + 8);
          v108 = v106 != 0 ? v106 - 1 : 0;
          v149 = v108;
          v150 = DWORD1(v147) != 0 ? DWORD1(v147) - 1 : 0;
          v109 = v150;
          v110 = v147;
          if ( v108 < v150 )
            v109 = v108;
          v111 = *(_DWORD *)v107;
          v56 = v109 < 4;
          v112 = v109 - 4;
          if ( v56 )
            goto LABEL_265;
          break;
        case 8:
          v124 = *(_DWORD *)(v105 + 8);
          v107 = (_WORD *)(v105 + 8);
          v121 = v124 < (unsigned int)v147;
          if ( v124 > (unsigned int)v147 )
            goto LABEL_297;
          goto LABEL_286;
        case 9:
          v119 = *(_DWORD *)(v105 + 12);
          v107 = (_WORD *)(v105 + 8);
          v120 = *(_DWORD *)v107;
          if ( v119 < SDWORD1(v147) )
            goto LABEL_287;
          if ( v119 > SDWORD1(v147) || v120 > (unsigned int)v147 )
          {
LABEL_297:
            v118 = 1;
          }
          else
          {
            if ( v119 > SDWORD1(v147) )
              goto LABEL_288;
            if ( v119 < SDWORD1(v147) )
              goto LABEL_287;
            v121 = v120 < (unsigned int)v147;
LABEL_286:
            if ( v121 )
LABEL_287:
              v118 = -1;
            else
LABEL_288:
              v118 = 0;
          }
          goto LABEL_298;
        default:
          v107 = (_WORD *)(v105 + 8);
          goto LABEL_297;
      }
      while ( *(_DWORD *)v111 == *(_DWORD *)v110 )
      {
        v111 += 4;
        v110 += 4;
        v56 = v112 < 4;
        v112 -= 4;
        if ( v56 )
        {
LABEL_265:
          if ( v112 == -4 )
            goto LABEL_274;
          break;
        }
      }
      v113 = *(_BYTE *)v111 < *(_BYTE *)v110;
      if ( *(_BYTE *)v111 != *(_BYTE *)v110
        || v112 != -3
        && ((v114 = *(_BYTE *)(v111 + 1), v113 = v114 < *(_BYTE *)(v110 + 1), v114 != *(_BYTE *)(v110 + 1))
         || v112 != -2
         && ((v115 = *(_BYTE *)(v111 + 2), v113 = v115 < *(_BYTE *)(v110 + 2), v115 != *(_BYTE *)(v110 + 2))
          || v112 != -1
          && (v116 = *(_BYTE *)(v111 + 3), v113 = v116 < *(_BYTE *)(v110 + 3), v116 != *(_BYTE *)(v110 + 3)))) )
      {
        v117 = v113 ? -1 : 1;
        goto LABEL_275;
      }
LABEL_274:
      v117 = 0;
LABEL_275:
      a4 = v117;
      if ( v117 )
        goto LABEL_279;
      if ( v149 >= v150 )
      {
        a4 = v149 > v150;
LABEL_279:
        v118 = a4;
      }
      else
      {
        a4 = -1;
        v118 = -1;
      }
LABEL_298:
      a4 = v118 >= 0;
      sub_423B70(SHIDWORD(v148));
      sub_423B70((int)v146);
      *(_DWORD *)v107 = a4;
      v152 = 42;
      sub_423B70((int)v146);
      return v151;
    case -52:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 43;
      sub_423420(a1, v146);
      v125 = *a1 + 8 * (3 * a1[1] - 3);
      v126 = (unsigned int)sub_41D180(v125, (int)v146) >> 31;
      sub_423B70(v125);
      sub_423B70((int)v146);
      *(_DWORD *)(v125 + 8) = v126;
      v152 = 44;
      sub_423B70((int)v146);
      return v151;
    case -51:
      v146[0] = 2;
      v147 = 0;
      LODWORD(v147) = 0;
      v152 = 45;
      sub_423420(a1, v146);
      v127 = *a1 + 8 * (3 * a1[1] - 3);
      v149 = v127;
      switch ( sub_420FB0(a2, (char *)v127, (int)v146) )
      {
        case 2:
        case 6:
          v143 = *(_DWORD *)(v127 + 8);
          v129 = (_WORD *)(v127 + 8);
          if ( v143 > (int)v147 )
            goto LABEL_336;
          if ( v143 >= (int)v147 )
            goto LABEL_327;
          v139 = -1;
          goto LABEL_337;
        case 3:
          v129 = (_WORD *)(v127 + 8);
          v139 = sub_45EEA0(v129, &v147);
          goto LABEL_337;
        case 5:
          v144 = *(_DWORD *)(v127 + 8);
          v129 = (_WORD *)(v127 + 8);
          v139 = v144 != v147;
          goto LABEL_337;
        case 7:
          v128 = *(_DWORD *)(v127 + 12);
          v129 = (_WORD *)(v127 + 8);
          v130 = v128 != 0 ? v128 - 1 : 0;
          a4 = v130;
          HIDWORD(v148) = DWORD1(v147) != 0 ? DWORD1(v147) - 1 : 0;
          v131 = HIDWORD(v148);
          v132 = v147;
          if ( v130 < HIDWORD(v148) )
            v131 = v130;
          v133 = *(_DWORD *)v129;
          v56 = v131 < 4;
          v134 = v131 - 4;
          if ( v56 )
            goto LABEL_306;
          break;
        case 8:
          v145 = *(_DWORD *)(v127 + 8);
          v129 = (_WORD *)(v127 + 8);
          v142 = v145 < (unsigned int)v147;
          if ( v145 > (unsigned int)v147 )
            goto LABEL_336;
          goto LABEL_325;
        case 9:
          v140 = *(_DWORD *)(v127 + 12);
          v129 = (_WORD *)(v127 + 8);
          v141 = *(_DWORD *)v129;
          if ( v140 < SDWORD1(v147) )
            goto LABEL_326;
          if ( v140 > SDWORD1(v147) || v141 > (unsigned int)v147 )
          {
LABEL_336:
            v139 = 1;
          }
          else
          {
            if ( v140 > SDWORD1(v147) )
              goto LABEL_327;
            if ( v140 < SDWORD1(v147) )
              goto LABEL_326;
            v142 = v141 < (unsigned int)v147;
LABEL_325:
            if ( v142 )
LABEL_326:
              v139 = -1;
            else
LABEL_327:
              v139 = 0;
          }
          goto LABEL_337;
        default:
          v129 = (_WORD *)(v127 + 8);
          goto LABEL_336;
      }
      while ( *(_DWORD *)v133 == *(_DWORD *)v132 )
      {
        v133 += 4;
        v132 += 4;
        v56 = v134 < 4;
        v134 -= 4;
        if ( v56 )
        {
LABEL_306:
          if ( v134 == -4 )
            goto LABEL_315;
          break;
        }
      }
      v135 = *(_BYTE *)v133 < *(_BYTE *)v132;
      if ( *(_BYTE *)v133 != *(_BYTE *)v132
        || v134 != -3
        && ((v136 = *(_BYTE *)(v133 + 1), v135 = v136 < *(_BYTE *)(v132 + 1), v136 != *(_BYTE *)(v132 + 1))
         || v134 != -2
         && ((v137 = *(_BYTE *)(v133 + 2), v135 = v137 < *(_BYTE *)(v132 + 2), v137 != *(_BYTE *)(v132 + 2))
          || v134 != -1
          && (v138 = *(_BYTE *)(v133 + 3), v135 = v138 < *(_BYTE *)(v132 + 3), v138 != *(_BYTE *)(v132 + 3)))) )
      {
        v139 = v135 ? -1 : 1;
        goto LABEL_316;
      }
LABEL_315:
      v139 = 0;
LABEL_316:
      if ( !v139 )
      {
        if ( a4 < HIDWORD(v148) )
          goto LABEL_326;
        v139 = a4 > HIDWORD(v148);
      }
LABEL_337:
      a4 = v139 > 0;
      sub_423B70(v149);
      sub_423B70((int)v146);
      *(_DWORD *)v129 = a4;
      v152 = 46;
      sub_423B70((int)v146);
      return v151;
    case -50:
      return sub_4247F0(a2, (char *)(*a1 + 24 * a1[1] - 24));
    case -48:
      return sub_4245A0((char *)(*a1 + 24 * a1[1] - 24));
    case -47:
      return sub_4246D0(a2, a3, (char *)(*a1 + 24 * a1[1] - 24));
    default:
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(1448);
  }
}
// 421607: variable 'v17' is possibly undefined
// 421A48: variable 'v34' is possibly undefined
// 421AE8: variable 'v37' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
