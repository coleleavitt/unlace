/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_587A0
// Address: 0x000587A0

//----- (000587A0) --------------------------------------------------------
unsigned int __fastcall sub_587A0(int a1, int *a2, char *s, signed int n, _DWORD *a5)
{
  signed int v5; // esi
  const char *v6; // eax
  size_t v7; // edx
  _DWORD *v8; // esi
  size_t v9; // eax
  size_t v10; // edi
  unsigned int v11; // esi
  _BYTE *v12; // eax
  size_t v13; // edx
  int v14; // eax
  int v15; // edi
  _DWORD *v16; // ecx
  unsigned int v17; // esi
  _BYTE *v18; // eax
  int v19; // eax
  _DWORD *v20; // ecx
  size_t v21; // edx
  int v22; // eax
  int v23; // edi
  unsigned int v24; // esi
  _BYTE *v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  char v28; // ch
  char v29; // cl
  _BYTE *v30; // eax
  int v31; // ecx
  int v32; // esi
  _DWORD *v33; // ecx
  char v34; // dh
  char v35; // dl
  _BYTE *v36; // eax
  int v37; // ecx
  int v38; // esi
  _DWORD *v39; // ecx
  char v40; // dh
  char v41; // dl
  _BYTE *v42; // eax
  int v43; // ecx
  int v44; // esi
  _DWORD *v45; // ecx
  int v46; // edx
  unsigned int v47; // edi
  int v48; // eax
  _DWORD *v49; // ecx
  int v50; // edx
  int v51; // esi
  unsigned int v52; // edi
  _BYTE *v53; // eax
  int v54; // eax
  _DWORD *v55; // ecx
  int v56; // edx
  int v57; // esi
  unsigned int v58; // edi
  _BYTE *v59; // eax
  int v60; // eax
  const char *v61; // ecx
  int v62; // eax
  _DWORD *v63; // ecx
  int v64; // edx
  int v65; // esi
  unsigned int v66; // edi
  _BYTE *v67; // eax
  char *v68; // eax
  _DWORD *v69; // esi
  _DWORD *v70; // edi
  unsigned int v71; // ecx
  _DWORD *v72; // ecx
  char *idcv_attr; // edi
  _DWORD *v74; // ecx
  _DWORD *v75; // eax
  char v76; // dl
  _BYTE *v77; // eax
  int v78; // ecx
  int v79; // esi
  _DWORD *v80; // ecx
  _BYTE *v81; // eax
  int v82; // ecx
  int v83; // esi
  _DWORD *v84; // ecx
  unsigned int v85; // edi
  int v86; // eax
  _DWORD *v87; // ecx
  int v88; // edx
  int v89; // esi
  unsigned int v90; // edi
  _BYTE *v91; // eax
  _DWORD *v92; // eax
  int v93; // ecx
  char *v94; // esi
  _DWORD *v95; // ecx
  size_t v96; // eax
  size_t v97; // esi
  size_t v98; // edi
  _BYTE *v99; // eax
  char v100; // al
  char *v101; // ecx
  void ***v102; // esi
  void ***v103; // edi
  unsigned int v104; // ecx
  void **v105; // ecx
  void **v106; // eax
  void ***v107; // edi
  void **v108; // ecx
  void ***v109; // eax
  int v110; // edi
  bool v111; // zf
  void ***v112; // edi
  char *v113; // ecx
  void **v114; // ecx
  void ***v115; // eax
  int v116; // edi
  size_t v117; // edx
  _DWORD *v118; // ecx
  int v119; // eax
  int v120; // esi
  _BYTE *v121; // eax
  int v123; // [esp-10h] [ebp-48Ch]
  void *v124; // [esp-Ch] [ebp-488h]
  _DWORD *v125; // [esp+4h] [ebp-478h]
  int v126; // [esp+4h] [ebp-478h]
  int v127; // [esp+4h] [ebp-478h]
  int *v128; // [esp+8h] [ebp-474h]
  int v129; // [esp+8h] [ebp-474h]
  char v130; // [esp+8h] [ebp-474h]
  size_t v131; // [esp+8h] [ebp-474h]
  _BYTE *v132; // [esp+8h] [ebp-474h]
  size_t v133; // [esp+Ch] [ebp-470h]
  char v134; // [esp+Ch] [ebp-470h]
  char v135; // [esp+Ch] [ebp-470h]
  char v136; // [esp+Ch] [ebp-470h]
  size_t v137; // [esp+Ch] [ebp-470h]
  size_t v138; // [esp+Ch] [ebp-470h]
  signed int v139; // [esp+Ch] [ebp-470h]
  size_t v140; // [esp+Ch] [ebp-470h]
  size_t v141; // [esp+Ch] [ebp-470h]
  size_t v142; // [esp+10h] [ebp-46Ch]
  size_t v143; // [esp+10h] [ebp-46Ch]
  size_t v144; // [esp+10h] [ebp-46Ch]
  char *v145; // [esp+10h] [ebp-46Ch]
  size_t v146; // [esp+14h] [ebp-468h]
  int v147[4]; // [esp+18h] [ebp-464h] BYREF
  int v148; // [esp+28h] [ebp-454h] BYREF
  void **v149[3]; // [esp+2Ch] [ebp-450h] BYREF
  int v150; // [esp+38h] [ebp-444h] BYREF
  void ***v151; // [esp+3Ch] [ebp-440h] BYREF
  int v152; // [esp+40h] [ebp-43Ch]
  char *v153; // [esp+44h] [ebp-438h] BYREF
  int v154; // [esp+48h] [ebp-434h] BYREF
  int v155; // [esp+50h] [ebp-42Ch] BYREF
  void *v156; // [esp+54h] [ebp-428h]
  int v157; // [esp+58h] [ebp-424h]
  int v158; // [esp+5Ch] [ebp-420h]
  int v159; // [esp+60h] [ebp-41Ch]
  char v160[32]; // [esp+68h] [ebp-414h] BYREF
  _BYTE v161[992]; // [esp+88h] [ebp-3F4h]
  unsigned int v162; // [esp+468h] [ebp-14h]

  v5 = n;
  v162 = __readgsdword(0x14u);
  v6 = s;
  if ( s )
  {
    v128 = a2;
    v7 = n;
    v8 = (_DWORD *)a1;
    if ( n > 0 )
    {
      v9 = *(_DWORD *)(a1 + 4);
      v10 = v9 - 1;
      if ( !v9 )
        v10 = 0;
      if ( v9 < v10 + n + 1 )
      {
        if ( *(_DWORD *)(a1 + 8) >= v10 + n + 1 )
        {
          v11 = v10 + n + 1;
          v12 = *(_BYTE **)a1;
        }
        else
        {
          v125 = (_DWORD *)a1;
          v11 = v10 + n + 1;
          v12 = qvector_reserve(a1, *(void **)a1, v11, 1u);
          a1 = (int)v125;
          v7 = n;
          *v125 = v12;
        }
        *(_DWORD *)(a1 + 4) = v11;
        v12[v10 + n] = 0;
      }
      v8 = (_DWORD *)a1;
      memset((void *)(*(_DWORD *)a1 + v10), 32, v7);
      v6 = s;
    }
    v13 = strlen(v6);
    v14 = v8[1];
    v15 = v14 - 1;
    if ( !v14 )
      v15 = 0;
    v133 = v15 + v13;
    v16 = v8;
    v126 = (int)v8;
    if ( v8[2] >= v15 + v13 + 1 )
    {
      v17 = v15 + v13 + 1;
      v18 = (_BYTE *)*v16;
    }
    else
    {
      v124 = (void *)*v8;
      v123 = (int)v8;
      v142 = v13;
      v17 = v15 + v13 + 1;
      v18 = qvector_reserve(v123, v124, v17, 1u);
      v13 = v142;
      v16 = (_DWORD *)v126;
      *(_DWORD *)v126 = v18;
    }
    v16[1] = v17;
    v18[v133] = 0;
    memmove((void *)(*v16 + v15), s, v13);
    v19 = __strlen_chk(": ", 3);
    v20 = (_DWORD *)v126;
    v21 = v19;
    v22 = *(_DWORD *)(v126 + 4);
    v23 = v22 - 1;
    if ( !v22 )
      v23 = 0;
    v143 = v23 + v21;
    v24 = v23 + v21 + 1;
    if ( *(_DWORD *)(v126 + 8) >= v24 )
    {
      v25 = *(_BYTE **)v126;
    }
    else
    {
      v146 = v21;
      v25 = qvector_reserve(v126, *(void **)v126, v23 + v21 + 1, 1u);
      v21 = v146;
      v20 = (_DWORD *)v126;
      *(_DWORD *)v126 = v25;
    }
    v20[1] = v24;
    v25[v143] = 0;
    memmove((void *)(*v20 + v23), ": ", v21);
    a1 = v126;
    v5 = n;
    a2 = v128;
  }
  LOBYTE(v155) = 2;
  v157 = 0;
  v156 = nullptr;
  v159 = 0;
  v158 = 0;
  v153 = (char *)a2;
  v127 = a1;
  switch ( *(_BYTE *)a2 )
  {
    case 2:
      v129 = a2[1];
      sub_31370(a1, "%11d. %8Xh %11oo ", v129, v129, v129);
      v26 = 0x80000000;
      v27 = -32;
      do
      {
        v161[v27] = 49 - ((v129 & v26) == 0);
        v26 >>= 1;
        ++v27;
      }
      while ( v27 );
      v161[0] = 0;
      sub_31370(v127, "%sb '", v160);
      v28 = 46;
      v29 = 46;
      if ( (unsigned __int8)v129 != 255 )
        v29 = v129;
      if ( (unsigned __int8)v129 >= 0x20u )
        v28 = v29;
      v134 = v28;
      v30 = *(_BYTE **)v127;
      v31 = *(_DWORD *)(v127 + 4);
      v32 = v31 - 1;
      if ( !v31 )
        v32 = 0;
      v33 = (_DWORD *)v127;
      if ( *(_DWORD *)(v127 + 8) < (unsigned int)(v32 + 2) )
      {
        v30 = qvector_reserve(v127, v30, v32 + 2, 1u);
        v33 = (_DWORD *)v127;
        *(_DWORD *)v127 = v30;
      }
      v33[1] = v32 + 2;
      v30[v32] = v134;
      *(_BYTE *)(*v33 + v32 + 1) = 0;
      v34 = 46;
      v35 = 46;
      if ( BYTE1(v129) != 255 )
        v35 = BYTE1(v129);
      if ( BYTE1(v129) >= 0x20u )
        v34 = v35;
      v135 = v34;
      v36 = *(_BYTE **)v127;
      v37 = *(_DWORD *)(v127 + 4);
      v38 = v37 - 1;
      if ( !v37 )
        v38 = 0;
      v39 = (_DWORD *)v127;
      if ( *(_DWORD *)(v127 + 8) < (unsigned int)(v38 + 2) )
      {
        v36 = qvector_reserve(v127, v36, v38 + 2, 1u);
        v39 = (_DWORD *)v127;
        *(_DWORD *)v127 = v36;
      }
      v39[1] = v38 + 2;
      v36[v38] = v135;
      *(_BYTE *)(*v39 + v38 + 1) = 0;
      v40 = 46;
      v41 = 46;
      if ( BYTE2(v129) != 255 )
        v41 = BYTE2(v129);
      if ( BYTE2(v129) >= 0x20u )
        v40 = v41;
      v136 = v40;
      v42 = *(_BYTE **)v127;
      v43 = *(_DWORD *)(v127 + 4);
      v44 = v43 - 1;
      if ( !v43 )
        v44 = 0;
      v45 = (_DWORD *)v127;
      v46 = v44 + 2;
      if ( *(_DWORD *)(v127 + 8) >= (unsigned int)(v44 + 2) )
      {
        v47 = v129;
      }
      else
      {
        v42 = qvector_reserve(v127, v42, v44 + 2, 1u);
        *(_DWORD *)v127 = v42;
        v45 = (_DWORD *)v127;
        v47 = v129;
        v46 = v44 + 2;
      }
      v45[1] = v46;
      v42[v44] = v136;
      *(_BYTE *)(*v45 + v44 + 1) = 0;
      v76 = 46;
      LOBYTE(v45) = 46;
      if ( HIBYTE(v47) != 255 )
        v45 = (_DWORD *)HIBYTE(v47);
      if ( v47 >= 0x20000000 )
        v76 = (char)v45;
      v130 = v76;
      v77 = *(_BYTE **)v127;
      v78 = *(_DWORD *)(v127 + 4);
      v79 = v78 - 1;
      if ( !v78 )
        v79 = 0;
      v80 = (_DWORD *)v127;
      if ( *(_DWORD *)(v127 + 8) < (unsigned int)(v79 + 2) )
      {
        v77 = qvector_reserve(v127, v77, v79 + 2, 1u);
        v80 = (_DWORD *)v127;
        *(_DWORD *)v127 = v77;
      }
      v80[1] = v79 + 2;
      v77[v79] = v130;
      *(_BYTE *)(*v80 + v79 + 1) = 0;
      v131 = __strlen_chk("'", 2);
      v81 = *(_BYTE **)v127;
      v82 = *(_DWORD *)(v127 + 4);
      v83 = v82 - 1;
      if ( !v82 )
        v83 = 0;
      v84 = (_DWORD *)v127;
      v85 = v83 + v131 + 1;
      if ( *(_DWORD *)(v127 + 8) < v85 )
      {
        v81 = qvector_reserve(v127, v81, v83 + v131 + 1, 1u);
        v84 = (_DWORD *)v127;
        *(_DWORD *)v127 = v81;
      }
      v84[1] = v85;
      v81[v83 + v131] = 0;
      memmove((void *)(*v84 + v83), "'", v131);
      goto LABEL_184;
    case 3:
      copy_idcv((char *)&v155, (char *)a2);
      v153 = (char *)&v155;
      idcv_string((int)&v155);
      a2 = &v155;
      goto LABEL_60;
    case 5:
      v139 = v5;
      v62 = __strlen_chk("object", 7);
      v63 = (_DWORD *)v127;
      v64 = *(_DWORD *)(v127 + 4);
      v65 = v64 - 1;
      if ( !v64 )
        v65 = 0;
      v66 = v65 + v62 + 1;
      v144 = v62;
      if ( *(_DWORD *)(v127 + 8) >= v66 )
      {
        v67 = *(_BYTE **)v127;
      }
      else
      {
        v67 = qvector_reserve(v127, *(void **)v127, v65 + v62 + 1, 1u);
        v63 = (_DWORD *)v127;
        *(_DWORD *)v127 = v67;
      }
      v63[1] = v66;
      v67[v65 + v144] = 0;
      memmove((void *)(*v63 + v65), "object", v144);
      v151 = nullptr;
      v152 = 0;
      v150 = (int)&v151;
      v149[0] = nullptr;
      v149[1] = nullptr;
      v148 = (int)v149;
      idcv_attr = nullptr;
      if ( v153 )
      {
        if ( *v153 == 5 )
        {
          v74 = *((_DWORD **)v153 + 1);
          v75 = (_DWORD *)*v74;
          if ( v74 + 1 != (_DWORD *)*v74 )
          {
            if ( v75[5] )
              idcv_attr = (char *)v75[4];
            else
              idcv_attr = byte_EF875;
          }
        }
      }
LABEL_125:
      if ( idcv_attr )
      {
        v100 = *idcv_attr;
        if ( *idcv_attr )
        {
          if ( v100 == 48 )
          {
            if ( !idcv_attr[1] )
            {
LABEL_134:
              qsscanf((int)idcv_attr, "%u", (int)v147);
              v145 = idcv_attr;
              v102 = v151;
              if ( !v151 )
              {
                v103 = (void ***)&v151;
                v102 = (void ***)&v151;
                goto LABEL_148;
              }
              v103 = (void ***)&v151;
              while ( 1 )
              {
                v104 = (unsigned int)v102[4];
                if ( v147[0] >= v104 )
                {
                  if ( v104 >= v147[0] || (v103 = v102 + 1, (v105 = v102[1]) == nullptr) )
                  {
                    if ( !*v103 )
                    {
LABEL_148:
                      v106 = (void **)operator new(0x14u);
                      v106[4] = (void *)v147[0];
                      *v106 = nullptr;
                      v106[1] = nullptr;
                      v106[2] = v102;
                      *v103 = v106;
                      if ( *(_DWORD *)v150 )
                      {
                        v150 = *(_DWORD *)v150;
                        v106 = *v103;
                      }
                      sub_2D500((int)v151, (int)v106);
                      ++v152;
                    }
LABEL_151:
                    idcv_attr = v145;
LABEL_152:
                    idcv_attr = next_idcv_attr((int)v153, idcv_attr);
                    goto LABEL_125;
                  }
                }
                else
                {
                  v105 = *v102;
                  v103 = v102;
                  if ( !*v102 )
                  {
                    v103 = v102;
                    if ( !*v102 )
                      goto LABEL_148;
                    goto LABEL_151;
                  }
                }
                v102 = (void ***)v105;
              }
            }
          }
          else
          {
            v101 = idcv_attr + 1;
            while ( v100 >= 0 && (unsigned int)(unsigned __int8)v100 - 48 <= 9 )
            {
              v100 = *v101++;
              if ( !v100 )
                goto LABEL_134;
            }
          }
        }
        sub_1B530((int)v147, idcv_attr);
        sub_67E60((int)&v154, (int **)&v148, (int)v147, v147);
        if ( v147[0] )
        {
          v147[1] = 0;
          qfree((void *)v147[0]);
          v147[0] = 0;
          v147[2] = 0;
        }
        goto LABEL_152;
      }
      v107 = (void ***)v150;
      if ( &v151 != (void ****)v150 )
      {
        do
        {
          qsnprintf(v160, 1024, "%u", (int)v107[4]);
          sub_67C80((_DWORD *)v127, (int)v153, v160, n + 2);
          v108 = v107[1];
          if ( v108 )
          {
            do
            {
              v109 = (void ***)v108;
              v108 = (void **)*v108;
            }
            while ( v108 );
          }
          else
          {
            v109 = (void ***)v107[2];
            if ( *v109 != (void **)v107 )
            {
              v110 = (int)(v107 + 2);
              do
              {
                v109 = *(void ****)(*(_DWORD *)v110 + 8);
                v111 = *v109 == *(void ***)v110;
                v110 = *(_DWORD *)v110 + 8;
              }
              while ( !v111 );
            }
          }
          v107 = v109;
        }
        while ( &v151 != (void ****)v109 );
      }
      v112 = (void ***)v148;
      if ( v149 != (void ***)v148 )
      {
        v141 = v139 + 2;
        do
        {
          v113 = byte_EF875;
          if ( v112[5] )
            v113 = (char *)v112[4];
          sub_67C80((_DWORD *)v127, (int)v153, v113, v141);
          v114 = v112[1];
          if ( v114 )
          {
            do
            {
              v115 = (void ***)v114;
              v114 = (void **)*v114;
            }
            while ( v114 );
          }
          else
          {
            v115 = (void ***)v112[2];
            if ( *v115 != (void **)v112 )
            {
              v116 = (int)(v112 + 2);
              do
              {
                v115 = *(void ****)(*(_DWORD *)v116 + 8);
                v111 = *v115 == *(void ***)v116;
                v116 = *(_DWORD *)v116 + 8;
              }
              while ( !v111 );
            }
          }
          v112 = v115;
        }
        while ( v149 != v115 );
      }
      sub_67FD0((int)&v148, v149[0]);
      sub_2B6C0((int)&v150, (void **)v151);
      goto LABEL_184;
    case 6:
      sub_31370(a1, "function (idx=%d)", a2[1]);
      goto LABEL_184;
    case 7:
LABEL_60:
      v150 = 0;
      v151 = nullptr;
      v152 = 0;
      v60 = a2[2];
      if ( v60 )
      {
        --v60;
        v61 = (const char *)a2[1];
      }
      else
      {
        v61 = byte_EF875;
      }
      qstr2user((int)&v150, v61, v60);
      if ( v151 )
        v68 = (char *)v150;
      else
        v68 = byte_EF875;
      sub_31370(v127, "\"%s\"", v68);
      if ( v150 )
      {
        v151 = nullptr;
        qfree((void *)v150);
        v150 = 0;
        v152 = 0;
      }
      goto LABEL_184;
    case 8:
      sub_31370(a1, "pvoid (%p)", a2[1]);
      goto LABEL_184;
    case 9:
      sub_31370(a1, "0x%llXi64", a2[1], a2[2]);
      goto LABEL_184;
    case 0xA:
      v54 = __strlen_chk("ref (", 6);
      v55 = (_DWORD *)v127;
      v56 = *(_DWORD *)(v127 + 4);
      v57 = v56 - 1;
      if ( !v56 )
        v57 = 0;
      v58 = v57 + v54 + 1;
      v138 = v54;
      if ( *(_DWORD *)(v127 + 8) >= v58 )
      {
        v59 = *(_BYTE **)v127;
      }
      else
      {
        v59 = qvector_reserve(v127, *(void **)v127, v57 + v54 + 1, 1u);
        v55 = (_DWORD *)v127;
        *(_DWORD *)v127 = v59;
      }
      v55[1] = v58;
      v59[v57 + v138] = 0;
      memmove((void *)(*v55 + v57), "ref (", v138);
      v69 = (_DWORD *)a5[1];
      if ( !v69 )
      {
        v69 = a5 + 1;
LABEL_106:
        v70 = v69;
        goto LABEL_107;
      }
      v70 = a5 + 1;
      break;
    default:
      v48 = __strlen_chk("bad?", 5);
      v49 = (_DWORD *)v127;
      v50 = *(_DWORD *)(v127 + 4);
      v51 = v50 - 1;
      if ( !v50 )
        v51 = 0;
      v52 = v51 + v48 + 1;
      v137 = v48;
      if ( *(_DWORD *)(v127 + 8) >= v52 )
      {
        v53 = *(_BYTE **)v127;
      }
      else
      {
        v53 = qvector_reserve(v127, *(void **)v127, v51 + v48 + 1, 1u);
        v49 = (_DWORD *)v127;
        *(_DWORD *)v127 = v53;
      }
      v49[1] = v52;
      v53[v51 + v137] = 0;
      memmove((void *)(*v49 + v51), "bad?", v137);
      goto LABEL_184;
  }
  while ( 1 )
  {
    v71 = v69[4];
    if ( (unsigned int)v153 >= v71 )
      break;
    v72 = (_DWORD *)*v69;
    v70 = v69;
    if ( !*v69 )
      goto LABEL_106;
LABEL_78:
    v69 = v72;
  }
  if ( v71 < (unsigned int)v153 )
  {
    v70 = v69 + 1;
    v72 = (_DWORD *)v69[1];
    if ( v72 )
      goto LABEL_78;
  }
LABEL_107:
  if ( *v70 )
    goto LABEL_108;
  v92 = operator new(0x14u);
  v92[4] = v153;
  *v92 = 0;
  v92[1] = 0;
  v92[2] = v69;
  *v70 = v92;
  v93 = *(_DWORD *)*a5;
  if ( v93 )
  {
    *a5 = v93;
    v92 = (_DWORD *)*v70;
  }
  sub_2D500(a5[1], (int)v92);
  ++a5[2];
  v94 = deref_idcv(v153, 1);
  if ( !v94 )
  {
LABEL_108:
    v86 = __strlen_chk("?)", 3);
    v87 = (_DWORD *)v127;
    v88 = *(_DWORD *)(v127 + 4);
    v89 = v88 - 1;
    if ( !v88 )
      v89 = 0;
    v90 = v89 + v86 + 1;
    v140 = v86;
    if ( *(_DWORD *)(v127 + 8) >= v90 )
    {
      v91 = *(_BYTE **)v127;
    }
    else
    {
      v91 = qvector_reserve(v127, *(void **)v127, v89 + v86 + 1, 1u);
      v87 = (_DWORD *)v127;
      *(_DWORD *)v127 = v91;
    }
    v87[1] = v90;
    v91[v89 + v140] = 0;
    memmove((void *)(*v87 + v89), "?)", v140);
  }
  else
  {
    sub_587A0(nullptr, n + 4, (int)a5);
    if ( n > 0 && *v94 == 5 )
    {
      v95 = (_DWORD *)v127;
      v96 = *(_DWORD *)(v127 + 4);
      v97 = v96 - 1;
      if ( !v96 )
        v97 = 0;
      v98 = v97 + n + 1;
      if ( v96 >= v98 )
      {
        v117 = n;
      }
      else
      {
        if ( *(_DWORD *)(v127 + 8) >= v98 )
        {
          v132 = *(_BYTE **)v127;
        }
        else
        {
          v99 = qvector_reserve(v127, *(void **)v127, v97 + n + 1, 1u);
          v95 = (_DWORD *)v127;
          v132 = v99;
          *(_DWORD *)v127 = v99;
        }
        v117 = n;
        v95[1] = v98;
        v132[v97 + n] = 0;
      }
      v127 = (int)v95;
      memset((void *)(*v95 + v97), 32, v117);
    }
    v118 = (_DWORD *)v127;
    v119 = *(_DWORD *)(v127 + 4);
    v120 = v119 - 1;
    if ( !v119 )
      v120 = 0;
    if ( *(_DWORD *)(v127 + 8) >= (unsigned int)(v120 + 2) )
    {
      v121 = *(_BYTE **)v127;
    }
    else
    {
      v121 = qvector_reserve(v127, *(void **)v127, v120 + 2, 1u);
      v118 = (_DWORD *)v127;
      *(_DWORD *)v127 = v121;
    }
    v118[1] = v120 + 2;
    v121[v120] = 41;
    *(_BYTE *)(*v118 + v120 + 1) = 0;
  }
  sub_68040(a5, (unsigned int *)&v153);
LABEL_184:
  if ( (char)v155 == 5 )
  {
    sub_59680(v156, (char *)&v155);
  }
  else if ( (char)v155 == 7 && v156 )
  {
    v157 = 0;
    qfree(v156);
    v156 = nullptr;
    v158 = 0;
  }
  return __readgsdword(0x14u);
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
