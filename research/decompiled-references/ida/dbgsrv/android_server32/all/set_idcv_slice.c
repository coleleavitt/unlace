/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_slice
// Address: 0x00045740

//----- (00045740) --------------------------------------------------------
int __fastcall set_idcv_slice(unsigned __int8 *a1, int a2, unsigned int a3, unsigned __int8 *a4, int a5)
{
  int v7; // r0
  int v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r2
  unsigned int v12; // r5
  int v13; // r3
  unsigned int v14; // r2
  unsigned __int8 ***v15; // r1
  size_t v16; // r4
  unsigned __int8 ***v17; // r7
  unsigned __int8 **v18; // r0
  size_t v19; // r2
  int v20; // r3
  size_t v21; // r1
  int v22; // r2
  unsigned int v23; // r0
  size_t v24; // r1
  unsigned int v25; // r2
  unsigned int v26; // r4
  unsigned int v27; // r0
  _DWORD *v28; // r4
  int v29; // r0
  int v30; // r5
  int v31; // r4
  _DWORD *v32; // r1
  const char *v33; // r7
  _DWORD *v34; // r5
  const char *v35; // r0
  int v36; // r0
  int *v37; // r1
  _DWORD *v38; // r4
  int *v39; // r0
  int v41; // r0
  int v42; // r7
  unsigned int v43; // r4
  int *v44; // r7
  int *v45; // r1
  _DWORD *v46; // r7
  _BYTE *v47; // r0
  int v48; // r1
  unsigned int v49; // r0
  int v50; // r4
  _BYTE *v51; // r0
  unsigned __int8 **v52; // r0
  unsigned __int8 ***v53; // r5
  bool v54; // cc
  size_t v55; // r1
  unsigned int v56; // r2
  int *v57; // r0
  _DWORD *v58; // r3
  size_t v59; // r1
  int v60; // r0
  unsigned int v61; // r5
  unsigned int v62; // r7
  unsigned int v63; // r4
  void *v64; // r0
  size_t v65; // r4
  int *v66; // r1
  char *v67; // r0
  int v68; // r1
  unsigned __int8 *v69; // r2
  _DWORD *v70; // r0
  _DWORD *v71; // r0
  bool v72; // zf
  int v73; // r1
  char *v74; // r2
  int v75; // r4
  _DWORD *v76; // r5
  const char *v77; // r7
  const char *v78; // r0
  int v79; // r0
  int *v80; // r1
  int *v81; // r1
  char *v82; // r3
  int v83; // r0
  unsigned __int8 *v84; // r1
  _DWORD *v85; // r0
  _DWORD *v86; // r0
  int v87; // r1
  int *v88; // r4
  int *v89; // r0
  _DWORD *v90; // r0
  int v91; // r1
  int *v92; // r6
  int *v93; // r0
  _DWORD *v94; // r0
  int v95; // r1
  int *v96; // [sp+14h] [bp-8Ch]
  size_t v97; // [sp+18h] [bp-88h]
  unsigned __int8 *v98; // [sp+20h] [bp-80h]
  unsigned int v99; // [sp+20h] [bp-80h]
  int *v100; // [sp+20h] [bp-80h]
  unsigned __int8 *v101; // [sp+20h] [bp-80h]
  int v102; // [sp+20h] [bp-80h]
  unsigned int v103; // [sp+24h] [bp-7Ch]
  _DWORD *v104; // [sp+24h] [bp-7Ch]
  int *v105; // [sp+24h] [bp-7Ch]
  int *v106; // [sp+24h] [bp-7Ch]
  int v108; // [sp+28h] [bp-78h]
  size_t v109; // [sp+2Ch] [bp-74h]
  size_t v110; // [sp+2Ch] [bp-74h]
  void **v112; // [sp+30h] [bp-70h]
  unsigned int v113; // [sp+34h] [bp-6Ch]
  unsigned int v114; // [sp+34h] [bp-6Ch]
  int v115; // [sp+34h] [bp-6Ch]
  unsigned int v116; // [sp+38h] [bp-68h]
  int **v117; // [sp+40h] [bp-60h] BYREF
  unsigned __int8 *v118; // [sp+44h] [bp-5Ch] BYREF
  int v119; // [sp+48h] [bp-58h]
  int v120; // [sp+4Ch] [bp-54h]
  unsigned __int8 *v121; // [sp+50h] [bp-50h] BYREF
  unsigned __int8 *v122; // [sp+54h] [bp-4Ch] BYREF
  int v123; // [sp+58h] [bp-48h]
  _DWORD *v124[2]; // [sp+5Ch] [bp-44h] BYREF
  unsigned __int8 **v125; // [sp+64h] [bp-3Ch] BYREF
  unsigned __int8 *v126; // [sp+68h] [bp-38h] BYREF
  char *v127; // [sp+6Ch] [bp-34h]
  int v128; // [sp+70h] [bp-30h]
  int v129; // [sp+74h] [bp-2Ch]
  int v130; // [sp+78h] [bp-28h]
  char s[32]; // [sp+7Ch] [bp-24h] BYREF

  while ( 1 )
  {
    v7 = *a1;
    if ( v7 != 10 )
      break;
    a1 = deref_idcv(a1, 0);
    if ( !a1 )
      return get_qerrno();
  }
  if ( v7 != 5 )
  {
    if ( v7 != 7 )
      return set_qerrno(1568);
    v9 = *((_DWORD *)a1 + 3);
    v10 = v9 - 1;
    if ( !v9 )
      v10 = 0;
    v11 = a2;
    v98 = a4;
    if ( a2 < 0 )
      v11 = (v10 + a2) & ~((int)(v10 + a2) >> 31);
    v112 = (void **)(a1 + 8);
    v12 = v10;
    if ( v11 <= v10 )
      v12 = v11;
    v13 = a3;
    if ( a5 << 31 )
      v13 = v12 + 1;
    if ( v13 < 0 )
      v13 = (v13 + v10) & ~((int)(v13 + v10) >> 31);
    LOBYTE(v125) = 2;
    v130 = 0;
    v129 = 0;
    v128 = 0;
    v127 = nullptr;
    if ( v13 <= v10 )
      v10 = v13;
    v14 = v12;
    if ( v12 <= v10 )
      v14 = v10;
    v15 = (unsigned __int8 ***)v98;
    v113 = v14;
    if ( *v98 == 7
      || (v41 = copy_idcv((unsigned __int8 *)&v125, v98),
          (v50 = v41, v42 = 1, !v41) && (v50 = idcv_string((int)&v125), v15 = &v125, v14 = v113, !v50)) )
    {
      v16 = v14 - v12;
      v17 = v15;
      v18 = v15[3];
      v19 = (size_t)v18 - 1;
      if ( !v18 )
        v19 = 0;
      v20 = (int)(a1 + 8);
      v109 = v19;
      if ( v19 < v16 )
      {
        v21 = v16 - v19;
        v22 = *((_DWORD *)a1 + 3);
        v23 = v22 - 1;
        if ( !v22 )
          v23 = 0;
        v19 = v109;
        if ( v21 && v23 > v12 )
        {
          v24 = v21 + v12;
          v99 = v12;
          v25 = v12 + 1;
          v97 = v16;
          if ( v23 > v24 )
          {
            v26 = v23 - v24;
            memmove((char *)*v112 + v12, (char *)*v112 + v24, v23 - v24);
            v20 = (int)(a1 + 8);
            v27 = v26 + v12;
            v16 = v97;
            v99 = v27;
            v25 = v27 + 1;
          }
          if ( *((_DWORD *)a1 + 4) < v25 )
          {
            v28 = (_DWORD *)v20;
            v103 = v25;
            v51 = qvector_reserve(v20, *(void **)v20, v25, 1u);
            *v28 = v51;
            v20 = (int)v28;
            v25 = v103;
            v16 = v97;
          }
          else
          {
            v51 = *(_BYTE **)v20;
          }
          *(_DWORD *)(v20 + 4) = v25;
          v51[v99] = 0;
          v19 = v109;
        }
      }
      if ( v19 >= v16 )
        v19 = v16;
      v52 = (unsigned __int8 **)(*(_DWORD *)v20 + v12);
      v53 = v17;
      qmemcpy(v52, v17[2], v19);
      v54 = v109 > v16;
      v55 = v16;
      v50 = 0;
      v42 = 0;
      v56 = v113;
      if ( v54 )
      {
        if ( (unsigned int)v53[3] | v55 )
          v57 = (int *)((char *)v53[2] + v55);
        else
          v57 = dword_B3DF8;
        v106 = v57;
        v58 = a1 + 8;
        v59 = v109 - v55;
        v60 = *((_DWORD *)a1 + 3);
        v61 = v60 - 1;
        if ( !v60 )
          v61 = 0;
        v110 = v59;
        v62 = v61 + v59;
        v63 = v61 + v59 + 1;
        if ( *((_DWORD *)a1 + 4) >= v63 )
        {
          v64 = *v112;
        }
        else
        {
          v64 = qvector_reserve((int)v112, *v112, v63, 1u);
          *v112 = v64;
          v58 = a1 + 8;
          v56 = v113;
        }
        v58[1] = v63;
        *((_BYTE *)v64 + v62) = 0;
        if ( v61 <= v56 )
        {
          v66 = v106;
          v65 = v110;
        }
        else
        {
          v65 = v110;
          memmove((void *)(*v58 + v113 + v110), (const void *)(*v58 + v113), v61 - v113);
          v61 = v113;
          v58 = a1 + 8;
          v66 = v106;
        }
        memmove((void *)(*v58 + v61), v66, v65);
        v42 = 0;
        v50 = 0;
      }
    }
    if ( (unsigned __int8)v125 == 5 )
    {
      sub_448A0((int)v127, (unsigned __int8 *)&v125);
    }
    else if ( (unsigned __int8)v125 == 7 && v127 )
    {
      v128 = 0;
      qfree(v127);
      v129 = 0;
      v127 = nullptr;
    }
    if ( !v42 )
      return 0;
    return v50;
  }
  if ( a5 << 31 )
  {
    qsnprintf(s, 32, "%u");
    return set_idcv_attr((int)a1, s, a4, 0);
  }
  v127 = nullptr;
  v126 = nullptr;
  v125 = &v126;
  v29 = *a4;
  if ( v29 == 7 )
  {
    if ( *((_DWORD *)a4 + 3) >= 2u )
    {
      v43 = 0;
      v101 = a4;
      do
      {
        v124[0] = (_DWORD *)v43;
        v118 = (unsigned __int8 *)v124;
        sub_4DBBE((int)&v121, (int **)&v125, (unsigned int *)v124, (int)&byte_B45D0, (int **)&v118);
        v44 = (int *)v121;
        v45 = dword_B3DF8;
        if ( *((_DWORD *)a4 + 3) | v43 )
          v45 = (int *)(*((_DWORD *)a4 + 2) + v43);
        v105 = v45;
        v114 = v43;
        free_idcv(v121 + 24);
        *((_BYTE *)v44 + 24) = 7;
        v44[8] = 0;
        v44[9] = 0;
        v44[10] = 0;
        v46 = v44 + 8;
        v47 = qvector_reserve((int)v46, nullptr, 2u, 1u);
        *v46 = v47;
        v46[1] = 2;
        *v47 = *(_BYTE *)v105;
        *(_BYTE *)(*v46 + 1) = 0;
        a4 = v101;
        v48 = *((_DWORD *)v101 + 3);
        v49 = v48 - 1;
        if ( !v48 )
          v49 = 0;
        ++v43;
      }
      while ( v114 + 1 < v49 );
    }
    goto LABEL_109;
  }
  if ( v29 != 5 )
  {
    v108 = 0;
    v50 = set_qerrno(1568);
    goto LABEL_168;
  }
  v30 = *((_DWORD *)a4 + 2);
  sub_1B09C((int)&v121, "0");
  v31 = *(_DWORD *)(v30 + 4);
  v32 = (_DWORD *)(v30 + 4);
  if ( !v31 )
  {
    v39 = (int *)v121;
    v34 = (_DWORD *)(v30 + 4);
    v38 = v32;
    if ( !v121 )
      goto LABEL_92;
    goto LABEL_91;
  }
  v104 = (_DWORD *)(v30 + 4);
  v33 = &byte_B3CBE;
  if ( v122 )
    v33 = (const char *)v121;
  v100 = (int *)v121;
  v34 = (_DWORD *)(v30 + 4);
  do
  {
    v35 = &byte_B3CBE;
    if ( *(_DWORD *)(v31 + 20) )
      v35 = *(const char **)(v31 + 16);
    v36 = strcmp(v35, v33);
    if ( v36 >= 0 )
      v34 = (_DWORD *)v31;
    v37 = (int *)(v31 + 4);
    if ( v36 >= 0 )
      v37 = (int *)v31;
    v31 = *v37;
  }
  while ( *v37 );
  v38 = v104;
  v39 = v100;
  if ( v100 )
  {
LABEL_91:
    v122 = nullptr;
    qfree(v39);
    v123 = 0;
    v121 = nullptr;
  }
LABEL_92:
  if ( v34 != v38 )
  {
    while ( 1 )
    {
      v67 = &byte_B3CBE;
      if ( v34[5] )
        v67 = (char *)v34[4];
      v68 = (unsigned __int8)*v67;
      if ( v68 != 48 )
        break;
      if ( v67[1] )
        goto LABEL_109;
LABEL_103:
      qsscanf((int)v67, "%u");
      v118 = (unsigned __int8 *)v124;
      sub_4DB24((int)&v121, (int **)&v125, (unsigned int *)v124, (int)&byte_B45D0, (int **)&v118);
      copy_idcv(v121 + 24, (unsigned __int8 *)v34 + 32);
      v70 = (_DWORD *)v34[1];
      if ( v70 )
      {
        do
        {
          v34 = v70;
          v70 = (_DWORD *)*v70;
        }
        while ( v70 );
      }
      else
      {
        v71 = v34 + 2;
        v72 = *(_DWORD *)v34[2] == (_DWORD)v34;
        v34 = (_DWORD *)v34[2];
        if ( !v72 )
        {
          do
          {
            v73 = *v71;
            v71 = (_DWORD *)(*v71 + 8);
            v34 = *(_DWORD **)(v73 + 8);
          }
          while ( *v34 != v73 );
        }
      }
      if ( v34 == v38 )
        goto LABEL_109;
    }
    if ( *v67 )
    {
      v69 = (unsigned __int8 *)(v67 + 1);
      while ( (char)v68 > -1 && (unsigned int)(unsigned __int8)v68 - 48 <= 9 )
      {
        v68 = *v69++;
        if ( !v68 )
          goto LABEL_103;
      }
    }
  }
LABEL_109:
  v50 = a2;
  v74 = &v127[-(a3 - a2)];
  if ( (int)(a3 - a2) <= 0 )
    v74 = v127;
  v115 = *((_DWORD *)a1 + 2);
  if ( v74 )
  {
    v123 = 0;
    v122 = nullptr;
    v121 = (unsigned __int8 *)&v122;
    sub_1B09C((int)&v118, "0");
    v75 = *(_DWORD *)(v115 + 4);
    v76 = (_DWORD *)(v115 + 4);
    v102 = v115 + 4;
    if ( v75 )
    {
      v77 = &byte_B3CBE;
      if ( v119 )
        v77 = (const char *)v118;
      v96 = (int *)v118;
      do
      {
        v78 = &byte_B3CBE;
        if ( *(_DWORD *)(v75 + 20) )
          v78 = *(const char **)(v75 + 16);
        v79 = strcmp(v78, v77);
        if ( v79 >= 0 )
          v76 = (_DWORD *)v75;
        v80 = (int *)(v75 + 4);
        if ( v79 >= 0 )
          v80 = (int *)v75;
        v75 = *v80;
      }
      while ( *v80 );
      v81 = v96;
      if ( !v96 )
        goto LABEL_127;
    }
    else
    {
      v81 = (int *)v118;
      if ( !v118 )
      {
LABEL_127:
        if ( (_DWORD *)v102 != v76 )
        {
          while ( 1 )
          {
            v82 = &byte_B3CBE;
            if ( v76[5] )
              v82 = (char *)v76[4];
            v83 = (unsigned __int8)*v82;
            if ( v83 != 48 )
              break;
            if ( v82[1] )
              goto LABEL_151;
LABEL_138:
            qsscanf((int)v82, "%u");
            if ( v116 >= a2 )
            {
              if ( v116 >= a3 )
              {
                qsnprintf(s, 32, "%u");
                sub_1B09C((int)&v118, s);
                v117 = (int **)&v118;
                sub_4DC58((int)v124, (int **)&v121, (int)&v118, (int)&byte_B45D0, &v117);
                copy_idcv((unsigned __int8 *)v124[0] + 32, (unsigned __int8 *)v76 + 32);
                if ( v118 )
                {
                  v119 = 0;
                  qfree(v118);
                  v120 = 0;
                  v118 = nullptr;
                }
              }
              v76 = sub_4DD28(v115, (int)v76);
            }
            else
            {
              v85 = (_DWORD *)v76[1];
              if ( v85 )
              {
                do
                {
                  v76 = v85;
                  v85 = (_DWORD *)*v85;
                }
                while ( v85 );
              }
              else
              {
                v86 = v76 + 2;
                v72 = *(_DWORD *)v76[2] == (_DWORD)v76;
                v76 = (_DWORD *)v76[2];
                if ( !v72 )
                {
                  do
                  {
                    v87 = *v86;
                    v86 = (_DWORD *)(*v86 + 8);
                    v76 = *(_DWORD **)(v87 + 8);
                  }
                  while ( *v76 != v87 );
                }
              }
            }
            if ( (_DWORD *)v102 == v76 )
              goto LABEL_151;
          }
          if ( *v82 )
          {
            v84 = (unsigned __int8 *)(v82 + 1);
            while ( (char)v83 > -1 && (unsigned int)(unsigned __int8)v83 - 48 <= 9 )
            {
              v83 = *v84++;
              if ( !v83 )
                goto LABEL_138;
            }
          }
        }
LABEL_151:
        v88 = (int *)v121;
        if ( &v122 != (unsigned __int8 **)v121 )
        {
          do
          {
            sub_4D840((_DWORD **)v115, v102, (int)(v88 + 4), (int)(v88 + 4));
            v89 = (int *)v88[1];
            if ( v89 )
            {
              do
              {
                v88 = v89;
                v89 = (int *)*v89;
              }
              while ( v89 );
            }
            else
            {
              v90 = v88 + 2;
              v72 = *(_DWORD *)v88[2] == (_DWORD)v88;
              v88 = (int *)v88[2];
              if ( !v72 )
              {
                do
                {
                  v91 = *v90;
                  v90 = (_DWORD *)(*v90 + 8);
                  v88 = *(int **)(v91 + 8);
                }
                while ( *v88 != v91 );
              }
            }
          }
          while ( &v122 != (unsigned __int8 **)v88 );
        }
        sub_424B8((int)&v121, v122);
        v50 = a2;
        goto LABEL_159;
      }
    }
    v119 = 0;
    qfree(v81);
    v120 = 0;
    v118 = nullptr;
    goto LABEL_127;
  }
LABEL_159:
  v92 = (int *)v125;
  v108 = 1;
  if ( v125 != &v126 )
  {
    do
    {
      qsnprintf(s, 32, "%u");
      sub_1B09C((int)&v121, s);
      v124[0] = &v121;
      sub_4DC58((int)&v118, (int **)v115, (int)&v121, (int)&byte_B45D0, v124);
      copy_idcv(v118 + 32, (unsigned __int8 *)v92 + 24);
      if ( v121 )
      {
        v122 = nullptr;
        qfree(v121);
        v123 = 0;
        v121 = nullptr;
      }
      v93 = (int *)v92[1];
      if ( v93 )
      {
        do
        {
          v92 = v93;
          v93 = (int *)*v93;
        }
        while ( v93 );
      }
      else
      {
        v94 = v92 + 2;
        v72 = *(_DWORD *)v92[2] == (_DWORD)v92;
        v92 = (int *)v92[2];
        if ( !v72 )
        {
          do
          {
            v95 = *v94;
            v94 = (_DWORD *)(*v94 + 8);
            v92 = *(int **)(v95 + 8);
          }
          while ( *v92 != v95 );
        }
      }
      ++v50;
    }
    while ( v92 != (int *)&v126 );
  }
LABEL_168:
  sub_4D812((int)&v125, v126);
  if ( v108 )
    return 0;
  return v50;
}
// 45CBC: variable 'v116' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
// B3DF8: using guessed type int dword_B3DF8[41];
// B45D0: using guessed type char byte_B45D0;
