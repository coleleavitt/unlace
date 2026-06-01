/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F1E8
// Address: 0x0006F1E8

//----- (0006F1E8) --------------------------------------------------------
void __fastcall sub_6F1E8(int a1, int *a2)
{
  int v3; // r11
  _BOOL4 v4; // r3
  unsigned int *v5; // r6
  size_t v6; // r5
  unsigned int v7; // r5
  unsigned int *v8; // r3
  unsigned int v9; // t1
  size_t v10; // r7
  unsigned int *v11; // r10
  int v12; // r8
  unsigned int *v13; // r11
  const char *v14; // r4
  const char *v15; // t1
  size_t v16; // r7
  int v17; // r5
  unsigned int v18; // r6
  char *v19; // r0
  int v20; // r2
  unsigned int v21; // r7
  int v22; // r6
  int i; // r5
  _BYTE *v24; // r0
  size_t v25; // r6
  int v26; // r10
  int v27; // r3
  unsigned int v28; // r9
  _BYTE *v29; // r0
  size_t v30; // r6
  int v31; // r8
  int v32; // r3
  char *v33; // r9
  size_t v34; // r6
  int v35; // r5
  unsigned int v36; // r7
  char *v37; // r0
  int v38; // r2
  _BYTE *v40; // r0
  size_t v41; // r6
  unsigned int v42; // r8
  char *v43; // r9
  size_t v44; // r6
  int v45; // r5
  unsigned int v46; // r7
  _BYTE *v47; // r0
  size_t v48; // r5
  _BYTE *v49; // r0
  size_t v50; // r6
  _BYTE *v51; // r0
  size_t v52; // r6
  int *v53; // r2
  unsigned int v54; // r1
  int *v55; // r0
  unsigned int v56; // r3
  _BYTE *v57; // r0
  size_t v58; // r6
  unsigned int v59; // r0
  __int64 v60; // r2
  size_t v61; // r5
  _BYTE *v62; // r0
  size_t v63; // r6
  char *v64; // r0
  int v65; // r2
  int v66; // r7
  unsigned int v67; // r9
  int v68; // r7
  unsigned int v69; // r9
  int v70; // r6
  unsigned int v71; // r7
  int v72; // r7
  unsigned int v73; // r9
  int v74; // r7
  unsigned int v75; // r9
  int v76; // r7
  unsigned int v77; // r8
  char *v78; // r0
  char *v79; // r0
  char *v80; // r0
  char *v81; // r0
  char *v82; // r0
  char *v83; // r0
  char *v84; // r0
  char *v85; // r0
  char *v86; // r0
  char *v87; // r0
  int v88; // r7
  unsigned int v89; // r8
  int v90; // r8
  unsigned int v91; // r9
  int v92; // r7
  unsigned int v93; // r8
  int v94; // r7
  unsigned int v95; // r8
  int v96; // r8
  unsigned int v97; // r9
  char *v98; // r0
  char *v99; // r0
  int v100; // r2
  char *v101; // r0
  int v102; // r2
  char *v103; // r0
  char *v104; // r0
  char *v105; // r0
  int v106; // [sp+4h] [bp-C0h]
  unsigned int v107; // [sp+8h] [bp-BCh]
  int v108; // [sp+Ch] [bp-B8h]
  int v109; // [sp+Ch] [bp-B8h]
  _BYTE v111[8]; // [sp+30h] [bp-94h] BYREF
  _BYTE v112[8]; // [sp+38h] [bp-8Ch] BYREF
  int v113; // [sp+40h] [bp-84h] BYREF
  int v114; // [sp+44h] [bp-80h] BYREF
  int *v115; // [sp+48h] [bp-7Ch]
  int *v116; // [sp+4Ch] [bp-78h]
  int *v117; // [sp+50h] [bp-74h]
  int v118; // [sp+54h] [bp-70h]
  __int64 v119; // [sp+58h] [bp-6Ch] BYREF
  _DWORD *v120; // [sp+60h] [bp-64h]
  char *v121; // [sp+64h] [bp-60h]
  char *v122; // [sp+68h] [bp-5Ch]
  int v123; // [sp+6Ch] [bp-58h]
  _BYTE v124[5]; // [sp+70h] [bp-54h] BYREF
  char v125[3]; // [sp+75h] [bp-4Fh] BYREF
  _BYTE v126[5]; // [sp+78h] [bp-4Ch] BYREF
  char v127[3]; // [sp+7Dh] [bp-47h] BYREF
  _BYTE v128[5]; // [sp+80h] [bp-44h] BYREF
  char v129[3]; // [sp+85h] [bp-3Fh] BYREF
  _BYTE v130[5]; // [sp+88h] [bp-3Ch] BYREF
  char v131[3]; // [sp+8Dh] [bp-37h] BYREF
  _BYTE v132[5]; // [sp+90h] [bp-34h] BYREF
  char v133[3]; // [sp+95h] [bp-2Fh] BYREF
  _BYTE v134[5]; // [sp+98h] [bp-2Ch] BYREF
  char v135[3]; // [sp+9Dh] [bp-27h] BYREF
  _BYTE v136[5]; // [sp+A0h] [bp-24h] BYREF
  char v137[3]; // [sp+A5h] [bp-1Fh] BYREF
  _BYTE v138[5]; // [sp+A8h] [bp-1Ch] BYREF
  char v139[3]; // [sp+ADh] [bp-17h] BYREF
  _BYTE v140[5]; // [sp+B0h] [bp-14h] BYREF
  _BYTE v141[5]; // [sp+B5h] [bp-Fh] BYREF
  char v142[2]; // [sp+BAh] [bp-Ah] BYREF

  v3 = *a2;
  v107 = a2[1];
  v4 = *a2 == 0;
  v5 = (unsigned int *)a2[6];
  if ( !v107 )
    v4 = 1;
  if ( !v5 )
    v4 = 1;
  if ( v4 )
    return;
  v6 = sub_75FB0(v140, (unsigned int)v141, 0xFFFFFF01) - v140;
  if ( v6 )
  {
    v90 = *(_DWORD *)(a1 + 4);
    v91 = v6 + v90;
    if ( __CFADD__(v6, v90) )
    {
      if ( (unsigned int)v90 > 0x7FFFFFFE )
      {
        if ( v90 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_170;
      }
      v91 = 0x7FFFFFFF;
    }
    else if ( v90 >= v91 )
    {
LABEL_170:
      memcpy((void *)(*(_DWORD *)a1 + v90), v140, v6);
      goto LABEL_7;
    }
    v99 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v91 )
    {
      v99 = (char *)sub_77EB0(a1, *(void **)a1, v91, 1u);
      v100 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v99;
    }
    else
    {
      v100 = *(_DWORD *)(a1 + 4);
    }
    memset(&v99[v100], 0, v91 - v100);
    *(_DWORD *)(a1 + 4) = v91;
    goto LABEL_170;
  }
LABEL_7:
  v7 = *v5;
  if ( *v5 )
  {
    v8 = v5;
    v7 = 0;
    do
    {
      v9 = v8[1];
      ++v8;
      ++v7;
    }
    while ( v9 );
    v10 = sub_75FB0(v140, (unsigned int)v141, v7) - v140;
    if ( !v10 )
      goto LABEL_11;
  }
  else
  {
    v10 = sub_75FB0(v140, (unsigned int)v141, 0) - v140;
    if ( !v10 )
      goto LABEL_27;
  }
  v96 = *(_DWORD *)(a1 + 4);
  v97 = v96 + v10;
  if ( !__CFADD__(v96, v10) )
  {
    if ( v96 >= v97 )
      goto LABEL_189;
    goto LABEL_207;
  }
  if ( (unsigned int)v96 <= 0x7FFFFFFE )
  {
    v97 = 0x7FFFFFFF;
LABEL_207:
    v101 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v97 )
    {
      v101 = (char *)sub_77EB0(a1, *(void **)a1, v97, 1u);
      v102 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v101;
    }
    else
    {
      v102 = *(_DWORD *)(a1 + 4);
    }
    memset(&v101[v102], 0, v97 - v102);
    *(_DWORD *)(a1 + 4) = v97;
    goto LABEL_189;
  }
  if ( v96 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
LABEL_189:
  memcpy((void *)(*(_DWORD *)a1 + v96), v140, v10);
  if ( v7 )
  {
LABEL_11:
    v108 = v3;
    v11 = v5;
    v12 = a1;
    v13 = &v5[v7];
    while ( 1 )
    {
      v15 = (const char *)*v11++;
      v14 = v15;
      if ( v15 )
      {
        v16 = strlen(v14) + 1;
      }
      else
      {
        v16 = 1;
        v14 = &byte_8DEAC;
      }
      v17 = *(_DWORD *)(v12 + 4);
      v18 = v17 + v16;
      if ( __CFADD__(v17, v16) )
        break;
      if ( v17 < v18 )
        goto LABEL_20;
LABEL_15:
      memcpy((void *)(*(_DWORD *)v12 + v17), v14, v16);
      if ( v13 == v11 )
      {
        v3 = v108;
        a1 = v12;
        goto LABEL_27;
      }
    }
    if ( (unsigned int)v17 > 0x7FFFFFFE )
    {
      if ( v17 < 0 )
        *(_DWORD *)(v12 + 4) = 0x7FFFFFFF;
      goto LABEL_15;
    }
    v18 = 0x7FFFFFFF;
LABEL_20:
    v19 = *(char **)v12;
    if ( *(_DWORD *)(v12 + 8) < v18 )
    {
      v19 = (char *)sub_77EB0(v12, *(void **)v12, v18, 1u);
      v20 = *(_DWORD *)(v12 + 4);
      *(_DWORD *)v12 = v19;
    }
    else
    {
      v20 = *(_DWORD *)(v12 + 4);
    }
    memset(&v19[v20], 0, v18 - v20);
    *(_DWORD *)(v12 + 4) = v18;
    goto LABEL_15;
  }
LABEL_27:
  v21 = 0;
  v116 = &v114;
  v117 = &v114;
  v114 = 0;
  v115 = nullptr;
  v118 = 0;
  if ( v107 )
  {
    v22 = v3;
    for ( i = 0; i != v107; ++i )
    {
      if ( *(_DWORD *)(v22 + 12) )
      {
        LODWORD(v119) = *(_DWORD *)(v22 + 12);
        HIDWORD(v119) = v21;
        sub_6F078((int)v111, &v113, &v119);
        if ( v111[4] )
          ++v21;
      }
      v22 += 20;
    }
  }
  else
  {
    v21 = 0;
  }
  HIDWORD(v119) = 0;
  v120 = nullptr;
  v123 = 0;
  v121 = (char *)&v119 + 4;
  v122 = (char *)&v119 + 4;
  v24 = sub_75FB0(v124, (unsigned int)v125, v21);
  v25 = v24 - v124;
  if ( v24 == v124 )
    goto LABEL_34;
  v88 = *(_DWORD *)(a1 + 4);
  v89 = v25 + v88;
  if ( __CFADD__(v25, v88) )
  {
    if ( (unsigned int)v88 > 0x7FFFFFFE )
    {
      if ( v88 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_164;
    }
    v89 = 0x7FFFFFFF;
    goto LABEL_212;
  }
  if ( v88 < v89 )
  {
LABEL_212:
    v103 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v89 )
    {
      v103 = (char *)sub_77EB0(a1, *(void **)a1, v89, 1u);
      *(_DWORD *)a1 = v103;
    }
    memset(&v103[*(_DWORD *)(a1 + 4)], 0, v89 - *(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 4) = v89;
  }
LABEL_164:
  memcpy((void *)(*(_DWORD *)a1 + v88), v124, v25);
LABEL_34:
  v26 = v3;
  v106 = 0;
  do
  {
    if ( *(_DWORD *)(v26 + 12) )
    {
      sub_6F140((int)v112, &v119, (unsigned int *)(v26 + 12));
      if ( v112[4] )
      {
        if ( (*(_DWORD *)(v26 + 4) & 0x100) != 0 )
        {
          v28 = 1;
        }
        else
        {
          v27 = *(unsigned __int8 *)(v26 + 9);
          if ( v27 == 1 )
          {
            v28 = 16;
          }
          else
          {
            if ( v27 != 2 )
            {
              if ( under_debugger )
                __und(0xFFu);
              sub_78AFC(1783);
            }
            v28 = 32;
          }
        }
        v29 = sub_75FB0(v126, (unsigned int)v127, v28);
        v30 = v29 - v126;
        if ( v29 == v126 )
          goto LABEL_42;
        v76 = *(_DWORD *)(a1 + 4);
        v77 = v30 + v76;
        if ( __CFADD__(v30, v76) )
        {
          if ( (unsigned int)v76 > 0x7FFFFFFE )
          {
            if ( v76 < 0 )
              *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
            goto LABEL_158;
          }
          v77 = 0x7FFFFFFF;
        }
        else if ( v76 >= v77 )
        {
LABEL_158:
          memcpy((void *)(*(_DWORD *)a1 + v76), v126, v30);
LABEL_42:
          v31 = 0;
          v109 = 4 * v28;
          while ( 1 )
          {
            v32 = *(_DWORD *)(v26 + 12);
            v33 = *(char **)(v32 + v31);
            if ( v33 )
            {
              v34 = strlen(*(const char **)(v32 + v31)) + 1;
            }
            else
            {
              v34 = 1;
              v33 = &byte_8DEAC;
            }
            v35 = *(_DWORD *)(a1 + 4);
            v36 = v35 + v34;
            if ( __CFADD__(v35, v34) )
              break;
            if ( v35 < v36 )
            {
              v37 = *(char **)a1;
              if ( *(_DWORD *)(a1 + 8) >= v36 )
              {
                v38 = *(_DWORD *)(a1 + 4);
LABEL_54:
                memset(&v37[v38], 0, v36 - v38);
                *(_DWORD *)(a1 + 4) = v36;
                goto LABEL_46;
              }
              goto LABEL_89;
            }
LABEL_46:
            v31 += 4;
            memcpy((void *)(*(_DWORD *)a1 + v35), v33, v34);
            if ( v109 == v31 )
              goto LABEL_55;
          }
          if ( (unsigned int)v35 > 0x7FFFFFFE )
          {
            if ( v35 < 0 )
              *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
            goto LABEL_46;
          }
          v36 = 0x7FFFFFFF;
          v37 = *(char **)a1;
          if ( *(_DWORD *)(a1 + 8) >= 0x7FFFFFFFu )
          {
            v38 = *(_DWORD *)(a1 + 4);
            goto LABEL_54;
          }
LABEL_89:
          v37 = (char *)sub_77EB0(a1, v37, v36, 1u);
          *(_DWORD *)a1 = v37;
          v38 = *(_DWORD *)(a1 + 4);
          goto LABEL_54;
        }
        v98 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v77 )
        {
          v98 = (char *)sub_77EB0(a1, *(void **)a1, v77, 1u);
          *(_DWORD *)a1 = v98;
        }
        memset(&v98[*(_DWORD *)(a1 + 4)], 0, v77 - *(_DWORD *)(a1 + 4));
        *(_DWORD *)(a1 + 4) = v77;
        goto LABEL_158;
      }
    }
LABEL_55:
    v26 += 20;
  }
  while ( v107 > ++v106 );
  v40 = sub_75FB0(v128, (unsigned int)v129, v107);
  v41 = v40 - v128;
  if ( v40 == v128 )
    goto LABEL_57;
  v94 = *(_DWORD *)(a1 + 4);
  v95 = v41 + v94;
  if ( __CFADD__(v41, v94) )
  {
    if ( (unsigned int)v94 > 0x7FFFFFFE )
    {
      if ( v94 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_216;
    }
    v95 = 0x7FFFFFFF;
    goto LABEL_226;
  }
  if ( v94 < v95 )
  {
LABEL_226:
    v104 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v95 )
    {
      v104 = (char *)sub_77EB0(a1, *(void **)a1, v95, 1u);
      *(_DWORD *)a1 = v104;
    }
    memset(&v104[*(_DWORD *)(a1 + 4)], 0, v95 - *(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 4) = v95;
  }
LABEL_216:
  memcpy((void *)(*(_DWORD *)a1 + v94), v128, v41);
LABEL_57:
  v42 = 0;
  while ( 2 )
  {
    v43 = *(char **)v3;
    if ( *(_DWORD *)v3 )
    {
      v44 = strlen(*(const char **)v3) + 1;
    }
    else
    {
      v44 = 1;
      v43 = &byte_8DEAC;
    }
    v45 = *(_DWORD *)(a1 + 4);
    v46 = v45 + v44;
    if ( __CFADD__(v45, v44) )
    {
      if ( (unsigned int)v45 <= 0x7FFFFFFE )
      {
        v46 = 0x7FFFFFFF;
        v64 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < 0x7FFFFFFFu )
          goto LABEL_155;
        v65 = *(_DWORD *)(a1 + 4);
LABEL_94:
        memset(&v64[v65], 0, v46 - v65);
        *(_DWORD *)(a1 + 4) = v46;
      }
      else if ( v45 < 0 )
      {
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      }
    }
    else if ( v45 < v46 )
    {
      v64 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) >= v46 )
      {
        v65 = *(_DWORD *)(a1 + 4);
        goto LABEL_94;
      }
LABEL_155:
      v64 = (char *)sub_77EB0(a1, v64, v46, 1u);
      *(_DWORD *)a1 = v64;
      v65 = *(_DWORD *)(a1 + 4);
      goto LABEL_94;
    }
    memcpy((void *)(*(_DWORD *)a1 + v45), v43, v44);
    v47 = sub_75FB0(v130, (unsigned int)v131, *(_DWORD *)(v3 + 4));
    v48 = v47 - v130;
    if ( v47 != v130 )
    {
      v72 = *(_DWORD *)(a1 + 4);
      v73 = v48 + v72;
      if ( __CFADD__(v48, v72) )
      {
        if ( (unsigned int)v72 <= 0x7FFFFFFE )
        {
          v73 = 0x7FFFFFFF;
          goto LABEL_150;
        }
        if ( v72 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      }
      else if ( v72 < v73 )
      {
LABEL_150:
        v86 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v73 )
        {
          v86 = (char *)sub_77EB0(a1, *(void **)a1, v73, 1u);
          *(_DWORD *)a1 = v86;
        }
        memset(&v86[*(_DWORD *)(a1 + 4)], 0, v73 - *(_DWORD *)(a1 + 4));
        v87 = *(char **)a1;
        *(_DWORD *)(a1 + 4) = v73;
        memcpy(&v87[v72], v130, v48);
        goto LABEL_66;
      }
      memcpy((void *)(*(_DWORD *)a1 + v72), v130, v47 - v130);
    }
