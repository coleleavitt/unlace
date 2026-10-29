__int64 __fastcall sub_436FE0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 **a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v9; // r14
  int *v10; // rbp
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int8 v19; // cl
  __int64 result; // rax
  _BYTE *v21; // rsi
  int v22; // edx
  int v23; // eax
  _BYTE *v24; // rsi
  int v25; // edx
  int v26; // eax
  _BYTE *v27; // rsi
  _BYTE *v28; // rsi
  int v29; // edx
  char *v30; // rsi
  int v31; // ebx
  _BYTE *v32; // rsi
  _BYTE *v33; // rsi
  int v34; // edx
  int v35; // edx
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rsi
  int v39; // eax
  int v40; // edx
  __int64 v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rdx
  int v44; // r13d
  _QWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  _BYTE *v48; // rsi
  _BYTE *v49; // rsi
  int v50; // edx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdx
  int v58; // r13d
  _BYTE *v59; // rsi
  _BYTE *v60; // rsi
  int v61; // edx
  int v62; // eax
  int v63; // ecx
  __int64 v64; // r13
  __int64 v65; // rax
  int v66; // ebx
  _BYTE *v67; // rsi
  _BYTE *v68; // rsi
  int v69; // edx
  _BYTE *v70; // rsi
  _BYTE *v71; // rsi
  _BYTE *v72; // rsi
  _BYTE *v73; // rsi
  _BYTE *v74; // rsi
  int v75; // ebx
  _BYTE *v76; // rsi
  _BYTE *v77; // rsi
  __int64 v78; // rax
  _BYTE *v79; // rsi
  _BYTE *v80; // rsi
  _BYTE *v81; // rsi
  _BYTE *v82; // rsi
  _BYTE *v83; // rsi
  int v84; // eax
  _BYTE *v85; // rsi
  _BYTE *v86; // rsi
  _BYTE *v87; // rsi
  _BYTE *v88; // rsi
  _BYTE *v89; // rsi
  int v90; // eax
  _BYTE *v91; // rsi
  _BYTE *v92; // rsi
  _BYTE *v93; // rsi
  _BYTE *v94; // rsi
  _BYTE *v95; // rsi
  int v96; // eax
  char *v97; // rsi
  int v98; // ebx
  _BYTE *v99; // rsi
  __int64 v100; // rax
  __int64 v101; // rsi
  int v102; // edx
  __int64 v103; // rsi
  int v104; // eax
  int v105; // eax
  __int64 v106; // rsi
  _BYTE *v107; // rsi
  _BYTE *v108; // rsi
  _BYTE *v109; // rsi
  _BYTE *v110; // rsi
  _BYTE *v111; // rsi
  __int64 v112; // rdx
  __int64 v113; // rsi
  _BYTE *v114; // rsi
  _BYTE *v115; // rsi
  _BYTE *v116; // rsi
  _BYTE *v117; // rsi
  __int64 v118; // rax
  __int64 v119; // rsi
  _BYTE *v120; // rsi
  _BYTE *v121; // rsi
  _BYTE *v122; // rsi
  _BYTE *v123; // rsi
  _BYTE *v124; // rsi
  __int64 v125; // rax
  int v126; // [rsp+8h] [rbp-150h]
  int v127; // [rsp+Ch] [rbp-14Ch]
  unsigned int *v128; // [rsp+10h] [rbp-148h]
  unsigned int v133; // [rsp+38h] [rbp-120h] BYREF
  unsigned int v134; // [rsp+3Ch] [rbp-11Ch] BYREF
  __int64 v135; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v136; // [rsp+48h] [rbp-110h]

  v9 = 0;
  v10 = (int *)(16LL * a3 + a2);
  v128 = (unsigned int *)v10;
  v127 = 0;
  v126 = 1;
