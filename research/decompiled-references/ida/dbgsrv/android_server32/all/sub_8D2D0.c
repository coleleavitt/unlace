/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D2D0
// Address: 0x0008D2D0

//----- (0008D2D0) --------------------------------------------------------
void __fastcall sub_8D2D0(
        int a1,
        int *a2,
        int *a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int a8,
        unsigned int a9)
{
  void *v10; // r1
  _DWORD *v11; // r6
  int (__fastcall **v12)(_DWORD, _DWORD, int *, int); // r1
  int v13; // r5
  int v14; // r4
  int v15; // r4
  int v16; // r6
  int v17; // r4
  int v18; // r5
  int v19; // r4
  int v20; // r6
  int v21; // r4
  int v22; // r0
  int v23; // r7
  int v24; // r4
  int v25; // r5
  int v26; // r4
  int v27; // r7
  int v28; // r6
  int v29; // r4
  int v30; // r0
  int v31; // r7
  int v32; // r4
  int v33; // r5
  int v34; // r4
  int v35; // r7
  int v36; // r6
  int v37; // r4
  int v38; // r5
  int v39; // r4
  int v40; // r6
  int v41; // r4
  int v42; // r5
  int v43; // r4
  int v44; // r6
  int v45; // r4
  int v46; // r0
  int v47; // r7
  int v48; // r4
  int v49; // r2
  int v50; // r3
  int v51; // r0
  int v52; // r5
  int v53; // r4
  int v54; // r0
  unsigned int v55; // r4
  unsigned int v56; // r0
  int v57; // r7
  int v58; // r0
  unsigned int v59; // r3
  _DWORD *v60; // r5
  unsigned int v61; // r6
  bool v62; // zf
  int v63; // r1
  int v64; // r0
  int v65; // r7
  int v66; // r4
  int v67; // r4
  unsigned int v68; // r2
  int v69; // r6
  int v70; // r0
  int v71; // r0
  int (__fastcall **v72)(_DWORD, _DWORD, int *, int); // r1
  int v73; // r4
  int v74; // r5
  int v75; // r4
  int v76; // r4
  int v77; // r0
  int v78; // r5
  int v79; // r0
  int v80; // r0
  unsigned int v81; // r0
  int v82; // r5
  int v83; // r0
  int v84; // r4
  int v85; // r5
  int v86; // r0
  _DWORD *v87; // r2
  int v88; // r5
  unsigned int v89; // r6
  int v90; // r2
  int v91; // r0
  int v92; // [sp+0h] [bp-ACh]
  int v93; // [sp+4h] [bp-A8h]
  int v94; // [sp+8h] [bp-A4h]
  int v95; // [sp+Ch] [bp-A0h]
  int v96; // [sp+Ch] [bp-A0h]
  int v97; // [sp+10h] [bp-9Ch]
  int v98; // [sp+10h] [bp-9Ch]
  int v99; // [sp+14h] [bp-98h]
  int v100; // [sp+18h] [bp-94h]
  int v101; // [sp+34h] [bp-78h]
  int v102; // [sp+38h] [bp-74h]
  int v103; // [sp+3Ch] [bp-70h]
  unsigned int v104; // [sp+40h] [bp-6Ch]
  unsigned int v107; // [sp+4Ch] [bp-60h]
  int v108; // [sp+50h] [bp-5Ch]
  int v109; // [sp+54h] [bp-58h]
  unsigned int v110; // [sp+58h] [bp-54h]
  int v111; // [sp+5Ch] [bp-50h]
  int v112; // [sp+60h] [bp-4Ch]
  int v113; // [sp+64h] [bp-48h]
  int v114; // [sp+68h] [bp-44h]
  int v115; // [sp+6Ch] [bp-40h]
  int v116; // [sp+70h] [bp-3Ch]
  int v117; // [sp+74h] [bp-38h]
  int v118; // [sp+78h] [bp-34h]
  unsigned int v119; // [sp+7Ch] [bp-30h]
  int v120; // [sp+84h] [bp-28h]
  unsigned int v121; // [sp+88h] [bp-24h]
  int v122; // [sp+88h] [bp-24h]
  int v123; // [sp+88h] [bp-24h]
  int v124; // [sp+8Ch] [bp-20h]
  unsigned int v125; // [sp+8Ch] [bp-20h]
  _DWORD *v126; // [sp+94h] [bp-18h]
  int (__fastcall **v127)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+98h] [bp-14h]
  _DWORD *v128; // [sp+9Ch] [bp-10h]
  int v129; // [sp+A0h] [bp-Ch] BYREF
  int v130; // [sp+A4h] [bp-8h]

  v10 = &_stack_chk_guard;
  v109 = 0;
  if ( !a1 )
    sub_8DB0A(0, (int)&_stack_chk_guard, (int)a3, a4, v92, v93, v94, v95, v97);
  v124 = a4;
  v108 = (int)v10;
  v128 = (_DWORD *)(a1 + 48);
  if ( sub_8F128(
         a1,
         *(_DWORD *)(a1 + 48),
         *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 88),
         (*(_QWORD *)(a1 + 72) + *(_QWORD *)(a1 + 88)) >> 32,
         0) )
  {
    v11 = (_DWORD *)(a1 + 28);
    v12 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))(a1 + 4);
    v13 = -1;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 48);
    v11 = (_DWORD *)(a1 + 28);
    if ( (*(int (__fastcall **)(_DWORD, int, int *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v14, &v129, 4) == 4 )
    {
      v13 = 0;
      if ( v129 != 33639248 )
        v13 = -103;
    }
    else
    {
      v13 = -103;
      if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v14) )
        v13 = -1;
    }
    v12 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))(a1 + 4);
  }
  v15 = *v128;
  v126 = v11;
  v127 = (int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))v12;
  if ( (*v12)(*v11, *v128, &v129, 2) == 2 )
  {
    v109 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
  }
  else
  {
    v16 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v15) )
      goto LABEL_15;
  }
  v16 = v13;