LABEL_66:
    v49 = sub_75FB0(v132, (unsigned int)v133, *(unsigned __int8 *)(v3 + 8));
    v50 = v49 - v132;
    if ( v49 == v132 )
      goto LABEL_67;
    v74 = *(_DWORD *)(a1 + 4);
    v75 = v50 + v74;
    if ( __CFADD__(v50, v74) )
    {
      if ( (unsigned int)v74 > 0x7FFFFFFE )
      {
        if ( v74 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_124;
      }
      v75 = 0x7FFFFFFF;
LABEL_138:
      v80 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) < v75 )
      {
        v80 = (char *)sub_77EB0(a1, *(void **)a1, v75, 1u);
        *(_DWORD *)a1 = v80;
      }
      memset(&v80[*(_DWORD *)(a1 + 4)], 0, v75 - *(_DWORD *)(a1 + 4));
      v81 = *(char **)a1;
      *(_DWORD *)(a1 + 4) = v75;
      memcpy(&v81[v74], v132, v50);
    }
    else
    {
      if ( v74 < v75 )
        goto LABEL_138;
LABEL_124:
      memcpy((void *)(*(_DWORD *)a1 + v74), v132, v49 - v132);
    }
LABEL_67:
    v51 = sub_75FB0(v134, (unsigned int)v135, *(unsigned __int8 *)(v3 + 9));
    v52 = v51 - v134;
    if ( v51 != v134 )
    {
      v68 = *(_DWORD *)(a1 + 4);
      v69 = v52 + v68;
      if ( __CFADD__(v52, v68) )
      {
        if ( (unsigned int)v68 <= 0x7FFFFFFE )
        {
          v69 = 0x7FFFFFFF;
          goto LABEL_134;
        }
        if ( v68 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      }
      else if ( v68 < v69 )
      {
LABEL_134:
        v78 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v69 )
        {
          v78 = (char *)sub_77EB0(a1, *(void **)a1, v69, 1u);
          *(_DWORD *)a1 = v78;
        }
        memset(&v78[*(_DWORD *)(a1 + 4)], 0, v69 - *(_DWORD *)(a1 + 4));
        v79 = *(char **)a1;
        *(_DWORD *)(a1 + 4) = v69;
        memcpy(&v79[v68], v134, v52);
        goto LABEL_68;
      }
      memcpy((void *)(*(_DWORD *)a1 + v68), v134, v51 - v134);
    }
