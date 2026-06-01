/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807ECE0
// Address: 0x0807ECE0

//----- (0807ECE0) --------------------------------------------------------
unsigned int __cdecl sub_807ECE0(_DWORD *a1, const void *a2, int a3)
{
  void *v3; // eax
  int v4; // edx
  int v5; // esi
  size_t v6; // edi
  const char *v7; // ebp
  int v8; // ecx
  int v9; // edx
  const char **v10; // esi
  int v11; // edi
  int v12; // eax
  const char **v13; // edi
  char *v14; // eax
  int v15; // edx
  char *v16; // esi
  int v17; // eax
  const char **v18; // edi
  unsigned int v19; // ecx
  unsigned int result; // eax
  int v21; // eax
  int v22; // edi
  int v23; // ecx
  char *v24; // eax
  int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // eax
  const char **v29; // eax
  int v30; // ebp
  int v31; // eax
  const char **v32; // edx
  int v33; // eax
  const char **v34; // ecx
  const char *v35; // esi
  bool v36; // cf
  char *v37; // eax
  const char **v38; // eax
  int v39; // ecx
  const char **v40; // edx
  const char *v41; // esi
  char *v42; // eax
  _DWORD *v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // esi
  char *v46; // ecx
  const char **v47; // eax
  int v48; // eax
  int v49; // eax
  const char **v50; // ecx
  const char *v51; // esi
  char *v52; // ecx
  char *v53; // eax
  char *v54; // esi
  char *v55; // edi
  int v56; // ebp
  int v57; // eax
  __int64 v58; // xmm0_8
  void *v59; // eax
  const char **v60; // eax
  const char **v61; // edx
  char *v62; // eax
  int v63; // eax
  const char **v64; // ecx
  const char *v65; // esi
  unsigned int v66; // eax
  unsigned int v67; // esi
  char *v68; // edi
  char *v69; // ecx
  char *v70; // esi
  int v71; // eax
  int v72; // ebp
  int v73; // eax
  __int64 v74; // xmm1_8
  void *v75; // eax
  char *s; // [esp+0h] [ebp-54h]
  char *sa; // [esp+0h] [ebp-54h]
  char *sb; // [esp+0h] [ebp-54h]
  char *sc; // [esp+0h] [ebp-54h]
  char *sd; // [esp+0h] [ebp-54h]
  char *se; // [esp+0h] [ebp-54h]
  char *sf; // [esp+0h] [ebp-54h]
  int v83; // [esp+4h] [ebp-50h]
  int v84; // [esp+4h] [ebp-50h]
  int v85; // [esp+4h] [ebp-50h]
  int v86; // [esp+4h] [ebp-50h]
  int v87; // [esp+4h] [ebp-50h]
  int v88; // [esp+4h] [ebp-50h]
  char *v89; // [esp+4h] [ebp-50h]
  int v90; // [esp+4h] [ebp-50h]
  const char *v91; // [esp+4h] [ebp-50h]
  char *v92; // [esp+4h] [ebp-50h]
  int v93; // [esp+4h] [ebp-50h]
  char *v94; // [esp+4h] [ebp-50h]
  const char *v95; // [esp+4h] [ebp-50h]
  int v96; // [esp+8h] [ebp-4Ch]
  int v97; // [esp+8h] [ebp-4Ch]
  int v98; // [esp+8h] [ebp-4Ch]
  int v99; // [esp+8h] [ebp-4Ch]
  char *v100; // [esp+8h] [ebp-4Ch]
  char *v101; // [esp+8h] [ebp-4Ch]
  int v102; // [esp+Ch] [ebp-48h]
  int v103; // [esp+10h] [ebp-44h]
  int v104; // [esp+18h] [ebp-3Ch]
  int v105; // [esp+2Ch] [ebp-28h] BYREF
  const char *v106; // [esp+30h] [ebp-24h] BYREF
  unsigned int v107; // [esp+34h] [ebp-20h]

  v3 = (void *)a1[2];
  v107 = __readgsdword(0x14u);
  v4 = a1[3];
  if ( a1[4] < (unsigned int)(v4 + 1) )
  {
    v3 = sub_80CF920((int)(a1 + 2), v3, v4 + 1, 0xCu);
    v4 = a1[3];
    a1[2] = v3;
  }
  v5 = (int)v3 + 12 * v4;
  *(_DWORD *)v5 = 0;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  ++a1[3];
  if ( a2 && (v6 = strlen((const char *)a2)) != 0 )
  {
    v42 = *(char **)v5;
    if ( *(_DWORD *)(v5 + 8) < v6 + 1 )
    {
      v42 = (char *)sub_80CF920(v5, v42, v6 + 1, 1u);
      *(_DWORD *)v5 = v42;
    }
    *(_DWORD *)(v5 + 4) = v6 + 1;
    memmove(v42, a2, v6);
    *(_BYTE *)(*(_DWORD *)v5 + v6) = 0;
  }
  else
  {
    *(_DWORD *)(v5 + 4) = 0;
  }
  v7 = sub_80D0690(*(char **)v5, "|", (const char **)&v105);
  if ( v7 )
  {
    while ( 1 )
    {
      v102 = a1[6];
      if ( v102 )
        break;
      v43 = a1;
      v44 = 1;
      v45 = a1[7];
      if ( v45 )
      {
LABEL_72:
        v46 = (char *)v43[5];
      }
      else
      {
LABEL_79:
        v52 = (char *)sub_80CF920((int)(a1 + 5), nullptr, v44, 0x10u);
        v53 = (char *)a1[7];
        a1[7] = v45;
        v54 = (char *)a1[5];
        se = v53;
        if ( a1[6] - 1 >= 0 )
        {
          v91 = v7;
          v55 = v52;
          v56 = a1[6] - 1;
          do
          {
            v57 = *(_DWORD *)v54;
            v58 = *(_QWORD *)(v54 + 4);
            *(_DWORD *)v54 = 0;
            *((_DWORD *)v54 + 2) = 0;
            *(_DWORD *)v55 = v57;
            *(_QWORD *)(v55 + 4) = v58;
            *((_DWORD *)v55 + 3) = *((_DWORD *)v54 + 3);
            v59 = *(void **)v54;
            if ( *(_DWORD *)v54 )
            {
              v100 = v52;
              *((_DWORD *)v54 + 1) = 0;
              sub_80CF780(v59);
              v52 = v100;
            }
            v54 += 16;
            v55 += 16;
            v36 = v56-- == 0;
          }
          while ( !v36 );
          v7 = v91;
          v54 = (char *)a1[5];
        }
        v92 = v52;
        sub_80CF780(v54);
        v46 = v92;
        a1[5] = v92;
        a1[7] = se;
        v102 = a1[6];
      }
      v16 = &v46[16 * v102];
      *(_DWORD *)v16 = 0;
      *((_DWORD *)v16 + 1) = 0;
      *((_DWORD *)v16 + 2) = 0;
      ++a1[6];
      *((_DWORD *)v16 + 3) = a3;
LABEL_23:
      v17 = *((_DWORD *)v16 + 1);
      v18 = *(const char ***)v16;
      v106 = v7;
      v19 = *((_DWORD *)v16 + 2);
      sa = (char *)(v17 + 1);
      if ( &v106 < v18 || &v106 >= &v18[v19] )
      {
        if ( v19 < (unsigned int)sa )
        {
          v87 = *((_DWORD *)v16 + 2);
          v29 = (const char **)sub_80CF920((int)v16, nullptr, (unsigned int)sa, 4u);
          v30 = *((_DWORD *)v16 + 2);
          v18 = v29;
          v31 = *((_DWORD *)v16 + 1);
          v32 = *(const char ***)v16;
          *((_DWORD *)v16 + 2) = v87;
          v33 = v31 - 1;
          if ( v33 >= 0 )
          {
            sc = v16;
            v34 = v18;
            do
            {
              v35 = *v32;
              ++v34;
              ++v32;
              *(v34 - 1) = v35;
              v36 = v33-- == 0;
            }
            while ( !v36 );
LABEL_60:
            v16 = sc;
            v32 = *(const char ***)sc;
          }
          goto LABEL_61;
        }
LABEL_48:
        v18[v17] = v106;
      }
      else
      {
        if ( v19 < (unsigned int)sa )
        {
          v93 = *((_DWORD *)v16 + 2);
          v60 = (const char **)sub_80CF920((int)v16, nullptr, (unsigned int)sa, 4u);
          v61 = *(const char ***)v16;
          v18 = v60;
          v62 = *((char **)v16 + 2);
          *((_DWORD *)v16 + 2) = v93;
          sd = v62;
          v63 = *((_DWORD *)v16 + 1) - 1;
          if ( v63 >= 0 )
          {
            v94 = v16;
            v64 = v18;
            do
            {
              v65 = *v61;
              ++v64;
              ++v61;
              *(v64 - 1) = v65;
              v36 = v63-- == 0;
            }
            while ( !v36 );
            v16 = v94;
            v61 = *(const char ***)v94;
          }
          sub_80CF780(v61);
LABEL_91:
          *(_DWORD *)v16 = v18;
          *((_DWORD *)v16 + 2) = sd;
          v17 = *((_DWORD *)v16 + 1);
        }
LABEL_26:
        v18[v17] = v7;
      }
      ++*((_DWORD *)v16 + 1);
LABEL_28:
      v7 = sub_80D0690(nullptr, "|", (const char **)&v105);
      if ( !v7 )
        goto LABEL_29;
    }
    v8 = 0;
    v104 = a1[5];
    v9 = v104;
    while ( 1 )
    {
      v10 = *(const char ***)v9;
      v103 = *(_DWORD *)(v9 + 4);
      s = (char *)(*(_DWORD *)v9 + 4 * v103);
      v11 = (4 * v103) >> 4;
      v12 = (4 * v103) >> 2;
      if ( v11 > 0 )
      {
        v83 = v8;
        v96 = v9;
        v13 = &v10[4 * v11];
        while ( 1 )
        {
          if ( !strcmp(*v10, v7) )
          {
            v8 = v83;
            v9 = v96;
            goto LABEL_17;
          }
          if ( !strcmp(v10[1], v7) )
          {
            v8 = v83;
            v9 = v96;
            ++v10;
            goto LABEL_17;
          }
          if ( !strcmp(v10[2], v7) )
          {
            v8 = v83;
            v9 = v96;
            v10 += 2;
            goto LABEL_17;
          }
          if ( !strcmp(v10[3], v7) )
            break;
          v10 += 4;
          if ( v10 == v13 )
          {
            v8 = v83;
            v9 = v96;
            v12 = (s - (char *)v10) >> 2;
            goto LABEL_32;
          }
        }
        v8 = v83;
        v9 = v96;
        v10 += 3;
LABEL_17:
        if ( s != (char *)v10 )
          goto LABEL_37;
        goto LABEL_18;
      }
LABEL_32:
      if ( v12 != 2 )
      {
        if ( v12 != 3 )
        {
          if ( v12 != 1 )
            goto LABEL_18;
          goto LABEL_35;
        }
        v98 = v9;
        v85 = v8;
        v27 = strcmp(*v10, v7);
        v8 = v85;
        v9 = v98;
        if ( !v27 )
          goto LABEL_17;
        ++v10;
      }
      v99 = v9;
      v86 = v8;
      v28 = strcmp(*v10, v7);
      v8 = v86;
      v9 = v99;
      if ( !v28 )
        goto LABEL_17;
      ++v10;
LABEL_35:
      v97 = v9;
      v84 = v8;
      v21 = strcmp(*v10, v7);
      v8 = v84;
      v9 = v97;
      if ( !v21 && s != (char *)v10 )
      {
LABEL_37:
        v22 = v9;
        if ( *(_DWORD *)(v9 + 12) == a3 )
          goto LABEL_28;
        if ( ((s - (char *)v10) >> 2) - 2 >= 0 )
        {
          memmove(v10, v10 + 1, s - (char *)v10 - 4);
          v103 = *(_DWORD *)(v22 + 4);
        }
        *(_DWORD *)(v22 + 4) = v103 - 1;
        v23 = a1[6];
        if ( v23 )
        {
          v24 = (char *)a1[5];
          v25 = 0;
          while ( 1 )
          {
            v16 = v24;
            if ( a3 == *((_DWORD *)v24 + 3) )
              break;
            ++v25;
            v24 += 16;
            if ( v25 == v23 )
              goto LABEL_92;
          }
          if ( v24 )
            goto LABEL_45;
LABEL_92:
          v66 = v23 + 1;
        }
        else
        {
          v66 = 1;
        }
        v67 = a1[7];
        if ( v67 < v66 )
        {
          v68 = (char *)sub_80CF920((int)(a1 + 5), nullptr, v66, 0x10u);
          v69 = (char *)a1[7];
          a1[7] = v67;
          v70 = (char *)a1[5];
          v71 = a1[6];
          sf = v69;
          if ( v71 - 1 >= 0 )
          {
            v101 = v68;
            v95 = v7;
            v72 = v71 - 1;
            do
            {
              v73 = *(_DWORD *)v70;
              v74 = *(_QWORD *)(v70 + 4);
              *(_DWORD *)v70 = 0;
              *((_DWORD *)v70 + 2) = 0;
              *(_DWORD *)v68 = v73;
              *(_QWORD *)(v68 + 4) = v74;
              *((_DWORD *)v68 + 3) = *((_DWORD *)v70 + 3);
              v75 = *(void **)v70;
              if ( *(_DWORD *)v70 )
              {
                *((_DWORD *)v70 + 1) = 0;
                sub_80CF780(v75);
              }
              v70 += 16;
              v68 += 16;
              v36 = v72-- == 0;
            }
            while ( !v36 );
            v7 = v95;
            v68 = v101;
            v70 = (char *)a1[5];
          }
          sub_80CF780(v70);
          a1[7] = sf;
          v23 = a1[6];
          a1[5] = v68;
        }
        else
        {
          v68 = (char *)a1[5];
        }
        v16 = &v68[16 * v23];
        *(_DWORD *)v16 = 0;
        *((_DWORD *)v16 + 1) = 0;
        *((_DWORD *)v16 + 2) = 0;
        ++a1[6];
        *((_DWORD *)v16 + 3) = a3;
LABEL_45:
        v17 = *((_DWORD *)v16 + 1);
        v18 = *(const char ***)v16;
        v106 = v7;
        v26 = *((_DWORD *)v16 + 2);
        sb = (char *)(v17 + 1);
        if ( &v106 >= v18 && &v106 < &v18[v26] )
        {
          if ( v26 >= (unsigned int)sb )
            goto LABEL_26;
          v88 = *((_DWORD *)v16 + 2);
          v18 = (const char **)sub_80CF920((int)v16, nullptr, (unsigned int)sb, 4u);
          v37 = *((char **)v16 + 2);
          *((_DWORD *)v16 + 2) = v88;
          sd = v37;
          v38 = *(const char ***)v16;
          v39 = *((_DWORD *)v16 + 1) - 1;
          if ( v39 >= 0 )
          {
            v89 = v16;
            v40 = v18;
            do
            {
              v41 = *v38;
              ++v40;
              ++v38;
              *(v40 - 1) = v41;
              v36 = v39-- == 0;
            }
            while ( !v36 );
            v16 = v89;
            v38 = *(const char ***)v89;
          }
          sub_80CF780(v38);
          goto LABEL_91;
        }
        if ( v26 >= (unsigned int)sb )
          goto LABEL_48;
        v90 = *((_DWORD *)v16 + 2);
        v47 = (const char **)sub_80CF920((int)v16, nullptr, (unsigned int)sb, 4u);
        v30 = *((_DWORD *)v16 + 2);
        v18 = v47;
        v48 = *((_DWORD *)v16 + 1);
        v32 = *(const char ***)v16;
        *((_DWORD *)v16 + 2) = v90;
        v49 = v48 - 1;
        if ( v49 >= 0 )
        {
          sc = v16;
          v50 = v18;
          do
          {
            v51 = *v32;
            ++v50;
            ++v32;
            *(v50 - 1) = v51;
            v36 = v49-- == 0;
          }
          while ( !v36 );
          goto LABEL_60;
        }
LABEL_61:
        sub_80CF780(v32);
        *(_DWORD *)v16 = v18;
        v17 = *((_DWORD *)v16 + 1);
        *((_DWORD *)v16 + 2) = v30;
        goto LABEL_48;
      }
LABEL_18:
      ++v8;
      v9 += 16;
      if ( v8 == v102 )
      {
        v14 = (char *)v104;
        v15 = 0;
        while ( 1 )
        {
          v16 = v14;
          if ( a3 == *((_DWORD *)v14 + 3) )
            break;
          ++v15;
          v14 += 16;
          if ( v15 == v102 )
            goto LABEL_78;
        }
        if ( v14 )
          goto LABEL_23;
LABEL_78:
        v43 = a1;
        v45 = a1[7];
        v44 = v102 + 1;
        if ( v45 >= v102 + 1 )
          goto LABEL_72;
        goto LABEL_79;
      }
    }
  }
LABEL_29:
  result = v107 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