LABEL_15:
  v17 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 2) == 2 )
  {
    v103 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
  }
  else
  {
    v103 = 0;
    v18 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v17) )
      goto LABEL_19;
  }
  v18 = v16;
LABEL_19:
  v19 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 2) == 2 )
  {
    v102 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
  }
  else
  {
    v102 = 0;
    v20 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v19) )
      goto LABEL_23;
  }
  v20 = v18;
LABEL_23:
  v21 = *v128;
  v120 = a1;
  if ( (*v127)(*v126, *v128, &v129, 2) == 2 )
  {
    v101 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
  }
  else
  {
    v22 = (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v21);
    v101 = 0;
    v23 = -1;
    if ( v22 )
      goto LABEL_27;
  }
  v23 = v20;
LABEL_27:
  v24 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 4) == 4 )
  {
    v107 = v129;
  }
  else
  {
    v107 = 0;
    v25 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(v120 + 24))(*(_DWORD *)(v120 + 28), v24) )
      goto LABEL_31;
  }
  v25 = v23;
LABEL_31:
  v26 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 4) == 4 )
  {
    v100 = v129;
    v27 = v120;
  }
  else
  {
    v27 = v120;
    v100 = 0;
    v28 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(v120 + 24))(*(_DWORD *)(v120 + 28), v26) )
      goto LABEL_35;
  }
  v28 = v25;
LABEL_35:
  v29 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 4) == 4 )
  {
    v118 = v129;
  }
  else
  {
    v30 = (*(int (__fastcall **)(_DWORD, int))(v27 + 24))(*(_DWORD *)(v27 + 28), v29);
    v118 = 0;
    v31 = -1;
    if ( v30 )
      goto LABEL_39;
  }
  v31 = v28;
LABEL_39:
  v32 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 4) == 4 )
  {
    v117 = v129;
  }
  else
  {
    v117 = 0;
    v33 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(v120 + 24))(*(_DWORD *)(v120 + 28), v32) )
      goto LABEL_43;
  }
  v33 = v31;
