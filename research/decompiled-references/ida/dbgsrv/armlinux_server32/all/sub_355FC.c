/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_355FC
// Address: 0x000355FC

//----- (000355FC) --------------------------------------------------------
int __fastcall sub_355FC(_DWORD *a1, char **a2, int a3, char a4)
{
  int v7; // r0
  __int64 v8; // r0
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  unsigned int v12; // r5
  char *v13; // r3
  char *v14; // r1
  unsigned int v15; // r2
  char *v16; // r0
  __int64 v17; // r2
  int v18; // r0
  unsigned int v19; // r5
  __int64 v20; // r0
  unsigned int v21; // r3
  unsigned int v22; // r2
  int v23; // r0
  int v24; // r1
  bool v25; // zf
  char *v26; // r0
  __int64 v27; // kr18_8
  char *v28; // r1
  char *v29; // r1
  __int64 v30; // r8
  __int64 v31; // r0
  bool v32; // nf
  unsigned int v33; // r8
  __int64 v34; // kr20_8
  int v35; // r5
  int v36; // r7
  char *v37; // r1
  unsigned int v38; // r2
  char *v39; // r7
  char *v40; // r3
  char *v41; // r1
  char *v42; // r6
  unsigned int v43; // r3
  int v44; // r0
  int v45; // r1
  bool v46; // zf
  int v47; // r0
  unsigned int v48; // r5
  __int64 v49; // r0
  unsigned int v50; // r3
  unsigned int v51; // r2
  int v52; // r0
  int v53; // r1
  bool v54; // zf
  char *v55; // r0
  __int64 v56; // kr40_8
  char *v57; // r1
  char *v58; // r1
  char *v59; // r3
  char *v60; // r0
  char *v61; // r5
  unsigned int v62; // r3
  __int64 v63; // kr50_8
  unsigned int v64; // r8
  __int64 v65; // kr58_8
  char *v66; // r5
  int v67; // r6
  char *v68; // r1
  unsigned int v69; // r2
  char *v70; // r6
  char *v71; // r3
  char *v72; // r1
  char *v73; // r7
  unsigned int v74; // r3
  unsigned int v75; // r2
  int v76; // r0
  int v77; // r1
  bool v78; // zf
  _DWORD *v79; // r1
  char *v80; // r3
  char **v81; // r1
  unsigned int v82; // r0
  char *v83; // r0
  char *v84; // r0
  unsigned int v85; // r0
  char *v86; // r3
  char *v87; // r1
  char *v88; // r6
  unsigned int v89; // r3
  char *v90; // r2
  char **v91; // r1
  unsigned int v92; // r0
  int v93; // [sp+18h] [bp-D4h]
  __int64 v94; // [sp+18h] [bp-D4h]
  __int64 v95; // [sp+20h] [bp-CCh]
  __int64 v96; // [sp+2Ch] [bp-C0h]
  int v97; // [sp+2Ch] [bp-C0h]
  __int64 v98; // [sp+30h] [bp-BCh]
  unsigned __int16 v101; // [sp+5Eh] [bp-8Eh] BYREF
  int v102; // [sp+60h] [bp-8Ch] BYREF
  unsigned __int16 *v103; // [sp+64h] [bp-88h] BYREF
  __int64 v104; // [sp+68h] [bp-84h] BYREF
  __int64 v105; // [sp+70h] [bp-7Ch] BYREF
  __int64 v106; // [sp+78h] [bp-74h] BYREF
  _DWORD *v107; // [sp+80h] [bp-6Ch] BYREF
  unsigned int v108; // [sp+84h] [bp-68h] BYREF
  __int64 v109; // [sp+88h] [bp-64h]
  _DWORD *v110; // [sp+90h] [bp-5Ch] BYREF
  unsigned int v111; // [sp+94h] [bp-58h] BYREF
  __int64 v112; // [sp+98h] [bp-54h] BYREF
  _BYTE v113[2]; // [sp+A4h] [bp-48h] BYREF
  __int16 v114; // [sp+A6h] [bp-46h] BYREF
  __int16 v115; // [sp+A8h] [bp-44h] BYREF
  unsigned __int16 v116; // [sp+AAh] [bp-42h] BYREF
  unsigned int v117; // [sp+ACh] [bp-40h] BYREF
  unsigned int v118; // [sp+B0h] [bp-3Ch] BYREF
  unsigned int v119; // [sp+B4h] [bp-38h] BYREF
  int v120; // [sp+B8h] [bp-34h] BYREF
  int v121; // [sp+BCh] [bp-30h] BYREF
  _DWORD *v122; // [sp+C0h] [bp-2Ch]
  int *v123; // [sp+C4h] [bp-28h]
  int *v124; // [sp+C8h] [bp-24h]
  int v125; // [sp+CCh] [bp-20h]
  _DWORD *v126; // [sp+D0h] [bp-1Ch] BYREF
  int v127; // [sp+D4h] [bp-18h] BYREF
  __int64 v128; // [sp+D8h] [bp-14h]
  int *v129; // [sp+E0h] [bp-Ch]
  int v130; // [sp+E4h] [bp-8h]
  int v131; // [sp+ECh] [bp+0h] BYREF
  __int64 v132; // [sp+104h] [bp+18h]
  unsigned __int64 v133; // [sp+10Ch] [bp+20h]

  if ( sub_2F764(&v131, &v102, (int)a1, 21, a3, 13, a4) )
  {
    v47 = a1[91];
    v104 = v132;
    v98 = v132;
    v48 = v133;
    v107 = a1;
    v97 = v102;
    LODWORD(v49) = sub_74D98(v47, 0, 1);
    v50 = a1[92];
    v51 = a1[93];
    v121 = 0;
    v109 = v49 - __PAIR64__(v51, v50);
    v94 = v48 + v104;
    v123 = &v121;
    v124 = &v121;
    v122 = nullptr;
    v125 = 0;
    if ( v104 >= v94 )
    {
      sub_35110((int)&v120, nullptr);
    }
    else
    {
      do
      {
        sub_35134((int)&v126, &v120, &v104);
        if ( !(_BYTE)v127 )
          break;
        v52 = sub_74D98(v107[91], v104 + *((_QWORD *)v107 + 46), 0);
        v54 = ++v53 == 0;
        if ( !v53 )
          v54 = v52 == -1;
        if ( v54
          || sub_2A420((int)a1, &v110, 2, 1) < 0
          || sub_2A420((int)a1, (char *)&v110 + 2, 2, 1) < 0
          || sub_2A420((int)a1, &v111, 4, 1) < 0
          || sub_2A420((int)a1, &v112, 4, 1) < 0
          || sub_2A420((int)a1, (char *)&v112 + 4, 4, 1) < 0 )
        {
          break;
        }
        v55 = a2[4];
        v56 = v104 - v98;
        v57 = a2[3];
        if ( v55 + 1 > a2[5] )
        {
          v57 = (char *)sub_78018((int)(a2 + 3), v57, (unsigned int)(v55 + 1), 0x18u);
          v55 = a2[4];
          a2[3] = v57;
        }
        v58 = &v57[24 * (_DWORD)v55];
        *((_DWORD *)v58 + 3) = 0;
        *((_DWORD *)v58 + 4) = 0;
        *((_DWORD *)v58 + 5) = 0;
        ++a2[4];
        *(_QWORD *)v58 = v56;
        *((_DWORD *)v58 + 2) = a2[11];
        v59 = a2[11];
        if ( v59 + 1 > a2[12] )
        {
          v60 = (char *)sub_78018((int)(a2 + 10), a2[10], (unsigned int)(v59 + 1), 0xCu);
          v59 = a2[11];
          a2[10] = v60;
        }
        else
        {
          v60 = a2[10];
        }
        v61 = &v60[12 * (_DWORD)v59];
        *(_DWORD *)v61 = 0;
        *((_DWORD *)v61 + 1) = 0;
        *((_DWORD *)v61 + 2) = 0;
        v62 = v111;
        ++a2[11];
        sub_32788((int)a1, (int)v61, v97, v62);
        v63 = v104;
        v127 = 0;
        LODWORD(v128) = 0;
        v130 = 0;
        v106 = v104 + (unsigned int)v112;
        HIDWORD(v128) = &v127;
        v129 = &v127;
        if ( v106 >= v94 )
        {
          v79 = nullptr;
        }
        else
        {
          v64 = 0;
          sub_35134((int)v113, &v126, &v106);
          while ( (_BYTE)v115 && HIWORD(v110) > v64 )
          {
            v76 = sub_74D98(v107[91], v106 + *((_QWORD *)v107 + 46), 0);
            v78 = ++v77 == 0;
            if ( !v77 )
              v78 = v76 == -1;
            if ( v78
              || sub_2A420((int)a1, v113, 4, 1) < 0
              || sub_2A420((int)a1, &v115, 2, 1) < 0
              || sub_2A420((int)a1, &v116, 2, 1) < 0
              || sub_2A420((int)a1, &v117, 4, 1) < 0
              || sub_2A420((int)a1, &v118, 4, 1) < 0 )
            {
              break;
            }
            ++v64;
            v65 = v106 - v98;
            v66 = &a2[3][24 * (_DWORD)a2[4] - 24];
            v67 = *((_DWORD *)v66 + 4);
            v68 = *((char **)v66 + 3);
            v69 = v67 + 1;
            if ( (unsigned int)(v67 + 1) > *((_DWORD *)v66 + 5) )
            {
              v83 = (char *)sub_78018((int)(v66 + 12), v68, v69, 0x10u);
              v67 = *((_DWORD *)v66 + 4);
              v68 = v83;
              *((_DWORD *)v66 + 3) = v83;
              v69 = v67 + 1;
            }
            v70 = &v68[16 * v67];
            *((_DWORD *)v66 + 4) = v69;
            *(_QWORD *)v70 = v65;
            *((_DWORD *)v70 + 2) = a2[14];
            v71 = a2[14];
            if ( v71 + 1 > a2[15] )
            {
              v72 = (char *)sub_78018((int)(a2 + 13), a2[13], (unsigned int)(v71 + 1), 0xCu);
              v71 = a2[14];
              a2[13] = v72;
            }
            else
            {
              v72 = a2[13];
            }
            v73 = &v72[12 * (_DWORD)v71];
            *(_DWORD *)v73 = 0;
            *((_DWORD *)v73 + 1) = 0;
            *((_DWORD *)v73 + 2) = 0;
            v74 = v117;
            ++a2[14];
            sub_32788((int)a1, (int)v73, v97, v74);
            v75 = v116 & 0x7FFF;
            LOWORD(v103) = v116 & 0x7FFF;
            if ( (v116 & 0x7FFF) != 0 )
            {
              v80 = a2[18];
              v81 = a2 + 17;
              if ( !v80 )
                goto LABEL_101;
              do
              {
                v82 = *((unsigned __int16 *)v80 + 8);
                if ( v82 < v75 )
                  v80 = *((char **)v80 + 3);
                else
                  v81 = (char **)v80;
                if ( v82 >= v75 )
                  v80 = *((char **)v80 + 2);
              }
              while ( v80 );
              if ( v81 == a2 + 17 || *((unsigned __int16 *)v81 + 8) > v75 )
              {
LABEL_101:
                LODWORD(v105) = &v103;
                v81 = (char **)sub_3525C(a2 + 16, (int)v81, (unsigned __int16 **)&v105);
              }
              v81[5] = *((char **)v66 + 2);
              v81[6] = *((char **)v70 + 2);
            }
            v106 += v118;
            if ( v106 >= v94 )
              break;
            sub_35134((int)v113, &v126, &v106);
          }
          v79 = (_DWORD *)v128;
          v63 = v104;
        }
        v104 = v63 + HIDWORD(v112);
        sub_35110((int)&v126, v79);
      }
      while ( v104 < v94 );
      sub_35110((int)&v120, v122);
    }
    sub_74D98(v107[91], v109 + *((_QWORD *)v107 + 46), 0);
  }
  if ( sub_2F764(&v131, &v102, (int)a1, 20, a3, 12, a4) )
  {
    v18 = a1[91];
    v105 = v132;
    v96 = v132;
    v19 = v133;
    v110 = a1;
    v93 = v102;
    LODWORD(v20) = sub_74D98(v18, 0, 1);
    v21 = a1[92];
    v22 = a1[93];
    v121 = 0;
    v112 = v20 - __PAIR64__(v22, v21);
    v95 = v19 + v105;
    v123 = &v121;
    v124 = &v121;
    v122 = nullptr;
    v125 = 0;
    if ( v105 >= v95 )
    {
      sub_35110((int)&v120, nullptr);
    }
    else
    {
      do
      {
        sub_35134((int)&v126, &v120, &v105);
        if ( !(_BYTE)v127 )
          break;
        v23 = sub_74D98(v110[91], v105 + *((_QWORD *)v110 + 46), 0);
        v25 = ++v24 == 0;
        if ( !v24 )
          v25 = v23 == -1;
        if ( v25
          || sub_2A420((int)a1, v113, 2, 1) < 0
          || sub_2A420((int)a1, &v114, 2, 1) < 0
          || sub_2A420((int)a1, &v115, 2, 1) < 0
          || sub_2A420((int)a1, &v116, 2, 1) < 0
          || sub_2A420((int)a1, &v117, 4, 1) < 0
          || sub_2A420((int)a1, &v118, 4, 1) < 0
          || sub_2A420((int)a1, &v119, 4, 1) < 0 )
        {
          break;
        }
        v26 = a2[1];
        v27 = v105 - v96;
        v28 = *a2;
        if ( v26 + 1 > a2[2] )
        {
          v28 = (char *)sub_78018((int)a2, v28, (unsigned int)(v26 + 1), 0x18u);
          v26 = a2[1];
          *a2 = v28;
        }
        v29 = &v28[24 * (_DWORD)v26];
        *((_DWORD *)v29 + 2) = 0;
        *((_DWORD *)v29 + 3) = 0;
        *((_DWORD *)v29 + 4) = 0;
        ++a2[1];
        *(_QWORD *)v29 = v27;
        *((_WORD *)v29 + 10) = v114;
        *((_WORD *)v29 + 11) = v115;
        v30 = v105;
        v127 = 0;
        LODWORD(v128) = 0;
        v31 = v105 + v118;
        v32 = (((unsigned __int64)(v31 - v95) >> 32) & 0x80000000) != 0LL;
        v106 = v31;
        v130 = 0;
        if ( v31 >= v95 )
          HIDWORD(v31) = 0;
        HIDWORD(v128) = &v127;
        v129 = &v127;
        if ( v32 != __OFSUB__(v105 + v118, v95) )
        {
          v33 = 0;
          sub_35134((int)&v107, &v126, &v106);
          while ( (_BYTE)v108 && v116 > v33 )
          {
            v44 = sub_74D98(v110[91], v106 + *((_QWORD *)v110 + 46), 0);
            v46 = ++v45 == 0;
            if ( !v45 )
              v46 = v44 == -1;
            if ( v46 || sub_2A420((int)a1, &v107, 4, 1) < 0 || sub_2A420((int)a1, &v108, 4, 1) < 0 )
              break;
            ++v33;
            v34 = v106 - v96;
            v35 = (int)&(*a2)[24 * (_DWORD)a2[1] - 24];
            v36 = *(_DWORD *)(v35 + 12);
            v37 = *(char **)(v35 + 8);
            v38 = v36 + 1;
            if ( (unsigned int)(v36 + 1) > *(_DWORD *)(v35 + 16) )
            {
              v84 = (char *)sub_78018(v35 + 8, v37, v38, 0x10u);
              v36 = *(_DWORD *)(v35 + 12);
              v37 = v84;
              *(_DWORD *)(v35 + 8) = v84;
              v38 = v36 + 1;
            }
            v39 = &v37[16 * v36];
            *(_DWORD *)(v35 + 12) = v38;
            *(_QWORD *)v39 = v34;
            if ( (*(_WORD *)(v35 + 20) & 1) != 0 )
            {
              v85 = (unsigned int)a2[12];
              v86 = a2[11];
              v87 = a2[10];
              a2[9] = v86;
              if ( (unsigned int)(v86 + 1) > v85 )
              {
                v87 = (char *)sub_78018((int)(a2 + 10), v87, (unsigned int)(v86 + 1), 0xCu);
                v86 = a2[11];
                a2[10] = v87;
              }
              v88 = &v87[12 * (_DWORD)v86];
              *(_DWORD *)v88 = 0;
              *((_DWORD *)v88 + 1) = 0;
              *((_DWORD *)v88 + 2) = 0;
              v89 = (unsigned int)v107;
              ++a2[11];
              sub_32788((int)a1, (int)v88, v93, v89);
            }
            *((_DWORD *)v39 + 2) = a2[14];
            v40 = a2[14];
            if ( v40 + 1 > a2[15] )
            {
              v41 = (char *)sub_78018((int)(a2 + 13), a2[13], (unsigned int)(v40 + 1), 0xCu);
              v40 = a2[14];
              a2[13] = v41;
            }
            else
            {
              v41 = a2[13];
            }
            v42 = &v41[12 * (_DWORD)v40];
            *(_DWORD *)v42 = 0;
            *((_DWORD *)v42 + 1) = 0;
            *((_DWORD *)v42 + 2) = 0;
            v43 = (unsigned int)v107;
            ++a2[14];
            sub_32788((int)a1, (int)v42, v93, v43);
            v101 = *(_WORD *)(v35 + 22);
            if ( v101 && *(_DWORD *)(v35 + 12) == 1 )
            {
              v90 = a2[18];
              v91 = a2 + 17;
              if ( !v90 )
                goto LABEL_118;
              do
              {
                v92 = *((unsigned __int16 *)v90 + 8);
                if ( v92 < v101 )
                  v90 = *((char **)v90 + 3);
                else
                  v91 = (char **)v90;
                if ( v92 >= v101 )
                  v90 = *((char **)v90 + 2);
              }
              while ( v90 );
              if ( v91 == a2 + 17 || *((unsigned __int16 *)v91 + 8) > (unsigned int)v101 )
              {
LABEL_118:
                v103 = &v101;
                v91 = (char **)sub_3525C(a2 + 16, (int)v91, &v103);
              }
              v91[5] = a2[9];
              v91[6] = *((char **)v39 + 2);
            }
            v106 += v108;
            if ( v106 >= v95 )
              break;
            sub_35134((int)&v107, &v126, &v106);
          }
          v30 = v105;
          HIDWORD(v31) = v128;
        }
        v105 = v30 + v119;
        sub_35110((int)&v126, (_DWORD *)HIDWORD(v31));
      }
      while ( v105 < v95 );
      sub_35110((int)&v120, v122);
    }
    sub_74D98(v110[91], v112 + *((_QWORD *)v110 + 46), 0);
  }
  if ( sub_2F764(&v131, &v102, (int)a1, 22, a3, 14, a4) )
  {
    v7 = a1[91];
    v126 = a1;
    LODWORD(v8) = sub_74D98(v7, 0, 1);
    v128 = v8 - *((_QWORD *)a1 + 46);
    v9 = sub_74D98(v126[91], v132 + *((_QWORD *)v126 + 46), 0);
    v11 = ++v10 == 0;
    if ( !v10 )
      v11 = v9 == -1;
    if ( !v11 && v133 >> 1 )
    {
      v12 = 0;
      do
      {
        v13 = a2[7];
        v14 = a2[6];
        v15 = (unsigned int)(v13 + 1);
        if ( v13 + 1 > a2[8] )
        {
          v16 = (char *)sub_78018((int)(a2 + 6), v14, v15, 2u);
          v13 = a2[7];
          v14 = v16;
          a2[6] = v16;
          v15 = (unsigned int)(v13 + 1);
        }
        a2[7] = (char *)v15;
        if ( sub_2A420((int)a1, &v14[2 * (_DWORD)v13], 2, 1) < 0 )
          break;
        ++v12;
      }
      while ( v12 < v133 >> 1 );
    }
    LODWORD(v17) = v128;
    HIDWORD(v17) = v126[93];
    sub_74D98(v126[91], v17 + __PAIR64__(HIDWORD(v128), v126[92]), 0);
  }
  return 1;
}
// 356B8: variable 'v8' is possibly undefined
// 356D4: variable 'v10' is possibly undefined
// 35792: variable 'v20' is possibly undefined
// 35802: variable 'v24' is possibly undefined
// 35A04: variable 'v45' is possibly undefined
// 35AA8: variable 'v49' is possibly undefined
// 35B18: variable 'v53' is possibly undefined
// 35D48: variable 'v77' is possibly undefined
