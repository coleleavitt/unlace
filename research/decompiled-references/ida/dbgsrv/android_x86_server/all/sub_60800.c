/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60800
// Address: 0x00060800

//----- (00060800) --------------------------------------------------------
int __cdecl sub_60800(int *a1, char a2)
{
  char *v2; // eax
  int v3; // edi
  int v4; // esi
  size_t v5; // edx
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // edi
  _BYTE *v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  char *v19; // edi
  char *v20; // eax
  char *v22; // eax
  int v23; // eax
  int v24; // eax
  char *v25; // eax
  int v26; // eax
  int v27; // eax
  char *v28; // eax
  int v29; // eax
  int v30; // eax
  char *v31; // eax
  int v32; // eax
  int v33; // eax
  char *v34; // eax
  int v35; // eax
  int v36; // eax
  char *v37; // eax
  int v38; // eax
  int v39; // eax
  char *v40; // eax
  int v41; // eax
  int v42; // eax
  char *v43; // eax
  int v44; // eax
  int v45; // eax
  char *v46; // eax
  int v47; // eax
  int v48; // eax
  char *v49; // eax
  int v50; // eax
  int v51; // eax
  char *v52; // eax
  int v53; // eax
  int v54; // eax
  char *v55; // eax
  int v56; // eax
  int v57; // eax
  char *v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  char v63; // dl
  int v64; // eax
  char v65; // dl
  __int16 v66; // dx
  char *v67; // eax
  int v68; // eax
  int v69; // eax
  char *v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // edi
  int v74; // eax
  int v75; // esi
  int v76; // eax
  int v77; // eax
  char v78; // cl
  int v79; // eax
  int v80; // esi
  int v81; // eax
  __int64 v82; // rax
  int v83; // eax
  int v84; // esi
  int v85; // eax
  int v86; // eax
  int v87; // esi
  int v88; // eax
  int v89; // eax
  int v90; // esi
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // esi
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // esi
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // esi
  int v103; // eax
  int v104; // ebx
  int v105; // eax
  int v106; // eax
  int v107; // edi
  char *v108; // esi
  int v109; // eax
  int v110; // eax
  int v111; // edi
  char *v112; // esi
  int v113; // eax
  int v114; // eax
  int v115; // esi
  char *v116; // edi
  unsigned int v117; // edi
  int v118; // eax
  int v119; // esi
  char *v120; // edi
  int v121; // eax
  int v122; // esi
  char *v123; // edi
  int v124; // eax
  int v125; // edi
  char *v126; // esi
  int v127; // eax
  int v128; // edi
  int v129; // eax
  int v130; // esi
  char *v131; // edi
  char v132; // si
  char v133; // si
  int v134; // eax
  int v135; // ecx
  int v136; // eax
  int v137; // ecx
  int v138; // ecx
  int v139; // eax
  int v140; // ecx
  int v141; // esi
  __int64 v142; // rax
  int v143; // eax
  int v144; // eax
  _DWORD *v145; // esi
  int v146; // ebx
  _DWORD *v147; // edi
  _DWORD *v148; // ecx
  _DWORD *v149; // eax
  int v150; // edi
  bool v151; // zf
  int v152; // [esp+24h] [ebp-58h]
  int v153; // [esp+24h] [ebp-58h]
  int v154; // [esp+24h] [ebp-58h]
  int v155; // [esp+24h] [ebp-58h]
  int v156; // [esp+24h] [ebp-58h]
  int v157; // [esp+24h] [ebp-58h]
  int v158; // [esp+24h] [ebp-58h]
  int v159; // [esp+24h] [ebp-58h]
  int v160; // [esp+24h] [ebp-58h]
  int v161; // [esp+24h] [ebp-58h]
  int v162; // [esp+24h] [ebp-58h]
  _DWORD *v163; // [esp+24h] [ebp-58h]
  bool v164; // [esp+28h] [ebp-54h]
  int v165; // [esp+28h] [ebp-54h]
  bool v166; // [esp+28h] [ebp-54h]
  bool v167; // [esp+28h] [ebp-54h]
  int v168; // [esp+28h] [ebp-54h]
  bool v169; // [esp+28h] [ebp-54h]
  int v170; // [esp+2Ch] [ebp-50h]
  int v171; // [esp+30h] [ebp-4Ch] BYREF
  int v172; // [esp+38h] [ebp-44h] BYREF
  __int64 v173; // [esp+3Ch] [ebp-40h] BYREF
  int v174; // [esp+44h] [ebp-38h]
  int v175; // [esp+48h] [ebp-34h]
  int v176; // [esp+50h] [ebp-2Ch] BYREF
  __int64 v177; // [esp+54h] [ebp-28h] BYREF
  int v178; // [esp+5Ch] [ebp-20h]
  int v179; // [esp+60h] [ebp-1Ch]
  unsigned int v180; // [esp+68h] [ebp-14h]

  v180 = __readgsdword(0x14u);
  switch ( a2 )
  {
    case -80:
      LOBYTE(v176) = 2;
      v177 = 0;
      v179 = 0;
      v178 = 0;
      sub_63A30(a1, (char *)&v176);
      v2 = deref_idcv((char *)(*a1 + 20 * a1[1] - 20), 2);
      v3 = (int)v2;
      if ( *v2 == 7 )
      {
        v4 = idcv_string((int)&v176);
        if ( !v4 )
        {
          v4 = 0;
          if ( HIDWORD(v177) )
          {
            v5 = HIDWORD(v177) - 1;
            if ( HIDWORD(v177) != 1 )
            {
              v152 = v3 + 4;
              v6 = *(_DWORD *)(v3 + 8);
              v7 = v6 - 1;
              if ( !v6 )
                v7 = 0;
              v8 = v7 + HIDWORD(v177);
              if ( *(_DWORD *)(v3 + 12) >= (unsigned int)(v7 + HIDWORD(v177)) )
              {
                v10 = *(_BYTE **)v152;
              }
              else
              {
                v170 = HIDWORD(v177) - 1;
                v9 = v7 + HIDWORD(v177);
                v10 = qvector_reserve(v152, *(void **)v152, v7 + HIDWORD(v177), 1u);
                *(_DWORD *)v152 = v10;
                v5 = v170;
                v8 = v9;
              }
              *(_DWORD *)(v152 + 4) = v8;
              v10[v7 + v5] = 0;
              memcpy((void *)(*(_DWORD *)v152 + v7), (const void *)v177, v5);
            }
          }
        }
      }
      else
      {
        v4 = 0;
        switch ( sub_63B60(v2, (int)&v176) )
        {
          case 2:
            *(_DWORD *)(v3 + 4) += v177;
            break;
          case 3:
            v143 = eadd((_WORD *)(v3 + 4), &v177, (_WORD *)(v3 + 4), 0);
            switch ( v143 )
            {
              case 2:
                v144 = 97;
                break;
              case 5:
                v144 = 98;
                break;
              case 4:
                v144 = 86;
                break;
              default:
                goto LABEL_435;
            }
            set_qerrno(v144);
            break;
          case 5:
            if ( *(_BYTE *)v3 == 5 )
            {
              v145 = operator new(0x14u);
              sub_5BE40(v145, *(_DWORD **)(v3 + 4));
              free_idcv((char *)v3);
              v146 = (int)v145;
              v4 = 0;
              *(_BYTE *)v3 = 5;
              *(_DWORD *)(v3 + 4) = v146;
            }
            else
            {
              v146 = *(_DWORD *)(v3 + 4);
            }
            v147 = *(_DWORD **)v177;
            v163 = (_DWORD *)(v177 + 4);
            if ( (_DWORD)v177 + 4 != *(_DWORD *)v177 )
            {
              do
              {
                v172 = v146 + 4;
                sub_681E0(&v171, v146, (_DWORD *)(v146 + 4), (int)(v147 + 4), (int)(v147 + 4));
                v148 = (_DWORD *)v147[1];
                if ( v148 )
                {
                  do
                  {
                    v149 = v148;
                    v148 = (_DWORD *)*v148;
                  }
                  while ( v148 );
                }
                else
                {
                  v149 = (_DWORD *)v147[2];
                  if ( (_DWORD *)*v149 != v147 )
                  {
                    v150 = (int)(v147 + 2);
                    do
                    {
                      v149 = *(_DWORD **)(*(_DWORD *)v150 + 8);
                      v151 = *v149 == *(_DWORD *)v150;
                      v150 = *(_DWORD *)v150 + 8;
                    }
                    while ( !v151 );
                  }
                }
                v147 = v149;
              }
              while ( v163 != v149 );
              v4 = 0;
            }
            break;
          case 6:
          case 8:
            set_qerrno(1531);
            break;
          case 7:
            if ( !idcv_int64(v3) && !idcv_int64((int)&v176) )
              goto LABEL_391;
            break;
          case 9:
LABEL_391:
            *(_QWORD *)(v3 + 4) += v177;
            break;
          default:
            break;
        }
      }
LABEL_435:
      if ( (char)v176 == 5 )
      {
        sub_59680((void *)v177, (char *)&v176);
      }
      else if ( (char)v176 == 7 )
      {
        if ( (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
      }
      return v4;
    case -79:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v40 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v40);
        v41 = a1[1];
        if ( v41 )
        {
          v42 = v41 - 1;
          a1[1] = v42;
          free_idcv((char *)(*a1 + 20 * v42));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v106 = a1[1] - 1;
      v107 = 5 * v106;
      v154 = *a1;
      v108 = (char *)(*a1 + 20 * v106);
      switch ( sub_63B60(v108, (int)&v172) )
      {
        case 2:
          *(_DWORD *)(v154 + 4 * v107 + 4) -= v173;
          break;
        case 3:
          v4 = 0;
          v134 = eadd((_WORD *)(v154 + 4 * v107 + 4), &v173, (_WORD *)(v154 + 4 * v107 + 4), 1) - 1;
          v135 = 97;
          switch ( v134 )
          {
            case 0:
              goto LABEL_370;
            case 1:
              goto LABEL_409;
            case 3:
              v135 = 86;
              goto LABEL_409;
            case 4:
              v135 = 98;
LABEL_409:
              v109 = set_qerrno(v135);
              goto LABEL_410;
            default:
              goto LABEL_411;
          }
        case 5:
          v4 = sub_686C0((int)v108, (int)&v172);
          if ( !v4 )
            break;
          goto LABEL_411;
        case 6:
        case 8:
          v109 = set_qerrno(1531);
LABEL_410:
          v4 = v109;
          goto LABEL_411;
        case 7:
          v4 = idcv_int64((int)v108);
          if ( !v4 )
          {
            v4 = idcv_int64((int)&v172);
            if ( !v4 )
              goto LABEL_365;
          }
          goto LABEL_411;
        case 9:
LABEL_365:
          *(_QWORD *)(v154 + 4 * v107 + 4) -= v173;
          break;
        default:
          break;
      }
LABEL_370:
      v4 = 0;
LABEL_411:
      if ( (char)v172 == 5 )
        goto LABEL_431;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_430;
      return v4;
    case -78:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v43 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v43);
        v44 = a1[1];
        if ( v44 )
        {
          v45 = v44 - 1;
          a1[1] = v45;
          free_idcv((char *)(*a1 + 20 * v45));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v110 = a1[1] - 1;
      v111 = 5 * v110;
      v155 = *a1;
      v112 = (char *)(*a1 + 20 * v110);
      switch ( sub_63B60(v112, (int)&v172) )
      {
        case 2:
          *(_DWORD *)(v155 + 4 * v111 + 4) *= (_DWORD)v173;
          break;
        case 3:
          v4 = 0;
          v136 = emul((_WORD *)(v155 + 4 * v111 + 4), (__int16 *)&v173, v155 + 4 * v111 + 4) - 1;
          v137 = 97;
          switch ( v136 )
          {
            case 0:
              goto LABEL_372;
            case 1:
              goto LABEL_417;
            case 3:
              v137 = 86;
              goto LABEL_417;
            case 4:
              v137 = 98;
LABEL_417:
              v113 = set_qerrno(v137);
              goto LABEL_418;
            default:
              goto LABEL_419;
          }
        case 5:
          v4 = set_qerrno(1531);
          if ( !v4 )
            break;
          goto LABEL_419;
        case 6:
        case 8:
          v113 = set_qerrno(1531);
LABEL_418:
          v4 = v113;
          goto LABEL_419;
        case 7:
          v4 = idcv_int64((int)v112);
          if ( !v4 )
          {
            v4 = idcv_int64((int)&v172);
            if ( !v4 )
              goto LABEL_368;
          }
          goto LABEL_419;
        case 9:
LABEL_368:
          v138 = (unsigned __int64)(*(_QWORD *)(v155 + 4 * v111 + 4) * v173) >> 32;
          *(_DWORD *)(v155 + 4 * v111 + 4) *= (_DWORD)v173;
          *(_DWORD *)(v155 + 4 * v111 + 8) = v138;
          break;
        default:
          break;
      }
LABEL_372:
      v4 = 0;
LABEL_419:
      if ( (char)v172 == 5 )
      {
LABEL_431:
        sub_59680((void *)v173, (char *)&v172);
      }
      else if ( (char)v172 == 7 && (_DWORD)v173 )
      {
LABEL_430:
        HIDWORD(v173) = 0;
        qfree((void *)v173);
        LODWORD(v173) = 0;
        v174 = 0;
      }
      return v4;
    case -77:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v58 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v58);
        v59 = a1[1];
        if ( v59 )
        {
          v60 = v59 - 1;
          a1[1] = v60;
          free_idcv((char *)(*a1 + 20 * v60));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v124 = a1[1] - 1;
      v125 = 5 * v124;
      v160 = *a1;
      v126 = (char *)(*a1 + 20 * v124);
      switch ( sub_63B60(v126, (int)&v172) )
      {
        case 2:
          if ( !(_DWORD)v173 )
            goto LABEL_394;
          v141 = v160;
          LODWORD(v142) = *(_DWORD *)(v160 + 4 * v125 + 4) / (int)v173;
          goto LABEL_381;
        case 3:
          v4 = 0;
          v139 = ediv((__int16 *)(v160 + 4 * v125 + 4), &v173, v160 + 4 * v125 + 4) - 1;
          v140 = 97;
          switch ( v139 )
          {
            case 0:
              goto LABEL_383;
            case 1:
              goto LABEL_425;
            case 3:
              v140 = 86;
              goto LABEL_425;
            case 4:
              v140 = 98;
LABEL_425:
              v127 = set_qerrno(v140);
              goto LABEL_426;
            default:
              goto LABEL_427;
          }
        case 5:
          v4 = set_qerrno(1531);
          if ( !v4 )
            goto LABEL_383;
          goto LABEL_427;
        case 6:
        case 8:
          v127 = set_qerrno(1531);
          goto LABEL_426;
        case 7:
          v4 = idcv_int64((int)v126);
          if ( !v4 )
          {
            v4 = idcv_int64((int)&v172);
            if ( !v4 )
              goto LABEL_379;
          }
          goto LABEL_427;
        case 9:
LABEL_379:
          if ( v173 )
          {
            v141 = v160;
            v142 = *(_QWORD *)(v160 + 4 * v125 + 4) / v173;
            *(_DWORD *)(v160 + 4 * v125 + 8) = HIDWORD(v142);
LABEL_381:
            *(_DWORD *)(v141 + 4 * v125 + 4) = v142;
LABEL_383:
            v4 = 0;
          }
          else
          {
LABEL_394:
            v127 = set_qerrno(86);
LABEL_426:
            v4 = v127;
          }
LABEL_427:
          if ( (char)v172 == 5 )
            goto LABEL_431;
          if ( (char)v172 == 7 && (_DWORD)v173 )
            goto LABEL_430;
          return v4;
        default:
          goto LABEL_383;
      }
    case -76:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v34 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v34);
        v35 = a1[1];
        if ( v35 )
        {
          v36 = v35 - 1;
          a1[1] = v36;
          free_idcv((char *)(*a1 + 20 * v36));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v73 = *a1;
      v97 = a1[1] - 1;
      v98 = 5 * v97;
      v99 = sub_63B60((char *)(*a1 + 20 * v97), (int)&v172);
      if ( v99 == 2 )
      {
        if ( (_DWORD)v173 )
        {
          *(int *)(v73 + 4 * v98 + 4) %= (int)v173;
          goto LABEL_244;
        }
      }
      else
      {
        if ( v99 != 9 )
        {
          v100 = set_qerrno(61);
          goto LABEL_348;
        }
        if ( v173 )
        {
          *(__int64 *)(v73 + 4 * v98 + 4) %= v173;
LABEL_244:
          v78 = 1;
          goto LABEL_349;
        }
      }
      v100 = set_qerrno(86);
LABEL_348:
      v73 = v100;
      v78 = 0;
LABEL_349:
      if ( (char)v172 == 5 )
        goto LABEL_356;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_352;
      goto LABEL_353;
    case -75:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v22 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v22);
        v23 = a1[1];
        if ( v23 )
        {
          v24 = v23 - 1;
          a1[1] = v24;
          free_idcv((char *)(*a1 + 20 * v24));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v73 = *a1;
      v83 = a1[1] - 1;
      v84 = 5 * v83;
      v85 = sub_63B60((char *)(*a1 + 20 * v83), (int)&v172);
      if ( v85 == 2 )
      {
        *(_DWORD *)(v73 + 4 * v84 + 4) = (*(_DWORD *)(v73 + 4 * v84 + 4) | (unsigned int)v173) != 0;
        goto LABEL_190;
      }
      if ( v85 == 9 )
      {
        *(_DWORD *)(v73 + 4 * v84 + 4) = (*(_QWORD *)(v73 + 4 * v84 + 4) | v173) != 0;
        *(_DWORD *)(v73 + 4 * v84 + 8) = 0;
LABEL_190:
        v78 = 1;
        goto LABEL_192;
      }
      v73 = set_qerrno(61);
      v78 = 0;
LABEL_192:
      if ( (char)v172 == 5 )
        goto LABEL_356;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_352;
      goto LABEL_353;
    case -74:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v25 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v25);
        v26 = a1[1];
        if ( v26 )
        {
          v27 = v26 - 1;
          a1[1] = v27;
          free_idcv((char *)(*a1 + 20 * v27));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v73 = *a1;
      v86 = a1[1] - 1;
      v87 = 5 * v86;
      v88 = sub_63B60((char *)(*a1 + 20 * v86), (int)&v172);
      if ( v88 == 2 )
      {
        *(_DWORD *)(v73 + 4 * v87 + 4) = *(_DWORD *)(v73 + 4 * v87 + 4) != 0 && (_DWORD)v173 != 0;
        goto LABEL_203;
      }
      if ( v88 == 9 )
      {
        *(_DWORD *)(v73 + 4 * v87 + 4) = *(_QWORD *)(v73 + 4 * v87 + 4) != 0 && v173 != 0;
        *(_DWORD *)(v73 + 4 * v87 + 8) = 0;
LABEL_203:
        v78 = 1;
        goto LABEL_205;
      }
      v73 = set_qerrno(61);
      v78 = 0;
LABEL_205:
      if ( (char)v172 == 5 )
        goto LABEL_356;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_352;
      goto LABEL_353;
    case -73:
      v17 = a1[1] - 1;
      v18 = 5 * v17;
      v153 = *a1;
      v19 = (char *)(*a1 + 20 * v17);
      v20 = deref_idcv(v19, 0);
      if ( v20 && *v20 == 5 )
      {
        free_idcv(v19);
        *(_DWORD *)(v153 + 4 * v18 + 4) = 1;
      }
      if ( *v19 == 9 )
      {
        *(_DWORD *)(v153 + 4 * v18 + 4) = *(_QWORD *)(v153 + 4 * v18 + 4) == 0;
        *(_DWORD *)(v153 + 4 * v18 + 8) = 0;
        return 0;
      }
      if ( *v19 == 2 )
      {
        *(_DWORD *)(v153 + 4 * v18 + 4) = *(_DWORD *)(v153 + 4 * v18 + 4) == 0;
        return 0;
      }
      return set_qerrno(61);
    case -72:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v31 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v31);
        v32 = a1[1];
        if ( v32 )
        {
          v33 = v32 - 1;
          a1[1] = v33;
          free_idcv((char *)(*a1 + 20 * v33));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v73 = *a1;
      v93 = a1[1] - 1;
      v94 = 5 * v93;
      v95 = sub_63B60((char *)(*a1 + 20 * v93), (int)&v172);
      if ( v95 == 2 )
      {
        v96 = v173;
        goto LABEL_229;
      }
      if ( v95 == 9 )
      {
        v96 = v173;
        *(_DWORD *)(v73 + 4 * v94 + 8) |= HIDWORD(v173);
LABEL_229:
        *(_DWORD *)(v73 + 4 * v94 + 4) |= v96;
        v78 = 1;
        goto LABEL_231;
      }
      v73 = set_qerrno(61);
      v78 = 0;
LABEL_231:
      if ( (char)v172 == 5 )
        goto LABEL_356;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_352;
      goto LABEL_353;
    case -71:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v11 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v11);
        v12 = a1[1];
        if ( v12 )
        {
          v13 = v12 - 1;
          a1[1] = v13;
          free_idcv((char *)(*a1 + 20 * v13));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v73 = *a1;
      v74 = a1[1] - 1;
      v75 = 5 * v74;
      v76 = sub_63B60((char *)(*a1 + 20 * v74), (int)&v172);
      if ( v76 == 2 )
      {
        v77 = v173;
        goto LABEL_162;
      }
      if ( v76 == 9 )
      {
        v77 = v173;
        *(_DWORD *)(v73 + 4 * v75 + 8) &= HIDWORD(v173);
LABEL_162:
        *(_DWORD *)(v73 + 4 * v75 + 4) &= v77;
        v78 = 1;
        goto LABEL_164;
      }
      v73 = set_qerrno(61);
      v78 = 0;
LABEL_164:
      if ( (char)v172 == 5 )
        goto LABEL_356;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_352;
      goto LABEL_353;
    case -70:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v28 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v28);
        v29 = a1[1];
        if ( v29 )
        {
          v30 = v29 - 1;
          a1[1] = v30;
          free_idcv((char *)(*a1 + 20 * v30));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v73 = *a1;
      v89 = a1[1] - 1;
      v90 = 5 * v89;
      v91 = sub_63B60((char *)(*a1 + 20 * v89), (int)&v172);
      if ( v91 == 2 )
      {
        v92 = v173;
        goto LABEL_216;
      }
      if ( v91 == 9 )
      {
        v92 = v173;
        *(_DWORD *)(v73 + 4 * v90 + 8) ^= HIDWORD(v173);
LABEL_216:
        *(_DWORD *)(v73 + 4 * v90 + 4) ^= v92;
        v78 = 1;
        goto LABEL_218;
      }
      v73 = set_qerrno(61);
      v78 = 0;
LABEL_218:
      if ( (char)v172 == 5 )
        goto LABEL_356;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_352;
      goto LABEL_353;
    case -69:
      v61 = *a1;
      v62 = 5 * (a1[1] - 1);
      v63 = *(_BYTE *)(*a1 + 20 * (a1[1] - 1));
      if ( v63 == 9 )
      {
        *(_DWORD *)(v61 + 20 * (a1[1] - 1) + 8) = ~*(_DWORD *)(v61 + 20 * (a1[1] - 1) + 8);
        *(_DWORD *)(v61 + 4 * v62 + 4) = ~*(_DWORD *)(v61 + 4 * v62 + 4);
      }
      else
      {
        if ( v63 != 2 )
          return set_qerrno(61);
        *(_DWORD *)(v61 + 20 * (a1[1] - 1) + 4) = ~*(_DWORD *)(v61 + 20 * (a1[1] - 1) + 4);
      }
      return 0;
    case -68:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v14 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v14);
        v15 = a1[1];
        if ( v15 )
        {
          v16 = v15 - 1;
          a1[1] = v16;
          free_idcv((char *)(*a1 + 20 * v16));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v73 = *a1;
      v79 = a1[1] - 1;
      v80 = 5 * v79;
      v81 = sub_63B60((char *)(*a1 + 20 * v79), (int)&v172);
      if ( v81 == 2 )
      {
        *(int *)(v73 + 4 * v80 + 4) >>= v173;
LABEL_177:
        v78 = 1;
        goto LABEL_179;
      }
      if ( v81 == 9 )
      {
        v82 = *(__int64 *)(v73 + 4 * v80 + 4) >> (v173 & 0x1F);
        if ( (v173 & 0x20) != 0 )
        {
          LODWORD(v82) = (unsigned __int64)(*(__int64 *)(v73 + 4 * v80 + 4) >> (v173 & 0x1F)) >> 32;
          HIDWORD(v82) = *(int *)(v73 + 4 * v80 + 8) >> 31;
        }
        *(_QWORD *)(v73 + 4 * v80 + 4) = v82;
        goto LABEL_177;
      }
      v73 = set_qerrno(61);
      v78 = 0;
LABEL_179:
      if ( (char)v172 == 5 )
        goto LABEL_356;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_352;
      goto LABEL_353;
    case -67:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v37 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v37);
        v38 = a1[1];
        if ( v38 )
        {
          v39 = v38 - 1;
          a1[1] = v39;
          free_idcv((char *)(*a1 + 20 * v39));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v73 = *a1;
      v101 = a1[1] - 1;
      v102 = 5 * v101;
      v103 = sub_63B60((char *)(*a1 + 20 * v101), (int)&v172);
      if ( v103 == 2 )
      {
        *(_DWORD *)(v73 + 4 * v102 + 4) <<= v173;
LABEL_255:
        v78 = 1;
        goto LABEL_257;
      }
      if ( v103 == 9 )
      {
        v104 = *(_QWORD *)(v73 + 4 * v102 + 4) << v173 >> 32;
        v105 = 0;
        if ( (v173 & 0x20) != 0 )
          v104 = *(_DWORD *)(v73 + 4 * v102 + 4) << v173;
        else
          v105 = *(_DWORD *)(v73 + 4 * v102 + 4) << v173;
        *(_DWORD *)(v73 + 4 * v102 + 8) = v104;
        *(_DWORD *)(v73 + 4 * v102 + 4) = v105;
        goto LABEL_255;
      }
      v73 = set_qerrno(61);
      v78 = 0;
LABEL_257:
      if ( (char)v172 == 5 )
      {
LABEL_356:
        v133 = v78;
        sub_59680((void *)v173, (char *)&v172);
        v78 = v133;
      }
      else if ( (char)v172 == 7 && (_DWORD)v173 )
      {
LABEL_352:
        v132 = v78;
        HIDWORD(v173) = 0;
        qfree((void *)v173);
        LODWORD(v173) = 0;
        v174 = 0;
        v78 = v132;
      }
LABEL_353:
      v4 = 0;
      if ( v78 )
        return v4;
      return v73;
    case -66:
      v64 = *a1;
      v65 = *(_BYTE *)(*a1 + 20 * (a1[1] - 1));
      switch ( v65 )
      {
        case 2:
          *(_DWORD *)(v64 + 20 * (a1[1] - 1) + 4) = -*(_DWORD *)(v64 + 20 * (a1[1] - 1) + 4);
          return 0;
        case 9:
          v4 = 0;
          *(_QWORD *)(v64 + 20 * (a1[1] - 1) + 4) = -*(_QWORD *)(v64 + 20 * (a1[1] - 1) + 4);
          break;
        case 3:
          v66 = *(_WORD *)(v64 + 20 * (a1[1] - 1) + 18);
          v4 = 0;
          if ( v66 )
            *(_WORD *)(v64 + 20 * (a1[1] - 1) + 18) = v66 ^ 0x8000;
          break;
        default:
          return set_qerrno(61);
      }
      return v4;
    case -65:
      return idcv_string(*a1 + 20 * a1[1] - 20);
    case -56:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v70 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v70);
        v71 = a1[1];
        if ( v71 )
        {
          v72 = v71 - 1;
          a1[1] = v72;
          free_idcv((char *)(*a1 + 20 * v72));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v129 = a1[1] - 1;
      v130 = 5 * v129;
      v162 = *a1;
      v131 = (char *)(*a1 + 20 * v129);
      v169 = sub_63D00((int)v131, (int)&v172) == 0;
      free_idcv(v131);
      if ( (char)v172 == 5 )
      {
        sub_59680((void *)v173, (char *)&v172);
      }
      else if ( (char)v172 == 7 && (_DWORD)v173 )
      {
        HIDWORD(v173) = 0;
        qfree((void *)v173);
        LODWORD(v173) = 0;
        v174 = 0;
      }
      LOBYTE(v172) = 2;
      LODWORD(v173) = 0;
      *(_DWORD *)(v162 + 4 * v130 + 4) = v169;
      if ( (char)v172 == 5 )
        goto LABEL_345;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_344;
      return 0;
    case -55:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v46 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v46);
        v47 = a1[1];
        if ( v47 )
        {
          v48 = v47 - 1;
          a1[1] = v48;
          free_idcv((char *)(*a1 + 20 * v48));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v114 = a1[1] - 1;
      v115 = 5 * v114;
      v156 = *a1;
      v116 = (char *)(*a1 + 20 * v114);
      v164 = sub_63D00((int)v116, (int)&v172) != 0;
      free_idcv(v116);
      if ( (char)v172 == 5 )
      {
        sub_59680((void *)v173, (char *)&v172);
      }
      else if ( (char)v172 == 7 && (_DWORD)v173 )
      {
        HIDWORD(v173) = 0;
        qfree((void *)v173);
        LODWORD(v173) = 0;
        v174 = 0;
      }
      LOBYTE(v172) = 2;
      LODWORD(v173) = 0;
      *(_DWORD *)(v156 + 4 * v115 + 4) = v164;
      if ( (char)v172 == 5 )
        goto LABEL_345;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_344;
      return 0;
    case -54:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v55 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v55);
        v56 = a1[1];
        if ( v56 )
        {
          v57 = v56 - 1;
          a1[1] = v57;
          free_idcv((char *)(*a1 + 20 * v57));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v121 = a1[1] - 1;
      v122 = 5 * v121;
      v159 = *a1;
      v123 = (char *)(*a1 + 20 * v121);
      v167 = sub_63D00((int)v123, (int)&v172) <= 0;
      free_idcv(v123);
      if ( (char)v172 == 5 )
      {
        sub_59680((void *)v173, (char *)&v172);
      }
      else if ( (char)v172 == 7 && (_DWORD)v173 )
      {
        HIDWORD(v173) = 0;
        qfree((void *)v173);
        LODWORD(v173) = 0;
        v174 = 0;
      }
      LOBYTE(v172) = 2;
      LODWORD(v173) = 0;
      *(_DWORD *)(v159 + 4 * v122 + 4) = v167;
      if ( (char)v172 == 5 )
        goto LABEL_345;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_344;
      return 0;
    case -53:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v67 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v67);
        v68 = a1[1];
        if ( v68 )
        {
          v69 = v68 - 1;
          a1[1] = v69;
          free_idcv((char *)(*a1 + 20 * v69));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v161 = *a1;
      v168 = 5 * (a1[1] - 1);
      v128 = sub_63D00(*a1 + 20 * (a1[1] - 1), (int)&v172);
      free_idcv((char *)(v161 + 4 * v168));
      if ( (char)v172 == 5 )
      {
        sub_59680((void *)v173, (char *)&v172);
      }
      else if ( (char)v172 == 7 && (_DWORD)v173 )
      {
        HIDWORD(v173) = 0;
        qfree((void *)v173);
        LODWORD(v173) = 0;
        v174 = 0;
      }
      LOBYTE(v172) = 2;
      LODWORD(v173) = 0;
      *(_DWORD *)(v161 + 4 * v168 + 4) = v128 >= 0;
      if ( (char)v172 == 5 )
        goto LABEL_345;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_344;
      return 0;
    case -52:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v49 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v49);
        v50 = a1[1];
        if ( v50 )
        {
          v51 = v50 - 1;
          a1[1] = v51;
          free_idcv((char *)(*a1 + 20 * v51));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v157 = *a1;
      v165 = 5 * (a1[1] - 1);
      v117 = sub_63D00(*a1 + 20 * (a1[1] - 1), (int)&v172);
      free_idcv((char *)(v157 + 4 * v165));
      if ( (char)v172 == 5 )
      {
        sub_59680((void *)v173, (char *)&v172);
      }
      else if ( (char)v172 == 7 && (_DWORD)v173 )
      {
        HIDWORD(v173) = 0;
        qfree((void *)v173);
        LODWORD(v173) = 0;
        v174 = 0;
      }
      LOBYTE(v172) = 2;
      LODWORD(v173) = 0;
      *(_DWORD *)(v157 + 4 * v165 + 4) = v117 >> 31;
      if ( (char)v172 == 5 )
        goto LABEL_345;
      if ( (char)v172 == 7 && (_DWORD)v173 )
        goto LABEL_344;
      return 0;
    case -51:
      LOBYTE(v172) = 2;
      v173 = 0;
      v175 = 0;
      v174 = 0;
      if ( !move_idcv((char *)&v172, (char *)(*a1 + 20 * a1[1] - 20)) )
      {
        v52 = (char *)(*a1 + 20 * a1[1] - 20);
        LOBYTE(v176) = 2;
        v177 = 0;
        v179 = 0;
        v178 = 0;
        copy_idcv((char *)&v176, v52);
        v53 = a1[1];
        if ( v53 )
        {
          v54 = v53 - 1;
          a1[1] = v54;
          free_idcv((char *)(*a1 + 20 * v54));
        }
        if ( (char)v176 == 5 )
        {
          sub_59680((void *)v177, (char *)&v176);
        }
        else if ( (char)v176 == 7 && (_DWORD)v177 )
        {
          HIDWORD(v177) = 0;
          qfree((void *)v177);
          LODWORD(v177) = 0;
          v178 = 0;
        }
        LOBYTE(v176) = 2;
        LODWORD(v177) = 0;
      }
      v118 = a1[1] - 1;
      v119 = 5 * v118;
      v158 = *a1;
      v120 = (char *)(*a1 + 20 * v118);
      v166 = sub_63D00((int)v120, (int)&v172) > 0;
      free_idcv(v120);
      if ( (char)v172 == 5 )
      {
        sub_59680((void *)v173, (char *)&v172);
      }
      else if ( (char)v172 == 7 && (_DWORD)v173 )
      {
        HIDWORD(v173) = 0;
        qfree((void *)v173);
        LODWORD(v173) = 0;
        v174 = 0;
      }
      LOBYTE(v172) = 2;
      LODWORD(v173) = 0;
      *(_DWORD *)(v158 + 4 * v119 + 4) = v166;
      if ( (char)v172 == 5 )
      {
LABEL_345:
        sub_59680((void *)v173, (char *)&v172);
      }
      else if ( (char)v172 == 7 && (_DWORD)v173 )
      {
LABEL_344:
        HIDWORD(v173) = 0;
        qfree((void *)v173);
        LODWORD(v173) = 0;
        v174 = 0;
      }
      return 0;
    case -50:
      return idcv_long(*a1 + 20 * a1[1] - 20);
    case -48:
      return idcv_float(*a1 + 20 * a1[1] - 20);
    case -47:
      return idcv_int64(*a1 + 20 * a1[1] - 20);
    default:
      if ( !(_BYTE)under_debugger )
        interr(1448);
      BUG();
  }
}
// 13E34C: using guessed type int under_debugger;