LABEL_43:
  v34 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 2) == 2 )
  {
    v110 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
    v35 = v120;
  }
  else
  {
    v35 = v120;
    v110 = 0;
    v36 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(v120 + 24))(*(_DWORD *)(v120 + 28), v34) )
      goto LABEL_47;
  }
  v36 = v33;
LABEL_47:
  v37 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 2) == 2 )
  {
    v119 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
  }
  else
  {
    v119 = 0;
    v38 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(v35 + 24))(*(_DWORD *)(v35 + 28), v37) )
      goto LABEL_51;
  }
  v38 = v36;
LABEL_51:
  v39 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 2) == 2 )
  {
    v104 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
  }
  else
  {
    v104 = 0;
    v40 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(v35 + 24))(*(_DWORD *)(v35 + 28), v39) )
      goto LABEL_55;
  }
  v40 = v38;
LABEL_55:
  v41 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 2) == 2 )
  {
    v116 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
  }
  else
  {
    v116 = 0;
    v42 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(v35 + 24))(*(_DWORD *)(v35 + 28), v41) )
      goto LABEL_59;
  }
  v42 = v40;
LABEL_59:
  v43 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 2) == 2 )
  {
    v99 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
  }
  else
  {
    v99 = 0;
    v44 = -1;
    if ( (*(int (__fastcall **)(_DWORD, int))(v35 + 24))(*(_DWORD *)(v35 + 28), v43) )
      goto LABEL_63;
  }
  v44 = v42;
LABEL_63:
  v45 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 4) == 4 )
  {
    v98 = v129;
  }
  else
  {
    v46 = (*(int (__fastcall **)(_DWORD, int))(v35 + 24))(*(_DWORD *)(v35 + 28), v45);
    v98 = 0;
    v47 = -1;
    if ( v46 )
      goto LABEL_67;
  }
  v47 = v44;
LABEL_67:
  v48 = *v128;
  if ( (*v127)(*v126, *v128, &v129, 4) == 4 )
  {
    v115 = v129;
    v114 = 0;
    v50 = v124;
    goto LABEL_70;
  }
  v51 = (*(int (__fastcall **)(_DWORD, int))(v120 + 24))(*(_DWORD *)(v120 + 28), v48);
  v115 = 0;
  v114 = 0;
  v52 = v110;
  v53 = -1;
  v50 = v124;
  if ( !v51 )
  {
LABEL_70:
    v54 = a6;
    if ( v50 )
    {
      v52 = v110;
      if ( !v47 )
      {
        v55 = a5;
        if ( v110 < a5 )
        {
          v55 = v110;
          *(_BYTE *)(v50 + v110) = 0;
        }
        v47 = 0;
        if ( a5 )
        {
          if ( v110 )
          {
            v47 = -1;
            if ( (*v127)(*v126, *v128, v50, v55) == v55 )
              v47 = 0;
          }
        }
        v52 = v110 - v55;
        v54 = a6;
      }
      if ( v54 )
      {
LABEL_80:
        if ( !v47 )
        {
          v56 = v119;
          if ( v119 >= a7 )
            v56 = a7;
          v57 = 0;
          v53 = 0;
          if ( v52 )
          {
            v121 = v56;
            v58 = sub_8F128(v120, *(_DWORD *)(v120 + 48), v52, v52 >> 31, 1);
            if ( !v58 )
              v52 = 0;
            v53 = -1;
            if ( !v58 )
              v53 = 0;
            v57 = v52;
            v56 = v121;
          }
          if ( a7 )
          {
            v59 = v119;
            v60 = v126;
            if ( v119 )
            {
              v61 = v56;
              v62 = (*v127)(*v126, *v128, a6, v56) == v56;
              v56 = v61;
              if ( !v62 )
                v53 = -1;
              v63 = v108;
              v59 = v119;
              v60 = v126;
            }
            else
            {
              v63 = v108;
            }
          }
          else
          {
            v63 = v108;
            v60 = v126;
            v59 = v119;
          }
          v64 = v59 - v56 + v57;
          goto LABEL_100;
        }
      }
    }
    else
    {
      v52 = v110;
      if ( a6 )
        goto LABEL_80;
    }
    v53 = v47;
  }
  v59 = v119;
  v64 = v52 + v119;
  v63 = v108;
  v60 = v126;
