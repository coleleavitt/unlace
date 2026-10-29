/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_slice
// Address: 0x0005AF20

//----- (0005AF20) --------------------------------------------------------
int __cdecl set_idcv_slice(char *a1, int a2, unsigned int a3, char *a4, char a5)
{
  unsigned int v5; // edi
  int v7; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // edx
  unsigned int v12; // edi
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // edx
  bool v16; // cc
  size_t v17; // edx
  unsigned int v18; // ecx
  void *v19; // eax
  char *v20; // edi
  int v21; // edi
  int v22; // eax
  int v23; // edi
  char *v24; // eax
  char *v25; // ecx
  char *v26; // ecx
  const char *v27; // eax
  int v28; // eax
  void *v29; // edx
  int v30; // edi
  int v32; // ecx
  unsigned int v33; // ecx
  char *v34; // eax
  int *v35; // edi
  _BYTE *v36; // eax
  int v37; // eax
  unsigned int v38; // edx
  char *v39; // ecx
  size_t v40; // eax
  size_t v41; // edx
  int v42; // eax
  unsigned int v43; // edi
  unsigned int v44; // ecx
  char *v45; // esi
  void *v46; // eax
  size_t v47; // eax
  int v48; // esi
  int v49; // esi
  char *v50; // edi
  char *v51; // edi
  char *v52; // eax
  char v53; // cl
  char *v54; // edx
  char *v55; // ecx
  char *v56; // eax
  int v57; // edi
  bool v58; // zf
  int v59; // ecx
  int v60; // edi
  int v61; // edi
  int v62; // esi
  char *v63; // eax
  const char *v64; // eax
  int v65; // eax
  void *v66; // eax
  unsigned int v67; // esi
  char *v68; // ecx
  char v69; // al
  char *v70; // edx
  _DWORD *v71; // eax
  _DWORD *v72; // ecx
  int v73; // edi
  int v74; // edi
  void **v75; // ecx
  void ***v76; // eax
  int v77; // edi
  int v78; // ecx
  void **v79; // ecx
  void **v80; // eax
  int v81; // edi
  void **v82; // [esp+4h] [ebp-A8h]
  int v83; // [esp+4h] [ebp-A8h]
  int v84; // [esp+4h] [ebp-A8h]
  unsigned int v85; // [esp+8h] [ebp-A4h]
  char *v86; // [esp+8h] [ebp-A4h]
  unsigned int v87; // [esp+8h] [ebp-A4h]
  unsigned int v88; // [esp+8h] [ebp-A4h]
  _DWORD *v89; // [esp+8h] [ebp-A4h]
  int v90; // [esp+8h] [ebp-A4h]
  int *v91; // [esp+Ch] [ebp-A0h]
  const char *v92; // [esp+Ch] [ebp-A0h]
  unsigned int v93; // [esp+10h] [ebp-9Ch]
  char *v94; // [esp+10h] [ebp-9Ch]
  int *v95; // [esp+10h] [ebp-9Ch]
  const char *v96; // [esp+10h] [ebp-9Ch]
  unsigned int v97; // [esp+14h] [ebp-98h]
  int v98; // [esp+14h] [ebp-98h]
  char v99; // [esp+14h] [ebp-98h]
  int v100; // [esp+14h] [ebp-98h]
  size_t v101; // [esp+18h] [ebp-94h]
  int v102; // [esp+18h] [ebp-94h]
  unsigned int v103; // [esp+1Ch] [ebp-90h]
  size_t v104; // [esp+1Ch] [ebp-90h]
  unsigned int v105; // [esp+1Ch] [ebp-90h]
  unsigned int v106; // [esp+20h] [ebp-8Ch]
  int v107[3]; // [esp+24h] [ebp-88h] BYREF
  int *v108; // [esp+30h] [ebp-7Ch] BYREF
  int v109; // [esp+38h] [ebp-74h] BYREF
  int v110; // [esp+3Ch] [ebp-70h]
  int v111; // [esp+40h] [ebp-6Ch]
  int v112; // [esp+48h] [ebp-64h] BYREF
  void **v113; // [esp+4Ch] [ebp-60h] BYREF
  int v114; // [esp+50h] [ebp-5Ch]
  int v115[2]; // [esp+58h] [ebp-54h] BYREF
  int v116; // [esp+60h] [ebp-4Ch] BYREF
  void *v117; // [esp+64h] [ebp-48h] BYREF
  int v118; // [esp+68h] [ebp-44h]
  int v119; // [esp+6Ch] [ebp-40h]
  int v120; // [esp+70h] [ebp-3Ch]
  char s[32]; // [esp+78h] [ebp-34h] BYREF
  unsigned int v122; // [esp+98h] [ebp-14h]

  v122 = __readgsdword(0x14u);
  v5 = a2;
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
    v9 = *((_DWORD *)a1 + 2);
    v10 = v9 - 1;
    if ( !v9 )
      v10 = 0;
    if ( a2 < 0 )
    {
      v5 = v10 + a2;
      if ( (int)(v10 + a2) < 0 )
        v5 = 0;
    }
    if ( v5 > v10 )
      v5 = v10;
    v11 = a3;
    v103 = v5 + 1;
    if ( (a5 & 1) != 0 )
      v11 = v5 + 1;
    if ( v11 < 0 )
    {
      v11 += v10;
      if ( v11 < 0 )
        v11 = 0;
    }
    if ( v11 > v10 )
      v11 = v10;
    v85 = v5;
    if ( v5 > v11 )
      v11 = v5;
    v97 = v11;
    LOBYTE(v116) = 2;
    v118 = 0;
    v117 = nullptr;
    v120 = 0;
    v119 = 0;
    if ( *a4 == 7 )
    {
      v91 = (int *)a4;
    }
    else
    {
      v30 = copy_idcv((char *)&v116, a4);
      v32 = 1;
      if ( v30 )
        goto LABEL_83;
      v30 = idcv_string((int)&v116);
      v32 = 1;
      v91 = &v116;
      if ( v30 )
        goto LABEL_83;
    }
    v82 = (void **)(a1 + 4);
    v12 = v91[2];
    if ( v12 )
      --v12;
    v13 = v85;
    v93 = v97 - v85;
    if ( v12 < v97 - v85 )
    {
      v14 = *((_DWORD *)a1 + 2);
      v15 = v14 - 1;
      if ( !v14 )
        v15 = 0;
      if ( v93 != v12 && v15 > v85 )
      {
        v16 = v15 <= v97 - v12;
        v17 = v15 - (v97 - v12);
        v106 = v85;
        v18 = v103;
        if ( !v16 )
        {
          v104 = v17;
          memmove((char *)*v82 + v85, (char *)*v82 + v97 - v12, v17);
          v18 = v104 + v85 + 1;
          v106 = v85 + v104;
        }
        if ( *((_DWORD *)a1 + 3) >= v18 )
        {
          v19 = *v82;
        }
        else
        {
          v105 = v18;
          v19 = qvector_reserve((int)v82, *v82, v18, 1u);
          *v82 = v19;
          v18 = v105;
        }
        *((_DWORD *)a1 + 2) = v18;
        *((_BYTE *)v19 + v106) = 0;
        v13 = v85;
      }
    }
    v39 = (char *)*v82 + v13;
    v40 = v97 - v85;
    if ( v12 < v93 )
      v40 = v12;
    memcpy(v39, (const void *)v91[1], v40);
    v32 = 0;
    v41 = v12 - v93;
    if ( v12 <= v93 )
    {
      v30 = 0;
    }
    else
    {
      if ( v93 | v91[2] )
        v95 = (int *)(v91[1] + v93);
      else
        v95 = dword_F3564;
      v42 = *((_DWORD *)a1 + 2);
      v43 = v42 - 1;
      if ( !v42 )
        v43 = 0;
      v44 = v43 + v41 + 1;
      v101 = v41;
      if ( *((_DWORD *)a1 + 3) >= v44 )
      {
        v45 = a1 + 4;
        v46 = *v82;
      }
      else
      {
        v88 = v43 + v41 + 1;
        v45 = a1 + 4;
        v46 = qvector_reserve((int)v82, *v82, v88, 1u);
        *v82 = v46;
        v41 = v101;
        v44 = v88;
      }
      *((_DWORD *)v45 + 1) = v44;
      *((_BYTE *)v46 + v43 + v41) = 0;
      v47 = v43 - v97;
      if ( v43 > v97 )
      {
        v43 = v97;
        memmove((void *)(v41 + v97 + *(_DWORD *)v45), (const void *)(v97 + *(_DWORD *)v45), v47);
        v41 = v101;
      }
      memmove((void *)(*(_DWORD *)v45 + v43), v95, v41);
      v30 = 0;
      v32 = 0;
    }
LABEL_83:
    if ( (char)v116 == 5 )
    {
      v49 = v32;
      sub_59680(v117, (char *)&v116);
      v32 = v49;
    }
    else if ( (char)v116 == 7 && v117 )
    {
      v48 = v32;
      v118 = 0;
      qfree(v117);
      v117 = nullptr;
      v119 = 0;
      v32 = v48;
    }
    if ( !v32 )
      return 0;
    return v30;
  }
  if ( (a5 & 1) != 0 )
  {
    qsnprintf(s, 32, "%u", a2);
    return set_idcv_attr((int)a1, s, a4, 0);
  }
  v117 = nullptr;
  v118 = 0;
  v116 = (int)&v117;
  v20 = a4;
  if ( *a4 != 7 )
  {
    if ( *a4 != 5 )
    {
      v30 = set_qerrno(1568);
      v99 = 0;
      goto LABEL_172;
    }
    v21 = *((_DWORD *)a4 + 1);
    sub_1B530((int)&v112, "0");
    v22 = v21;
    v23 = *(_DWORD *)(v21 + 4);
    v24 = (char *)(v22 + 4);
    v94 = v24;
    if ( v23 )
    {
      v25 = (char *)v112;
      v98 = v112;
      if ( !v113 )
        v25 = byte_EF875;
      v92 = v25;
      v26 = v24;
      do
      {
        v86 = v26;
        v27 = byte_EF875;
        if ( *(_DWORD *)(v23 + 20) )
          v27 = *(const char **)(v23 + 16);
        v28 = strcmp(v27, v92);
        v26 = v86;
        if ( v28 >= 0 )
          v26 = (char *)v23;
        v23 = *(_DWORD *)(v23 + 4 * ((unsigned int)v28 >> 31));
      }
      while ( v23 );
      v29 = (void *)v98;
      if ( !v98 )
      {
LABEL_92:
        if ( v26 != v94 )
        {
          v51 = v26;
          while ( 1 )
          {
            v52 = byte_EF875;
            if ( *((_DWORD *)v51 + 5) )
              v52 = *((char **)v51 + 4);
            v53 = *v52;
            if ( *v52 != 48 )
              break;
            if ( v52[1] )
              goto LABEL_111;
LABEL_104:
            qsscanf((int)v52, "%u", (int)v115);
            v109 = (int)v115;
            sub_68880((int)&v112, (int **)&v116, (unsigned int *)v115, (int)dword_F4D90, (_DWORD **)&v109);
            copy_idcv((char *)(v112 + 20), v51 + 28);
            v55 = *((char **)v51 + 1);
            if ( v55 )
            {
              do
              {
                v56 = v55;
                v55 = *(char **)v55;
              }
              while ( v55 );
            }
            else
            {
              v56 = *((char **)v51 + 2);
              if ( *(char **)v56 != v51 )
              {
                v57 = (int)(v51 + 8);
                do
                {
                  v56 = *(char **)(*(_DWORD *)v57 + 8);
                  v58 = *(_DWORD *)v56 == *(_DWORD *)v57;
                  v57 = *(_DWORD *)v57 + 8;
                }
                while ( !v58 );
              }
            }
            v51 = v56;
            if ( v56 == v94 )
              goto LABEL_111;
          }
          if ( v53 )
          {
            v54 = v52 + 1;
            while ( v53 >= 0 && (unsigned int)(unsigned __int8)v53 - 48 <= 9 )
            {
              v53 = *v54++;
              if ( !v53 )
                goto LABEL_104;
            }
          }
        }
        goto LABEL_111;
      }
    }
    else
    {
      v29 = (void *)v112;
      v26 = v24;
      if ( !v112 )
        goto LABEL_92;
    }
    v50 = v26;
    v113 = nullptr;
    qfree(v29);
    v112 = 0;
    v114 = 0;
    v26 = v50;
    goto LABEL_92;
  }
  if ( *((_DWORD *)a4 + 2) >= 2u )
  {
    v33 = 0;
    do
    {
      v87 = v33;
      v115[0] = v33;
      v109 = (int)v115;
      sub_68980((int)&v112, (int **)&v116, (unsigned int *)v115, (int)dword_F4D90, (_DWORD **)&v109);
      v34 = v20;
      v35 = (int *)(v87 + *((_DWORD *)v20 + 1));
      v83 = v112;
      if ( !(v87 | *((_DWORD *)v34 + 2)) )
        v35 = dword_F3564;
      free_idcv((char *)(v112 + 20));
      *(_BYTE *)(v83 + 20) = 7;
      *(_DWORD *)(v83 + 24) = 0;
      *(_DWORD *)(v83 + 28) = 0;
      *(_DWORD *)(v83 + 32) = 0;
      v36 = qvector_reserve(v83 + 24, nullptr, 2u, 1u);
      *(_DWORD *)(v83 + 24) = v36;
      *(_DWORD *)(v83 + 28) = 2;
      *v36 = *(_BYTE *)v35;
      *(_BYTE *)(*(_DWORD *)(v83 + 24) + 1) = 0;
      v33 = v87 + 1;
      v20 = a4;
      v37 = *((_DWORD *)a4 + 2);
      v38 = v37 - 1;
      if ( !v37 )
        v38 = 0;
    }
    while ( v33 < v38 );
  }
