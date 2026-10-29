/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E1F0
// Address: 0x0002E1F0

//----- (0002E1F0) --------------------------------------------------------
void __fastcall sub_2E1F0(int a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // r6
  unsigned int v6; // r9
  unsigned int v7; // r11
  unsigned int v8; // r6
  int v9; // r3
  bool v10; // nf
  int v11; // r2
  int v12; // r3
  __int64 v13; // r4
  _DWORD *v14; // r11
  int v15; // r7
  int v16; // r8
  int v17; // r3
  unsigned int v18; // kr08_4
  int v19; // r8
  int v20; // r3
  _DWORD *v21; // r3
  int v22; // r11
  int v23; // r8
  int v24; // r1
  unsigned int v25; // r5
  bool v26; // cf
  bool v27; // cc
  unsigned int v28; // r4
  int v29; // r7
  int v30; // r1
  int v31; // r2
  int v32; // r3
  _DWORD *v33; // r4
  int v34; // r1
  char *v35; // r4
  unsigned int v36; // r5
  int v37; // r7
  char *v38; // r4
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r1
  int v43; // r7
  int v44; // r1
  int v45; // r2
  int v46; // r3
  _DWORD *v47; // r4
  int v48; // r1
  char *v49; // r0
  int v50; // r6
  int v51; // r9
  char *v52; // r7
  char *v53; // r0
  int v54; // r6
  char *v55; // r12
  char *v56; // lr
  char *v57; // r4
  int v58; // r0
  int v59; // r1
  int v60; // r2
  int v61; // r3
  char *v62; // r5
  int v63; // r1
  char *v64; // r0
  __int64 v65; // kr28_8
  char *v66; // r0
  int v67; // lr
  char *v68; // r7
  char *v69; // r12
  char *v70; // r5
  int v71; // r0
  int v72; // r1
  int v73; // r2
  int v74; // r3
  char *v75; // r6
  int v76; // r1
  int v77; // r7
  char *v78; // r4
  int v79; // r1
  int v80; // r2
  int v81; // r3
  int v82; // r1
  char *v83; // r0
  __int64 v84; // kr30_8
  char *v85; // r0
  int v86; // lr
  char *v87; // r7
  char *v88; // r12
  char *v89; // r5
  int v90; // r0
  int v91; // r1
  int v92; // r2
  int v93; // r3
  char *v94; // r6
  int v95; // r1
  char *v96; // r0
  int v97; // r7
  int v98; // r9
  char *v99; // r6
  int v100; // r7
  char *v101; // lr
  int v102; // r12
  char *v103; // r4
  int v104; // r0
  int v105; // r1
  int v106; // r2
  int v107; // r3
  _DWORD *v108; // r5
  int v109; // r1
  unsigned int v110; // [sp+8h] [bp-7Ch]
  unsigned int v111; // [sp+Ch] [bp-78h]
  __int64 v112; // [sp+10h] [bp-74h]
  __int64 v113; // [sp+18h] [bp-6Ch]
  int i; // [sp+24h] [bp-60h]
  __int64 v115; // [sp+28h] [bp-5Ch]
  __int64 v116; // [sp+30h] [bp-54h]
  __int64 v118; // [sp+48h] [bp-3Ch] BYREF
  int v119; // [sp+50h] [bp-34h]
  int v120; // [sp+54h] [bp-30h]
  int v121; // [sp+58h] [bp-2Ch]
  int v122; // [sp+5Ch] [bp-28h]
  __int64 v123; // [sp+60h] [bp-24h] BYREF
  int v124; // [sp+68h] [bp-1Ch]
  int v125; // [sp+6Ch] [bp-18h]
  int v126; // [sp+70h] [bp-14h]
  int v127; // [sp+74h] [bp-10h]

  if ( !sub_7643C(&v123, 64, 1, (char **)a1, *(char **)(a1 + 4)) )
    *(_BYTE *)(a1 + 12) = 0;
  v5 = a2[1];
  v6 = HIDWORD(v123);
  v7 = v123;
  if ( (_DWORD)a3 != v5 )
  {
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v122 = 0;
    if ( (unsigned int)a3 >= v5 )
    {
      if ( (unsigned int)a3 > v5 )
      {
        v35 = (char *)*a2;
        v36 = a2[2];
        if ( *a2 <= (unsigned int)&v118 && &v118 < (__int64 *)&v35[24 * v36] )
        {
          v123 = v118;
          v124 = v119;
          v125 = v120;
          v126 = v121;
          v127 = v122;
          if ( (unsigned int)a3 <= v36 )
            goto LABEL_84;
          v83 = (char *)sub_78018((int)a2, nullptr, a3, 0x18u);
          v84 = *(_QWORD *)(a2 + 1);
          v35 = v83;
          a2[2] = v36;
          v85 = (char *)*a2;
          v86 = v84 - 1;
          if ( (int)v84 - 1 >= 0 )
          {
            v87 = v85 + 24;
            v88 = v35 + 24;
            do
            {
              v89 = v88 - 24;
              v90 = *((_DWORD *)v87 - 6);
              v91 = *((_DWORD *)v87 - 5);
              v92 = *((_DWORD *)v87 - 4);
              v93 = *((_DWORD *)v87 - 3);
              v94 = v87 - 8;
              --v86;
              v87 += 24;
              v88 += 24;
              *(_DWORD *)v89 = v90;
              *((_DWORD *)v89 + 1) = v91;
              *((_DWORD *)v89 + 2) = v92;
              *((_DWORD *)v89 + 3) = v93;
              v89 += 16;
              v95 = *((_DWORD *)v94 + 1);
              *(_DWORD *)v89 = *(_DWORD *)v94;
              *((_DWORD *)v89 + 1) = v95;
            }
            while ( v86 != -1 );
            v85 = (char *)*a2;
          }
          sub_77F70(v85);
          v5 = a2[1];
          *a2 = v35;
          a2[2] = HIDWORD(v84);
          if ( (unsigned int)a3 > v5 )
          {
LABEL_84:
            v77 = 24 * v5;
            while ( 1 )
            {
              v78 = &v35[v77];
              v79 = HIDWORD(v123);
              v80 = v124;
              v81 = v125;
              ++v5;
              v77 += 24;
              *(_DWORD *)v78 = v123;
              *((_DWORD *)v78 + 1) = v79;
              *((_DWORD *)v78 + 2) = v80;
              *((_DWORD *)v78 + 3) = v81;
              v78 += 16;
              v82 = v127;
              *(_DWORD *)v78 = v126;
              *((_DWORD *)v78 + 1) = v82;
              if ( (unsigned int)a3 <= v5 )
                break;
              v35 = (char *)*a2;
            }
          }
        }
        else
        {
          if ( (unsigned int)a3 <= v36 )
            goto LABEL_53;
          v64 = (char *)sub_78018((int)a2, nullptr, a3, 0x18u);
          v65 = *(_QWORD *)(a2 + 1);
          v35 = v64;
          a2[2] = v36;
          v66 = (char *)*a2;
          v67 = v65 - 1;
          if ( (int)v65 - 1 >= 0 )
          {
            v68 = v66 + 24;
            v69 = v35 + 24;
            do
            {
              v70 = v69 - 24;
              v71 = *((_DWORD *)v68 - 6);
              v72 = *((_DWORD *)v68 - 5);
              v73 = *((_DWORD *)v68 - 4);
              v74 = *((_DWORD *)v68 - 3);
              v75 = v68 - 8;
              --v67;
              v68 += 24;
              v69 += 24;
              *(_DWORD *)v70 = v71;
              *((_DWORD *)v70 + 1) = v72;
              *((_DWORD *)v70 + 2) = v73;
              *((_DWORD *)v70 + 3) = v74;
              v70 += 16;
              v76 = *((_DWORD *)v75 + 1);
              *(_DWORD *)v70 = *(_DWORD *)v75;
              *((_DWORD *)v70 + 1) = v76;
            }
            while ( v67 != -1 );
            v66 = (char *)*a2;
          }
          sub_77F70(v66);
          v5 = a2[1];
          *a2 = v35;
          a2[2] = HIDWORD(v65);
          if ( (unsigned int)a3 > v5 )
          {
LABEL_53:
            v37 = 24 * v5;
            while ( 1 )
            {
              v38 = &v35[v37];
              v39 = HIDWORD(v118);
              v40 = v119;
              v41 = v120;
              ++v5;
              v37 += 24;
              *(_DWORD *)v38 = v118;
              *((_DWORD *)v38 + 1) = v39;
              *((_DWORD *)v38 + 2) = v40;
              *((_DWORD *)v38 + 3) = v41;
              v38 += 16;
              v42 = v122;
              *(_DWORD *)v38 = v121;
              *((_DWORD *)v38 + 1) = v42;
              if ( (unsigned int)a3 <= v5 )
                break;
              v35 = (char *)*a2;
            }
          }
        }
        a2[1] = a3;
      }
    }
    else
    {
      a2[1] = a3;
    }
  }
  v8 = v7;
  v113 = 0;
  v115 = 0;
  for ( i = 0; ; i = v22 )
  {
    if ( !*(_BYTE *)(a1 + 12) )
      return;
    if ( !sub_7643C(&v123, 64, 1, (char **)a1, *(char **)(a1 + 4)) )
      *(_BYTE *)(a1 + 12) = 0;
    v116 = v123;
    if ( !sub_7643C(&v123, 64, 1, (char **)a1, *(char **)(a1 + 4)) )
      *(_BYTE *)(a1 + 12) = 0;
    LOBYTE(v9) = v123;
    v10 = (v123 & 2) != 0;
    *(_DWORD *)(a1 + 8) = v123;
    if ( v10 )
    {
      if ( !sub_7643C(&v123, 64, 1, (char **)a1, *(char **)(a1 + 4)) )
        *(_BYTE *)(a1 + 12) = 0;
      v112 = v123;
      v9 = *(_DWORD *)(a1 + 8);
      if ( (v9 & 1) == 0 )
      {
LABEL_12:
        v11 = v9 & 0xC;
        v12 = v9 & 8;
        if ( v11 != 12 )
          goto LABEL_13;
        goto LABEL_63;
      }
    }
    else
    {
      v112 = 0;
      if ( (v9 & 1) == 0 )
        goto LABEL_12;
    }
    if ( !sub_7643C(&v123, 64, 1, (char **)a1, *(char **)(a1 + 4)) )
      *(_BYTE *)(a1 + 12) = 0;
    v113 = v123;
    v12 = *(_DWORD *)(a1 + 8) & 8;
    if ( (*(_DWORD *)(a1 + 8) & 0xC) != 0xC )
    {
LABEL_13:
      if ( !v12 )
        v115 = 0;
      goto LABEL_15;
    }
LABEL_63:
    if ( !sub_7643C(&v123, 64, 1, (char **)a1, *(char **)(a1 + 4)) )
      *(_BYTE *)(a1 + 12) = 0;
    v115 += v123;
LABEL_15:
    if ( v116 >= 1 )
      break;
    v22 = i;
LABEL_25:
    ;
  }
  v13 = 0;
  v14 = a2;
  v110 = v8;
  v15 = 24 * i;
  while ( 1 )
  {
    v16 = v13;
    v17 = *(_DWORD *)(a1 + 8);
    v111 = i + v13;
    if ( (v17 & 2) == 0 )
    {
      if ( !sub_7643C(&v123, 64, 1, (char **)a1, *(char **)(a1 + 4)) )
        *(_BYTE *)(a1 + 12) = 0;
      v112 = v123;
      v17 = *(_DWORD *)(a1 + 8);
    }
    v18 = v110 + v112;
    v6 = (__PAIR64__(v6, v110) + v112) >> 32;
    v110 += v112;
    if ( (v17 & 1) == 0 )
    {
      if ( !sub_7643C(&v123, 64, 1, (char **)a1, *(char **)(a1 + 4)) )
        *(_BYTE *)(a1 + 12) = 0;
      v17 = *(_DWORD *)(a1 + 8);
      v113 = v123;
    }
    if ( (v17 & 8) != 0 && (v17 & 4) == 0 )
      break;
    if ( !*(_BYTE *)(a1 + 12) )
      goto LABEL_36;
LABEL_22:
    if ( v111 == a3 )
      return;
    ++v13;
    v19 = v16 + i + 1;
    v20 = *v14 + v15;
    *(_DWORD *)v20 = v18;
    v15 += 24;
    *(_DWORD *)(v20 + 4) = v6;
    *(_QWORD *)(v20 + 8) = v113;
    *(_QWORD *)(v20 + 16) = v115;
    if ( v13 == v116 )
    {
      v21 = v14;
      v8 = v18;
      v22 = v19;
      a2 = v21;
      goto LABEL_25;
    }
  }
  if ( !sub_7643C(&v123, 64, 1, (char **)a1, *(char **)(a1 + 4)) )
  {
    v23 = (int)v14;
    *(_BYTE *)(a1 + 12) = 0;
    v24 = i + v13;
    v25 = v14[1];
    v26 = v25 >= v111;
    v27 = v25 > v111;
    if ( v25 == v111 )
      return;
    goto LABEL_37;
  }
  v115 += v123;
  if ( *(_BYTE *)(a1 + 12) )
    goto LABEL_22;
LABEL_36:
  v23 = (int)v14;
  v24 = i + v13;
  v25 = v14[1];
  v26 = v25 >= v111;
  v27 = v25 > v111;
  if ( v25 == v111 )
    return;
LABEL_37:
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  if ( v27 )
  {
    *(_DWORD *)(v23 + 4) = v24;
  }
  else if ( !v26 )
  {
    v28 = *(_DWORD *)(v23 + 8);
    if ( *(_DWORD *)v23 > (unsigned int)&v118 || (unsigned int)&v118 >= *(_DWORD *)v23 + 24 * v28 )
    {
      if ( v28 >= v111 )
        goto LABEL_67;
      v49 = (char *)sub_78018(v23, nullptr, v111, 0x18u);
      v51 = *(_DWORD *)(v23 + 8);
      v50 = *(_DWORD *)(v23 + 4);
      v52 = v49;
      *(_DWORD *)(v23 + 8) = v28;
      v53 = *(char **)v23;
      v54 = v50 - 1;
      if ( v54 >= 0 )
      {
        v55 = v53 + 24;
        v56 = v52 + 24;
        do
        {
          v57 = v56 - 24;
          v58 = *((_DWORD *)v55 - 6);
          v59 = *((_DWORD *)v55 - 5);
          v60 = *((_DWORD *)v55 - 4);
          v61 = *((_DWORD *)v55 - 3);
          v62 = v55 - 8;
          --v54;
          v55 += 24;
          v56 += 24;
          *(_DWORD *)v57 = v58;
          *((_DWORD *)v57 + 1) = v59;
          *((_DWORD *)v57 + 2) = v60;
          *((_DWORD *)v57 + 3) = v61;
          v57 += 16;
          v63 = *((_DWORD *)v62 + 1);
          *(_DWORD *)v57 = *(_DWORD *)v62;
          *((_DWORD *)v57 + 1) = v63;
        }
        while ( v54 != -1 );
        v53 = *(char **)v23;
      }
      sub_77F70(v53);
      v25 = *(_DWORD *)(v23 + 4);
      *(_DWORD *)v23 = v52;
      *(_DWORD *)(v23 + 8) = v51;
      if ( v111 > v25 )
      {
LABEL_67:
        v43 = 24 * v25;
        do
        {
          v44 = HIDWORD(v118);
          v45 = v119;
          v46 = v120;
          ++v25;
          v47 = (_DWORD *)(*(_DWORD *)v23 + v43);
          v43 += 24;
          *v47 = v118;
          v47[1] = v44;
          v47[2] = v45;
          v47[3] = v46;
          v47 += 4;
          v48 = v122;
          *v47 = v121;
          v47[1] = v48;
        }
        while ( v111 != v25 );
      }
    }
    else
    {
      v123 = v118;
      v124 = v119;
      v125 = v120;
      v126 = v121;
      v127 = v122;
      if ( v28 >= v111 )
        goto LABEL_44;
      v96 = (char *)sub_78018(v23, nullptr, v111, 0x18u);
      v98 = *(_DWORD *)(v23 + 8);
      v97 = *(_DWORD *)(v23 + 4);
      v99 = v96;
      *(_DWORD *)(v23 + 8) = v28;
      v100 = v97 - 1;
      if ( v100 >= 0 )
      {
        v101 = v96 + 24;
        v102 = *(_DWORD *)v23 + 24;
        do
        {
          v103 = v101 - 24;
          v104 = *(_DWORD *)(v102 - 24);
          v105 = *(_DWORD *)(v102 - 20);
          v106 = *(_DWORD *)(v102 - 16);
          v107 = *(_DWORD *)(v102 - 12);
          v108 = (_DWORD *)(v102 - 8);
          --v100;
          v102 += 24;
          v101 += 24;
          *(_DWORD *)v103 = v104;
          *((_DWORD *)v103 + 1) = v105;
          *((_DWORD *)v103 + 2) = v106;
          *((_DWORD *)v103 + 3) = v107;
          v103 += 16;
          v109 = v108[1];
          *(_DWORD *)v103 = *v108;
          *((_DWORD *)v103 + 1) = v109;
        }
        while ( v100 != -1 );
      }
      sub_77F70(*(void **)v23);
      v25 = *(_DWORD *)(v23 + 4);
      *(_DWORD *)v23 = v99;
      *(_DWORD *)(v23 + 8) = v98;
      if ( v25 < v111 )
      {
LABEL_44:
        v29 = 24 * v25;
        do
        {
          v30 = HIDWORD(v123);
          v31 = v124;
          v32 = v125;
          ++v25;
          v33 = (_DWORD *)(*(_DWORD *)v23 + v29);
          v29 += 24;
          *v33 = v123;
          v33[1] = v30;
          v33[2] = v31;
          v33[3] = v32;
          v33 += 4;
          v34 = v127;
          *v33 = v126;
          v33[1] = v34;
        }
        while ( v111 != v25 );
      }
    }
    *(_DWORD *)(v23 + 4) = v111;
  }
}
