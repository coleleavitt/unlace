__int64 __fastcall sub_972080(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 result; // rax
  __int16 v7; // ax
  int v8; // r15d
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r13
  __int16 v18; // ax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdi
  void (*v24)(); // rcx
  __int64 v25; // rax
  int v26; // r12d
  int v27; // eax
  size_t v28; // rax
  unsigned __int64 *v29; // r13
  int v30; // r12d
  char v31; // r13
  char v32; // r13
  unsigned int v33; // eax
  unsigned int v34; // eax
  void **v35; // rsi
  unsigned __int64 *v36; // r13
  int v37; // ebx
  unsigned __int8 v38; // al
  unsigned int v39; // eax
  bool v40; // di
  char v41; // si
  char v42; // dl
  int v43; // eax
  unsigned int v44; // ebp
  unsigned __int64 *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  bool v50; // al
  bool v51; // di
  bool v52; // si
  bool v53; // dl
  int v54; // eax
  int v55; // ebp
  unsigned __int64 *v56; // rbx
  int v57; // eax
  __int64 v58; // rdi
  int v59; // eax
  unsigned int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  unsigned int v66; // eax
  int v67; // eax
  int v68; // eax
  unsigned int v69; // eax
  char v70; // al
  char v71; // al
  int v72; // eax
  int v73; // eax
  unsigned int v74; // eax
  __int64 v75; // [rsp+0h] [rbp-238h]
  unsigned int v76; // [rsp+0h] [rbp-238h]
  unsigned int v77; // [rsp+0h] [rbp-238h]
  _BOOL4 v78; // [rsp+0h] [rbp-238h]
  unsigned int v79; // [rsp+0h] [rbp-238h]
  unsigned int v80; // [rsp+0h] [rbp-238h]
  __int64 v81; // [rsp+0h] [rbp-238h]
  unsigned int v82; // [rsp+0h] [rbp-238h]
  __int64 v83; // [rsp+8h] [rbp-230h]
  __int64 v84; // [rsp+8h] [rbp-230h]
  unsigned __int64 v85; // [rsp+8h] [rbp-230h]
  __int64 v86; // [rsp+10h] [rbp-228h]
  char v87; // [rsp+10h] [rbp-228h]
  unsigned __int64 v88; // [rsp+10h] [rbp-228h]
  unsigned int v89; // [rsp+10h] [rbp-228h]
  __int64 v90; // [rsp+18h] [rbp-220h]
  char v91; // [rsp+18h] [rbp-220h]
  char v92; // [rsp+20h] [rbp-218h]
  char v93; // [rsp+3Dh] [rbp-1FBh]
  char v94; // [rsp+3Dh] [rbp-1FBh]
  char v95; // [rsp+3Eh] [rbp-1FAh]
  char v96; // [rsp+3Eh] [rbp-1FAh]
  char v97; // [rsp+3Fh] [rbp-1F9h]
  char v98; // [rsp+3Fh] [rbp-1F9h]
  char v99; // [rsp+40h] [rbp-1F8h]
  char v100; // [rsp+48h] [rbp-1F0h]
  unsigned __int8 v101; // [rsp+50h] [rbp-1E8h]
  void *v103; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned int v104; // [rsp+68h] [rbp-1D0h]
  char v105; // [rsp+6Ch] [rbp-1CCh]
  void *v106; // [rsp+70h] [rbp-1C8h] BYREF
  unsigned int v107; // [rsp+78h] [rbp-1C0h]
  char v108; // [rsp+7Ch] [rbp-1BCh]
  void *v109; // [rsp+80h] [rbp-1B8h] BYREF
  unsigned int v110; // [rsp+88h] [rbp-1B0h]
  void *v111; // [rsp+A0h] [rbp-198h] BYREF
  unsigned int v112; // [rsp+A8h] [rbp-190h]
  char v113; // [rsp+ACh] [rbp-18Ch]
  unsigned __int64 v114; // [rsp+C0h] [rbp-178h] BYREF
  unsigned int v115; // [rsp+C8h] [rbp-170h]
  __int16 v116; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v117; // [rsp+E8h] [rbp-150h]
  unsigned int v118; // [rsp+F0h] [rbp-148h] BYREF
  char v119; // [rsp+F4h] [rbp-144h]
  void *v120; // [rsp+F8h] [rbp-140h] BYREF
  unsigned int v121; // [rsp+100h] [rbp-138h]
  char v122; // [rsp+104h] [rbp-134h]
  __int16 v123; // [rsp+130h] [rbp-108h] BYREF
  __int64 v124; // [rsp+138h] [rbp-100h]
  unsigned int v125; // [rsp+140h] [rbp-F8h] BYREF
  char v126; // [rsp+144h] [rbp-F4h]
  void *v127; // [rsp+148h] [rbp-F0h] BYREF
  unsigned int v128; // [rsp+150h] [rbp-E8h]
  char v129; // [rsp+154h] [rbp-E4h]
  unsigned __int64 v130; // [rsp+180h] [rbp-B8h] BYREF
  unsigned int v131; // [rsp+188h] [rbp-B0h]
  char v132; // [rsp+18Ch] [rbp-ACh]
  void *v133; // [rsp+190h] [rbp-A8h] BYREF
  unsigned int v134; // [rsp+198h] [rbp-A0h] BYREF
  char v135; // [rsp+19Ch] [rbp-9Ch]
  unsigned __int64 v136; // [rsp+1A0h] [rbp-98h]
  unsigned int v137; // [rsp+1A8h] [rbp-90h]
  char v138; // [rsp+1ACh] [rbp-8Ch]
  void *v139; // [rsp+1B0h] [rbp-88h] BYREF
  unsigned int v140; // [rsp+1B8h] [rbp-80h]
  char v141; // [rsp+1BCh] [rbp-7Ch]
  char v142[8]; // [rsp+1C0h] [rbp-78h] BYREF
  __int64 v143; // [rsp+1C8h] [rbp-70h] BYREF
  _BYTE v144[16]; // [rsp+1D0h] [rbp-68h] BYREF
  _QWORD v145[3]; // [rsp+1E0h] [rbp-58h] BYREF
  _BYTE v146[64]; // [rsp+1F8h] [rbp-40h] BYREF

  v4 = sub_BD7CB0(*(_QWORD *)(a2 + 16));
  v5 = sub_BD7CB0(*(_QWORD *)(a2 + 24));
  if ( (*(_WORD *)v4 & 0x1FF) != 4 )
  {
LABEL_7:
    v7 = *(_WORD *)v5 & 0x1FF;
    if ( v7 != 4 )
    {
LABEL_8:
      if ( ((*(_WORD *)v4 + 394) & 0x1FFu) > 1 )
        return 0xFFFFFFFFLL;
      if ( ((v7 + 394) & 0x1FFu) > 1 )
        return 0xFFFFFFFFLL;
      v8 = (*(_WORD *)(v4 + 2) >> 3) & 0x3F;
      if ( (unsigned int)(v8 - 9) > 6 )
        return 0xFFFFFFFFLL;
      v9 = (*(_WORD *)(v5 + 2) >> 3) & 0x3F;
      if ( (unsigned int)(v9 - 9) > 6 )
        return 0xFFFFFFFFLL;
      v10 = *(_QWORD *)(v4 + 16);
      v11 = *(_QWORD *)(v4 + 24);
      v75 = v10;
      v12 = sub_9706F0(v11);
      if ( v12 )
      {
        if ( !v75 )
          return 0xFFFFFFFFLL;
      }
      else
      {
        switch ( v8 )
        {
          case 11:
            v8 = 10;
            break;
          case 13:
            v8 = 12;
            break;
          case 10:
            v8 = 11;
            break;
          case 12:
            v8 = 13;
            break;
        }
        v25 = sub_9706F0(v75);
        v12 = v25;
        if ( !v11 || !v25 )
          return 0xFFFFFFFFLL;
        v75 = v11;
      }
      v13 = *(_QWORD *)(v5 + 24);
      v86 = v12;
      v83 = *(_QWORD *)(v5 + 16);
      v14 = sub_9706F0(v13);
      v15 = v83;
      v16 = v86;
      v17 = v14;
      if ( v14 )
      {
        if ( !v83 )
          return 0xFFFFFFFFLL;
      }
      else
      {
        switch ( v9 )
        {
          case 11:
            v9 = 10;
            break;
          case 13:
            v9 = 12;
            break;
          case 10:
            v9 = 11;
            break;
          case 12:
            v9 = 13;
            break;
        }
        v17 = sub_9706F0(v83);
        if ( !v17 )
          return 0xFFFFFFFFLL;
        v16 = v86;
        if ( !v13 )
          return 0xFFFFFFFFLL;
        v15 = v13;
      }
      v84 = v16;
      if ( !(unsigned __int8)sub_BDBDA0(v75, v15) )
        return 0xFFFFFFFFLL;
      v18 = *(_WORD *)v84 & 0x1FF;
      if ( (v18 == 71) != ((*(_WORD *)v17 & 0x1FF) == 71) )
        return 0xFFFFFFFFLL;
      if ( v18 == 71 )
      {
        v19 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v84 + 16) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(*(_QWORD *)(v84 + 16) + 16LL) & 4) != 0 )
          v19 = (_QWORD *)*v19;
        v20 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
        v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v20 & 4) != 0 )
          v21 = (_QWORD *)*v21;
        if ( v21 != v19 )
          return 0xFFFFFFFFLL;
      }
      v22 = *a1;
      v119 &= ~1u;
      v126 &= ~1u;
      v116 = 0;
      v117 = 0;
      v118 = 0;
      v123 = 0;
      v124 = 0;
      v125 = 0;
      if ( !(unsigned __int8)sub_C19630(v84, &v116, v22, 0) )
        goto LABEL_25;
      LOBYTE(v26) = sub_C19630(v17, &v123, *a1, 0);
      if ( !(_BYTE)v26 )
        goto LABEL_25;
      if ( v118 != 2 )
      {
        if ( v118 == 3 && v125 == 3 )
        {
          sub_9718E0((__int64)&v109, &v120);
          sub_9718E0((__int64)&v111, &v127);
          v27 = sub_A3FAF0(*a1, *(_QWORD *)(v84 + 8), *(_QWORD *)(v17 + 8));
          LOBYTE(v103) = 0;
          if ( v27 > 0 )
          {
            if ( (unsigned int)sub_21DEB80(&v111, v109, 1, &v103) )
            {
LABEL_218:
              v57 = -1;
LABEL_163:
              v82 = v57;
              sub_971860(&v111);
              sub_971860(&v109);
              result = v82;
              goto LABEL_26;
            }
          }
          else if ( v27 && (unsigned int)sub_21DEB80(&v109, v111, 1, &v103) )
          {
            goto LABEL_218;
          }
          sub_9718E0((__int64)&v114, &v109);
          v90 = sub_21D5390();
          if ( v114 == v90 )
            sub_21DCE30(&v114, &v111, 1);
          else
            sub_21D9B20(&v114, &v111, 1);
          v28 = j__strlen("2.0");
          sub_21E1470(&v130, v114, "2.0", v28);
          if ( v114 == v90 )
            sub_21DD7B0(&v114, &v130, 1);
          else
            sub_21D9740(&v114, &v130, 1);
          sub_971860(&v130);
          LODWORD(v106) = 0;
          sub_972040((__int64)&v130, (__int64)v109, (unsigned int *)&v106);
          if ( v130 == v90 )
            sub_21DC760(&v130, 1);
          else
            sub_21D6DF0(&v130, 1);
          sub_9718E0((__int64)&v134, &v109);
          sub_9718E0((__int64)&v139, &v114);
          sub_9718E0((__int64)&v143, &v111);
          LODWORD(v106) = 0;
          sub_972040((__int64)v145, (__int64)v111, (unsigned int *)&v106);
          if ( v145[0] == v90 )
            sub_21DC640(v145, 0);
          else
            sub_21D6D30(v145, 0);
          v93 = v26;
          v95 = v26;
          v29 = &v130;
          v97 = v26;
          v100 = v26;
          v99 = v26;
          v101 = v26;
          while ( 2 )
          {
            v30 = -1;
            switch ( v8 )
            {
              case 10:
                if ( v90 == *v29 )
                  v68 = sub_21DD2E0(v29, &v134);
                else
                  v68 = sub_21D6700(v29, &v134);
                v30 = v68 == 0;
                break;
              case 11:
                if ( v90 == *v29 )
                  v67 = sub_21DD2E0(v29, &v134);
                else
                  v67 = sub_21D6700(v29, &v134);
                v30 = v67 == 2;
                break;
              case 12:
                if ( v90 == *v29 )
                  v66 = sub_21DD2E0(v29, &v134);
                else
                  v66 = sub_21D6700(v29, &v134);
                goto LABEL_202;
              case 13:
                if ( v90 == *v29 )
                  v65 = sub_21DD2E0(v29, &v134);
                else
                  v65 = sub_21D6700(v29, &v134);
                v66 = v65 - 1;
LABEL_202:
                v30 = v66 <= 1;
                break;
              case 14:
                if ( v90 == *v29 )
                  v48 = sub_21DD2E0(v29, &v134);
                else
                  v48 = sub_21D6700(v29, &v134);
                v30 = v48 == 1;
                break;
              case 15:
                if ( v90 == *v29 )
                  v64 = sub_21DD2E0(v29, &v134);
                else
                  v64 = sub_21D6700(v29, &v134);
                v30 = v64 != 1;
                break;
              default:
                break;
            }
            switch ( v9 )
            {
              case 10:
                if ( v90 == *v29 )
                  v62 = sub_21DD2E0(v29, &v143);
                else
                  v62 = sub_21D6700(v29, &v143);
                v50 = v62 == 0;
                goto LABEL_154;
              case 11:
                if ( v90 == *v29 )
                  v61 = sub_21DD2E0(v29, &v143);
                else
                  v61 = sub_21D6700(v29, &v143);
                v50 = v61 == 2;
                goto LABEL_154;
              case 12:
                if ( v90 == *v29 )
                  v60 = sub_21DD2E0(v29, &v143);
                else
                  v60 = sub_21D6700(v29, &v143);
                goto LABEL_175;
              case 13:
                if ( v90 == *v29 )
                  v59 = sub_21DD2E0(v29, &v143);
                else
                  v59 = sub_21D6700(v29, &v143);
                v60 = v59 - 1;
LABEL_175:
                v50 = v60 <= 1;
                goto LABEL_154;
              case 14:
                if ( v90 == *v29 )
                  v49 = sub_21DD2E0(v29, &v143);
                else
                  v49 = sub_21D6700(v29, &v143);
                v50 = v49 == 1;
                goto LABEL_154;
              case 15:
                if ( v90 == *v29 )
                  v63 = sub_21DD2E0(v29, &v143);
                else
                  v63 = sub_21D6700(v29, &v143);
                v50 = v63 != 1;
LABEL_154:
                if ( v30 < 0 )
                  goto LABEL_191;
                v51 = v30 == 1;
                v52 = v50;
                v53 = v30 == 1 || v50;
                if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x13 )
                  v53 = v51 && v52;
                v101 &= v53;
                v100 &= v51;
                v99 &= !v53;
                v29 += 3;
                v93 &= !v50;
                v97 &= v30 == 0;
                v95 &= v52;
                if ( v29 != (unsigned __int64 *)v146 )
                  continue;
                if ( v101 || (v54 = -1, v99) )
                {
                  if ( !v100 && !v97 && !v95 && !v93 )
                  {
                    v58 = *(_QWORD *)(a1[41] + 48LL);
                    if ( v58 )
                      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v58 + 24LL))(v58, a2, v101);
                  }
                  v54 = v101;
                }
LABEL_160:
                v55 = v54;
                v56 = (unsigned __int64 *)v146;
                do
                {
                  v56 -= 3;
                  sub_971860(v56);
                }
                while ( v56 != &v130 );
                sub_971860(&v114);
                v57 = v55;
                break;
              default:
LABEL_191:
                v54 = -1;
                goto LABEL_160;
            }
            goto LABEL_163;
          }
        }
