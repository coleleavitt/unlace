/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BD90
// Address: 0x0005BD90

//----- (0005BD90) --------------------------------------------------------
int __fastcall sub_5BD90(int a1, int a2)
{
  int v3; // r8
  int v4; // r9
  __int64 v5; // r2
  _BOOL4 v6; // r1
  int v7; // r7
  bool v8; // zf
  __int64 v9; // r0
  bool v10; // cc
  int v11; // r3
  int v12; // r8
  char *v13; // r7
  _BOOL4 v14; // r1
  int v15; // r3
  char *v16; // r1
  int v17; // r0
  char *v18; // r0
  char v19; // r3
  int v20; // r8
  int v21; // r7
  int v22; // r2
  int v23; // r3
  unsigned int v24; // r3
  char *v25; // r9
  char *v26; // r0
  int v28; // r2
  unsigned int v29; // r12
  int v30; // r0
  unsigned int v31; // r3
  unsigned int v32; // r1
  int v33; // r1
  int v34; // r3
  int v35; // r0
  const char *v36; // r8
  int v37; // r1
  int v38; // r2
  unsigned int v39; // r3
  char *v40; // r9
  char *v41; // r1
  unsigned int v42; // r2
  int v43; // r7
  char *v44; // r2
  int v45; // r3
  unsigned int v46; // r1
  size_t i; // r0
  unsigned int v48; // r8
  void *v49; // r1
  char *v50; // r0
  int v51; // r1
  int v52; // [sp+18h] [bp-2ECh]
  _BOOL4 v53; // [sp+24h] [bp-2E0h]
  int v54; // [sp+28h] [bp-2DCh]
  unsigned int v55; // [sp+2Ch] [bp-2D8h]
  int v56; // [sp+30h] [bp-2D4h]
  int v57; // [sp+34h] [bp-2D0h]
  char v58; // [sp+44h] [bp-2C0h]
  unsigned int v59; // [sp+4Ch] [bp-2B8h]
  int v61; // [sp+58h] [bp-2ACh]
  int v62; // [sp+5Ch] [bp-2A8h]
  char v63; // [sp+6Bh] [bp-299h] BYREF
  void *v64; // [sp+6Ch] [bp-298h] BYREF
  int v65; // [sp+70h] [bp-294h]
  int v66; // [sp+74h] [bp-290h]
  char *v67; // [sp+78h] [bp-28Ch] BYREF
  int v68; // [sp+7Ch] [bp-288h]
  unsigned int v69; // [sp+80h] [bp-284h]
  char *v70; // [sp+84h] [bp-280h] BYREF
  int v71; // [sp+88h] [bp-27Ch]
  int v72; // [sp+8Ch] [bp-278h]
  _UNKNOWN **v73; // [sp+90h] [bp-274h]
  int v74; // [sp+94h] [bp-270h]
  void **v75; // [sp+98h] [bp-26Ch]
  unsigned __int8 v76; // [sp+9Ch] [bp-268h]
  void *v77; // [sp+A0h] [bp-264h] BYREF
  unsigned int v78; // [sp+A4h] [bp-260h]
  int v79; // [sp+A8h] [bp-25Ch]
  _BYTE *v80; // [sp+ACh] [bp-258h] BYREF
  unsigned int v81; // [sp+B0h] [bp-254h]
  unsigned int v82; // [sp+B4h] [bp-250h]
  _UNKNOWN **v83; // [sp+B8h] [bp-24Ch] BYREF
  char *v84; // [sp+BCh] [bp-248h] BYREF
  unsigned int v85; // [sp+C0h] [bp-244h]
  unsigned int v86; // [sp+C4h] [bp-240h]
  unsigned __int16 v87; // [sp+CEh] [bp-236h]
  int v88; // [sp+F0h] [bp-214h]
  unsigned __int16 v89; // [sp+F4h] [bp-210h]
  unsigned __int16 v90; // [sp+F6h] [bp-20Eh]
  unsigned int v91; // [sp+FCh] [bp-208h]
  int v92; // [sp+100h] [bp-204h]
  unsigned __int16 v93; // [sp+104h] [bp-200h]
  unsigned int v94; // [sp+128h] [bp-1DCh]
  int v95; // [sp+12Ch] [bp-1D8h]
  unsigned int v96; // [sp+140h] [bp-1C4h]
  __int16 v97; // [sp+14Ch] [bp-1B8h]
  int v98; // [sp+2F4h] [bp-10h]

  v84 = nullptr;
  v85 = 0;
  v86 = 0;
  v83 = &off_CFE60;
  v57 = sub_582F4((int)&v83, a2, 1, 1);
  if ( !v57 )
    goto LABEL_68;
  if ( v89 == 450 )
    goto LABEL_151;
  if ( v89 <= 0x1C2u )
  {
    if ( v89 >= 0x16Au )
    {
      if ( v89 > 0x1A4u )
      {
        if ( v89 != 424 )
        {
          if ( v89 == 448 )
            goto LABEL_151;
          if ( v89 != 422 )
            goto LABEL_134;
        }
      }
      else if ( v89 < 0x1A2u )
      {
        if ( v89 == 388 )
        {
          v62 = 24;
          goto LABEL_14;
        }
        goto LABEL_134;
      }
      v62 = 18;
      goto LABEL_14;
    }
    if ( v89 < 0x168u )
    {
      if ( v89 >= 0x164u )
      {
        if ( v89 != 358 )
          goto LABEL_134;
      }
      else if ( v89 < 0x162u )
      {
        if ( (unsigned int)v89 - 332 <= 2 )
        {
LABEL_146:
          v62 = 0;
          goto LABEL_14;
        }
        goto LABEL_134;
      }
    }
LABEL_158:
    v62 = 12;
    goto LABEL_14;
  }
  if ( v89 == 870 )
    goto LABEL_158;
  if ( v89 <= 0x366u )
  {
    if ( v89 > 0x1F2u )
    {
      if ( v89 != 614 )
      {
        if ( v89 == 616 )
        {
          v62 = 7;
          goto LABEL_14;
        }
        if ( v89 == 512 )
        {
          v62 = 31;
          goto LABEL_14;
        }
        goto LABEL_134;
      }
      goto LABEL_158;
    }
    if ( v89 >= 0x1F0u )
    {
      v62 = 15;
      goto LABEL_14;
    }
    if ( v89 == 452 )
    {
LABEL_151:
      v62 = 13;
      goto LABEL_14;
    }
LABEL_134:
    v62 = -1;
    goto LABEL_14;
  }
  if ( v89 == 2560 )
    goto LABEL_151;
  if ( v89 > 0xA00u )
  {
    if ( v89 != 34404 )
    {
      if ( v89 == 36929 )
      {
        v62 = 37;
        goto LABEL_14;
      }
      if ( v89 == 3772 )
      {
        v62 = 57;
        goto LABEL_14;
      }
      goto LABEL_134;
    }
    goto LABEL_146;
  }
  if ( v89 == 1126 )
    goto LABEL_158;
  if ( v89 != 1312 )
    goto LABEL_134;
  v62 = 27;
LABEL_14:
  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  if ( v91 )
    sub_5AC8C((int)&v64, a2, v91 + (unsigned __int64)(unsigned int)(18 * v92), 0);
  v76 = 0;
  v77 = nullptr;
  v78 = 0;
  v79 = 0;
  v80 = nullptr;
  v81 = 0;
  v82 = 0;
  v74 = a2;
  v75 = &v64;
  v73 = &off_CFFA8;
  if ( v88 == 23126 )
    v3 = v98 + 40;
  else
    v3 = v93 + v98 + 24;
  v4 = v3 >> 31;
  v85 = 0;
  v67 = nullptr;
  v68 = 0;
  LODWORD(v5) = v3;
  v69 = 0;
  v6 = v95 == v94;
  if ( v94 >= 0x1000 )
    v6 = 0;
  v7 = v90;
  v53 = v6;
  HIDWORD(v5) = v3 >> 31;
  sub_74C30(a2, v5, 0);
  v8 = v4 == -1;
  if ( v4 == -1 )
    v8 = v3 == -1;
  if ( v8 )
  {
    v3 = sub_74C30(a2, 0, 1);
    v4 = v51;
  }
  LODWORD(v9) = sub_74C10(a2) - v3;
  HIDWORD(v9) = v9;
  v10 = v4 < 0;
  if ( v4 >= 0 )
    v10 = (int)v9 < 0;
  if ( v10 )
  {
    v11 = 0;
    v52 = 0;
  }
  else
  {
    if ( v9 >= (unsigned int)(40 * v7) )
    {
      v52 = v7;
      goto LABEL_32;
    }
    v11 = v9 / 40;
    v52 = v11;
  }
  if ( sub_233D0(
         1,
         (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
         (int)"Number of sections",
         v11) != 1 )
    sub_29E88(0);
LABEL_32:
  if ( v52 )
  {
    v12 = 0;
    do
    {
      v15 = v68;
      v16 = v67;
      v17 = v68 + 1;
      if ( v68 + 1 > v69 )
      {
        v18 = (char *)sub_77EB0((int)&v67, v67, v68 + 1, 0x28u);
        v15 = v68;
        v16 = v18;
        v67 = v18;
        v17 = v68 + 1;
      }
      v68 = v17;
      v13 = &v16[40 * v15];
      if ( sub_74A28(a2, v13, 40) != 40 )
        goto LABEL_57;
      if ( *((_DWORD *)v13 + 3) == *((_DWORD *)v13 + 5) )
      {
        v14 = v53;
        if ( *((_DWORD *)v13 + 2) > *((_DWORD *)v13 + 4) )
          v14 = 0;
        v53 = v14;
      }
      else
      {
        v53 = 0;
      }
    }
    while ( ++v12 != v52 );
  }
  v28 = 512;
  if ( v53 )
    v28 = v95;
  if ( (unsigned __int16)(v97 - 10) <= 3u )
  {
    if ( !v52 )
    {
      v55 = 0;
LABEL_140:
      if ( v88 != 23126 )
        goto LABEL_46;
      goto LABEL_45;
    }
LABEL_138:
    v61 = -1;
    goto LABEL_83;
  }
  if ( v88 == 23126 )
  {
    if ( !v52 )
    {
      v55 = 0;
LABEL_45:
      v96 = v55;
      goto LABEL_46;
    }
    goto LABEL_138;
  }
  if ( v52 )
  {
    v61 = -v28;
LABEL_83:
    v54 = 0;
    v55 = 0;
    v56 = 0;
    while ( 1 )
    {
      v39 = v85;
      v40 = &v67[v54];
      v41 = v84;
      v42 = v85 + 1;
      v43 = *(_DWORD *)&v67[v54 + 20] & v61;
      if ( v85 + 1 > v86 )
      {
        v50 = (char *)sub_77EB0((int)&v84, v84, v42, 0x10u);
        v39 = v85;
        v41 = v50;
        v84 = v50;
        v42 = v85 + 1;
      }
      v85 = v42;
      v44 = &v41[16 * v39];
      *(_DWORD *)v44 = *((_DWORD *)v40 + 3);
      v45 = *((_DWORD *)v40 + 2);
      v32 = *((_DWORD *)v40 + 4);
      if ( v45 )
        break;
      if ( v94 )
      {
        v45 = *((_DWORD *)v40 + 4);
LABEL_108:
        v29 = v94 - 1;
        v30 = -v94;
        goto LABEL_86;
      }
LABEL_88:
      *((_DWORD *)v44 + 3) = v32;
      v33 = v32 + *((_DWORD *)v40 + 3);
      if ( (unsigned __int16)(v97 - 10) > 3u )
      {
        if ( v94 == 4096 || !v95 )
        {
          v35 = -512;
          v34 = 511;
        }
        else
        {
          v34 = v95 - 1;
          v35 = -v95;
        }
        v33 = (v33 + v34) & v35;
      }
      *((_DWORD *)v44 + 2) = v43;
      *((_DWORD *)v44 + 1) = v33;
      if ( v88 == 23126 )
        *((_DWORD *)v44 + 2) = v43 + 40 - v87;
      v70 = nullptr;
      v71 = 0;
      v72 = 0;
      sub_5A9B0((int)&v70, v40, v75);
      if ( v71 )
      {
        v36 = v70;
        if ( !strcmp(v70, ".debug_info") )
          goto LABEL_97;
      }
      else
      {
        v36 = (const char *)&dword_8DA5C;
        if ( !strcmp((const char *)&dword_8DA5C, ".debug_info") )
        {
LABEL_97:
          v76 = 1;
          goto LABEL_98;
        }
      }
      if ( !strcmp(v36, ".note.gnu.build-id") )
      {
        v46 = *((_DWORD *)v40 + 4);
        if ( v46 < 0x10000 )
        {
          if ( v46 > v78 )
          {
            sub_5B7EC((int)&v77, v46);
          }
          else if ( v46 < v78 )
          {
            v78 = *((_DWORD *)v40 + 4);
          }
          sub_74C30(v74, *((int *)v40 + 5), 0);
          if ( sub_74A28(v74, v77, *((_DWORD *)v40 + 4)) != *((_DWORD *)v40 + 4) && v77 )
          {
            v78 = 0;
            sub_77E08(v77);
            v77 = nullptr;
            v79 = 0;
          }
          goto LABEL_98;
        }
      }
      if ( strcmp(v36, ".gnu_debuglink") )
        goto LABEL_98;
      sub_74C30(v74, *((int *)v40 + 5), 0);
      for ( i = sub_74A28(v74, &v63, 1); i == 1; i = sub_74A28(v74, &v63, 1) )
      {
        v58 = v63;
        if ( !v63 )
          goto LABEL_98;
        if ( v81 )
        {
          v48 = v81 + 1;
          v59 = v81 - 1;
          v49 = v80;
          if ( v82 >= v81 + 1 )
            goto LABEL_121;
        }
        else
        {
          v59 = 0;
          v48 = 2;
          v49 = v80;
          if ( v82 >= 2 )
            goto LABEL_121;
        }
        v49 = sub_77EB0((int)&v80, v49, v48, 1u);
        v80 = v49;
LABEL_121:
        v81 = v48;
        *((_BYTE *)v49 + v59) = v58;
        v80[v59 + 1] = 0;
      }
      if ( v80 )
      {
        v81 = 0;
        sub_77E08(v80);
        v80 = nullptr;
        v82 = 0;
      }
LABEL_98:
      if ( v70 )
      {
        v71 = 0;
        sub_77E08(v70);
      }
      v37 = ++v56;
      v54 += 40;
      v38 = v55;
      if ( v55 < *((_DWORD *)v40 + 3) + *((_DWORD *)v40 + 2) )
        v38 = *((_DWORD *)v40 + 3) + *((_DWORD *)v40 + 2);
      v55 = v38;
      if ( v37 >= v52 )
        goto LABEL_140;
    }
    if ( v94 )
      goto LABEL_108;
    v29 = 0;
    v30 = -1;
LABEL_86:
    v31 = (v45 + v29) & v30;
    if ( v32 >= v31 )
      v32 = v31;
    goto LABEL_88;
  }
LABEL_46:
  v19 = v53;
  if ( !v52 )
    v19 = v53 | 1;
  if ( v19 )
  {
    v20 = sub_74C10(a2);
    v21 = v96;
    if ( (unsigned __int16)(v97 - 10) > 3u )
    {
      if ( v94 == 4096 || !v95 )
      {
        v23 = -512;
        v22 = 511;
      }
      else
      {
        v22 = v95 - 1;
        v23 = -v95;
      }
      v21 = (v96 + v22) & v23;
    }
    v24 = v85;
    v25 = v84;
    if ( v85 + 1 > v86 )
    {
      v26 = (char *)sub_77EB0((int)&v84, v84, v85 + 1, 0x10u);
      v24 = v85;
      v25 = v26;
      v84 = v26;
    }
    memmove(v25 + 16, v25, 16 * v24);
    *((_DWORD *)v25 + 3) = v20;
    *(_DWORD *)v25 = 0;
    *((_DWORD *)v25 + 1) = v21;
    *((_DWORD *)v25 + 2) = 0;
    ++v85;
  }
LABEL_57:
  if ( v67 )
  {
    v68 = 0;
    sub_77E08(v67);
  }
  sub_5904C(a1, v62, 0, v76, (int)&v77, (int)&v80);
  if ( v76 )
  {
    v57 = v76;
  }
  else if ( !v78 )
  {
    v57 = v81 > 1;
  }
  v73 = &off_CFFA8;
  if ( v80 )
  {
    v81 = 0;
    sub_77E08(v80);
  }
  if ( v77 )
  {
    v78 = 0;
    sub_77E08(v77);
  }
  if ( v64 )
  {
    v65 = 0;
    sub_77E08(v64);
  }
LABEL_68:
  v83 = &off_CFE60;
  if ( v84 )
  {
    v85 = 0;
    sub_77E08(v84);
  }
  return v57;
}
// 5C3D0: variable 'v51' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
// CFE60: using guessed type _UNKNOWN *off_CFE60;
// CFFA8: using guessed type _UNKNOWN *off_CFFA8;