LABEL_100:
  v65 = v120;
  if ( v53 )
    goto LABEL_101;
  v96 = v64;
  v66 = 0;
  if ( !v59 )
  {
    v112 = 0;
    v113 = 0;
    if ( a8 )
      goto LABEL_148;
    goto LABEL_162;
  }
  v67 = v64 - v59;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  if ( v96 != v59 )
  {
    v71 = sub_8F128(v120, *(_DWORD *)(v120 + 48), v67, v67 >> 31, 1);
    if ( !v71 )
      v67 = 0;
    v69 = -1;
    if ( !v71 )
      v69 = 0;
    v70 = v67;
    v68 = 0;
    v60 = v126;
  }
  v96 = v70;
  v112 = 0;
  v113 = 0;
  v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
  do
  {
    v125 = v68;
    v73 = *v128;
    if ( (*v72)(*v60, *v128, &v129, 2) == 2 )
    {
      v122 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
    }
    else
    {
      v122 = 0;
      v74 = -1;
      if ( (*(int (__fastcall **)(_DWORD, int))(v65 + 24))(*(_DWORD *)(v65 + 28), v73) )
        goto LABEL_114;
    }
    v74 = v69;
LABEL_114:
    v75 = *v128;
    if ( (*v127)(*v126, *v128, &v129, 2) == 2 )
    {
      v76 = (BYTE1(v129) << 8) + (unsigned __int8)v129;
      v65 = v120;
    }
    else
    {
      v65 = v120;
      v77 = (*(int (__fastcall **)(_DWORD, int))(v120 + 24))(*(_DWORD *)(v120 + 28), v75);
      v76 = 0;
      v69 = -1;
      if ( v77 )
        goto LABEL_118;
    }
    v69 = v74;
LABEL_118:
    if ( v122 == 1 )
    {
      v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
      v123 = v76;
      if ( ~v117 | v113 )
        goto LABEL_128;
      v111 = v69;
      v78 = *v128;
      if ( (*v127)(*v126, *v128, &v129, 8) == 8 )
      {
        v113 = v130;
        v117 = v129;
        v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
        v79 = v69;
      }
      else
      {
        v62 = (*(int (__fastcall **)(_DWORD, int))(v65 + 24))(*(_DWORD *)(v65 + 28), v78) == 0;
        v117 = 0;
        v113 = 0;
        v69 = -1;
        v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
        v79 = v111;
        if ( !v62 )
        {
LABEL_128:
          if ( !(~v118 | v112) )
          {
            v82 = *v128;
            if ( (*v72)(*v126, *v128, &v129, 8) == 8 )
            {
              v112 = v130;
              v118 = v129;
              v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
            }
            else
            {
              v83 = (*(int (__fastcall **)(_DWORD, int))(v65 + 24))(*(_DWORD *)(v65 + 28), v82);
              v118 = 0;
              v112 = 0;
              v84 = -1;
              v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
              if ( v83 )
                goto LABEL_133;
            }
          }
          v84 = v69;
LABEL_133:
          if ( ~v115 | v114 )
          {
            v69 = v84;
            v60 = v126;
            goto LABEL_139;
          }
          v85 = *v128;
          if ( (*v72)(*v126, *v128, &v129, 8) == 8 )
          {
            v114 = v130;
            v115 = v129;
            v60 = v126;
            v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
          }
          else
          {
            v86 = (*(int (__fastcall **)(_DWORD, int))(v65 + 24))(*(_DWORD *)(v65 + 28), v85);
            v115 = 0;
            v114 = 0;
            v69 = -1;
            v60 = v126;
            v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
            if ( v86 )
              goto LABEL_139;
          }
          v69 = v84;
LABEL_139:
          if ( v116 == 0xFFFF )
          {
            v87 = v60;
            v88 = *v128;
            if ( (*v72)(*v87, *v128, &v129, 4) == 4 )
            {
              v116 = v129;
              v59 = v119;
              v81 = v125;
              v76 = v123;
            }
            else
            {
              v116 = 0;
              v62 = (*(int (__fastcall **)(_DWORD, int))(v65 + 24))(*(_DWORD *)(v65 + 28), v88) == 0;
              v59 = v119;
              v81 = v125;
              v76 = v123;
              if ( !v62 )
                v69 = -1;
            }
            v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
            v60 = v126;
          }
          else
          {
            v59 = v119;
            v81 = v125;
            v76 = v123;
          }
          goto LABEL_146;
        }
      }
      v69 = v79;
      goto LABEL_128;
    }
    v80 = sub_8F128(v65, *(_DWORD *)(v65 + 48), v76, 0, 1);
    v60 = v126;
    v59 = v119;
    if ( v80 )
      v69 = -1;
    v72 = (int (__fastcall **)(_DWORD, _DWORD, int *, int))v127;
    v81 = v125;
LABEL_146:
    v68 = v81 + v76 + 4;
  }
  while ( v68 < v59 );
  v63 = v108;
  v66 = v69;
  if ( a8 )
  {
LABEL_148:
    if ( !v66 )
    {
      v89 = a9;
      if ( v104 < a9 )
      {
        v89 = v104;
        *(_BYTE *)(a8 + v104) = 0;
      }
      v90 = 0;
      if ( v96 )
      {
        v91 = sub_8F128(v65, *(_DWORD *)(v65 + 48), v96, v96 >> 31, 1);
        v90 = -1;
        if ( !v91 )
          v90 = 0;
      }
      if ( a9 )
      {
        v66 = v90;
        if ( v104 && (*v127)(*v126, *v128, a8, v89) != v89 )
          v66 = -1;
        v63 = v108;
        v59 = v119;
      }
      else
      {
        v63 = v108;
        v59 = v119;
        v66 = v90;
      }
    }
  }