LABEL_25:
        result = 0xFFFFFFFFLL;
LABEL_26:
        if ( v125 > 1 )
        {
          v76 = result;
          sub_A2BBA0(&v125);
          result = v76;
        }
        if ( v118 > 1 )
        {
          v77 = result;
          sub_A2BBA0(&v118);
          return v77;
        }
        return result;
      }
      if ( v125 != 2 )
        goto LABEL_25;
      v104 = v121;
      if ( v121 > 0x40 )
        sub_21E17D0(&v103);
      else
        v103 = v120;
      v105 = v122;
      v107 = v128;
      if ( v128 > 0x40 )
        sub_21E17D0(&v106);
      else
        v106 = v127;
      v31 = v105;
      v108 = v129;
      if ( v105 != v129 || v104 != v107 )
      {
        result = 0xFFFFFFFFLL;
LABEL_81:
        if ( v107 > 0x40 && v106 )
        {
          v79 = result;
          operator delete[](v106);
          result = v79;
        }
        if ( v104 > 0x40 && v103 )
        {
          v80 = result;
          operator delete[](v103);
          result = v80;
        }
        goto LABEL_26;
      }
      v115 = v104;
      if ( v105 )
      {
        if ( v104 > 0x40 )
          sub_21E1730(&v114, 0, 0);
        else
          v114 = 0;
      }
      else
      {
        v47 = 1LL << ((unsigned __int8)v104 - 1);
        if ( v104 > 0x40 )
        {
          v81 = 1LL << ((unsigned __int8)v104 - 1);
          v89 = v104 - 1;
          sub_21E1730(&v114, 0, 0);
          v47 = v81;
          if ( v115 > 0x40 )
          {
            *(_QWORD *)(v114 + 8LL * (v89 >> 6)) |= v81;
            goto LABEL_91;
          }
        }
        else
        {
          v114 = 0;
        }
        v114 |= v47;
      }
