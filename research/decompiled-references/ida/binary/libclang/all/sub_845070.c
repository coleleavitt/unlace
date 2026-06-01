__int64 __fastcall sub_845070(__int64 *a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 *a5, __int64 a6)
{
  __int64 *v7; // r14
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rbp
  __int64 *v23; // rbx
  __int64 v24; // rsi
  __int64 *v25; // r12
  __int64 *v26; // rbp
  __int64 v27; // rsi
  __int64 *v28; // r12
  __int64 *v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  char v41; // al
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 *v66; // rdi
  __int64 *v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 *v70; // rdi
  __int64 *v71; // rbp
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 *v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 *v87; // rdi
  __int64 v88; // rbx
  __int64 *v89; // rbp
  __int64 *v90; // r12
  __int64 *v91; // r14
  __int64 v92; // rsi
  __int64 v93; // rsi
  __int64 v94; // rbx
  __int64 *v95; // rbp
  __int64 *v96; // r12
  __int64 *v97; // r14
  __int64 v98; // rsi
  __int64 v99; // rsi
  __int64 *v100; // rax
  __int64 *v101; // rax
  __int64 *v102; // rax
  __int64 *v103; // rax
  __int64 *v104; // rax
  __int64 v105; // rax
  __int64 *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v120; // [rsp+38h] [rbp-180h]
  __int64 v121; // [rsp+38h] [rbp-180h]
  __int64 *v122; // [rsp+48h] [rbp-170h]
  __int64 *v124; // [rsp+50h] [rbp-168h]
  __int64 *v125; // [rsp+50h] [rbp-168h]
  __int64 v126[4]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v127; // [rsp+80h] [rbp-138h] BYREF
  __int64 *v128; // [rsp+88h] [rbp-130h]
  __int64 v129; // [rsp+A0h] [rbp-118h] BYREF
  __int64 *v130; // [rsp+A8h] [rbp-110h]
  __int64 v131; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v132; // [rsp+C8h] [rbp-F0h]
  char v133; // [rsp+D4h] [rbp-E4h]
  __int64 v134[4]; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v135[4]; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v136[4]; // [rsp+120h] [rbp-98h] BYREF
  __int64 v137[4]; // [rsp+140h] [rbp-78h] BYREF
  __int64 v138[11]; // [rsp+160h] [rbp-58h] BYREF

  v7 = a2;
  v10 = *a1;
  v11 = sub_2575D20(a1, a2, a3);
  if ( v10 == v11 )
    sub_257CF50(v126, a1);
  else
    sub_25768A0(v126, a1);
  if ( v126[0] == v11 )
    sub_2581E80(v126, a3, 1);
  else
    sub_257BC30(v126, a3, 1);
  if ( *a2 == v11 )
    sub_257CF50(&v127, a2);
  else
    sub_25768A0(&v127, a2);
  if ( v127 == v11 )
    sub_2581E80(&v127, a4, 1);
  else
    sub_257BC30(&v127, a4, 1);
  if ( *a1 == v11 )
    sub_257CF50(&v129, a1);
  else
    sub_25768A0(&v129, a1);
  if ( v129 == v11 )
    sub_2581E80(&v129, a4, 1);
  else
    sub_257BC30(&v129, a4, 1);
  if ( *a2 == v11 )
    sub_257CF50(&v131, a2);
  else
    sub_25768A0(&v131, a2);
  if ( v131 == v11 )
    sub_2581E80(&v131, a3, 1);
  else
    sub_257BC30(&v131, a3, 1);
  if ( v126[0] == v11 )
    sub_257CF50(v138, v126);
  else
    sub_25768A0(v138, v126);
  if ( v138[0] == v11 )
  {
    sub_257DC40(v138, &v127, 1);
    v14 = v138[0];
    if ( *a5 != v11 )
    {
LABEL_21:
      if ( v11 != v14 )
      {
        sub_2576350(a5, v138, v12, v13);
        goto LABEL_23;
      }
      sub_25769A0(a5);
      if ( v138[0] != v11 )
        goto LABEL_40;
LABEL_138:
      sub_257D000(a5, v138, v20, v21);
      goto LABEL_23;
    }
  }
  else
  {
    sub_257BF10(v138, &v127, 1);
    v14 = v138[0];
    if ( *a5 != v11 )
      goto LABEL_21;
  }
  v70 = (__int64 *)a5[1];
  if ( v11 != v14 )
  {
    if ( !v70 )
      goto LABEL_40;
    if ( &v70[3 * *(v70 - 1)] == v70 )
    {
      v72 = 0;
    }
    else
    {
      v71 = &v70[3 * *(v70 - 1)];
      do
      {
        v71 -= 3;
        sub_5FF3B0(v71);
      }
      while ( v71 != v70 );
      v72 = 24 * *(v70 - 1);
    }
    operator delete[](v70 - 1, v72 + 8);
    v73 = v138[0];
    a5[1] = 0;
    if ( v73 != v11 )
    {
LABEL_40:
      sub_2576960(a5, v138);
      goto LABEL_23;
    }
    goto LABEL_138;
  }
  if ( v70 )
  {
    if ( &v70[3 * *(v70 - 1)] == v70 )
    {
      v99 = 0;
    }
    else
    {
      v121 = v11;
      v94 = v14;
      v95 = &v70[3 * *(v70 - 1)];
      v125 = a5;
      do
      {
        v95 -= 3;
        if ( *v95 == v94 )
        {
          v96 = (__int64 *)v95[1];
          if ( v96 )
          {
            v97 = &v96[3 * *(v96 - 1)];
            if ( v96 == v97 )
            {
              v98 = 0;
            }
            else
            {
              do
              {
                v97 -= 3;
                sub_5FF3B0(v97);
              }
              while ( v96 != v97 );
              v98 = 24 * *(v96 - 1);
            }
            operator delete[](v96 - 1, v98 + 8);
          }
          v95[1] = 0;
        }
        else
        {
          sub_25769A0(v95);
        }
      }
      while ( v95 != v70 );
      v11 = v121;
      v7 = a2;
      a5 = v125;
      v99 = 24 * *(v70 - 1);
    }
    operator delete[](v70 - 1, v99 + 8);
  }
  a5[1] = 0;
  sub_257D000(a5, v138, v12, v13);
LABEL_23:
  sub_5FF3B0(v138);
  if ( v129 == v11 )
    sub_257CF50(v138, &v129);
  else
    sub_25768A0(v138, &v129);
  if ( v138[0] == v11 )
  {
    sub_257DC20(v138, &v131, 1);
    v17 = v138[0];
    if ( *(_QWORD *)a6 != v11 )
    {
LABEL_27:
      if ( v11 != v17 )
      {
        sub_2576350(a6, v138, v15, v16);
        goto LABEL_29;
      }
      sub_25769A0(a6);
      if ( v138[0] != v11 )
        goto LABEL_112;
LABEL_128:
      sub_257D000(a6, v138, v64, v65);
      goto LABEL_29;
    }
  }
  else
  {
    sub_257BF20(v138, &v131, 1);
    v17 = v138[0];
    if ( *(_QWORD *)a6 != v11 )
      goto LABEL_27;
  }
  v66 = *(__int64 **)(a6 + 8);
  if ( v11 != v17 )
  {
    if ( !v66 )
      goto LABEL_112;
    if ( &v66[3 * *(v66 - 1)] == v66 )
    {
      v68 = 0;
    }
    else
    {
      v67 = &v66[3 * *(v66 - 1)];
      do
      {
        v67 -= 3;
        sub_5FF3B0(v67);
      }
      while ( v67 != v66 );
      v68 = 24 * *(v66 - 1);
    }
    operator delete[](v66 - 1, v68 + 8);
    v69 = v138[0];
    *(_QWORD *)(a6 + 8) = 0;
    if ( v69 != v11 )
    {
LABEL_112:
      sub_2576960(a6, v138);
      goto LABEL_29;
    }
    goto LABEL_128;
  }
  if ( v66 )
  {
    if ( &v66[3 * *(v66 - 1)] == v66 )
    {
      v93 = 0;
    }
    else
    {
      v120 = v11;
      v88 = v17;
      v89 = &v66[3 * *(v66 - 1)];
      v122 = v7;
      v124 = a5;
      do
      {
        v89 -= 3;
        if ( *v89 == v88 )
        {
          v90 = (__int64 *)v89[1];
          if ( v90 )
          {
            v91 = &v90[3 * *(v90 - 1)];
            if ( v90 == v91 )
            {
              v92 = 0;
            }
            else
            {
              do
              {
                v91 -= 3;
                sub_5FF3B0(v91);
              }
              while ( v90 != v91 );
              v92 = 24 * *(v90 - 1);
            }
            operator delete[](v90 - 1, v92 + 8);
          }
          v89[1] = 0;
        }
        else
        {
          sub_25769A0(v89);
        }
      }
      while ( v89 != v66 );
      v11 = v120;
      v7 = v122;
      a5 = v124;
      v93 = 24 * *(v66 - 1);
    }
    operator delete[](v66 - 1, v93 + 8);
  }
  *(_QWORD *)(a6 + 8) = 0;
  sub_257D000(a6, v138, v15, v16);
LABEL_29:
  sub_5FF3B0(v138);
  v18 = a5;
  if ( *a5 == v11 )
    v18 = (__int64 *)a5[1];
  if ( (*((_BYTE *)v18 + 20) & 7) == 1 )
  {
    if ( *(_QWORD *)a6 == v11 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a6 + 8) + 20LL) & 7) != 1 )
        goto LABEL_32;
    }
    else if ( (*(_BYTE *)(a6 + 20) & 7) != 1 )
    {
      goto LABEL_32;
    }
    v31 = *a1;
    if ( *a1 == v11 )
    {
      if ( (*(_BYTE *)(a1[1] + 20) & 7) == 0 )
      {
        v32 = 1;
        goto LABEL_148;
      }
    }
    else if ( (*((_BYTE *)a1 + 20) & 7) == 0 )
    {
      v32 = 1;
LABEL_64:
      sub_25785E0(v137, v31, v32);
      goto LABEL_65;
    }
    v74 = v7;
    if ( *v7 == v11 )
      v74 = (__int64 *)v7[1];
    v41 = 0;
    if ( (*((_BYTE *)v74 + 20) & 7) != 0 )
    {
LABEL_76:
      v42 = *(_QWORD *)a3;
      if ( *(_QWORD *)a3 == v11 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a3 + 8) + 20LL) & 7) == 0 )
        {
          v43 = 1;
          goto LABEL_154;
        }
      }
      else if ( (*(_BYTE *)(a3 + 20) & 7) == 0 )
      {
        v43 = 1;
LABEL_79:
        sub_25785E0(v137, v42, v43);
        goto LABEL_80;
      }
      v52 = (__int64)a4;
      if ( *a4 == v11 )
        v52 = a4[1];
      if ( (*(_BYTE *)(v52 + 20) & 7) != 0 )
      {
        if ( v41 )
          goto LABEL_90;
        v100 = v126;
        if ( v126[0] == v11 )
          v100 = (__int64 *)v126[1];
        if ( (*((_BYTE *)v100 + 20) & 7) != 0 )
        {
          v101 = &v127;
          if ( v127 == v11 )
            v101 = v128;
          if ( (*((_BYTE *)v101 + 20) & 7) != 0 )
          {
            v102 = &v129;
            if ( v129 == v11 )
              v102 = v130;
            if ( (*((_BYTE *)v102 + 20) & 7) != 0 )
            {
              if ( v131 == v11 )
              {
                if ( (*(_BYTE *)(v132 + 20) & 7) != 0 )
                {
                  v28 = (__int64 *)v132;
LABEL_54:
                  v29 = &v28[3 * *(v28 - 1)];
                  if ( v28 == v29 )
                  {
                    v30 = 0;
                  }
                  else
                  {
                    do
                    {
                      v29 -= 3;
                      sub_5FF3B0(v29);
                    }
                    while ( v28 != v29 );
                    v30 = 24 * *(v28 - 1);
                  }
                  operator delete[](v28 - 1, v30 + 8);
                  goto LABEL_58;
                }
              }
              else if ( (v133 & 7) != 0 )
              {
                goto LABEL_33;
              }
            }
          }
        }
        v103 = a1;
        if ( *a1 == v11 )
          v103 = (__int64 *)a1[1];
        if ( (*((_BYTE *)v103 + 20) & 7) == 1 )
        {
          sub_845030((__int64)v137, *a1, v52);
          sub_835270(v137, a1, v115);
          sub_835190((__int64)v138, v137, v116);
          sub_834250(a1, v138, v117);
          sub_5FF3B0(v138);
          sub_5FF3B0(v137);
        }
        v104 = v7;
        if ( *v7 == v11 )
          v104 = (__int64 *)v7[1];
        if ( (*((_BYTE *)v104 + 20) & 7) == 1 )
        {
          sub_845030((__int64)v137, *v7, v52);
          sub_835270(v137, v7, v112);
          sub_835190((__int64)v138, v137, v113);
          sub_834250(v7, v138, v114);
          sub_5FF3B0(v138);
          sub_5FF3B0(v137);
        }
        v105 = a3;
        if ( *(_QWORD *)a3 == v11 )
          v105 = *(_QWORD *)(a3 + 8);
        if ( (*(_BYTE *)(v105 + 20) & 7) == 1 )
        {
          sub_845030((__int64)v137, *(_QWORD *)a3, v52);
          sub_835270(v137, (_QWORD *)a3, v109);
          sub_835190((__int64)v138, v137, v110);
          sub_834250((__int64 *)a3, v138, v111);
          sub_5FF3B0(v138);
          sub_5FF3B0(v137);
        }
        v106 = a4;
        if ( *a4 == v11 )
          v106 = (__int64 *)a4[1];
        if ( (*((_BYTE *)v106 + 20) & 7) != 1 )
          goto LABEL_90;
        sub_845030((__int64)v137, *a4, v52);
        sub_835270(v137, a4, v107);
        sub_835190((__int64)v138, v137, v108);
        v87 = a4;
        goto LABEL_176;
      }
      v43 = 0;
      if ( v42 != v11 )
        goto LABEL_79;
