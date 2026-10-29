/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_445470
// Address: 0x0000000000445470

//----- (0000000000445470) ----------------------------------------------------
__int64 __fastcall sub_445470(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 *a4, char a5)
{
  int v10; // w0
  unsigned int v11; // w24
  int v13; // w1
  unsigned __int64 v14; // x2
  int v15; // w25
  int v16; // w0
  __int64 v17; // x23
  int v18; // w25
  __int64 j; // x21
  size_t v20; // x0
  __int64 v21; // x27
  size_t v22; // x22
  _QWORD *v23; // x0
  _QWORD *v24; // x22
  __int64 v25; // x2
  const char *v26; // x0
  const char *v27; // x1
  void *v28; // x27
  __int64 *v29; // x1
  __int64 v30; // x4
  _QWORD *v31; // x0
  _QWORD *v32; // x1
  __int64 v33; // x0
  bool v34; // zf
  unsigned __int64 v35; // x0
  unsigned __int64 v36; // x22
  unsigned __int64 v37; // x26
  int v38; // w0
  __int64 v39; // x19
  unsigned __int64 v40; // x24
  char *v41; // x0
  size_t v42; // x19
  const void *v43; // x1
  char *v44; // x0
  size_t v45; // x2
  __int64 *v46; // x25
  _BYTE *v47; // x0
  __int64 v48; // x22
  size_t v49; // x19
  unsigned __int64 v50; // x1
  unsigned __int64 v51; // x22
  size_t v52; // x27
  unsigned __int64 v53; // x24
  size_t v54; // x2
  __int64 v55; // x1
  unsigned __int64 v56; // x1
  unsigned __int64 v58; // x2
  unsigned __int64 v59; // x27
  int v60; // w4
  int v61; // w5
  int v62; // w6
  int v63; // w7
  unsigned __int64 v64; // x22
  __int64 *i; // x0
  int *v66; // x21
  _QWORD *v67; // x28
  int *v68; // x0
  _QWORD *v69; // x1
  _BYTE *v70; // x0
  __int64 v71; // x21
  _QWORD *v72; // x25
  _QWORD *v73; // x21
  __int64 *v74; // x0
  const char *v75; // x0
  char *v76; // x3
  int v77; // w0
  int v78; // w0
  __int64 *v79; // x0
  int *v80; // x21
  char *v81; // x0
  int *v82; // x0
  _QWORD *v83; // x1
  void *v84; // x0
  _QWORD *v85; // x21
  char *v86; // x3
  int v87; // w0
  int v88; // w0
  size_t v89; // x0
  __int64 v90; // x28
  size_t v91; // x25
  __int64 *v92; // x0
  _QWORD *v93; // x25
  __int64 v94; // x2
  const char *v95; // x0
  const char *v96; // x1
  __int64 v97; // x0
  int *v98; // x1
  void *v99; // x28
  __int64 v100; // x0
  _QWORD *v101; // x0
  _QWORD *v102; // x1
  void *v103; // x0
  unsigned __int64 v104; // x27
  char v105; // [xsp+0h] [xbp-170h]
  char *s2; // [xsp+68h] [xbp-108h]
  char *s2a; // [xsp+68h] [xbp-108h]
  _QWORD *v108; // [xsp+70h] [xbp-100h]
  _QWORD *v109; // [xsp+70h] [xbp-100h]
  int v110; // [xsp+78h] [xbp-F8h]
  void *v111; // [xsp+78h] [xbp-F8h]
  __int64 *v112; // [xsp+78h] [xbp-F8h]
  void *src; // [xsp+80h] [xbp-F0h]
  __int64 v114; // [xsp+90h] [xbp-E0h]
  unsigned __int64 v115; // [xsp+A8h] [xbp-C8h] BYREF
  void *v116; // [xsp+B0h] [xbp-C0h] BYREF
  __int64 v117; // [xsp+B8h] [xbp-B8h]
  __int64 v118; // [xsp+C0h] [xbp-B0h]
  __int64 v119; // [xsp+C8h] [xbp-A8h] BYREF
  int v120; // [xsp+D0h] [xbp-A0h] BYREF
  __int64 *v121; // [xsp+D8h] [xbp-98h]
  int *v122; // [xsp+E0h] [xbp-90h]
  int *v123; // [xsp+E8h] [xbp-88h]
  __int64 v124; // [xsp+F0h] [xbp-80h]
  void *ptr; // [xsp+F8h] [xbp-78h] BYREF
  __int64 v126; // [xsp+100h] [xbp-70h] BYREF
  __int64 *v127; // [xsp+108h] [xbp-68h]
  __int64 *v128; // [xsp+110h] [xbp-60h]
  __int64 *v129; // [xsp+118h] [xbp-58h]
  __int64 v130; // [xsp+120h] [xbp-50h]
  __int64 v131[4]; // [xsp+128h] [xbp-48h] BYREF
  char v132[32]; // [xsp+148h] [xbp-28h] BYREF

  while ( 1 )
  {
    v10 = *(unsigned __int8 *)a1;
    if ( v10 == 7 )
    {
      v33 = a1[2];
      v34 = v33 == 0;
      v35 = v33 - 1;
      if ( v34 )
        v35 = 0;
      if ( a2 < 0 && (v36 = 0, a2 += v35, a2 < 0) )
      {
        if ( (a5 & 1) != 0 )
          a3 = 1;
        if ( (a3 & 0x8000000000000000LL) != 0 )
          goto LABEL_82;
      }
      else
      {
        if ( v35 > a2 )
          v36 = a2;
        else
          v36 = v35;
        if ( (a5 & 1) != 0 )
          a3 = v36 + 1;
        if ( (a3 & 0x8000000000000000LL) != 0 )
        {
LABEL_82:
          v37 = v36;
          a3 += v35;
          if ( (a3 & 0x8000000000000000LL) != 0LL )
            goto LABEL_44;
        }
      }
      if ( v35 <= a3 )
        a3 = v35;
      if ( a3 < v36 )
        v37 = v36;
      else
        v37 = a3;
LABEL_44:
      memset(&v131[1], 0, 24);
      v38 = *(unsigned __int8 *)a4;
      LOBYTE(v131[0]) = 2;
      if ( v38 != 7 )
      {
        v11 = sub_4488B8(v131, a4);
        if ( v11 || (v11 = sub_448E00(v131)) != 0 )
        {
          sub_448310(v131);
          return v11;
        }
        a4 = v131;
      }
      v39 = a4[2];
      v40 = v37 - v36;
      v41 = (char *)a1[1];
      v34 = v39 == 0;
      v42 = v39 - 1;
      if ( v34 )
        v42 = 0;
      if ( v40 <= v42 )
      {
        v43 = (const void *)a4[1];
        v44 = &v41[v36];
        v45 = v37 - v36;
        goto LABEL_50;
      }
      v55 = a1[2];
      if ( v55 )
      {
        v56 = v55 - 1;
        if ( v40 == v42 || v36 >= v56 )
        {
          v44 = &v41[v36];
          v45 = v42;
          v43 = (const void *)a4[1];
          goto LABEL_50;
        }
        v58 = v37 - v42;
        v59 = v36;
        if ( v56 > v37 - v42 )
        {
          v104 = v56 - v58;
          memmove(&v41[v36], &v41[v58], v56 - v58);
          v59 = v36 + v104;
          v41 = (char *)a1[1];
        }
        if ( v59 + 1 > a1[3] )
        {
          v41 = (char *)sub_491288((__int64)(a1 + 1), v41, v59 + 1, 1u);
          a1[1] = (__int64)v41;
        }
        a1[2] = v59 + 1;
        v41[v59] = 0;
        v41 = (char *)a1[1];
      }
      v44 = &v41[v36];
      if ( v40 > v42 )
        v45 = v42;
      else
        v45 = v37 - v36;
      v43 = (const void *)a4[1];
LABEL_50:
      memcpy(v44, v43, v45);
      if ( v40 >= v42 )
      {
LABEL_58:
        v11 = 0;
        sub_448310(v131);
        return v11;
      }
      if ( v40 | a4[2] )
        v46 = (__int64 *)(a4[1] + v40);
      else
        v46 = &qword_4C6860;
      v47 = (_BYTE *)a1[1];
      v48 = a1[2];
      v49 = v42 - v40;
      v50 = a1[3];
      if ( v48 )
      {
        v51 = v48 - 1;
        v52 = v49 + v51;
        v53 = v49 + v51 + 1;
        if ( v53 <= v50 )
          goto LABEL_55;
      }
      else
      {
        v53 = v49 + 1;
        if ( v49 + 1 <= v50 )
        {
          a1[2] = v53;
          v51 = 0;
          v47[v49] = 0;
LABEL_57:
          memmove((void *)(a1[1] + v51), v46, v49);
          goto LABEL_58;
        }
        v52 = v49;
        v51 = 0;
      }
      v47 = sub_491288((__int64)(a1 + 1), (void *)a1[1], v53, 1u);
      a1[1] = (__int64)v47;
LABEL_55:
      a1[2] = v53;
      v47[v52] = 0;
      if ( v37 < v51 )
      {
        v54 = v51 - v37;
        v51 = v37;
        memmove((void *)(a1[1] + v37 + v49), (const void *)(a1[1] + v37), v54);
      }
      goto LABEL_57;
    }
    if ( v10 != 10 )
      break;
    a1 = sub_448A08(a1, 0);
    if ( !a1 )
      return (unsigned int)sub_4869A0();
  }
  if ( v10 != 5 )
    return (unsigned int)sub_4869C8(1568);
  v11 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    sub_49B748(v132, 0x20u, "%llu", a2);
    return (unsigned int)sub_44D010((__int64)a1, v132, a4, 0, v60, v61, v62, v63, v105);
  }
  v13 = *(unsigned __int8 *)a4;
  v120 = 0;
  v121 = nullptr;
  v122 = &v120;
  v123 = &v120;
  v124 = 0;
  if ( v13 == 5 )
  {
    v71 = a4[1];
    ptr = nullptr;
    v126 = 0;
    v127 = nullptr;
    ptr = sub_491288((__int64)&ptr, nullptr, 2u, 1u);
    v126 = 2;
    v72 = (_QWORD *)(v71 + 8);
    strcpy((char *)ptr, "0");
    v108 = (_QWORD *)(v71 + 8);
    v73 = *(_QWORD **)(v71 + 16);
    if ( v73 )
    {
      v111 = ptr;
      if ( v126 )
        v74 = (__int64 *)ptr;
      else
        v74 = &qword_4B2D48;
      s2a = (char *)v74;
      do
      {
        v75 = (const char *)&qword_4B2D48;
        if ( v73[5] )
          v75 = (const char *)v73[4];
        if ( strcmp(v75, s2a) < 0 )
        {
          v73 = (_QWORD *)v73[3];
        }
        else
        {
          v72 = v73;
          v73 = (_QWORD *)v73[2];
        }
      }
      while ( v73 );
      if ( !v111 )
      {
LABEL_116:
        if ( v108 == v72 || !v72[5] || (v76 = (char *)v72[4], v77 = (unsigned __int8)*v76, !*v76) )
        {
LABEL_134:
          v15 = v124;
          goto LABEL_11;
        }
        while ( 1 )
        {
          if ( v77 == 48 )
            v78 = v76[1] == 0;
          else
            v78 = (unsigned __int8)sub_443E70(v76);
          if ( !v78 )
            goto LABEL_134;
          sub_49B8B8(v76, "%llu", &ptr);
          v79 = v121;
          if ( v121 )
          {
            v80 = &v120;
            do
            {
              if ( v79[4] < (unsigned __int64)ptr )
              {
                v79 = (__int64 *)v79[3];
              }
              else
              {
                v80 = (int *)v79;
                v79 = (__int64 *)v79[2];
              }
            }
            while ( v79 );
            if ( v80 != &v120 && (unsigned __int64)ptr >= *((_QWORD *)v80 + 4) )
              goto LABEL_131;
          }
          else
          {
            v80 = &v120;
          }
          v81 = (char *)sub_49E050(0x48u);
          v112 = (__int64 *)(v81 + 40);
          src = v81;
          *((_QWORD *)v81 + 4) = ptr;
          v81[40] = 2;
          *((_QWORD *)v81 + 6) = 0;
          *((_QWORD *)v81 + 7) = 0;
          *((_QWORD *)v81 + 8) = 0;
          v82 = (int *)sub_445028(&v119, (__int64)v80, (unsigned __int64 *)v81 + 4);
          v80 = v82;
          if ( v83 )
          {
            v80 = (int *)sub_444D88((__int64)&v119, (__int64)v82, v83, (__int64)src);
          }
          else
          {
            sub_448310(v112);
            j__free_0(src);
          }
LABEL_131:
          sub_4488B8((__int64 *)v80 + 5, v72 + 7);
          v72 = (_QWORD *)sub_49F748(v72);
          if ( v108 != v72 )
          {
            if ( v72[5] )
            {
              v76 = (char *)v72[4];
              v77 = (unsigned __int8)*v76;
              if ( *v76 )
                continue;
            }
          }
          goto LABEL_134;
        }
      }
    }
    else
    {
      v111 = ptr;
      v72 = v108;
      if ( !ptr )
      {
        v15 = v124;
        goto LABEL_11;
      }
    }
    v126 = 0;
    j__free(v111);
    goto LABEL_116;
  }
  if ( v13 != 7 )
  {
    v11 = sub_4869C8(1568);
    sub_4486C8((__int64)&v119, v121);
    return v11;
  }
  v14 = a4[2];
  if ( v14 > 1 )
  {
    v64 = 0;
    v110 = 0;
    for ( i = nullptr; ; i = v121 )
    {
      v66 = &v120;
      if ( !i )
        goto LABEL_96;
      do
      {
        if ( i[4] < v64 )
        {
          i = (__int64 *)i[3];
        }
        else
        {
          v66 = (int *)i;
          i = (__int64 *)i[2];
        }
      }
      while ( i );
      if ( v66 == &v120 || *((_QWORD *)v66 + 4) > v64 )
      {
LABEL_96:
        v67 = sub_49E050(0x48u);
        v67[4] = v64;
        *((_BYTE *)v67 + 40) = 2;
        v67[6] = 0;
        v67[7] = 0;
        v67[8] = 0;
        v68 = (int *)sub_445028(&v119, (__int64)v66, v67 + 4);
        v66 = v68;
        if ( v69 )
        {
          v66 = (int *)sub_444D88((__int64)&v119, (__int64)v68, v69, (__int64)v67);
        }
        else
        {
          sub_448310(v67 + 5);
          j__free_0(v67);
        }
        v14 = a4[2];
      }
      s2 = (char *)&qword_4C6860;
      if ( v64 | v14 )
        s2 = (char *)(a4[1] + v64);
      sub_448310((__int64 *)v66 + 5);
      *((_BYTE *)v66 + 40) = 7;
      *((_QWORD *)v66 + 6) = 0;
      *((_QWORD *)v66 + 7) = 0;
      *((_QWORD *)v66 + 8) = 0;
      v70 = sub_491288((__int64)(v66 + 12), nullptr, 2u, 1u);
      *((_QWORD *)v66 + 6) = v70;
      *((_QWORD *)v66 + 7) = 2;
      *v70 = *s2;
      *(_BYTE *)(*((_QWORD *)v66 + 6) + 1LL) = 0;
      v14 = a4[2];
      if ( !v14 )
        break;
      v64 = ++v110;
      if ( v110 >= v14 - 1 )
        break;
    }
    goto LABEL_134;
  }
  v15 = 0;
