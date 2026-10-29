__int64 __fastcall sub_D122D0(__int64 a1, int a2, unsigned int a3, int a4, int a5, _QWORD *a6)
{
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // r14
  int v13; // edx
  char v14; // al
  __int64 v15; // rsi
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rsi
  unsigned int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // r15d
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned int v31; // r15d
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // r15d
  __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned int v40; // r15d
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rsi
  unsigned int v44; // r15d
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned int v48; // r15d
  __int64 v49; // rdx
  __int64 v50; // rsi
  unsigned int v51; // r14d
  __int64 v52; // rdx
  __int64 v53; // r15
  __int64 v54; // rsi
  unsigned int v55; // r15d
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rsi
  unsigned int v59; // r15d
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int8 v63; // [rsp+0h] [rbp-F8h]
  _BYTE *v65; // [rsp+0h] [rbp-F8h]
  _BYTE *v67; // [rsp+0h] [rbp-F8h]
  _WORD *v69; // [rsp+0h] [rbp-F8h]
  _WORD *v71; // [rsp+0h] [rbp-F8h]
  _DWORD *v73; // [rsp+0h] [rbp-F8h]
  _DWORD *v75; // [rsp+0h] [rbp-F8h]
  _QWORD *v77; // [rsp+0h] [rbp-F8h]
  _QWORD *v79; // [rsp+0h] [rbp-F8h]
  __int64 v81; // [rsp+0h] [rbp-F8h]
  __int64 v83; // [rsp+0h] [rbp-F8h]
  _BYTE *v85; // [rsp+0h] [rbp-F8h]
  __int64 v88; // [rsp+0h] [rbp-F8h]
  __int64 v90; // [rsp+0h] [rbp-F8h]
  __int64 v91; // [rsp+8h] [rbp-F0h]
  __int64 v92; // [rsp+8h] [rbp-F0h]
  __int64 v93; // [rsp+10h] [rbp-E8h]
  __int64 v94; // [rsp+10h] [rbp-E8h]
  __int64 v95; // [rsp+10h] [rbp-E8h]
  __int64 v96; // [rsp+10h] [rbp-E8h]
  __int64 v97; // [rsp+10h] [rbp-E8h]
  __int64 v98; // [rsp+10h] [rbp-E8h]
  __int64 v99; // [rsp+10h] [rbp-E8h]
  __int64 v100; // [rsp+10h] [rbp-E8h]
  __int64 v101; // [rsp+10h] [rbp-E8h]
  __int64 v102; // [rsp+10h] [rbp-E8h]
  __int64 v103; // [rsp+10h] [rbp-E8h]
  __int64 v104; // [rsp+10h] [rbp-E8h]
  __int64 v105; // [rsp+10h] [rbp-E8h]
  __int64 v106; // [rsp+18h] [rbp-E0h]
  __int64 v107; // [rsp+18h] [rbp-E0h]
  __int64 v108; // [rsp+18h] [rbp-E0h]
  __int64 v109; // [rsp+18h] [rbp-E0h]
  __int64 v110; // [rsp+18h] [rbp-E0h]
  __int64 v111; // [rsp+18h] [rbp-E0h]
  __int64 v112; // [rsp+18h] [rbp-E0h]
  __int64 v113; // [rsp+18h] [rbp-E0h]
  __int64 v114; // [rsp+18h] [rbp-E0h]
  __int64 v115; // [rsp+18h] [rbp-E0h]
  __int64 v116; // [rsp+18h] [rbp-E0h]
  __int64 v117; // [rsp+18h] [rbp-E0h]
  __int64 v118; // [rsp+18h] [rbp-E0h]
  __int64 v119; // [rsp+18h] [rbp-E0h]
  __int64 v120; // [rsp+18h] [rbp-E0h]
  __int64 v121; // [rsp+20h] [rbp-D8h]
  int v122; // [rsp+20h] [rbp-D8h]
  int v123; // [rsp+20h] [rbp-D8h]
  int v124; // [rsp+20h] [rbp-D8h]
  int v125; // [rsp+20h] [rbp-D8h]
  int v126; // [rsp+20h] [rbp-D8h]
  int v127; // [rsp+20h] [rbp-D8h]
  int v128; // [rsp+20h] [rbp-D8h]
  int v129; // [rsp+20h] [rbp-D8h]
  int v130; // [rsp+20h] [rbp-D8h]
  int v131; // [rsp+20h] [rbp-D8h]
  int v132; // [rsp+20h] [rbp-D8h]
  __int64 v133; // [rsp+20h] [rbp-D8h]
  int v134; // [rsp+20h] [rbp-D8h]
  int v135; // [rsp+20h] [rbp-D8h]
  _BYTE v136[48]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v137[48]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v138[104]; // [rsp+90h] [rbp-68h] BYREF

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v15 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v93 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v15);
        v107 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v16 = a3;
        v122 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v16);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v93, v137, 0) )
            goto LABEL_9;
          v17 = a4 - a3 + v16++;
          sub_CFE430((__int64)v136, v107, v17);
          v65 = (_BYTE *)sub_D0C5D0((__int64)v137);
          *(_BYTE *)sub_D0C5D0((__int64)v136) = *v65;
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v122 == v16 )
            goto LABEL_94;
        }
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v94 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v18);
        v108 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v19 = a3;
        v123 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v19);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v94, v137, 0) )
            goto LABEL_9;
          v20 = a4 - a3 + v19++;
          sub_CFE430((__int64)v136, v108, v20);
          v67 = (_BYTE *)sub_D0C7E0((__int64)v137);
          *(_BYTE *)sub_D0C7E0((__int64)v136) = *v67;
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v123 == v19 )
            goto LABEL_94;
        }
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v21 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v95 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v21);
        v109 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v22 = a3;
        v124 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v22);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v95, v137, 0) )
            goto LABEL_9;
          v23 = a4 - a3 + v22++;
          sub_CFE430((__int64)v136, v109, v23);
          v69 = (_WORD *)sub_D0CBD0((__int64)v137);
          *(_WORD *)sub_D0CBD0((__int64)v136) = *v69;
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v124 == v22 )
            goto LABEL_94;
        }
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v24 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v96 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v24);
        v110 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v25 = a3;
        v125 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v25);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v96, v137, 0) )
            goto LABEL_9;
          v26 = a4 - a3 + v25++;
          sub_CFE430((__int64)v136, v110, v26);
          v71 = (_WORD *)sub_D0CDE0((__int64)v137);
          *(_WORD *)sub_D0CDE0((__int64)v136) = *v71;
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v125 == v25 )
            goto LABEL_94;
        }
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v27 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v97 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v27);
        v111 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v28 = a3;
        v126 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v28);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v97, v137, 0) )
            goto LABEL_9;
          v29 = a4 - a3 + v28++;
          sub_CFE430((__int64)v136, v111, v29);
          v73 = (_DWORD *)sub_D0D1D0((__int64)v137);
          *(_DWORD *)sub_D0D1D0((__int64)v136) = *v73;
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v126 == v28 )
            goto LABEL_94;
        }
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v30 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v98 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v30);
        v112 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v31 = a3;
        v127 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v31);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v98, v137, 0) )
            goto LABEL_9;
          v32 = a4 - a3 + v31++;
          sub_CFE430((__int64)v136, v112, v32);
          v75 = (_DWORD *)sub_D0D3E0((__int64)v137);
          *(_DWORD *)sub_D0D3E0((__int64)v136) = *v75;
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v127 == v31 )
            goto LABEL_94;
        }
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v33 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v99 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v33);
        v113 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v34 = a3;
        v128 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v34);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v99, v137, 0) )
            goto LABEL_9;
          v35 = a4 - a3 + v34++;
          sub_CFE430((__int64)v136, v113, v35);
          v77 = (_QWORD *)sub_D0D9C0((__int64)v137);
          *(_QWORD *)sub_D0D9C0((__int64)v136) = *v77;
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v128 == v34 )
            goto LABEL_94;
        }
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v36 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v100 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v36);
        v114 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v37 = a3;
        v129 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v37);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v100, v137, 0) )
            goto LABEL_9;
          v38 = a4 - a3 + v37++;
          sub_CFE430((__int64)v136, v114, v38);
          v79 = (_QWORD *)sub_D0DBD0((__int64)v137);
          *(_QWORD *)sub_D0DBD0((__int64)v136) = *v79;
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v129 == v37 )
            goto LABEL_94;
        }
      }
      break;
    case 8:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v39 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v101 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v39);
        v115 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v40 = a3;
        v130 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v40);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v101, v137, 0) )
            goto LABEL_9;
          v41 = a4 - a3 + v40++;
          sub_CFE430((__int64)v136, v115, v41);
          v81 = sub_D0E1E0((__int64)v137);
          v42 = sub_D0E1E0((__int64)v136);
          *(_QWORD *)v42 = *(_QWORD *)v81;
          *(_DWORD *)(v42 + 8) = *(_DWORD *)(v81 + 8);
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v130 == v40 )
            goto LABEL_94;
        }
      }
      break;
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v43 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v102 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v43);
        v116 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v44 = a3;
        v131 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v44);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v102, v137, 0) )
            goto LABEL_9;
          v45 = a4 - a3 + v44++;
          sub_CFE430((__int64)v136, v116, v45);
          v83 = sub_D0E230((__int64)v137);
          v46 = sub_D0E230((__int64)v136);
          *(_QWORD *)v46 = *(_QWORD *)v83;
          *(_DWORD *)(v46 + 8) = *(_DWORD *)(v83 + 8);
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v131 == v44 )
            goto LABEL_94;
        }
      }
      break;
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v47 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v103 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v47);
        v117 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v48 = a3;
        v132 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v48);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v103, v137, 0) )
            goto LABEL_9;
          v49 = a4 - a3 + v48++;
          sub_CFE430((__int64)v136, v117, v49);
          v85 = (_BYTE *)sub_D0E7B0((__int64)v137);
          *(_BYTE *)sub_D0E7B0((__int64)v136) = *v85;
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v132 == v48 )
            goto LABEL_94;
        }
      }
      break;
    case 11:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v50 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v118 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v50);
        v133 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v51 = a3;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v51);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v118, v137, 0) )
            goto LABEL_9;
          v52 = a4 - a3 + v51++;
          sub_CFE430((__int64)v136, v133, v52);
          v53 = sub_D0F1C0((__int64)v137);
          v92 = sub_D0F1C0((__int64)v136);
          sub_C20980(v92, (__int64 *)v53);
          *(_DWORD *)(v92 + 16) = *(_DWORD *)(v53 + 16);
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( a3 + a5 == v51 )
            goto LABEL_94;
        }
      }
      break;
    case 12:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v54 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v104 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v54);
        v119 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v55 = a3;
        v134 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v55);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v104, v137, 0) )
            goto LABEL_9;
          v56 = a4 - a3 + v55++;
          sub_CFE430((__int64)v136, v119, v56);
          v88 = sub_D0E280((__int64)v137);
          v57 = sub_D0E280((__int64)v136);
          *(_QWORD *)v57 = *(_QWORD *)v88;
          *(_DWORD *)(v57 + 8) = *(_DWORD *)(v88 + 8);
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v134 == v55 )
            goto LABEL_94;
        }
      }
      break;
    case 13:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v58 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v105 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v58);
        v120 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( !a5 )
          goto LABEL_94;
        v59 = a3;
        v135 = a3 + a5;
        while ( 1 )
        {
          sub_CFE430((__int64)v137, (__int64)v138, v59);
          if ( !(unsigned __int8)sub_DCC160(a1 + 384, v105, v137, 0) )
            goto LABEL_9;
          v60 = a4 - a3 + v59++;
          sub_CFE430((__int64)v136, v120, v60);
          v90 = sub_D0EA30((__int64)v137);
          v61 = sub_D0EA30((__int64)v136);
          sub_E23300(v61, v90);
          sub_E24D00(v136);
          sub_E232A0(v136);
          sub_E232A0(v137);
          if ( v135 == v59 )
            goto LABEL_94;
        }
      }
      break;
    case 14:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v9 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v106 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v138, v9);
        v121 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        if ( a5 )
        {
          v10 = a3;
          while ( 1 )
          {
            sub_CFE430((__int64)v137, (__int64)v138, v10);
            if ( !(unsigned __int8)sub_DCC160(a1 + 384, v106, v137, 0) )
              break;
            v11 = a4 - a3 + v10++;
            sub_CFE430((__int64)v136, v121, v11);
            v12 = sub_D0EF40((__int64)v137);
            v91 = sub_D0EF40((__int64)v136);
            sub_E23300(v91, v12);
            v13 = *(_DWORD *)(v12 + 56);
            *(_QWORD *)(v91 + 48) = *(_QWORD *)(v12 + 48);
            *(_DWORD *)(v91 + 56) = v13;
            sub_E24D00(v136);
            sub_E232A0(v136);
            sub_E232A0(v137);
            if ( a3 + a5 == v10 )
              goto LABEL_94;
          }
LABEL_9:
          sub_E232A0(v137);
          v14 = 0;
        }
        else
        {
LABEL_94:
          v14 = 1;
        }
        v63 = v14;
        sub_E232A0(v138);
        result = v63;
      }
      break;
  }
  return result;
}
