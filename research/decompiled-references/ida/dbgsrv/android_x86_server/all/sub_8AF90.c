/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AF90
// Address: 0x0008AF90

//----- (0008AF90) --------------------------------------------------------
unsigned int __cdecl sub_8AF90(
        _BYTE *a1,
        unsigned int a2,
        int a3,
        int a4,
        int *a5,
        _DWORD *a6,
        int *a7,
        int a8,
        _DWORD *a9,
        unsigned int a10)
{
  _DWORD *v10; // edi
  _DWORD *v11; // esi
  bool v12; // cc
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  int v16; // eax
  _BYTE *v17; // eax
  _DWORD *v18; // edi
  int v19; // esi
  unsigned int v20; // ecx
  _DWORD *v21; // esi
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // edi
  char *v27; // edi
  char *v28; // ecx
  char *v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // ecx
  char *v33; // edi
  int *v34; // eax
  int v35; // ebx
  int v36; // edx
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // edx
  unsigned int v40; // esi
  void ***v41; // esi
  void ***v42; // edi
  void **v43; // eax
  void **v44; // eax
  void **v45; // ecx
  void **v46; // ecx
  void **v47; // esi
  size_t *v48; // esi
  size_t v49; // ecx
  unsigned int v50; // edi
  _DWORD *v51; // ecx
  void ***v52; // edi
  int v53; // eax
  void ***v54; // esi
  void **v55; // ecx
  void **v56; // ecx
  void **v57; // ecx
  void **v58; // ecx
  void **v59; // edi
  void ***v60; // edi
  int v61; // eax
  void ***v62; // esi
  void **v63; // ecx
  void **v64; // ecx
  void **v65; // ecx
  void **v66; // ecx
  void **v67; // edi
  void ***v68; // esi
  int v69; // edx
  void **v70; // ecx
  void ***v71; // eax
  int v72; // esi
  bool v73; // zf
  _DWORD *v74; // ecx
  int v75; // esi
  size_t v76; // eax
  size_t v77; // esi
  size_t v78; // edi
  _DWORD *v79; // ecx
  void *v80; // eax
  _DWORD *v81; // edi
  int v83; // eax
  int v84; // eax
  int v85; // edx
  unsigned int v86; // esi
  void *v87; // eax
  unsigned int v88; // eax
  unsigned int v89; // esi
  int v90; // edi
  int *v91; // eax
  int v92; // ecx
  int v93; // eax
  int v94; // ecx
  const void *v95; // ecx
  int v96; // [esp+8h] [ebp-A4h]
  unsigned int v97; // [esp+Ch] [ebp-A0h]
  int v98; // [esp+Ch] [ebp-A0h]
  int v99; // [esp+Ch] [ebp-A0h]
  int v100; // [esp+Ch] [ebp-A0h]
  _DWORD *v101; // [esp+10h] [ebp-9Ch]
  _DWORD *v102; // [esp+10h] [ebp-9Ch]
  const void *v103; // [esp+10h] [ebp-9Ch]
  _DWORD *v104; // [esp+14h] [ebp-98h]
  unsigned int v105; // [esp+14h] [ebp-98h]
  const char *v106; // [esp+14h] [ebp-98h]
  void **v107; // [esp+18h] [ebp-94h]
  unsigned __int64 v108; // [esp+18h] [ebp-94h]
  int v109; // [esp+1Ch] [ebp-90h]
  _DWORD *v110; // [esp+20h] [ebp-8Ch]
  _DWORD *v111; // [esp+24h] [ebp-88h]
  _DWORD v112[4]; // [esp+28h] [ebp-84h] BYREF
  int v113; // [esp+38h] [ebp-74h] BYREF
  char *v114; // [esp+3Ch] [ebp-70h]
  unsigned int v115; // [esp+40h] [ebp-6Ch]
  int v116; // [esp+48h] [ebp-64h] BYREF
  void ***v117; // [esp+4Ch] [ebp-60h] BYREF
  int v118; // [esp+50h] [ebp-5Ch]
  int v119; // [esp+58h] [ebp-54h] BYREF
  __int64 v120; // [esp+5Ch] [ebp-50h] BYREF
  int v121; // [esp+64h] [ebp-48h]
  _DWORD v122[3]; // [esp+68h] [ebp-44h] BYREF
  char v123; // [esp+74h] [ebp-38h]
  int v124; // [esp+78h] [ebp-34h]
  int v125; // [esp+7Ch] [ebp-30h]
  int v126; // [esp+80h] [ebp-2Ch]
  int v127; // [esp+84h] [ebp-28h]
  int v128; // [esp+88h] [ebp-24h]
  int v129; // [esp+8Ch] [ebp-20h]
  int v130; // [esp+90h] [ebp-1Ch]
  unsigned int v131; // [esp+98h] [ebp-14h]

  v131 = __readgsdword(0x14u);
  v119 = -2;
  v121 = 0;
  v120 = -1;
  v10 = *((_DWORD **)a1 + 41);
  if ( v10 )
  {
    v11 = a1 + 164;
    v12 = v10[4] < a3;
    if ( v10[4] > a3 )
      goto LABEL_6;
    while ( v12 )
    {
      v11 = v10 + 1;
      v13 = (_DWORD *)v10[1];
      if ( !v13 )
        break;
      while ( 1 )
      {
        v10 = v13;
        v12 = v13[4] < a3;
        if ( v13[4] <= a3 )
          break;
LABEL_6:
        v13 = (_DWORD *)*v10;
        v11 = v10;
        if ( !*v10 )
          goto LABEL_9;
      }
    }
  }
  else
  {
    v10 = a1 + 164;
LABEL_9:
    v11 = v10;
  }
  v14 = (_DWORD *)*v11;
  if ( !*v11 )
  {
    v15 = operator new(0x20u);
    v15[4] = a3;
    v15[7] = 0;
    v15[6] = 0;
    v15[5] = 0;
    *v15 = 0;
    v15[1] = 0;
    v15[2] = v10;
    *v11 = v15;
    v16 = **((_DWORD **)a1 + 40);
    v104 = v15;
    if ( v16 )
    {
      *((_DWORD *)a1 + 40) = v16;
      v15 = (_DWORD *)*v11;
    }
    sub_2D500(*((_DWORD *)a1 + 41), (int)v15);
    ++*((_DWORD *)a1 + 42);
    v14 = v104;
  }
  v17 = sub_8C170(v14 + 5);
  v117 = nullptr;
  v118 = 0;
  v116 = (int)&v117;
  v18 = a1;
  v19 = 11;
  if ( (*((_DWORD *)a1 + 24) & 0xFFFFFFF) == 7 )
    goto LABEL_125;
  v20 = *((_DWORD *)a1 + 71);
  if ( !v20 )
    v20 = *((_DWORD *)a1 + 83);
  v21 = v17;
  sub_849F0((int)v17, v20);
  v22 = (*(int (__cdecl **)(_BYTE *, int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 112))(a1, a3, -1, *v21, 0);
  v23 = v21;
  v19 = 1;
  v18 = a1;
  if ( v22 != 1 )
  {
LABEL_125:
    v106 = *((const char **)&qword_13ACD8 + v19 - 2466);
    v76 = strlen(v106);
    if ( v76 )
    {
      v77 = v76;
      v78 = v76 + 1;
      v79 = (_DWORD *)a8;
      if ( *(_DWORD *)(a8 + 8) >= v76 + 1 )
      {
        v80 = *(void **)a8;
      }
      else
      {
        v80 = qvector_reserve(a8, *(void **)a8, v76 + 1, 1u);
        v79 = (_DWORD *)a8;
        *(_DWORD *)a8 = v80;
      }
      v79[1] = v78;
      v81 = v79;
      memmove(v80, v106, v77);
      *(_BYTE *)(*v81 + v77) = 0;
      v18 = a1;
    }
    else
    {
      *(_DWORD *)(a8 + 4) = 0;
    }
    goto LABEL_131;
  }
  v101 = v23;
  v24 = (*(int (__cdecl **)(_BYTE *, _DWORD *))((char *)&off_13ADBC + *(_DWORD *)a1 - 1289432))(a1, v23);
  if ( v24 == -1 )
  {
    v19 = 2;
    goto LABEL_125;
  }
  v113 = 0;
  v114 = nullptr;
  v115 = 0;
  v25 = *((_DWORD *)a1 + 32);
  v97 = v24;
  v26 = -v25 & (v25 + a6[1] - 1);
  v101[4] = ((v24 - v25 - v26) & 0xFFFFFFF0) + v26;
  v105 = (v24 - v25 - v26) & 0xFFFFFFF0;
  v19 = 4;
  if ( !relocate_relobj(a6, v105, 0) )
    goto LABEL_121;
  v111 = v101 + 4;
  sub_3A950(&v113, v101 + 4, *(_DWORD *)&a1[(_DWORD)(&off_13AD58 - 322358)]);
  sub_3A950(&v113, (void *)*a6, a6[1]);
  v27 = (char *)(*(_DWORD *)&a1[(_DWORD)(&off_13AD58 - 322358)] + v26);
  v28 = v114;
  if ( v114 >= v27 )
  {
    if ( v114 != v27 )
    {
      LOBYTE(v122[0]) = 0;
      sub_43860((char **)&v113, (unsigned int)v27, (char *)v122);
    }
  }
  else
  {
    v29 = (char *)v113;
    if ( v115 < (unsigned int)v27 )
    {
      v29 = (char *)qvector_reserve((int)&v113, (void *)v113, (unsigned int)v27, 1u);
      v113 = (int)v29;
      v28 = v114;
    }
    memset(&v29[(_DWORD)v28], 0, v27 - v28);
    v114 = v27;
  }
  v30 = v105 - *((_DWORD *)a1 + 32);
  v101[3] = v30;
  if ( v30 >= v97 )
  {
    v19 = 2;
    goto LABEL_121;
  }
  v31 = (*(int (__cdecl **)(_BYTE *, _DWORD *, int *, int *))((char *)&off_13ADB8 + *(_DWORD *)a1 - 1289432))(
          a1,
          v101,
          &v116,
          &v113);
  v32 = v31 + v101[3];
  v101[3] = v32;
  if ( (int)&v114[-v31] > 0 )
  {
    v19 = 5;
    v33 = &v114[-v31];
    if ( (char *)(*(int (__cdecl **)(_BYTE *, int, int, char *, _DWORD))((char *)&off_13AD6C + *(_DWORD *)a1 - 1289432))(
                   a1,
                   v32,
                   v31 + v113,
                   v33,
                   0) != v33 )
      goto LABEL_121;
  }
  (*(void (__cdecl **)(_BYTE *, _DWORD, int, _DWORD, int))((char *)&off_13AD74 + *(_DWORD *)a1 - 1289432))(
    a1,
    0,
    4,
    *v111,
    -1);
  v34 = a5;
  if ( !a5[1] )
    goto LABEL_73;
  v35 = 0;
  do
  {
    v98 = *v34;
    v36 = *(_DWORD *)(*v34 + 20 * v35);
    v19 = 3;
    if ( v36 == *((_DWORD *)a1 + 84) || v36 == *((_DWORD *)a1 + 85) )
      goto LABEL_121;
    v109 = v35;
    v107 = *(void ***)(*v34 + 20 * v35);
    v37 = (*(int (__cdecl **)(_BYTE *, int))((char *)&off_13AE08 + *(_DWORD *)a1 - 1289432))(a1, v36);
    v38 = *(unsigned __int8 *)(v37 + 9);
    if ( v38 <= 0x12 && (v39 = 294968, _bittest(&v39, v38)) )
    {
      if ( v119 >= -1 )
      {
        if ( (_DWORD)v120 )
        {
          HIDWORD(v120) = 0;
          qfree((void *)v120);
          LODWORD(v120) = 0;
          v121 = 0;
        }
        v119 = -2;
      }
      v120 = 0;
      v121 = 0;
      v119 = -1;
      v40 = *(_DWORD *)(v98 + 20 * v35 + 12);
      if ( v40 )
      {
        LODWORD(v120) = qvector_reserve((int)&v120, nullptr, v40, 1u);
        memset((void *)(HIDWORD(v120) + v120), 0, v40 - HIDWORD(v120));
        HIDWORD(v120) = v40;
      }
      memcpy((void *)v120, *(const void **)(v98 + 20 * v35 + 8), *(_DWORD *)(v98 + 20 * v35 + 12));
    }
    else
    {
      v48 = (size_t *)(v98 + 20 * v35 + 12);
      v49 = *v48;
      if ( *v48 > 8 || (*(_BYTE *)(v37 + 5) & 1) != 0 )
      {
        if ( v119 >= -1 )
        {
          if ( (_DWORD)v120 )
          {
            HIDWORD(v120) = 0;
            qfree((void *)v120);
            LODWORD(v120) = 0;
            v121 = 0;
          }
          v119 = -2;
        }
        v120 = 0;
        v121 = 0;
        v119 = 0;
        v50 = *v48;
        if ( *v48 )
        {
          LODWORD(v120) = qvector_reserve((int)&v120, nullptr, v50, 1u);
          memset((void *)(HIDWORD(v120) + v120), 0, v50 - HIDWORD(v120));
          HIDWORD(v120) = v50;
        }
        memcpy((void *)v120, *(const void **)(v98 + 20 * v35 + 8), *v48);
      }
      else
      {
        if ( v119 >= -1 )
        {
          if ( (_DWORD)v120 )
          {
            HIDWORD(v120) = 0;
            qfree((void *)v120);
            LODWORD(v120) = 0;
            v121 = 0;
          }
          v119 = -2;
          v49 = *v48;
        }
        __memcpy_chk(&v120, *(_DWORD *)(v98 + 20 * v35 + 8), v49, 12);
        if ( *(_DWORD *)(v98 + 20 * v35 + 4) )
          v120 += v105;
      }
    }
    v41 = v117;
    v42 = (void ***)&v117;
    if ( !v117 )
    {
      v41 = (void ***)&v117;
      goto LABEL_51;
    }
    while ( 1 )
    {
      v43 = v41[4];
      if ( (int)v107 < (int)v43 )
        break;
      if ( (int)v43 >= (int)v107 )
        goto LABEL_51;
      v42 = v41 + 1;
      v44 = v41[1];
      if ( !v44 )
        goto LABEL_51;
LABEL_45:
      v41 = (void ***)v44;
    }
    v44 = *v41;
    v42 = v41;
    if ( *v41 )
      goto LABEL_45;
    v42 = v41;
LABEL_51:
    v45 = *v42;
    if ( !*v42 )
    {
      v46 = (void **)operator new(0x24u);
      v46[4] = v107;
      v46[5] = (void *)-2;
      v46[8] = nullptr;
      v46[7] = (void *)-1;
      v46[6] = (void *)-1;
      *v46 = nullptr;
      v46[1] = nullptr;
      v46[2] = v41;
      *v42 = v46;
      v47 = v46;
      if ( *(_DWORD *)v116 )
      {
        v116 = *(_DWORD *)v116;
        v46 = *v42;
      }
      sub_2D500((int)v117, (int)v46);
      ++v118;
      v45 = v47;
    }
    sub_88A70(v45 + 5, (int)&v119);
    ++v35;
    v34 = a5;
  }
  while ( v109 + 1 < (unsigned int)a5[1] );
LABEL_73:
  v51 = v101;
  if ( v119 >= -1 )
  {
    if ( (_DWORD)v120 )
    {
      HIDWORD(v120) = 0;
      qfree((void *)v120);
      LODWORD(v120) = 0;
      v121 = 0;
      v51 = v101;
    }
    v119 = -2;
  }
  v120 = (unsigned int)v51[3];
  v52 = v117;
  if ( v117 )
  {
    v53 = *(_DWORD *)&a1[(_DWORD)(&off_13AE28 - 322358)];
    v54 = (void ***)&v117;
    while ( 1 )
    {
      v55 = v52[4];
      if ( v53 >= (int)v55 )
      {
        if ( (int)v55 >= v53 )
          goto LABEL_87;
        v54 = v52 + 1;
        v56 = v52[1];
        if ( !v56 )
          goto LABEL_87;
      }
      else
      {
        v56 = *v52;
        v54 = v52;
        if ( !*v52 )
        {
          v54 = v52;
          goto LABEL_87;
        }
      }
      v52 = (void ***)v56;
    }
  }
  v54 = (void ***)&v117;
  v52 = (void ***)&v117;
LABEL_87:
  v57 = *v54;
  if ( !*v54 )
  {
    v58 = (void **)operator new(0x24u);
    v58[4] = *(void **)&a1[(_DWORD)(&off_13AE28 - 322358)];
    v58[5] = (void *)-2;
    v58[8] = nullptr;
    v58[7] = (void *)-1;
    v58[6] = (void *)-1;
    *v58 = nullptr;
    v58[1] = nullptr;
    v58[2] = v52;
    *v54 = v58;
    v59 = v58;
    if ( *(_DWORD *)v116 )
    {
      v116 = *(_DWORD *)v116;
      v58 = *v54;
    }
    sub_2D500((int)v117, (int)v58);
    ++v118;
    v57 = v59;
  }
  sub_88A70(v57 + 5, (int)&v119);
  v120 = a2;
  v60 = v117;
  if ( !v117 )
  {
    v62 = (void ***)&v117;
    v60 = (void ***)&v117;
    goto LABEL_101;
  }
  v61 = *(_DWORD *)&a1[(_DWORD)(&off_13AE2C - 322358)];
  v62 = (void ***)&v117;
  while ( 2 )
  {
    v63 = v60[4];
    if ( v61 >= (int)v63 )
    {
      if ( (int)v63 >= v61 )
        goto LABEL_101;
      v62 = v60 + 1;
      v64 = v60[1];
      if ( !v64 )
        goto LABEL_101;
      goto LABEL_93;
    }
    v64 = *v60;
    v62 = v60;
    if ( *v60 )
    {
LABEL_93:
      v60 = (void ***)v64;
      continue;
    }
    break;
  }
  v62 = v60;
LABEL_101:
  v65 = *v62;
  if ( !*v62 )
  {
    v66 = (void **)operator new(0x24u);
    v66[4] = *(void **)&a1[(_DWORD)(&off_13AE2C - 322358)];
    v66[5] = (void *)-2;
    v66[8] = nullptr;
    v66[7] = (void *)-1;
    v66[6] = (void *)-1;
    *v66 = nullptr;
    v66[1] = nullptr;
    v66[2] = v60;
    *v62 = v66;
    v67 = v66;
    if ( *(_DWORD *)v116 )
    {
      v116 = *(_DWORD *)v116;
      v66 = *v62;
    }
    sub_2D500((int)v117, (int)v66);
    ++v118;
    v65 = v67;
  }
  sub_88A70(v65 + 5, (int)&v119);
  v68 = (void ***)v116;
  v69 = a3;
  if ( &v117 != (void ****)v116 )
  {
    do
    {
      if ( (*(int (__cdecl **)(_BYTE *, int, void **, void ***, _DWORD))(*(_DWORD *)a1 + 116))(
             a1,
             v69,
             v68[4],
             v68 + 5,
             0) != 1 )
      {
        v19 = 6;
        goto LABEL_121;
      }
      *((_BYTE *)v101 + 20) = 1;
      v70 = v68[1];
      if ( v70 )
      {
        do
        {
          v71 = (void ***)v70;
          v70 = (void **)*v70;
        }
        while ( v70 );
        v69 = a3;
      }
      else
      {
        v71 = (void ***)v68[2];
        v69 = a3;
        if ( *v71 != (void **)v68 )
        {
          v72 = (int)(v68 + 2);
          do
          {
            v71 = *(void ****)(*(_DWORD *)v72 + 8);
            v73 = *v71 == *(void ***)v72;
            v72 = *(_DWORD *)v72 + 8;
          }
          while ( !v73 );
        }
      }
      v68 = v71;
    }
    while ( &v117 != (void ****)v71 );
  }
  v19 = 0;
  if ( (a10 & 1) == 0 )
  {
    a1[92] = 1;
    v110 = a1 + 80;
    v19 = 9;
    if ( (*(int (__cdecl **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 84))(a1, a1 + 80) == 1 )
    {
      v74 = a9;
      v122[0] = -1;
      v122[1] = 0;
      v122[2] = -1;
      v123 = 0;
      if ( !a9 )
        v74 = v122;
      v102 = v74;
      v125 = 0;
      v124 = 0;
      v127 = 0;
      v126 = 0;
      v130 = 0;
      v129 = 0;
      v128 = 0;
      if ( (a10 & 4) != 0 )
      {
        v96 = 0;
        v99 = HIWORD(a10);
        v75 = 1;
        if ( HIWORD(a10) )
        {
          v108 = (unsigned int)dword_F4240 * (unsigned __int64)(unsigned int)v99 + get_nsec_stamp();
          goto LABEL_141;
        }
        v108 = 0;
        v99 = 0;
        goto LABEL_140;
      }
      v96 = 0;
      v99 = 40;
      v108 = 0;
      v75 = 0;
      while ( 1 )
      {
        v83 = (*(int (__cdecl **)(_BYTE *, _DWORD *, int))(*(_DWORD *)a1 + 68))(a1, v102, v99);
        if ( v83 )
        {
          if ( v83 == -1 )
          {
            v96 = 8;
            goto LABEL_188;
          }
          v84 = v102[4] & 0xFFFFFFF;
          if ( v84 == 4 )
          {
            v85 = a3;
            if ( v102[1] == a3 )
            {
LABEL_158:
              v105 = -1;
              sub_85190((int)a1, (int)v102, 8u);
              goto LABEL_188;
            }
          }
          else
          {
            v85 = a3;
            if ( v84 == 2 )
              goto LABEL_158;
          }
          if ( v96 == 12 )
          {
            sub_85190((int)a1, (int)v102, 0xAu);
            set_debug_event_code(v102, 0);
            v96 = 12;
            set_debug_event_code(v110, 0);
            goto LABEL_188;
          }
          if ( (*(unsigned __int8 (__cdecl **)(_BYTE *, int, _DWORD *, _DWORD))((char *)&off_13ADC0
                                                                              + *(_DWORD *)a1
                                                                              - 1289432))(
                 a1,
                 v85,
                 v102,
                 *v111) )
          {
            set_debug_event_code(v110, 0);
            if ( a4 <= 0
              || (v96 = 5, a6[1] >= (unsigned int)a4)
              && (*(int (__cdecl **)(_BYTE *, unsigned int, _DWORD, int, _DWORD))((char *)&off_13AD6C
                                                                                + *(_DWORD *)a1
                                                                                - 1289432))(
                   a1,
                   v105,
                   *a6,
                   a4,
                   0) == a4 )
            {
              v96 = 0;
              if ( a7 )
              {
                if ( a7[1] )
                {
                  memset(v112, 0, 12);
                  v88 = *(_DWORD *)&a1[(_DWORD)(&off_13ADF4 - 322358)];
                  if ( !v88 )
                    v88 = *(_DWORD *)&a1[(_DWORD)(&off_13AE24 - 322358)];
                  sub_849F0((int)v112, v88);
                  if ( (*(int (__cdecl **)(_BYTE *, int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 112))(
                         a1,
                         a3,
                         -1,
                         v112[0],
                         0) <= 0 )
                  {
                    v96 = 1;
                  }
                  else
                  {
                    if ( a7[1] )
                    {
                      v89 = 0;
                      v90 = 12;
                      v91 = a7;
                      do
                      {
                        v92 = *(_DWORD *)(*v91 + v90 - 12);
                        v93 = *v91;
                        v94 = 16 * v92;
                        if ( *(int *)(v112[0] + v94) < -1 )
                          v95 = (const void *)(v112[0] + v94 + 4);
                        else
                          v95 = *(const void **)(v112[0] + v94 + 4);
                        v100 = v93;
                        memcpy(*(void **)(v93 + v90 - 4), v95, *(_DWORD *)(v93 + v90));
                        *(_DWORD *)(v100 + v90 - 8) = 0;
                        ++v89;
                        v90 += 20;
                        v91 = a7;
                      }
                      while ( v89 < a7[1] );
                    }
                    v96 = 0;
                  }
                  sub_84B00((int)v112);
                }
              }
            }
LABEL_188:
            free_debug_event(v122);
            v19 = v96;
            break;
          }
          if ( (v102[4] & 0xFFFFFFF) == 7 )
          {
            if ( (a10 & 2) == 0 && v102 + 8 != (_DWORD *)a8 )
            {
              v86 = v102[9];
              if ( v86 < 2 )
              {
                *(_DWORD *)(a8 + 4) = 0;
              }
              else
              {
                v103 = (const void *)v102[8];
                if ( *(_DWORD *)(a8 + 8) >= v86 )
                {
                  v87 = *(void **)a8;
                }
                else
                {
                  v87 = qvector_reserve(a8, *(void **)a8, v86, 1u);
                  *(_DWORD *)a8 = v87;
                }
                *(_DWORD *)(a8 + 4) = v86;
                memmove(v87, v103, v86 - 1);
                *(_BYTE *)(*(_DWORD *)a8 + v86 - 1) = 0;
              }
            }
            set_debug_event_code(v110, 0);
            a1[92] = 1;
            v96 = 10;
            goto LABEL_188;
          }
          if ( sub_85190((int)a1, (int)v102, 0xAu) )
          {
            v96 = 7;
            goto LABEL_188;
          }
          (*(void (__cdecl **)(_BYTE *, _DWORD *))(*(_DWORD *)a1 + 84))(a1, v102);
          set_debug_event_code(v102, 0);
        }
LABEL_140:
        if ( v75 )
        {
LABEL_141:
          if ( v75 == 2 )
          {
            if ( v99 <= 0 || (v75 = 2, v99 = (__int64)(v108 - get_nsec_stamp()) / (unsigned int)dword_F4240, v99 <= 0) )
            {
              v75 = 2;
              v96 = 12;
              if ( (*(int (__cdecl **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 76))(a1, 0) <= 0 )
                goto LABEL_188;
            }
          }
          else
          {
            v75 = 2;
          }
        }
      }
    }
  }
LABEL_121:
  if ( v113 )
  {
    v114 = nullptr;
    qfree((void *)v113);
    v113 = 0;
    v115 = 0;
  }
  if ( v19 )
  {
    v18 = a1;
    if ( v19 != 10 )
      goto LABEL_125;
LABEL_131:
    v105 = -1;
    (*(void (__cdecl **)(_DWORD *, int))((char *)&off_13ADB0 + *v18 - 1289432))(v18, a3);
  }
  sub_8E510((int)&v116, (void **)v117);
  if ( v119 >= -1 )
  {
    if ( (_DWORD)v120 )
    {
      HIDWORD(v120) = 0;
      qfree((void *)v120);
      LODWORD(v120) = 0;
      v121 = 0;
    }
    v119 = -2;
  }
  return v105;
}
// 8BDEB: conditional instruction was optimized away because %0x28.4==0
// 17C40: using guessed type int __cdecl __memcpy_chk(_DWORD, _DWORD, _DWORD, _DWORD);
// F4240: using guessed type int dword_F4240[37];
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13AD58: using guessed type _UNKNOWN *off_13AD58;
// 13AD6C: using guessed type _UNKNOWN *off_13AD6C;
// 13AD74: using guessed type _UNKNOWN *off_13AD74;
// 13ADB0: using guessed type _UNKNOWN *off_13ADB0;
// 13ADB8: using guessed type _UNKNOWN *off_13ADB8;
// 13ADBC: using guessed type _UNKNOWN *off_13ADBC;
// 13ADC0: using guessed type _UNKNOWN *off_13ADC0;
// 13ADF4: using guessed type _UNKNOWN *off_13ADF4;
// 13AE08: using guessed type _UNKNOWN *off_13AE08;
// 13AE24: using guessed type _UNKNOWN *off_13AE24;
// 13AE28: using guessed type _UNKNOWN *off_13AE28;
// 13AE2C: using guessed type _UNKNOWN *off_13AE2C;