LABEL_68:
    v53 = v115;
    if ( v115 )
    {
      v54 = *(_DWORD *)(v3 + 12);
      v55 = &v114;
      do
      {
        v56 = v53[4];
        if ( v56 < v54 )
          v53 = (int *)v53[3];
        else
          v55 = v53;
        if ( v56 >= v54 )
          v53 = (int *)v53[2];
      }
      while ( v53 );
      if ( v55 != &v114 && v54 >= v55[4] )
        v53 = (int *)(v55[5] + 1);
    }
    v57 = sub_75FB0(v136, (unsigned int)v137, (unsigned int)v53);
    v58 = v57 - v136;
    if ( v57 != v136 )
    {
      v66 = *(_DWORD *)(a1 + 4);
      v67 = v58 + v66;
      if ( __CFADD__(v58, v66) )
      {
        if ( (unsigned int)v66 <= 0x7FFFFFFE )
        {
          v67 = 0x7FFFFFFF;
          goto LABEL_146;
        }
        if ( v66 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      }
      else if ( v66 < v67 )
      {
LABEL_146:
        v84 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v67 )
        {
          v84 = (char *)sub_77EB0(a1, *(void **)a1, v67, 1u);
          *(_DWORD *)a1 = v84;
        }
        memset(&v84[*(_DWORD *)(a1 + 4)], 0, v67 - *(_DWORD *)(a1 + 4));
        v85 = *(char **)a1;
        *(_DWORD *)(a1 + 4) = v67;
        memcpy(&v85[v66], v136, v58);
        goto LABEL_80;
      }
      memcpy((void *)(*(_DWORD *)a1 + v66), v136, v57 - v136);
    }