LABEL_111:
  v59 = a3 - a2;
  if ( (int)(a3 - a2) < 0 )
    v59 = 0;
  v84 = *((_DWORD *)a1 + 1);
  v60 = v118 - v59;
  if ( v118 != v59 )
  {
    v113 = nullptr;
    v114 = 0;
    v112 = (int)&v113;
    sub_1B530((int)&v109, "0");
    v102 = v60;
    v61 = v84 + 4;
    v62 = *(_DWORD *)(v84 + 4);
    v89 = (_DWORD *)(v84 + 4);
    if ( v62 )
    {
      v63 = (char *)v109;
      v100 = v109;
      if ( !v110 )
        v63 = byte_EF875;
      v96 = v63;
      do
      {
        v64 = byte_EF875;
        if ( *(_DWORD *)(v62 + 20) )
          v64 = *(const char **)(v62 + 16);
        v65 = strcmp(v64, v96);
        if ( v65 >= 0 )
          v61 = v62;
        v62 = *(_DWORD *)(v62 + 4 * ((unsigned int)v65 >> 31));
      }
      while ( v62 );
      v66 = (void *)v100;
    }
    else
    {
      v66 = (void *)v109;
    }
    v67 = a3;
    if ( v66 )
    {
      v110 = 0;
      qfree(v66);
      v109 = 0;
      v111 = 0;
    }
    if ( v89 != (_DWORD *)v61 )
    {
      while ( 1 )
      {
        v68 = byte_EF875;
        if ( *(_DWORD *)(v61 + 20) )
          v68 = *(char **)(v61 + 16);
        v69 = *v68;
        if ( *v68 != 48 )
          break;
        if ( v68[1] )
          goto LABEL_152;
LABEL_138:
        qsscanf((int)v68, "%u", (int)v107);
        if ( v107[0] >= (unsigned int)a2 )
        {
          if ( v107[0] >= v67 )
          {
            qsnprintf(s, 32, "%u", v102 + v107[0]);
            sub_1B530((int)&v109, s);
            v108 = &v109;
            sub_68A80((int)v115, (int **)&v112, (int)&v109, (int)dword_F4D90, &v108);
            copy_idcv((char *)(v115[0] + 28), (char *)(v61 + 28));
            v67 = a3;
            if ( v109 )
            {
              v110 = 0;
              qfree((void *)v109);
              v109 = 0;
              v111 = 0;
            }
          }
          v115[0] = v61;
          sub_68C10((void ***)&v109, v84, (_DWORD *)v61);
          v72 = (_DWORD *)v109;
        }
        else
        {
          v71 = *(_DWORD **)(v61 + 4);
          if ( v71 )
          {
            do
            {
              v72 = v71;
              v71 = (_DWORD *)*v71;
            }
            while ( v71 );
          }
          else
          {
            v72 = *(_DWORD **)(v61 + 8);
            if ( *v72 != v61 )
            {
              v73 = v61 + 8;
              do
              {
                v72 = *(_DWORD **)(*(_DWORD *)v73 + 8);
                v58 = *v72 == *(_DWORD *)v73;
                v73 = *(_DWORD *)v73 + 8;
              }
              while ( !v58 );
            }
          }
        }
        v61 = (int)v72;
        if ( v89 == v72 )
          goto LABEL_152;
      }
      if ( v69 )
      {
        v70 = v68 + 1;
        while ( v69 >= 0 && (unsigned int)(unsigned __int8)v69 - 48 <= 9 )
        {
          v69 = *v70++;
          if ( !v69 )
            goto LABEL_138;
        }
      }
    }
LABEL_152:
    v74 = v112;
    if ( &v113 != (void ***)v112 )
    {
      do
      {
        v109 = v84 + 4;
        sub_681E0(v115, v84, v89, v74 + 16, v74 + 16);
        v75 = *(void ***)(v74 + 4);
        if ( v75 )
        {
          do
          {
            v76 = (void ***)v75;
            v75 = (void **)*v75;
          }
          while ( v75 );
        }
        else
        {
          v76 = *(void ****)(v74 + 8);
          if ( *v76 != (void **)v74 )
          {
            v77 = v74 + 8;
            do
            {
              v76 = *(void ****)(*(_DWORD *)v77 + 8);
              v58 = *v76 == *(void ***)v77;
              v77 = *(_DWORD *)v77 + 8;
            }
            while ( !v58 );
          }
        }
        v74 = (int)v76;
      }
      while ( &v113 != v76 );
    }
    sub_55C70((int)&v112, v113);
  }
  v30 = v116;
  v99 = 1;
  if ( &v117 != (void **)v116 )
  {
    v78 = a2;
    do
    {
      v90 = v78;
      qsnprintf(s, 32, "%u", v78);
      sub_1B530((int)&v112, s);
      v115[0] = (int)&v112;
      sub_68A80((int)&v109, (int **)v84, (int)&v112, (int)dword_F4D90, (_DWORD **)v115);
      copy_idcv((char *)(v109 + 28), (char *)(v30 + 20));
      if ( v112 )
      {
        v113 = nullptr;
        qfree((void *)v112);
        v112 = 0;
        v114 = 0;
      }
      v79 = *(void ***)(v30 + 4);
      if ( v79 )
      {
        do
        {
          v80 = v79;
          v79 = (void **)*v79;
        }
        while ( v79 );
      }
      else
      {
        v80 = *(void ***)(v30 + 8);
        if ( *v80 != (void *)v30 )
        {
          v81 = v30 + 8;
          do
          {
            v80 = *(void ***)(*(_DWORD *)v81 + 8);
            v58 = *v80 == *(void **)v81;
            v81 = *(_DWORD *)v81 + 8;
          }
          while ( !v58 );
        }
      }
      v78 = v90 + 1;
      v30 = (int)v80;
    }
    while ( &v117 != v80 );
  }
LABEL_172:
  sub_68170((int)&v116, (void **)v117);
  if ( v99 )
    return 0;
  return v30;
}
// F3564: using guessed type int dword_F3564[41];
// F4D90: using guessed type int dword_F4D90[2];