LABEL_154:
      sub_257CEA0(v137, v42, v43);
LABEL_80:
      sub_835270(v137, (_QWORD *)a3, v44);
      if ( v11 == v137[0] )
        sub_257D000(v138, v137, v45, v46);
      else
        sub_2576960(v138, v137);
      sub_834250((__int64 *)a3, v138, v47);
      sub_5FF3B0(v138);
      sub_5FF3B0(v137);
      if ( *a4 == v11 )
        sub_257CEA0(v137, v11, (*(_BYTE *)(a4[1] + 20) & 7) == 0);
      else
        sub_25785E0(v137, *a4, (*((_BYTE *)a4 + 20) & 7) == 0);
      sub_835270(v137, a4, v48);
      if ( v11 == v137[0] )
        sub_257D000(v138, v137, v49, v50);
      else
        sub_2576960(v138, v137);
      sub_834250(a4, v138, v51);
      sub_5FF3B0(v138);
      sub_5FF3B0(v137);
      if ( *a1 == v11 )
      {
        if ( (*(_BYTE *)(a1[1] + 20) & 7) != 1 )
          goto LABEL_88;
        sub_257CDE0(v137, v11);
      }
      else
      {
        if ( (*((_BYTE *)a1 + 20) & 7) != 1 )
        {
LABEL_88:
          if ( *v7 == v11 )
          {
            if ( (*(_BYTE *)(v7[1] + 20) & 7) != 1 )
              goto LABEL_90;
            sub_257CDE0(v137, v11);
          }
          else
          {
            if ( (*((_BYTE *)v7 + 20) & 7) != 1 )
            {
LABEL_90:
              sub_835150((__int64)v136, v7, v52);
              sub_8203E0(v136, (__int64)a4, v53);
              sub_835150((__int64)v135, a1, v54);
              sub_8203E0(v135, a3, v55);
              if ( v11 == v135[0] )
                sub_257CF50(v137, v135);
              else
                sub_25768A0(v137, v135);
              if ( v11 == v137[0] )
                sub_257DC40(v137, v136, 1);
              else
                sub_257BF10(v137, v136, 1);
              if ( *a1 == v11 )
                sub_257CE40(v134, v11, 0);
              else
                sub_2579AA0(v134, *a1, 0);
              if ( v11 == v134[0] )
                sub_257D420(v134, 0);
              else
                sub_2579170(v134, 0);
              if ( v11 == v134[0] )
                sub_257CF50(v138, v134);
              else
                sub_25768A0(v138, v134);
              sub_8203E0(v138, (__int64)v137, v56);
              sub_834250(a5, v138, v57);
              sub_5FF3B0(v138);
              sub_5FF3B0(v134);
              sub_5FF3B0(v137);
              sub_5FF3B0(v135);
              sub_5FF3B0(v136);
              sub_835150((__int64)v136, v7, v58);
              sub_8203E0(v136, a3, v59);
              sub_835150((__int64)v135, a1, v60);
              sub_8203E0(v135, (__int64)a4, v61);
              if ( v11 == v135[0] )
                sub_257CF50(v137, v135);
              else
                sub_25768A0(v137, v135);
              if ( v11 == v137[0] )
                sub_257DC20(v137, v136, 1);
              else
                sub_257BF20(v137, v136, 1);
              if ( *a1 == v11 )
                sub_257CE40(v134, v11, 0);
              else
                sub_2579AA0(v134, *a1, 0);
              if ( v11 == v134[0] )
                sub_257D420(v134, 0);
              else
                sub_2579170(v134, 0);
              if ( v11 == v134[0] )
                sub_257CF50(v138, v134);
              else
                sub_25768A0(v138, v134);
              sub_8203E0(v138, (__int64)v137, v62);
              sub_834250((__int64 *)a6, v138, v63);
              sub_5FF3B0(v138);
              sub_5FF3B0(v134);
              sub_5FF3B0(v137);
              sub_5FF3B0(v135);
              sub_5FF3B0(v136);
              goto LABEL_32;
            }
            sub_2579610(v137);
          }
          sub_835270(v137, v7, v84);
          sub_835190((__int64)v138, v137, v85);
          v87 = v7;
LABEL_176:
          sub_834250(v87, v138, v86);
          sub_5FF3B0(v138);
          sub_5FF3B0(v137);
          goto LABEL_90;
        }
        sub_2579610(v137);
      }
      sub_835270(v137, a1, v75);
      sub_835190((__int64)v138, v137, v76);
      sub_834250(a1, v138, v77);
      sub_5FF3B0(v138);
      sub_5FF3B0(v137);
      goto LABEL_88;
    }
    v32 = 0;
    if ( v31 != v11 )
      goto LABEL_64;