LABEL_80:
    v59 = *(_DWORD *)(v3 + 16);
    if ( v59 == -1 )
      v60 = 0;
    else
      v60 = v59 + 1LL;
    v61 = sub_760FC(v140, (unsigned int)v142, v60, HIDWORD(v60)) - v140;
    if ( !v61 )
      goto LABEL_83;
    v70 = *(_DWORD *)(a1 + 4);
    v71 = v61 + v70;
    if ( __CFADD__(v61, v70) )
    {
      if ( (unsigned int)v70 <= 0x7FFFFFFE )
      {
        v71 = 0x7FFFFFFF;
        goto LABEL_142;
      }
      if ( v70 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
LABEL_112:
      memcpy((void *)(*(_DWORD *)a1 + v70), v140, v61);
      goto LABEL_83;
    }
    if ( v70 >= v71 )
      goto LABEL_112;
LABEL_142:
    v82 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v71 )
    {
      v82 = (char *)sub_77EB0(a1, *(void **)a1, v71, 1u);
      *(_DWORD *)a1 = v82;
    }
    memset(&v82[*(_DWORD *)(a1 + 4)], 0, v71 - *(_DWORD *)(a1 + 4));
    v83 = *(char **)a1;
    *(_DWORD *)(a1 + 4) = v71;
    memcpy(&v83[v70], v140, v61);
