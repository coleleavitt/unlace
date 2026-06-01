void __fastcall sub_1877EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r12d
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 **v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  char *v29; // r9
  __int64 *v30; // rdx
  unsigned __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 **v34; // rax
  __int64 *v35; // rdx
  unsigned __int64 v36; // rax
  __int64 *v37; // rcx
  __int64 **v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  __int64 *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  char **v51; // rax
  _QWORD *v52; // r12
  char *v53; // rdi
  char *v54; // rax
  __int64 v55; // rax
  char *v56; // r13
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 *v59; // rax
  int v60; // eax
  bool v61; // zf
  char *v62; // rax
  __int64 v63; // rbp
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  char **v69; // rax
  char *v70; // r9
  char **v71; // rbp
  __int64 v72; // r8
  char *v73; // rsi
  char *v74; // rdi
  char *v75; // rax
  __int64 v76; // rax
  char *v77; // r12
  __int64 v78; // rax
  __int64 *v79; // rax
  __int64 v80; // rcx
  char *v81; // rax
  char *v82; // r8
  char *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r15
  void *v89; // rax
  _QWORD *v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int64 *v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rax
  int v95; // eax
  char *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 *v99; // rax
  __int64 *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // r15
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // [rsp+0h] [rbp-130h]
  bool v110; // [rsp+Fh] [rbp-121h] BYREF
  __int64 v111; // [rsp+10h] [rbp-120h] BYREF
  void *ptr; // [rsp+18h] [rbp-118h] BYREF
  _BYTE v113[12]; // [rsp+20h] [rbp-110h] BYREF
  char v114; // [rsp+2Ch] [rbp-104h]
  void *v115; // [rsp+30h] [rbp-100h]
  __int64 v116; // [rsp+38h] [rbp-F8h]
  _BYTE v117[16]; // [rsp+40h] [rbp-F0h] BYREF
  char v118; // [rsp+50h] [rbp-E0h]
  _QWORD v119[2]; // [rsp+68h] [rbp-C8h] BYREF
  void *v120; // [rsp+78h] [rbp-B8h]
  unsigned __int8 *v121[11]; // [rsp+88h] [rbp-A8h] BYREF
  char v122; // [rsp+E0h] [rbp-50h]
  unsigned int v123; // [rsp+E8h] [rbp-48h]
  char v124; // [rsp+ECh] [rbp-44h]

  if ( *(char *)(a2 + 28) < 0 || (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return;
  v7 = a2;
  v8 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v11 = *v8;
  v12 = (__int64 *)(*v8 + 8LL * *((unsigned int *)v8 + 2));
  if ( *v8 < (unsigned __int64)v12 )
  {
    v16 = (__int64 *)*v8;
    while ( 1 )
    {
      v11 = *v16;
      if ( *(_WORD *)(*v16 + 36) == 322 )
        break;
      if ( v12 == ++v16 )
        goto LABEL_10;
    }
    if ( v12 != v16 )
      goto LABEL_21;
  }
  else if ( (__int64 *)v11 != v12 )
  {
    if ( *(_WORD *)(*v12 + 36) == 322 )
      goto LABEL_21;
    v13 = (__int64 **)(v12 + 1);
    while ( 1 )
    {
      v12 = (__int64 *)v13;
      if ( (__int64 **)v11 == v13 )
        break;
      v12 = *v13++;
      if ( *((_WORD *)v12 + 18) == 322 )
        goto LABEL_21;
    }
  }
LABEL_10:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return;
  v14 = sub_B8C3D0(a2, a2, v11, (__int64)v12, v9, v10);
  v11 = *v14;
  v12 = (__int64 *)(*v14 + 8LL * *((unsigned int *)v14 + 2));
  if ( *v14 >= (unsigned __int64)v12 )
  {
    if ( (__int64 *)v11 == v12 )
      return;
    if ( *(_WORD *)(*v12 + 36) != 214 )
    {
      v38 = (__int64 **)(v12 + 1);
      while ( v38 != (__int64 **)v11 )
      {
        v12 = *v38++;
        if ( *((_WORD *)v12 + 18) == 214 )
          goto LABEL_21;
      }
      return;
    }
  }
  else
  {
    v15 = (__int64 *)*v14;
    while ( 1 )
    {
      v11 = *v15;
      if ( *(_WORD *)(*v15 + 36) == 214 )
        break;
      if ( v12 == ++v15 )
        return;
    }
    if ( v12 == v15 )
      return;
  }
LABEL_21:
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_32;
  if ( !sub_B979F0((_QWORD *)a2) )
  {
    v39 = sub_B72690(a2 + 72);
    if ( v39 )
      v39 -= 64LL;
    if ( (unsigned __int8)sub_B96D40(v39)
      || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    {
      return;
    }
  }
  if ( sub_AED5B0(a2) )
    goto LABEL_25;
  *(_QWORD *)v113 = 0x800000000LL;
  ptr = &v113[8];
  if ( (*(_BYTE *)(a2 + 40) & 7) != 0 )
    goto LABEL_25;
  sub_183A170(a1, a2, (__int64)&ptr);
  if ( *(_DWORD *)v113 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v92 = sub_B8C3D0(a2, a2, v40, v41, v42, v43);
      v40 = *v92;
      v93 = *v92 + 8LL * *((unsigned int *)v92 + 2);
      if ( v40 >= v93 )
      {
        if ( v40 != v93 )
        {
          if ( *(_WORD *)(*(_QWORD *)v93 + 36LL) == 322 )
          {
LABEL_191:
            v98 = *(_QWORD *)v40;
            if ( *(_WORD *)(*(_QWORD *)v40 + 36LL) != 322 )
            {
              v99 = (__int64 *)(v40 + 8);
              do
                v98 = *v99++;
              while ( *(_WORD *)(v98 + 36) != 322 );
            }
            sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), *(_DWORD *)(v98 + 24), 0x1949u, 0);
            if ( v122 )
            {
              sub_AE9DF0(v121, (__int64)"override", 1u);
            }
            else if ( v124 )
            {
              v106 = sub_168B9E0(v119);
              v107 = (__int64)v120;
              if ( v120 )
                v107 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v120 + 32LL))(v120);
              v111 = v107;
              v108 = sub_1587BC0(v106, &v111, v102, v103, v104, v105);
              sub_AE9DF0((unsigned __int8 **)(*v108 + 32LL * v123 + 8), (__int64)"override", 1u);
            }
            LOBYTE(v111) = *(_DWORD *)v113 > 1u;
            sub_1588420((__int64)v119, (unsigned __int8 *)&v111);
            sub_15F7200(v119);
            goto LABEL_172;
          }
          v100 = (__int64 *)(v93 + 8);
          while ( 1 )
          {
            v41 = (__int64)v100;
            if ( v100 == (__int64 *)v40 )
              break;
            v101 = *v100++;
            if ( *(_WORD *)(v101 + 36) == 322 )
              goto LABEL_191;
          }
        }
      }
      else
      {
        v41 = v40;
        while ( 1 )
        {
          a2 = *(_QWORD *)v41;
          if ( *(_WORD *)(*(_QWORD *)v41 + 36LL) == 322 )
            break;
          v41 += 8;
          if ( v93 == v41 )
            goto LABEL_166;
        }
        if ( v93 != v41 )
          goto LABEL_191;
      }
    }