LABEL_11:
  v16 = a3 - a2;
  v17 = a1[1];
  if ( (__int64)(a3 - a2) < 0 )
    v16 = 0;
  v18 = v15 - v16;
  if ( v18 )
  {
    v116 = nullptr;
    v117 = 0;
    v118 = 0;
    LODWORD(v126) = 0;
    v127 = nullptr;
    v128 = &v126;
    v129 = &v126;
    v130 = 0;
    v116 = sub_491288((__int64)&v116, nullptr, 2u, 1u);
    v117 = 2;
    strcpy((char *)v116, "0");
    v109 = (_QWORD *)(v17 + 8);
    v85 = sub_443EB8(*(_QWORD **)(v17 + 16), (_QWORD *)(v17 + 8), (__int64)&v116);
    if ( v116 )
    {
      v117 = 0;
      j__free(v116);
    }
    if ( v85 != v109 )
    {
      if ( v85[5] )
      {
        v86 = (char *)v85[4];
        v87 = (unsigned __int8)*v86;
        if ( *v86 )
        {
          v114 = v18;
          do
          {
            if ( v87 == 48 )
              v88 = v86[1] == 0;
            else
              v88 = (unsigned __int8)sub_443E70(v86);
            if ( !v88 )
              break;
            sub_49B8B8(v86, "%llu", &v115);
            if ( v115 < a2 )
            {
              v85 = (_QWORD *)sub_49F6E8((__int64)v85);
            }
            else
            {
              if ( v115 >= a3 )
              {
                sub_49B748(v132, 0x20u, "%llu", v114 + v115);
                v116 = nullptr;
                v117 = 0;
                v118 = 0;
                v89 = strlen(v132);
                v90 = v89 + 1;
                v91 = v89;
                v116 = sub_491288((__int64)&v116, nullptr, v89 + 1, 1u);
                v117 = v90;
                memmove(v116, v132, v91);
                *((_BYTE *)v116 + v91) = 0;
                v92 = sub_443EB8(v127, &v126, (__int64)&v116);
                v93 = v92;
                if ( v92 == &v126 )
                  goto LABEL_172;
                v94 = v92[5];
                v95 = (const char *)v116;
                v96 = (const char *)&qword_4B2D48;
                if ( !v117 )
                  v95 = (const char *)&qword_4B2D48;
                if ( v94 )
                  v96 = (const char *)v93[4];
                if ( strcmp(v95, v96) < 0 )
                {
LABEL_172:
                  v99 = sub_49E050(0x58u);
                  v100 = v117;
                  *((_QWORD *)v99 + 4) = v116;
                  *((_QWORD *)v99 + 5) = v100;
                  *((_QWORD *)v99 + 6) = v118;
                  *((_QWORD *)v99 + 8) = 0;
                  *((_BYTE *)v99 + 56) = 2;
                  *((_QWORD *)v99 + 9) = 0;
                  *((_QWORD *)v99 + 10) = 0;
                  v116 = nullptr;
                  v117 = 0;
                  v118 = 0;
                  v101 = sub_445280(&ptr, v93, (const char **)v99 + 4);
                  v93 = v101;
                  if ( v102 )
                  {
                    v93 = (_QWORD *)sub_444DE8((__int64)&ptr, (__int64)v101, v102, (__int64)v99);
                  }
                  else
                  {
                    sub_448310((__int64 *)v99 + 7);
                    v103 = *((void **)v99 + 4);
                    if ( v103 )
                    {
                      *((_QWORD *)v99 + 5) = 0;
                      j__free(v103);
                    }
                    j__free_0(v99);
                  }
                }
                sub_4488B8(v93 + 7, v85 + 7);
                if ( v116 )
                {
                  v117 = 0;
                  j__free(v116);
                }
              }
              v97 = sub_49F6E8((__int64)v85);
              v98 = (int *)v85;
              v85 = (_QWORD *)v97;
              sub_44A3A8(v17, v98);
            }
            if ( v109 == v85 )
              break;
            if ( !v85[5] )
              break;
            v86 = (char *)v85[4];
            v87 = (unsigned __int8)*v86;
          }
          while ( *v86 );
        }
      }
    }
    sub_448EA0(v17, (__int64)v128, (__int64)&v126);
    sub_440380((__int64)&ptr, v127);
  }
  for ( j = (__int64)v122; (int *)j != &v120; ++a2 )
  {
    sub_49B748(v132, 0x20u, "%llu", a2);
    ptr = nullptr;
    v126 = 0;
    v127 = nullptr;
    v20 = strlen(v132);
    v21 = v20 + 1;
    v22 = v20;
    ptr = sub_491288((__int64)&ptr, nullptr, v20 + 1, 1u);
    v126 = v21;
    memmove(ptr, v132, v22);
    *((_BYTE *)ptr + v22) = 0;
    v23 = sub_443EB8(*(_QWORD **)(v17 + 16), (_QWORD *)(v17 + 8), (__int64)&ptr);
    v24 = v23;
    if ( (_QWORD *)(v17 + 8) == v23 )
      goto LABEL_25;
    v25 = v23[5];
    v26 = (const char *)ptr;
    v27 = (const char *)&qword_4B2D48;
    if ( !v126 )
      v26 = (const char *)&qword_4B2D48;
    if ( v25 )
      v27 = (const char *)v24[4];
    if ( strcmp(v26, v27) < 0 )
    {
LABEL_25:
      v28 = sub_49E050(0x58u);
      v29 = v127;
      v30 = v126;
      *((_QWORD *)v28 + 4) = ptr;
      *((_QWORD *)v28 + 5) = v30;
      *((_QWORD *)v28 + 6) = v29;
      *((_BYTE *)v28 + 56) = 2;
      *((_QWORD *)v28 + 8) = 0;
      *((_QWORD *)v28 + 9) = 0;
      *((_QWORD *)v28 + 10) = 0;
      ptr = nullptr;
      v126 = 0;
      v127 = nullptr;
      v31 = sub_445280((_QWORD *)v17, v24, (const char **)v28 + 4);
      v24 = v31;
      if ( v32 )
      {
        v24 = (_QWORD *)sub_444DE8(v17, (__int64)v31, v32, (__int64)v28);
      }
      else
      {
        sub_448310((__int64 *)v28 + 7);
        v84 = *((void **)v28 + 4);
        if ( v84 )
        {
          *((_QWORD *)v28 + 5) = 0;
          j__free(v84);
        }
        j__free_0(v28);
      }
    }
    sub_4488B8(v24 + 7, (__int64 *)(j + 40));
    if ( ptr )
    {
      v126 = 0;
      j__free(ptr);
    }
    j = sub_49F6E8(j);
  }
  sub_4486C8((__int64)&v119, v121);
  return v11;
}
// 445470: could not find valid save-restore pair for x22
// 445470: could not find valid save-restore pair for x26
// 4456D4: variable 'v32' is possibly undefined
// 4458F4: variable 'v60' is possibly undefined
// 4458F4: variable 'v61' is possibly undefined
// 4458F4: variable 'v62' is possibly undefined
// 4458F4: variable 'v63' is possibly undefined
// 4458F4: variable 'v105' is possibly undefined
// 445A40: variable 'v69' is possibly undefined
// 445BFC: variable 'v76' is possibly undefined
// 445C8C: variable 'v83' is possibly undefined
// 445E6C: variable 'v86' is possibly undefined
// 44602C: variable 'v102' is possibly undefined
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4C5B88: using guessed type __int64 qword_4C5B88[239];
// 4C6860: using guessed type __int64 qword_4C6860;