LABEL_148:
    sub_257CEA0(v137, v31, v32);
LABEL_65:
    sub_835270(v137, a1, v33);
    if ( v11 == v137[0] )
      sub_257D000(v138, v137, v34, v35);
    else
      sub_2576960(v138, v137);
    sub_834250(a1, v138, v36);
    sub_5FF3B0(v138);
    sub_5FF3B0(v137);
    if ( *v7 == v11 )
      sub_257CEA0(v137, v11, (*(_BYTE *)(v7[1] + 20) & 7) == 0);
    else
      sub_25785E0(v137, *v7, (*((_BYTE *)v7 + 20) & 7) == 0);
    sub_835270(v137, v7, v37);
    if ( v11 == v137[0] )
      sub_257D000(v138, v137, v38, v39);
    else
      sub_2576960(v138, v137);
    sub_834250(v7, v138, v40);
    sub_5FF3B0(v138);
    sub_5FF3B0(v137);
    if ( *(_QWORD *)a3 == v11 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 8) + 20LL) & 7) != 1 )
        goto LABEL_73;
      sub_257CDE0(v137, v11);
    }
    else
    {
      if ( (*(_BYTE *)(a3 + 20) & 7) != 1 )
        goto LABEL_73;
      sub_2579610(v137);
    }
    sub_835270(v137, (_QWORD *)a3, v81);
    sub_835190((__int64)v138, v137, v82);
    sub_834250((__int64 *)a3, v138, v83);
    sub_5FF3B0(v138);
    sub_5FF3B0(v137);
