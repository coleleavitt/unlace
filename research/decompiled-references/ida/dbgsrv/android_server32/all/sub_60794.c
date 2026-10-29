/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60794
// Address: 0x00060794

//----- (00060794) --------------------------------------------------------
int __fastcall sub_60794(_DWORD *a1)
{
  _DWORD *v1; // r2
  const char *v2; // r4
  char v3; // r1
  int *v4; // r0
  _BOOL4 v5; // r5
  int v6; // r7
  char *v7; // r5
  int v8; // r7
  char *v9; // r6
  unsigned int *v10; // r4
  unsigned int v11; // r1
  char *v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r0
  size_t v16; // r2
  int v17; // r0
  unsigned int v18; // r0
  bool v19; // zf
  const char *v20; // r1
  unsigned int v21; // r1
  __int64 v22; // kr00_8
  unsigned int v23; // r7
  void *v24; // r0
  int v25; // r4
  int v26; // r0
  int v27; // r1
  __int64 v28; // r0
  int v29; // r3
  bool v30; // cf
  size_t v31; // r2
  unsigned int v32; // r0
  const char *v33; // r0
  const char *v34; // r2
  const char *v35; // r0
  unsigned int v36; // r5
  const char *v37; // r2
  unsigned int *v38; // r0
  void *v39; // r0
  _DWORD *v40; // r3
  unsigned int v41; // r0
  __int64 v42; // kr08_8
  unsigned int v43; // r5
  int v44; // r1
  int v45; // r5
  size_t v46; // r2
  int v47; // r4
  unsigned int v48; // r6
  char *v49; // r1
  _BYTE *v50; // r0
  unsigned int v51; // r6
  char *v52; // r0
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r1
  int v57; // r2
  _DWORD *v59; // r4
  int v60; // r0
  int v61; // r0
  int v62; // r1
  char *v63; // r4
  unsigned int v64; // r6
  int i; // r5
  void *v66; // r0
  unsigned int *v67; // [sp+Ch] [bp-2A0h]
  void **v68; // [sp+1Ch] [bp-290h]
  int v69; // [sp+20h] [bp-28Ch]
  int *v70; // [sp+24h] [bp-288h]
  void **v71; // [sp+28h] [bp-284h]
  char *v72; // [sp+2Ch] [bp-280h]
  void **v73; // [sp+38h] [bp-274h]
  int v74; // [sp+3Ch] [bp-270h]
  char *v75; // [sp+44h] [bp-268h]
  char *v76; // [sp+4Ch] [bp-260h]
  int *v77; // [sp+68h] [bp-244h]
  int v79; // [sp+7Ch] [bp-230h]
  char *v80; // [sp+80h] [bp-22Ch]
  unsigned int v81; // [sp+84h] [bp-228h]
  char *v82; // [sp+88h] [bp-224h]
  unsigned int v83; // [sp+88h] [bp-224h]
  size_t v84; // [sp+88h] [bp-224h]
  unsigned int v85; // [sp+88h] [bp-224h]
  char *v86; // [sp+8Ch] [bp-220h] BYREF
  unsigned int v87; // [sp+90h] [bp-21Ch]
  int v88; // [sp+94h] [bp-218h]
  char *v89; // [sp+98h] [bp-214h] BYREF
  int v90; // [sp+9Ch] [bp-210h]
  int v91; // [sp+A0h] [bp-20Ch]
  int v92; // [sp+A4h] [bp-208h]
  int v93; // [sp+A8h] [bp-204h]
  int v94; // [sp+ACh] [bp-200h]
  _DWORD v95[10]; // [sp+B0h] [bp-1FCh] BYREF
  _BYTE v96[324]; // [sp+D8h] [bp-1D4h] BYREF
  int v97; // [sp+21Ch] [bp-90h]
  __int64 v98; // [sp+220h] [bp-8Ch]
  unsigned int v99; // [sp+228h] [bp-84h]
  int v100; // [sp+22Ch] [bp-80h]
  unsigned __int8 v101; // [sp+238h] [bp-74h]
  char v102; // [sp+239h] [bp-73h]
  unsigned int v103; // [sp+274h] [bp-38h]
  char v104; // [sp+290h] [bp-1Ch]
  char v105[4]; // [sp+29Ch] [bp-10h] BYREF
  char v106[8]; // [sp+2A0h] [bp-Ch] BYREF

  v1 = (_DWORD *)*a1;
  if ( !*a1 || v1[1] != 1 )
  {
    sub_1BBA0((int)"Input source is not local file.\n");
    v3 = 0;
    return v3 & 1;
  }
  if ( v1[3] )
    v2 = (const char *)v1[2];
  else
    v2 = &byte_B3CBE;
  v4 = open_linput(v2, 0);
  if ( !v4 )
  {
    sub_1BBA0((int)"Cannot open file: %s.\n", v2);
    v3 = 0;
    return v3 & 1;
  }
  v70 = v4;
  sub_2BCCC((int)v95, v4, 0, 0);
  sub_27920((int)v95, nullptr);
  if ( !sub_27938((int)v95) || !sub_27A6C((int)v95) )
  {
    LOBYTE(v79) = 0;
    sub_1BBA0((int)"Failed to read ELF ident/header from: %s\n", v2);
    goto LABEL_95;
  }
  if ( !sub_2C81C((int)v95) )
  {
    LOBYTE(v79) = 0;
    sub_1BBA0((int)"Failed to read ELF sections from: %s\n", v2);
    goto LABEL_95;
  }
  v87 = 0;
  v86 = nullptr;
  v88 = 0;
  v5 = 1;
  if ( v103 < 2 )
  {
    LOBYTE(v79) = 0;
    v59 = a1;
    goto LABEL_97;
  }
  v81 = 1;
  v79 = 0;
  v59 = a1;
  v67 = a1 + 32;
  v68 = (void **)(a1 + 30);
  v71 = (void **)(a1 + 13);
  do
  {
    v6 = v59[14];
    if ( v59[15] >= (unsigned int)(v6 + 1) )
    {
      v7 = (char *)*v71;
    }
    else
    {
      v7 = (char *)qvector_reserve((int)v71, *v71, v6 + 1, 0x68u);
      v59 = a1;
      a1[13] = v7;
      v6 = a1[14];
    }
    v8 = 104 * v6;
    v9 = &v7[v8];
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 4) = 0;
    *((_DWORD *)v9 + 5) = 0;
    memset(&v7[v8], 0, 0x68u);
    ++v59[14];
    v72 = &v7[v8 + 20];
    v82 = &v7[v8 + 16];
    v73 = (void **)&v7[v8 + 12];
    v10 = (unsigned int *)sub_2BA40((int)v96, v81);
    v11 = v10[5];
    *(_DWORD *)v9 = v10[4];
    *((_DWORD *)v9 + 1) = v11;
    v12 = &v7[v8];
    *((_DWORD *)v12 + 2) = v10[8];
    *((_DWORD *)v12 + 6) = v10[10];
    *((_DWORD *)v12 + 7) = v10[14];
    v13 = v10[6];
    *((_DWORD *)v12 + 9) = v10[7];
    *((_DWORD *)v12 + 8) = v13;
    v14 = v10[1];
    *((_DWORD *)v12 + 11) = 0;
    *((_DWORD *)v12 + 10) = v14;
    v15 = v10[11];
    *((_DWORD *)v12 + 13) = 0;
    *((_DWORD *)v12 + 12) = v15;
    v75 = &v7[v8 + 40];
    v76 = &v7[v8 + 32];
    v77 = (int *)&v7[v8 + 8];
    sub_2D0C4((int)v96, v73, v10);
    v16 = _strlen_chk(".zdebug_", 9);
    v17 = 1;
    if ( !v16 )
      goto LABEL_25;
    v18 = *(_DWORD *)v82 - 1;
    if ( !*(_DWORD *)v82 )
      v18 = 0;
    if ( v18 >= v16 && (v19 = strncmp((const char *)*v73, ".zdebug_", v16) == 0, v17 = 1, v19)
      || (v17 = 0, (v10[2] & 0x800) != 0) )
    {
LABEL_25:
      v74 = v17;
      if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
      {
        if ( *(_DWORD *)v82 )
          v20 = (const char *)*v73;
        else
          v20 = &byte_B3CBE;
        sub_1BBA0((int)"Section '%s' is compressed.\n", v20);
      }
      v21 = v10[3];
      *((_DWORD *)v12 + 14) = v10[2] | 0x800;
      *((_DWORD *)v12 + 15) = v21;
      *((_DWORD *)v12 + 18) = *v77;
      *((_DWORD *)v12 + 19) = 0;
      v94 = 0;
      v93 = 0;
      v92 = 0;
      v91 = 0;
      v90 = 0;
      v89 = nullptr;
      v69 = 1;
      v22 = qlseek(v97, 0, 1) - v98;
      if ( qlseek(v97, *((_QWORD *)v10 + 3) + v98, 0) == -1 )
      {
LABEL_44:
        sub_1BBA0((int)"Truncated file.\n");
        qlseek(v97, v98 + v22, 0);
        v25 = *(_DWORD *)v82;
        v26 = v79;
        goto LABEL_59;
      }
      if ( v74 )
      {
        if ( sub_2BF0C((int)v95, v105, 12, 0) )
          goto LABEL_44;
        if ( !v104 )
          memrev(v106, 8);
        v89 = (_BYTE *)(&dword_0 + 1);
        v91 = ((((unsigned __int8)v106[3] << 8) + (unsigned __int8)v106[2]) << 16)
            + ((unsigned __int8)v106[1] << 8)
            + (unsigned __int8)v106[0];
        v92 = ((((unsigned __int8)v106[7] << 8) + (unsigned __int8)v106[6]) << 16)
            + ((unsigned __int8)v106[5] << 8)
            + (unsigned __int8)v106[4];
        v93 = 1;
        v94 = 0;
        v23 = *(_DWORD *)v82 - 1;
        if ( !*(_DWORD *)v82 )
          v23 = 0;
        if ( v23 >= 2 )
        {
          if ( v23 != 2 )
          {
            memmove((char *)*v73 + 1, (char *)*v73 + 2, v23 - 2);
            v69 = v23 - 1;
          }
          if ( *(_DWORD *)v72 >= (unsigned int)(v69 + 1) )
          {
            v24 = *v73;
          }
          else
          {
            v24 = qvector_reserve((int)v73, *v73, v69 + 1, 1u);
            *v73 = v24;
          }
          *(_DWORD *)v82 = v69 + 1;
          *((_BYTE *)v24 + v69) = 0;
        }
      }
      else if ( !sub_2C722((int)v95, (int)&v89) )
      {
        goto LABEL_44;
      }
      *((_DWORD *)v12 + 16) = v89;
      *((_DWORD *)v12 + 17) = 0;
      v27 = v94;
      *((_DWORD *)v12 + 20) = v93;
      *((_DWORD *)v12 + 21) = v27;
      v28 = qlseek(v97, 0, 1);
      v29 = HIDWORD(v98);
      v30 = (unsigned int)v28 >= (unsigned int)v98;
      *((_DWORD *)v12 + 22) = v28 - v98;
      *((_DWORD *)v12 + 23) = HIDWORD(v28) - (v29 + !v30);
      *v77 = v91;
      qlseek(v97, v98 + v22, 0);
    }
    v31 = _strlen_chk(".rel.debug_", 12);
    if ( !v31 )
      goto LABEL_53;
    v32 = *(_DWORD *)v82 - 1;
    if ( !*(_DWORD *)v82 )
      v32 = 0;
    if ( v32 >= v31 && !strncmp((const char *)*v73, ".rel.debug_", v31) )
    {
LABEL_53:
      sub_6185C((int)v73, ".rel.debug_", ".rela.debug_");
      if ( *(_QWORD *)v75 == 9 )
      {
        *(_DWORD *)v75 = 4;
        *((_DWORD *)v75 + 1) = 0;
      }
    }
    v25 = *(_DWORD *)v82;
    if ( *(_DWORD *)v82 )
      v33 = (const char *)*v73;
    else
      v33 = &byte_B3CBE;
    v26 = v79 | (strncmp(v33, ".debug_", 7u) == 0);
LABEL_59:
    v79 = v26;
    if ( v25 )
      v34 = (const char *)*v73;
    else
      v34 = &byte_B3CBE;
    if ( !strcmp(v34, ".note.iar") )
    {
      v36 = *v77;
      if ( v25 )
        v37 = (const char *)*v73;
      else
        v37 = &byte_B3CBE;
      sub_1BBA0((int)"Spotted %u bytes-long section: '%s'.\n", *v77, v37);
      v83 = v36;
      v42 = qlseek(v97, 0, 1) - v98;
      if ( qlseek(v97, *(_QWORD *)v76 + v98, 0) == -1 )
      {
        sub_1BBA0((int)"Truncated file.\n");
        qlseek(v97, v98 + v42, 0);
      }
      else
      {
        v43 = v36 / 0x14;
        if ( v83 == 20 * (v83 / 0x14) )
        {
          if ( v83 >= 0x14 )
          {
            v51 = 0;
            do
            {
              v90 = 0;
              v89 = nullptr;
              v91 = 0;
              v89 = (char *)qvector_reserve((int)&v89, nullptr, 0x14u, 1u);
              memset(&v89[v90], 0, 20 - v90);
              v90 = 20;
              if ( sub_2BF0C((int)v95, v89, 20, 1) )
              {
                v52 = v89;
              }
              else
              {
                sub_6198C((int)&v86, v87 + 1);
                v53 = 12 * v87;
                v54 = (int)v86;
                *(_DWORD *)&v86[v53] = 0;
                v55 = v54 + v53;
                *(_DWORD *)(v55 + 4) = 0;
                *(_DWORD *)(v55 + 8) = 0;
                ++v87;
                v52 = *(char **)(v54 + v53);
                *(_DWORD *)(v54 + v53) = v89;
                v56 = *(_DWORD *)(v54 + v53 + 4);
                *(_DWORD *)(v55 + 4) = v90;
                v57 = *(_DWORD *)(v55 + 8);
                *(_DWORD *)(v55 + 8) = v91;
                v89 = v52;
                v90 = v56;
                v91 = v57;
              }
              if ( v52 )
              {
                v90 = 0;
                qfree(v52);
                v91 = 0;
                v89 = nullptr;
              }
              ++v51;
            }
            while ( v51 < v43 );
          }
        }
        else
        {
          sub_1BBA0((int)"Section is odd-sized. Ignoring.\n");
        }
        qlseek(v97, v98 + v42, 0);
      }
    }
    else
    {
      if ( v25 )
        v35 = (const char *)*v73;
      else
        v35 = &byte_B3CBE;
      if ( !strcmp(v35, ".gnu_debugaltlink") )
      {
        v38 = (unsigned int *)sub_2BA40((int)v96, v81);
        v90 = 0;
        v89 = nullptr;
        v91 = 0;
        sub_2DCFC((int)v96, (int)&v89, v38);
        v39 = *v68;
        v40 = a1;
        if ( *v68 )
        {
          a1[31] = 0;
          qfree(v39);
          v41 = 0;
          *v68 = nullptr;
          *v67 = 0;
          v40 = a1;
        }
        else
        {
          v41 = *v67;
        }
        v44 = v40[31];
        v45 = v44 - 1;
        if ( !v44 )
          v45 = 0;
        v46 = v90;
        v47 = v45 + v90;
        v48 = v45 + v90 + 1;
        v49 = v89;
        v30 = v41 >= v48;
        v50 = nullptr;
        if ( !v30 )
        {
          v80 = v89;
          v84 = v90;
          v50 = qvector_reserve((int)v68, nullptr, v45 + v90 + 1, 1u);
          *v68 = v50;
          v40 = a1;
          v46 = v84;
          v49 = v80;
        }
        v40[31] = v48;
        v50[v47] = 0;
        memmove((void *)(v40[30] + v45), v49, v46);
        if ( v89 )
        {
          v90 = 0;
          qfree(v89);
          v91 = 0;
          v89 = nullptr;
        }
      }
    }
    ++v81;
    v59 = a1;
  }
  while ( v81 < v103 );
  v5 = v87 == 0;