LABEL_91:
      v132 = v31;
      v131 = v115;
      v130 = v114;
      v134 = v104;
      if ( v104 > 0x40 )
        sub_21E17D0(&v133);
      else
        v133 = v103;
      v32 = v105;
      v135 = v105;
      v110 = v104;
      if ( v104 > 0x40 )
        sub_21E1730(&v109, 1, 0);
      else
        v109 = &dword_0 + 1;
      v33 = v110;
      v113 = v32;
      v110 = 0;
      v112 = v33;
      v111 = v109;
      if ( v105 )
        v34 = (unsigned int)sub_21E2070(&v103, &v106) >> 31;
      else
        v34 = (unsigned int)sub_21E20E0(&v103, &v106) >> 31;
      v35 = &v103;
      if ( !(_BYTE)v34 )
        v35 = &v106;
      v87 = *((_BYTE *)v35 + 12);
      v115 = *((_DWORD *)v35 + 2);
      if ( v115 > 0x40 )
        sub_21E17D0(&v114);
      else
        v114 = (unsigned __int64)*v35;
      sub_21E1C60(&v114, &v111);
      v137 = v115;
      v136 = v114;
      v138 = v87;
      if ( v112 > 0x40 && v111 )
        operator delete[](v111);
      if ( v110 > 0x40 && v109 )
        operator delete[](v109);
      v140 = v107;
      if ( v107 > 0x40 )
        sub_21E17D0(&v139);
      else
        v139 = v106;
      v141 = v108;
      sub_971920((__int64)v142, v104, v105);
      v85 = (unsigned __int64)v133;
      v88 = (unsigned __int64)v139;
      v91 = v26;
      v36 = &v130;
      v92 = v26;
      v94 = v26;
      v96 = v26;
      v98 = v26;
      while ( 2 )
      {
        v37 = -1;
        switch ( v8 )
        {
          case 10:
            if ( *((_BYTE *)v36 + 12) )
              v69 = (unsigned int)sub_21E2070(v36, &v133) >> 31;
            else
              v69 = (unsigned int)sub_21E20E0(v36, &v133) >> 31;
            LOBYTE(v37) = v69;
            goto LABEL_224;
          case 11:
            if ( *((_BYTE *)v36 + 12) )
              v73 = sub_21E2070(v36, &v133);
            else
              v73 = sub_21E20E0(v36, &v133);
            LOBYTE(v37) = v73 > 0;
            goto LABEL_224;
          case 12:
            if ( *((_BYTE *)v36 + 12) )
              v72 = sub_21E2070(v36, &v133);
            else
              v72 = sub_21E20E0(v36, &v133);
            LOBYTE(v37) = v72 <= 0;
            goto LABEL_224;
          case 13:
            if ( *((_BYTE *)v36 + 12) )
              v74 = ~(unsigned int)sub_21E2070(v36, &v133);
            else
              v74 = ~(unsigned int)sub_21E20E0(v36, &v133);
            v37 = v74 >> 31;
LABEL_224:
            v37 = (unsigned __int8)v37;
            break;
          case 14:
            if ( *((_DWORD *)v36 + 2) <= 0x40u )
              v38 = *v36 == v85;
            else
              v38 = sub_21E2030(v36, &v133);
            goto LABEL_114;
          case 15:
            if ( *((_DWORD *)v36 + 2) <= 0x40u )
              v70 = *v36 == v85;
            else
              v70 = sub_21E2030(v36, &v133);
            v38 = v70 ^ 1;
LABEL_114:
            v37 = v38;
            break;
          default:
            break;
        }
        switch ( v9 )
        {
          case 10:
            if ( *((_BYTE *)v36 + 12) )
              v39 = (unsigned int)sub_21E2070(v36, &v139) >> 31;
            else
              v39 = (unsigned int)sub_21E20E0(v36, &v139) >> 31;
            goto LABEL_119;
          case 11:
            if ( *((_BYTE *)v36 + 12) )
              LOBYTE(v39) = (int)sub_21E2070(v36, &v139) > 0;
            else
              LOBYTE(v39) = (int)sub_21E20E0(v36, &v139) > 0;
            goto LABEL_119;
          case 12:
            if ( *((_BYTE *)v36 + 12) )
              LOBYTE(v39) = (int)sub_21E2070(v36, &v139) <= 0;
            else
              LOBYTE(v39) = (int)sub_21E20E0(v36, &v139) <= 0;
            goto LABEL_119;
          case 13:
            if ( *((_BYTE *)v36 + 12) )
              LOBYTE(v39) = (int)sub_21E2070(v36, &v139) >= 0;
            else
              LOBYTE(v39) = (int)sub_21E20E0(v36, &v139) >= 0;
            goto LABEL_119;
          case 14:
            if ( *((_DWORD *)v36 + 2) <= 0x40u )
              LOBYTE(v39) = *v36 == v88;
            else
              LOBYTE(v39) = sub_21E2030(v36, &v139);
            goto LABEL_119;
          case 15:
            if ( *((_DWORD *)v36 + 2) <= 0x40u )
              v71 = *v36 == v88;
            else
              v71 = sub_21E2030(v36, &v139);
            LOBYTE(v39) = v71 ^ 1;
LABEL_119:
            if ( v37 < 0 )
              goto LABEL_239;
            v40 = v37 == 1;
            v41 = v39 & 1;
            v42 = (v37 == 1) | v39 & 1;
            if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x13 )
              v42 = v40 & v41;
            LOBYTE(v26) = v42 & v26;
            v96 &= v40;
            v98 &= v42 ^ 1;
            v94 &= v37 == 0;
            v36 += 2;
            v92 &= v41;
            v91 &= (v39 ^ 1) & 1;
            if ( v36 != (unsigned __int64 *)v144 )
              continue;
            if ( (_BYTE)v26 || (v43 = -1, v98) )
            {
              if ( v96 || v94 || v92 || v91 )
              {
                v26 = (unsigned __int8)v26;
              }
              else
              {
                v26 = (unsigned __int8)v26;
                v46 = *(_QWORD *)(a1[41] + 48LL);
                if ( v46 )
                  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v46 + 24LL))(
                    v46,
                    a2,
                    (unsigned __int8)v26);
              }
              v43 = v26;
            }