LABEL_166:
    v94 = sub_183EFF0(v7, a2, v40, v41, v42, v43);
    if ( v94 )
    {
      v109 = v94;
      sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), *(_DWORD *)(v94 + 24), 0x1949u, 0);
      if ( (*(_BYTE *)(v109 + 34) & 0xF0) == 0xF0 )
        v95 = sub_FA77D0(v109);
      else
        v95 = *(_BYTE *)(v109 + 34) >> 4;
      v61 = v95 == 1;
      v96 = (char *)"sealed";
      if ( !v61 )
        v96 = "final";
      v111 = (__int64)v96;
      v97 = sub_15AFC70((__int64)v119, &v111);
      v110 = *(_DWORD *)v113 > 1u;
      sub_1588420(v97, (unsigned __int8 *)&v110);
      sub_15F7200(v119);
    }
LABEL_172:
    sub_18417B0(a1, v7, (__int64)&ptr);
    sub_B88650(v7, 1);
    if ( ptr != &v113[8] )
      free(ptr);
    return;
  }
  if ( ptr != &v113[8] )
    free(ptr);
LABEL_25:
  if ( !sub_AED5B0(a2) )
  {
LABEL_32:
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return;
    v26 = (__int64 **)sub_B8C3D0(a2, a2, v11, (__int64)v12, v9, v10);
    v30 = *v26;
    v31 = (unsigned __int64)&(*v26)[*((unsigned int *)v26 + 2)];
    if ( (unsigned __int64)v30 < v31 )
    {
      v27 = (__int64)v30;
      while ( 1 )
      {
        a2 = *(_QWORD *)v27;
        if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 322 )
          break;
        v27 += 8;
        if ( v31 == v27 )
          goto LABEL_39;
      }
      if ( v31 == v27 )
      {
LABEL_39:
        if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
          return;
        v34 = (__int64 **)sub_B8C3D0(v7, a2, (__int64)v30, v27, v28, (__int64)v29);
        v35 = *v34;
        v36 = (unsigned __int64)&(*v34)[*((unsigned int *)v34 + 2)];
        if ( (unsigned __int64)v35 >= v36 )
        {
          if ( v35 == (__int64 *)v36 )
            return;
          if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 214 )
          {
            v79 = (__int64 *)(v36 + 8);
            while ( v35 != v79 )
            {
              v80 = *v79++;
              if ( *(_WORD *)(v80 + 36) == 214 )
                goto LABEL_94;
            }
            return;
          }
        }
        else
        {
          v37 = v35;
          while ( *(_WORD *)(*v37 + 36) != 214 )
          {
            if ( (__int64 *)v36 == ++v37 )
              return;
          }
          if ( (__int64 *)v36 == v37 )
            return;
        }
LABEL_94:
        v58 = *v35;
        if ( *(_WORD *)(*v35 + 36) != 214 )
        {
          v59 = v35 + 1;
          do
            v58 = *v59++;
          while ( *(_WORD *)(v58 + 36) != 214 );
        }
        sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), *(_DWORD *)(v58 + 24), 0x194Au, 0);
        if ( (*(_BYTE *)(v58 + 34) & 0xF0) == 0xF0 )
          v60 = sub_FA77D0(v58);
        else
          v60 = *(_BYTE *)(v58 + 34) >> 4;
        v61 = v60 == 1;
        v62 = "final";
        if ( v61 )
          v62 = (char *)"sealed";
        v63 = (__int64)v62;
        if ( v122 )
        {
          sub_AE9DF0(v121, (__int64)v62, 1u);
        }
        else if ( v124 )
        {
          v88 = sub_168B9E0(v119);
          v89 = v120;
          if ( v120 )
            v89 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v120 + 32LL))(v120);
          ptr = v89;
          v90 = sub_1587BC0(v88, (__int64 *)&ptr, v84, v85, v86, v87);
          sub_AE9DF0((unsigned __int8 **)(*v90 + 32LL * v123 + 8), v63, 1u);
        }
        v64 = *(_DWORD *)(v58 + 24);
        *(_QWORD *)&v113[4] = 0;
        v114 = 0;
        v115 = v117;
        v116 = 0;
        v117[0] = 0;
        v118 = 0;
        LODWORD(ptr) = v64;
        HIDWORD(ptr) = v64;
        v113[0] = 1;
        sub_1589170((__int64)v119, &ptr);
        if ( v115 != v117 )
          operator delete(v115);
        sub_15F7200(v119);
        if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
          return;
        v69 = (char **)sub_B8C3D0(v7, (__int64)&ptr, v65, v66, v67, v68);
        v70 = *v69;
        v71 = v69;
        v72 = 8LL * *((unsigned int *)v69 + 2);
        v73 = &(*v69)[v72];
        if ( v72 >> 5 )
        {
          if ( *(_WORD *)(*(_QWORD *)v70 + 36LL) == 214 )
          {
            v74 = *v69;
            goto LABEL_131;
          }
          v74 = v70 + 8;
          if ( *(_WORD *)(*((_QWORD *)v70 + 1) + 36LL) == 214
            || (v74 = v70 + 16, *(_WORD *)(*((_QWORD *)v70 + 2) + 36LL) == 214)
            || (v75 = *v69, v74 = v70 + 24, *(_WORD *)(*((_QWORD *)v70 + 3) + 36LL) == 214) )
          {
LABEL_131:
            if ( v73 != v74 )
            {
              v81 = v74 + 8;
              if ( v73 == v74 + 8 )
              {
                v77 = v74;
              }
              else
              {
                do
                {
                  if ( *(_WORD *)(*(_QWORD *)v81 + 36LL) != 214 )
                  {
                    *(_QWORD *)v74 = *(_QWORD *)v81;
                    v74 += 8;
                  }
                  v81 += 8;
                }
                while ( v73 != v81 );
                v70 = *v71;
                v82 = &(*v71)[v72];
                v77 = &v74[v82 - v73];
                if ( v73 != v82 )
                {
                  memmove(v74, v73, v82 - v73);
                  v70 = *v71;
                }
              }
              goto LABEL_122;
            }
            goto LABEL_121;
          }
          while ( 1 )
          {
            v74 = v75 + 32;
            if ( &v70[32 * (v72 >> 5)] == v75 + 32 )
              break;
            if ( *(_WORD *)(*((_QWORD *)v75 + 4) + 36LL) == 214 )
              goto LABEL_131;
            if ( *(_WORD *)(*((_QWORD *)v75 + 5) + 36LL) == 214 )
            {
              v74 = v75 + 40;
              goto LABEL_131;
            }
            if ( *(_WORD *)(*((_QWORD *)v75 + 6) + 36LL) == 214 )
            {
              v74 = v75 + 48;
              goto LABEL_131;
            }
            if ( *(_WORD *)(*((_QWORD *)v75 + 7) + 36LL) == 214 )
            {
              v74 = v75 + 56;
              goto LABEL_131;
            }
            v75 += 32;
          }
        }
        else
        {
          v74 = *v69;
        }
        v76 = (v73 - v74) >> 3;
        if ( v76 != 2 )
        {
          if ( v76 != 3 )
          {
            if ( v76 != 1 )
            {
LABEL_121:
              v77 = v73;
              goto LABEL_122;
            }
            goto LABEL_182;
          }
          if ( *(_WORD *)(*(_QWORD *)v74 + 36LL) == 214 )
            goto LABEL_131;
          v74 += 8;
        }
        if ( *(_WORD *)(*(_QWORD *)v74 + 36LL) == 214 )
          goto LABEL_131;
        v74 += 8;