LABEL_97:
  v60 = v101;
  *((_BYTE *)v59 + 97) = v102 == 2;
  *((_BYTE *)v59 + 96) = v60 == 2;
  if ( !v5 )
    sub_61794(v59, (int *)&v86);
  v61 = HIDWORD(v98);
  v62 = v100;
  v30 = v99 >= (unsigned int)v98;
  v59[28] = v99 - v98;
  v59[29] = v62 - (v61 + !v30);
  v63 = v86;
  if ( v86 )
  {
    v85 = v87;
    if ( v87 )
    {
      v64 = 1;
      for ( i = 8; ; i += 12 )
      {
        v66 = *(void **)&v63[i - 8];
        if ( v66 )
        {
          *(_DWORD *)&v63[i - 4] = 0;
          qfree(v66);
          *(_DWORD *)&v63[i - 8] = 0;
          *(_DWORD *)&v63[i] = 0;
        }
        if ( v64 >= v85 )
          break;
        ++v64;
        v63 = v86;
      }
      v63 = v86;
    }
    v87 = 0;
    qfree(v63);
    v88 = 0;
    v86 = nullptr;
  }
LABEL_95:
  sub_283E4(v95);
  close_linput(v70);
  v3 = v79;
  return v3 & 1;
}
// 0: using guessed type int dword_0;
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
// DE4A8: using guessed type int dword_DE4A8;