LABEL_125:
            v44 = v43;
            v45 = (unsigned __int64 *)v144;
            do
            {
              v45 -= 2;
              if ( *((_DWORD *)v45 + 2) > 0x40u && *v45 )
                operator delete[]((void *)*v45);
            }
            while ( v45 != &v130 );
            result = v44;
            break;
          default:
LABEL_239:
            v43 = -1;
            goto LABEL_125;
        }
        goto LABEL_81;
      }
    }
    goto LABEL_4;
  }
  if ( *(_BYTE *)(v4 + 2) >> 3 == 9 )
  {
    if ( (unsigned __int8)sub_BDBDA0(*(_QWORD *)(v4 + 16), v5) )
      goto LABEL_31;
    goto LABEL_7;
  }
  if ( (*(_WORD *)v5 & 0x1FF) != 4 )
    return 0xFFFFFFFFLL;
LABEL_4:
  if ( *(_BYTE *)(v5 + 2) >> 3 != 9 )
    return 0xFFFFFFFFLL;
  if ( !(unsigned __int8)sub_BDBDA0(*(_QWORD *)(v5 + 16), v4) )
  {
    v7 = *(_WORD *)v5 & 0x1FF;
    goto LABEL_8;
  }
LABEL_31:
  v23 = *(_QWORD *)(a1[41] + 48LL);
  result = ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 20;
  if ( v23 )
  {
    v24 = *(void (**)())(*(_QWORD *)v23 + 16LL);
    if ( v24 != nullsub_317 )
    {
      v78 = ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 20;
      ((void (__fastcall *)(__int64, __int64, bool))v24)(v23, a2, ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 20);
      return v78;
    }
  }
  return result;
}