LABEL_2:
  while ( 2 )
  {
    v11 = *((unsigned __int8 *)v10 + 14);
    while ( 1 )
    {
      if ( !(_BYTE)v11 )
      {
        v12 = *((unsigned __int8 *)v10 + 12);
        v13 = *v10;
        if ( v12 == 76 )
        {
          v52 = sub_4495F0(a1, 40);
          *(_QWORD *)(v52 + 32) = v9;
          v53 = v52;
          v54 = sub_4495F0(a1, 40);
          *(_QWORD *)(v54 + 32) = v53;
          v9 = v54;
          *(_DWORD *)(v54 + 16) = *(_DWORD *)(a7 + 48);
          goto LABEL_79;
        }
        if ( *((unsigned __int8 *)v10 + 12) >= 0x4Cu && (unsigned int)(v12 - 84) <= 1 )
        {
          v14 = sub_4495F0(a1, 40);
          *(_QWORD *)(v14 + 32) = v9;
          v15 = v14;
          v16 = sub_4495F0(a1, 40);
          *(_QWORD *)(v16 + 32) = v15;
          v17 = v16;
          v18 = sub_4495F0(a1, 40);
          *(_QWORD *)(v18 + 32) = v17;
          v9 = v18;
          *(_DWORD *)(v18 + 16) = *(_DWORD *)(a7 + 48);
LABEL_8:
          v11 = *((unsigned __int8 *)v10 + 14);
          goto LABEL_9;
        }
        goto LABEL_9;
      }
      if ( (_BYTE)v11 != 1 )
        break;
      v39 = *((unsigned __int8 *)v10 + 12);
      v13 = v10[1];
      if ( v39 == 84 )
        goto LABEL_161;
      if ( *((unsigned __int8 *)v10 + 12) > 0x54u )
      {
        if ( v39 == 85 )
        {
          v112 = v9;
          v113 = 1;
          goto LABEL_162;
        }
        if ( v39 == 131 )
        {
          sub_49EDC0(&v135);
          sub_49EDE0(&v135, "tcl::mathfunc::", 0xFFFFFFFFLL);
          v55 = *a5;
          v56 = *(_QWORD *)(*a5 + 8);
          if ( v56 )
          {
            v57 = *(unsigned int *)(v55 + 16);
            v134 = *(_DWORD *)(v55 + 16);
          }
          else
          {
            v125 = sub_47ACD0(v55, &v134);
            v57 = v134;
            v56 = v125;
          }
          ++a5;
          sub_49EDE0(&v135, v56, v57);
          v58 = sub_471010(a7, v135, v136, 2);
          if ( v58 > 255 )
          {
            v120 = *(_BYTE **)(a7 + 120);
            if ( (unsigned __int64)(v120 + 5) > *(_QWORD *)(a7 + 128) )
            {
              sub_439150(a7);
              v120 = *(_BYTE **)(a7 + 120);
            }
            *v120 = 2;
            v121 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
            *(_QWORD *)(a7 + 120) = v121;
            *v121 = HIBYTE(v58);
            v122 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
            *(_QWORD *)(a7 + 120) = v122;
            *v122 = BYTE2(v58);
            v123 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
            *(_QWORD *)(a7 + 120) = v123;
            *v123 = BYTE1(v58);
            v124 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
            *(_QWORD *)(a7 + 120) = v124;
            *v124 = v58;
            ++*(_QWORD *)(a7 + 120);
            *(_DWORD *)(a7 + 3276) = 0;
            v61 = dword_65444C;
          }
          else
          {
            v59 = *(_BYTE **)(a7 + 120);
            if ( (unsigned __int64)(v59 + 2) > *(_QWORD *)(a7 + 128) )
            {
              sub_439150(a7);
              v59 = *(_BYTE **)(a7 + 120);
            }
            *v59 = 1;
            v60 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
            *(_QWORD *)(a7 + 120) = v60;
            *v60 = v58;
            ++*(_QWORD *)(a7 + 120);
            *(_DWORD *)(a7 + 3276) = 0;
            v61 = dword_65442C;
          }
          if ( v61 )
          {
            if ( v61 == 0x80000000 )
              v61 = 1 - v58;
            if ( v61 < 0 )
            {
              v62 = *(_DWORD *)(a7 + 48);
              if ( *(_DWORD *)(a7 + 44) < v62 )
                *(_DWORD *)(a7 + 44) = v62;
            }
            else
            {
              v62 = *(_DWORD *)(a7 + 48);
            }
            *(_DWORD *)(a7 + 48) = v61 + v62;
          }
          sub_49F100(&v135);
          v63 = v127;
          v127 = 2;
          *v10 = v63;
          goto LABEL_8;
        }
      }
      else
      {
        if ( v39 == 76 )
        {
LABEL_161:
          v112 = v9;
          v113 = 2;
LABEL_162:
          sub_43C580(a7, v113, v112);
          goto LABEL_8;
        }
        if ( v39 == 77 )
        {
          sub_43C580(a7, 0, *(_QWORD *)(v9 + 32));
          *(_DWORD *)(a7 + 48) = *(_DWORD *)(v9 + 16);
          v40 = *(_QWORD *)(a7 + 120) - *(_DWORD *)(a7 + 112);
          *(_DWORD *)(v9 + 24) = v126;
          *(_DWORD *)(v9 + 20) = v40;
LABEL_79:
          v126 = 1;
          goto LABEL_8;
        }
      }
LABEL_9:
      *((_BYTE *)v10 + 14) = ++v11;
      if ( v13 == -2 )
      {
        sub_4399D0(a1, a6 + 24, *(unsigned int *)(a6 + 20), a7);
        a6 += 24LL * *(int *)(a6 + 20) + 24;
        goto LABEL_2;
      }
      if ( v13 <= -2 )
      {
        if ( v13 == -3 )
        {
          v41 = **a4;
          if ( a8 )
          {
            v42 = *(_QWORD *)(v41 + 8);
            if ( v42 )
            {
              v43 = *(unsigned int *)(v41 + 16);
              v133 = *(_DWORD *)(v41 + 16);
            }
            else
            {
              v78 = sub_47ACD0(**a4, &v133);
              v43 = v133;
              v42 = v78;
            }
            v44 = sub_471010(a7, v42, v43, 0);
            v45 = *(_QWORD **)(*(_QWORD *)(a7 + 144) + 32LL * v44 + 8);
            if ( !v45[3] )
            {
              v46 = *(_QWORD *)(v41 + 24);
              if ( v46 )
              {
                v45[3] = v46;
                v47 = *(_QWORD *)(v41 + 32);
                *(_QWORD *)(v41 + 24) = 0;
                v45[4] = v47;
                v45[5] = *(_QWORD *)(v41 + 40);
              }
            }
            if ( v44 > 255 )
            {
              v70 = *(_BYTE **)(a7 + 120);
              if ( (unsigned __int64)(v70 + 5) > *(_QWORD *)(a7 + 128) )
              {
                sub_439150(a7);
                v70 = *(_BYTE **)(a7 + 120);
              }
              *v70 = 2;
              v71 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v71;
              *v71 = HIBYTE(v44);
              v72 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v72;
              *v72 = BYTE2(v44);
              v73 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v73;
              *v73 = BYTE1(v44);
              v74 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v74;
              *v74 = v44;
              ++*(_QWORD *)(a7 + 120);
              *(_DWORD *)(a7 + 3276) = 0;
              v50 = dword_65444C;
            }
            else
            {
              v48 = *(_BYTE **)(a7 + 120);
              if ( (unsigned __int64)(v48 + 2) > *(_QWORD *)(a7 + 128) )
              {
                sub_439150(a7);
                v48 = *(_BYTE **)(a7 + 120);
              }
              *v48 = 1;
              v49 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v49;
              *v49 = v44;
              ++*(_QWORD *)(a7 + 120);
              *(_DWORD *)(a7 + 3276) = 0;
              v50 = dword_65442C;
            }
            if ( !v50 )
              goto LABEL_77;
            if ( v50 == 0x80000000 )
              v50 = 1 - v44;
          }
          else
          {
            v75 = sub_470E40(a7, v41, 0);
            if ( v75 > 255 )
            {
              v107 = *(_BYTE **)(a7 + 120);
              if ( (unsigned __int64)(v107 + 5) > *(_QWORD *)(a7 + 128) )
              {
                sub_439150(a7);
                v107 = *(_BYTE **)(a7 + 120);
              }
              *v107 = 2;
              v108 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v108;
              *v108 = HIBYTE(v75);
              v109 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v109;
              *v109 = BYTE2(v75);
              v110 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v110;
              *v110 = BYTE1(v75);
              v111 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v111;
              *v111 = v75;
              ++*(_QWORD *)(a7 + 120);
              *(_DWORD *)(a7 + 3276) = 0;
              v50 = dword_65444C;
            }
            else
            {
              v76 = *(_BYTE **)(a7 + 120);
              if ( (unsigned __int64)(v76 + 2) > *(_QWORD *)(a7 + 128) )
              {
                sub_439150(a7);
                v76 = *(_BYTE **)(a7 + 120);
              }
              *v76 = 1;
              v77 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v77;
              *v77 = v75;
              ++*(_QWORD *)(a7 + 120);
              *(_DWORD *)(a7 + 3276) = 0;
              v50 = dword_65442C;
            }
            if ( !v50 )
              goto LABEL_77;
            if ( v50 == 0x80000000 )
              v50 = 1 - v75;
          }
          if ( v50 < 0 )
          {
            v51 = *(_DWORD *)(a7 + 48);
            if ( *(_DWORD *)(a7 + 44) < v51 )
              *(_DWORD *)(a7 + 44) = v51;
          }
          else
          {
            v51 = *(_DWORD *)(a7 + 48);
          }
          *(_DWORD *)(a7 + 48) = v50 + v51;
LABEL_77:
          ++*a4;
          goto LABEL_2;
        }
LABEL_12:
        if ( a8 && *(_BYTE *)(16LL * v13 + a2 + 15) )
        {
          v64 = sub_48B7B0(a1, 0);
          if ( (unsigned int)sub_438030(a1, a2, (unsigned int)v13, a4) )
          {
            sub_42BC50(a1, a7);
          }
          else
          {
            v65 = sub_48B5D0(a1);
            v66 = sub_470E40(a7, v65, 0);
            if ( v66 > 255 )
            {
              v79 = *(_BYTE **)(a7 + 120);
              if ( (unsigned __int64)(v79 + 5) > *(_QWORD *)(a7 + 128) )
              {
                sub_439150(a7);
                v79 = *(_BYTE **)(a7 + 120);
              }
              *v79 = 2;
              v80 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v80;
              *v80 = HIBYTE(v66);
              v81 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v81;
              *v81 = BYTE2(v66);
              v82 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v82;
              *v82 = BYTE1(v66);
              v83 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v83;
              *v83 = v66;
              ++*(_QWORD *)(a7 + 120);
              *(_DWORD *)(a7 + 3276) = 0;
              v69 = dword_65444C;
            }
            else
            {
              v67 = *(_BYTE **)(a7 + 120);
              if ( (unsigned __int64)(v67 + 2) > *(_QWORD *)(a7 + 128) )
              {
                sub_439150(a7);
                v67 = *(_BYTE **)(a7 + 120);
              }
              *v67 = 1;
              v68 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
              *(_QWORD *)(a7 + 120) = v68;
              *v68 = v66;
              ++*(_QWORD *)(a7 + 120);
              *(_DWORD *)(a7 + 3276) = 0;
              v69 = dword_65442C;
            }
            if ( v69 )
            {
              if ( v69 == 0x80000000 )
                v69 = 1 - v66;
              if ( v69 < 0 )
              {
                v84 = *(_DWORD *)(a7 + 48);
                if ( *(_DWORD *)(a7 + 44) < v84 )
                  *(_DWORD *)(a7 + 44) = v84;
              }
              else
              {
                v84 = *(_DWORD *)(a7 + 48);
              }
              *(_DWORD *)(a7 + 48) = v69 + v84;
            }
          }
          sub_48B090(a1, v64);
          v126 = 0;
        }
        else
        {
          v10 = (int *)(16LL * v13 + a2);
        }
        goto LABEL_2;
      }
      if ( v13 != -1 )
        goto LABEL_12;
      v127 = 1;
    }
    v19 = *((_BYTE *)v10 + 12);
    result = (unsigned int)v19 - 67;
    switch ( v19 )
    {
      case 0x43u:
        ++v127;
        goto LABEL_25;
      case 0x4Cu:
      case 0x84u:
        LOBYTE(v11) = v126 != 0;
        result = v10 == (int *)v128;
        if ( ((unsigned int)result & v11) == 0 )
          goto LABEL_25;
        v24 = *(_BYTE **)(a7 + 120);
        if ( v24 == *(_BYTE **)(a7 + 128) )
        {
          result = sub_439150(a7);
          v24 = *(_BYTE **)(a7 + 120);
        }
        *v24 = 64;
        *(_DWORD *)(a7 + 3276) = 0;
        v25 = dword_654C0C;
        ++*(_QWORD *)(a7 + 120);
        if ( !v25 )
          goto LABEL_25;
        if ( v25 == 0x80000000 )
        {
          v25 = 1;
          goto LABEL_35;
        }
        if ( v25 >= 0 )
        {
LABEL_35:
          v26 = *(_DWORD *)(a7 + 48);
          goto LABEL_36;
        }
        v26 = *(_DWORD *)(a7 + 48);
        if ( *(_DWORD *)(a7 + 44) < v26 )
          *(_DWORD *)(a7 + 44) = v26;
LABEL_36:
        result = (unsigned int)(v25 + v26);
        *(_DWORD *)(a7 + 48) = result;
        if ( v10 != (int *)v128 )
          goto LABEL_26;
        return result;
      case 0x4Du:
        if ( (unsigned int)sub_43C6D0(
                             a7,
                             *(_QWORD *)(v9 + 32),
                             (unsigned int)*(_QWORD *)(a7 + 120)
                           - *(_DWORD *)(a7 + 112)
                           - *(_DWORD *)(*(_QWORD *)(v9 + 32) + 4LL),
                             127) )
        {
          v35 = *(_DWORD *)(v9 + 20) + 3;
          *(_DWORD *)(v9 + 20) = v35;
        }
        else
        {
          v35 = *(_DWORD *)(v9 + 20);
        }
        sub_43C6D0(a7, v9, (unsigned int)(v35 - *(_DWORD *)(v9 + 4)), 127);
        v126 |= *(_DWORD *)(v9 + 24);
        *(_DWORD *)(a7 + 48) = *(_DWORD *)(v9 + 16) + 1;
        goto LABEL_51;
      case 0x54u:
      case 0x55u:
        sub_43C580(a7, (unsigned int)(v19 == 84) + 1, *(_QWORD *)(v9 + 32));
        v30 = "1";
        if ( *((_BYTE *)v10 + 12) != 84 )
          v30 = "0";
        v31 = sub_471010(a7, v30, 1, 0);
        if ( v31 > 255 )
        {
          v91 = *(_BYTE **)(a7 + 120);
          if ( (unsigned __int64)(v91 + 5) > *(_QWORD *)(a7 + 128) )
          {
            sub_439150(a7);
            v91 = *(_BYTE **)(a7 + 120);
          }
          *v91 = 2;
          v92 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v92;
          *v92 = HIBYTE(v31);
          v93 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v93;
          *v93 = BYTE2(v31);
          v94 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v94;
          *v94 = BYTE1(v31);
          v95 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v95;
          *v95 = v31;
          ++*(_QWORD *)(a7 + 120);
          *(_DWORD *)(a7 + 3276) = 0;
          v34 = dword_65444C;
        }
        else
        {
          v32 = *(_BYTE **)(a7 + 120);
          if ( (unsigned __int64)(v32 + 2) > *(_QWORD *)(a7 + 128) )
          {
            sub_439150(a7);
            v32 = *(_BYTE **)(a7 + 120);
          }
          *v32 = 1;
          v33 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v33;
          *v33 = v31;
          ++*(_QWORD *)(a7 + 120);
          *(_DWORD *)(a7 + 3276) = 0;
          v34 = dword_65442C;
        }
        if ( v34 )
        {
          if ( v34 == 0x80000000 )
            v34 = 1 - v31;
          if ( v34 < 0 )
          {
            v96 = *(_DWORD *)(a7 + 48);
            if ( *(_DWORD *)(a7 + 44) < v96 )
              *(_DWORD *)(a7 + 44) = v96;
          }
          else
          {
            v96 = *(_DWORD *)(a7 + 48);
          }
          *(_DWORD *)(a7 + 48) = v34 + v96;
        }
        sub_43C580(a7, 0, *(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL));
        sub_43C6D0(
          a7,
          *(_QWORD *)(v9 + 32),
          (unsigned int)*(_QWORD *)(a7 + 120) - *(_DWORD *)(a7 + 112) - *(_DWORD *)(*(_QWORD *)(v9 + 32) + 4LL),
          127);
        if ( (unsigned int)sub_43C6D0(
                             a7,
                             v9,
                             (unsigned int)*(_QWORD *)(a7 + 120) - *(_DWORD *)(a7 + 112) - *(_DWORD *)(v9 + 4),
                             127) )
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 4LL) += 3;
        v97 = "0";
        if ( *((_BYTE *)v10 + 12) != 84 )
          v97 = "1";
        v98 = sub_471010(a7, v97, 1, 0);
        if ( v98 > 255 )
        {
          v114 = *(_BYTE **)(a7 + 120);
          if ( (unsigned __int64)(v114 + 5) > *(_QWORD *)(a7 + 128) )
          {
            sub_439150(a7);
            v114 = *(_BYTE **)(a7 + 120);
          }
          *v114 = 2;
          v115 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v115;
          *v115 = HIBYTE(v98);
          v116 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v116;
          *v116 = BYTE2(v98);
          v117 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v117;
          *v117 = BYTE1(v98);
          v118 = *(_QWORD *)(a7 + 120);
          *(_QWORD *)(a7 + 120) = v118 + 1;
          *(_BYTE *)(v118 + 1) = v98;
          v119 = *(_QWORD *)(a7 + 120);
          *(_DWORD *)(a7 + 3276) = 0;
          v102 = dword_65444C;
          v103 = v119 + 1;
          *(_QWORD *)(a7 + 120) = v103;
        }
        else
        {
          v99 = *(_BYTE **)(a7 + 120);
          if ( (unsigned __int64)(v99 + 2) > *(_QWORD *)(a7 + 128) )
          {
            sub_439150(a7);
            v99 = *(_BYTE **)(a7 + 120);
          }
          *v99 = 1;
          v100 = *(_QWORD *)(a7 + 120);
          *(_QWORD *)(a7 + 120) = v100 + 1;
          *(_BYTE *)(v100 + 1) = v98;
          v101 = *(_QWORD *)(a7 + 120);
          *(_DWORD *)(a7 + 3276) = 0;
          v102 = dword_65442C;
          v103 = v101 + 1;
          *(_QWORD *)(a7 + 120) = v103;
        }
        if ( v102 )
        {
          if ( v102 == 0x80000000 )
            v102 = 1 - v98;
          if ( v102 < 0 )
          {
            v104 = *(_DWORD *)(a7 + 48);
            if ( *(_DWORD *)(a7 + 44) < v104 )
              *(_DWORD *)(a7 + 44) = v104;
          }
          else
          {
            v104 = *(_DWORD *)(a7 + 48);
          }
          *(_DWORD *)(a7 + 48) = v102 + v104;
        }
        sub_43C6D0(
          a7,
          *(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL),
          (unsigned int)(v103 - *(_DWORD *)(a7 + 112) - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 4LL)),
          127);
        v105 = *(_DWORD *)(v9 + 16);
        v106 = v9;
        v9 = *(_QWORD *)(v9 + 32);
        v126 = 0;
        *(_DWORD *)(a7 + 48) = v105 + 1;
        sub_449510(a1, v106);