LABEL_73:
    if ( *a4 == v11 )
    {
      if ( (*(_BYTE *)(a4[1] + 20) & 7) != 1 )
        goto LABEL_75;
      sub_257CDE0(v137, v11);
    }
    else
    {
      if ( (*((_BYTE *)a4 + 20) & 7) != 1 )
      {
LABEL_75:
        v41 = 1;
        goto LABEL_76;
      }
      sub_2579610(v137);
    }
    sub_835270(v137, a4, v78);
    sub_835190((__int64)v138, v137, v79);
    sub_834250(a4, v138, v80);
    sub_5FF3B0(v138);
    sub_5FF3B0(v137);
    goto LABEL_75;
  }
LABEL_32:
  if ( v11 != v131 )
  {
LABEL_33:
    sub_25769A0(&v131);
    goto LABEL_34;
  }
  v28 = (__int64 *)v132;
  if ( v132 )
    goto LABEL_54;
LABEL_58:
  v132 = 0;
LABEL_34:
  if ( v11 == v129 )
  {
    v25 = v130;
    if ( v130 )
    {
      v26 = &v130[3 * *(v130 - 1)];
      if ( v130 == v26 )
      {
        v27 = 0;
      }
      else
      {
        do
        {
          v26 -= 3;
          sub_5FF3B0(v26);
        }
        while ( v25 != v26 );
        v27 = 24 * *(v25 - 1);
      }
      operator delete[](v25 - 1, v27 + 8);
    }
    v130 = nullptr;
  }
  else
  {
    sub_25769A0(&v129);
  }
  if ( v11 == v127 )
  {
    v22 = v128;
    if ( v128 )
    {
      v23 = &v128[3 * *(v128 - 1)];
      if ( v128 == v23 )
      {
        v24 = 0;
      }
      else
      {
        do
        {
          v23 -= 3;
          sub_5FF3B0(v23);
        }
        while ( v22 != v23 );
        v24 = 24 * *(v22 - 1);
      }
      operator delete[](v22 - 1, v24 + 8);
    }
    v128 = nullptr;
  }
  else
  {
    sub_25769A0(&v127);
  }
  return sub_5FF3B0(v126);
}