LABEL_162:
  v64 = v66 == 0;
  if ( a2 && !v66 )
  {
    a2[16] = (2 * v107) & 0x3F;
    a2[17] = v107 << 21 >> 26;
    a2[18] = (unsigned __int16)v107 >> 11;
    a2[19] = v107 << 11 >> 27;
    a2[20] = (v107 << 7 >> 28) - 1;
    *a2 = v109;
    a2[1] = v103;
    a2[2] = v102;
    a2[3] = v101;
    a2[4] = v107;
    a2[5] = v100;
    a2[6] = v118;
    a2[7] = v112;
    a2[8] = v117;
    a2[9] = v113;
    a2[10] = v110;
    a2[11] = v59;
    a2[12] = v104;
    a2[13] = v116;
    a2[14] = v99;
    a2[15] = v98;
    a2[21] = (v107 >> 25) + 1980;
    v64 = 1;
  }
  v49 = (int)a3;
  if ( a3 && v64 )
  {
    v64 = (int)a3;
    *a3 = v115;
    v49 = v114;
    a3[1] = v114;
  }
LABEL_101:
  sub_8DB0A(v64, v63, v49, v59, a5, a6, a7, a8, a9);
}
// 8D2F2: variable 'v92' is possibly undefined
// 8D2F2: variable 'v93' is possibly undefined
// 8D2F2: variable 'v94' is possibly undefined
// 8D2F2: variable 'v95' is possibly undefined
// 8D2F2: variable 'v97' is possibly undefined
// 8D2F6: variable 'a4' is possibly undefined
// 8D2F8: variable 'v10' is possibly undefined
// 8D7D4: variable 'v49' is possibly undefined