LABEL_51:
        v36 = v9;
        v37 = *(_QWORD *)(v9 + 32);
        sub_449510(a1, v36);
        v38 = v37;
        v9 = *(_QWORD *)(v37 + 32);
        result = sub_449510(a1, v38);
        goto LABEL_25;
      case 0x83u:
        if ( v127 > 254 )
        {
          v85 = *(_BYTE **)(a7 + 120);
          if ( (unsigned __int64)(v85 + 5) > *(_QWORD *)(a7 + 128) )
          {
            sub_439150(a7);
            v85 = *(_BYTE **)(a7 + 120);
          }
          *v85 = 7;
          v86 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v86;
          *v86 = HIBYTE(v127);
          v87 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v87;
          *v87 = BYTE2(v127);
          v88 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v88;
          *v88 = BYTE1(v127);
          v89 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v89;
          *v89 = v127;
          ++*(_QWORD *)(a7 + 120);
          *(_DWORD *)(a7 + 3276) = 0;
          v29 = dword_6544EC;
        }
        else
        {
          v27 = *(_BYTE **)(a7 + 120);
          if ( (unsigned __int64)(v27 + 2) > *(_QWORD *)(a7 + 128) )
          {
            sub_439150(a7);
            v27 = *(_BYTE **)(a7 + 120);
          }
          *v27 = 6;
          v28 = (_BYTE *)(*(_QWORD *)(a7 + 120) + 1LL);
          *(_QWORD *)(a7 + 120) = v28;
          *v28 = v127;
          ++*(_QWORD *)(a7 + 120);
          *(_DWORD *)(a7 + 3276) = 0;
          v29 = dword_6544CC;
        }
        if ( v29 )
        {
          if ( v29 == 0x80000000 )
            v29 = 1 - v127;
          if ( v29 < 0 )
          {
            v90 = *(_DWORD *)(a7 + 48);
            if ( *(_DWORD *)(a7 + 44) < v90 )
              *(_DWORD *)(a7 + 44) = v90;
          }
          else
          {
            v90 = *(_DWORD *)(a7 + 48);
          }
          *(_DWORD *)(a7 + 48) = v29 + v90;
        }
        result = (unsigned int)*v10;
        v126 = 1;
        v127 = *v10;
        goto LABEL_25;
      case 0x85u:
        goto LABEL_25;
      default:
        v21 = *(_BYTE **)(a7 + 120);
        if ( v21 == *(_BYTE **)(a7 + 128) )
        {
          sub_439150(a7);
          v19 = *((_BYTE *)v10 + 12);
          v21 = *(_BYTE **)(a7 + 120);
        }
        *v21 = *((_BYTE *)qword_5081C0 + v19);
        ++*(_QWORD *)(a7 + 120);
        *(_DWORD *)(a7 + 3276) = *((_BYTE *)qword_5081C0 + *((unsigned __int8 *)v10 + 12)) == 105;
        result = 32LL * *((unsigned __int8 *)qword_5081C0 + *((unsigned __int8 *)v10 + 12));
        v22 = *(_DWORD *)((char *)&off_654400 + result + 12);
        if ( !v22 )
          goto LABEL_24;
        if ( v22 == 0x80000000 )
        {
          v22 = 1;
          goto LABEL_22;
        }
        if ( v22 >= 0 )
        {
LABEL_22:
          v23 = *(_DWORD *)(a7 + 48);
          goto LABEL_23;
        }
        v23 = *(_DWORD *)(a7 + 48);
        if ( *(_DWORD *)(a7 + 44) < v23 )
          *(_DWORD *)(a7 + 44) = v23;
LABEL_23:
        result = (unsigned int)(v22 + v23);
        *(_DWORD *)(a7 + 48) = result;
LABEL_24:
        v126 = 0;
LABEL_25:
        if ( v10 != (int *)v128 )
        {
LABEL_26:
          v10 = (int *)(16LL * v10[2] + a2);
          continue;
        }
        return result;
    }
  }
}