LABEL_182:
        v77 = v73;
        if ( *(_WORD *)(*(_QWORD *)v74 + 36LL) != 214 )
        {
LABEL_122:
          v78 = (v77 - v70) >> 3;
          *((_DWORD *)v71 + 2) = v78;
          if ( !(_DWORD)v78 )
            *(_BYTE *)(v7 + 29) &= ~1u;
          return;
        }
        goto LABEL_131;
      }
    }
    else
    {
      if ( v30 == (__int64 *)v31 )
        goto LABEL_39;
      if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 322 )
      {
        v32 = (__int64 *)(v31 + 8);
        do
        {
          v27 = (__int64)v32;
          if ( v30 == v32 )
            goto LABEL_39;
          v33 = *v32++;
        }
        while ( *(_WORD *)(v33 + 36) != 322 );
      }
    }
    v44 = *v30;
    if ( *(_WORD *)(*v30 + 36) != 322 )
    {
      v45 = v30 + 1;
      do
        v44 = *v45++;
      while ( *(_WORD *)(v44 + 36) != 322 );
    }
    sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), *(_DWORD *)(v44 + 24), 0x194Au, 0);
    if ( v122 )
    {
      sub_AE9DF0(v121, (__int64)"override", 1u);
    }
    else if ( v124 )
    {
      sub_18510A0((__int64)v119, (__int64)"override");
    }
    v46 = *(_DWORD *)(v44 + 24);
    v114 = 0;
    *(_QWORD *)&v113[4] = 0;
    v115 = v117;
    v116 = 0;
    v117[0] = 0;
    v118 = 0;
    LODWORD(ptr) = v46;
    HIDWORD(ptr) = v46;
    v113[0] = 1;
    sub_1589170((__int64)v119, &ptr);
    if ( v115 != v117 )
      operator delete(v115);
    sub_15F7200(v119);
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
      return;
    v51 = (char **)sub_B8C3D0(v7, (__int64)&ptr, v47, v48, v49, v50);
    v29 = *v51;
    v52 = v51;
    v28 = 8LL * *((unsigned int *)v51 + 2);
    a2 = (__int64)&(*v51)[v28];
    v27 = v28 >> 5;
    if ( v28 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 322 )
      {
        v53 = *v51;
        goto LABEL_139;
      }
      v53 = v29 + 8;
      if ( *(_WORD *)(*((_QWORD *)v29 + 1) + 36LL) == 322
        || (v53 = v29 + 16, *(_WORD *)(*((_QWORD *)v29 + 2) + 36LL) == 322)
        || (v30 = *((__int64 **)v29 + 3),
            v54 = *v51,
            v53 = v29 + 24,
            v27 = (__int64)&v29[32 * v27],
            *((_WORD *)v30 + 18) == 322) )
      {
LABEL_139:
        if ( (char *)a2 != v53 )
        {
          v83 = v53 + 8;
          if ( (char *)a2 == v53 + 8 )
          {
            v56 = v53;
          }
          else
          {
            do
            {
              if ( *(_WORD *)(*(_QWORD *)v83 + 36LL) != 322 )
              {
                *(_QWORD *)v53 = *(_QWORD *)v83;
                v53 += 8;
              }
              v83 += 8;
            }
            while ( (char *)a2 != v83 );
            v29 = (char *)*v52;
            v28 += *v52;
            v30 = (__int64 *)(v28 - a2);
            v56 = &v53[v28 - a2];
            if ( v28 != a2 )
            {
              memmove(v53, (const void *)a2, (size_t)v30);
              v29 = (char *)*v52;
            }
          }
          goto LABEL_91;
        }
        goto LABEL_90;
      }
      while ( 1 )
      {
        v53 = v54 + 32;
        if ( (char *)v27 == v54 + 32 )
          break;
        v30 = *((__int64 **)v54 + 4);
        if ( *((_WORD *)v30 + 18) == 322 )
          goto LABEL_139;
        v30 = *((__int64 **)v54 + 5);
        if ( *((_WORD *)v30 + 18) == 322 )
        {
          v53 = v54 + 40;
          goto LABEL_139;
        }
        v30 = *((__int64 **)v54 + 6);
        if ( *((_WORD *)v30 + 18) == 322 )
        {
          v53 = v54 + 48;
          goto LABEL_139;
        }
        v30 = *((__int64 **)v54 + 7);
        if ( *((_WORD *)v30 + 18) == 322 )
        {
          v53 = v54 + 56;
          goto LABEL_139;
        }
        v54 += 32;
      }
    }
    else
    {
      v53 = *v51;
    }
    v55 = (a2 - (__int64)v53) >> 3;
    if ( v55 != 2 )
    {
      if ( v55 != 3 )
      {
        if ( v55 != 1 )
        {
LABEL_90:
          v56 = (char *)a2;
          goto LABEL_91;
        }
        goto LABEL_188;
      }
      if ( *(_WORD *)(*(_QWORD *)v53 + 36LL) == 322 )
        goto LABEL_139;
      v53 += 8;
    }
    if ( *(_WORD *)(*(_QWORD *)v53 + 36LL) == 322 )
      goto LABEL_139;
    v53 += 8;