LABEL_83:
    ++v42;
    v3 += 20;
    if ( v107 > v42 )
      continue;
    break;
  }
  v62 = sub_75FB0(v138, (unsigned int)v139, a2[12]);
  v63 = v62 - v138;
  if ( v62 == v138 )
    goto LABEL_85;
  v92 = *(_DWORD *)(a1 + 4);
  v93 = v63 + v92;
  if ( __CFADD__(v63, v92) )
  {
    if ( (unsigned int)v92 > 0x7FFFFFFE )
    {
      if ( v92 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_218;
    }
    v93 = 0x7FFFFFFF;
    goto LABEL_230;
  }
  if ( v92 < v93 )
  {
LABEL_230:
    v105 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v93 )
    {
      v105 = (char *)sub_77EB0(a1, *(void **)a1, v93, 1u);
      *(_DWORD *)a1 = v105;
    }
    memset(&v105[*(_DWORD *)(a1 + 4)], 0, v93 - *(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 4) = v93;
  }
LABEL_218:
  memcpy((void *)(*(_DWORD *)a1 + v92), v138, v63);
LABEL_85:
  sub_6F11C((int)&v119, v120);
  sub_6F054((int)&v113, v115);
}
// 8DEAC: using guessed type char byte_8DEAC;
// D5C00: using guessed type char under_debugger;