LABEL_188:
    v56 = (char *)a2;
    if ( *(_WORD *)(*(_QWORD *)v53 + 36LL) != 322 )
    {
LABEL_91:
      v57 = (v56 - v29) >> 3;
      *((_DWORD *)v52 + 2) = v57;
      if ( !(_DWORD)v57 )
        *(_BYTE *)(v7 + 29) &= ~1u;
      goto LABEL_39;
    }
    goto LABEL_139;
  }
  v21 = sub_B984E0(a2);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return;
  v22 = sub_B8C3D0(a2, a2, v17, v18, v19, v20);
  v23 = *v22;
  v24 = *v22 + 8LL * *((unsigned int *)v22 + 2);
  if ( *v22 < v24 )
  {
    v25 = *v22;
    while ( 1 )
    {
      v23 = v25;
      if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 322 )
        break;
      v25 += 8LL;
      if ( v24 == v25 )
        return;
    }
LABEL_151:
    if ( v23 != v24 && !v21 )
    {
      sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xF18u, 0);
      ptr = *(void **)(a2 + 40);
      sub_15894B0((__int64)v119, (__int64 *)&ptr);
      sub_15F7200(v119);
    }
    return;
  }
  if ( v23 == v24 )
    return;
  if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 322 )
    goto LABEL_151;
  v91 = v24 + 8;
  while ( 1 )
  {
    v24 = v91;
    if ( v23 == v91 )
      break;
    v91 += 8LL;
    if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 322 )
      goto LABEL_151;
  }
}
