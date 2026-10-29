__int64 __fastcall sub_63B3D0(__int64 a1, __int64 a2, const char *a3, const char *a4, double a5, double a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  const char *v10; // rdi
  unsigned int v11; // r15d
  char *v12; // rax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rbx
  const char *v21; // rdi
  __int64 v23; // r13
  const char *v24; // rcx
  const char **v25; // r13
  size_t v26; // rax
  size_t v27; // r8
  const char *v28; // rcx
  const char *v29; // rdx
  const char *v30; // rsi
  _QWORD *v31; // r12
  const char *v32; // rdx
  int v33; // r9d
  char *v34; // r12
  __int64 v35; // r12
  unsigned int v36; // eax
  __int64 v37; // r12
  int v38; // eax
  const char *v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // ebx
  __int64 v42; // r13
  char *v43; // rdi
  __int64 v44; // r12
  __int64 v45; // r14
  char *v46; // rbx
  void *v47; // rdi
  void *v48; // rdi
  _QWORD *v49; // rbx
  void *v50; // rdi
  char *v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // r14
  char *v54; // rax
  void *v55; // rdi
  char **v56; // r12
  char *v57; // rdi
  __int64 v58; // r14
  __int64 v59; // r13
  char *v60; // rbx
  void *v61; // rdi
  void *v62; // rdi
  void *v63; // rdi
  char *v64; // rdi
  __int64 v65; // r14
  __int64 v66; // r12
  char *v67; // rbx
  void *v68; // rdi
  void *v69; // rdi
  __int64 v70; // r12
  __int64 v71; // r13
  void *v72; // rdi
  void *v73; // rdi
  size_t v74; // rax
  size_t v75; // r13
  size_t v76; // rdx
  __int64 v77; // [rsp-10h] [rbp-220h]
  size_t v78; // [rsp+8h] [rbp-208h]
  size_t v79; // [rsp+10h] [rbp-200h]
  size_t v80; // [rsp+10h] [rbp-200h]
  __int64 *v81; // [rsp+18h] [rbp-1F8h]
  __int64 v82; // [rsp+20h] [rbp-1F0h]
  char v83; // [rsp+28h] [rbp-1E8h]
  size_t v84; // [rsp+28h] [rbp-1E8h]
  __int64 *v85; // [rsp+40h] [rbp-1D0h]
  __int64 v87; // [rsp+48h] [rbp-1C8h]
  __int64 i; // [rsp+48h] [rbp-1C8h]
  unsigned __int8 v89[4]; // [rsp+50h] [rbp-1C0h] BYREF
  unsigned int v90; // [rsp+54h] [rbp-1BCh] BYREF
  char *v91; // [rsp+58h] [rbp-1B8h] BYREF
  char *v92; // [rsp+60h] [rbp-1B0h] BYREF
  char *v93; // [rsp+68h] [rbp-1A8h] BYREF
  char *v94; // [rsp+70h] [rbp-1A0h] BYREF
  __int64 v95; // [rsp+78h] [rbp-198h] BYREF
  void *v96; // [rsp+80h] [rbp-190h] BYREF
  __int64 *v97; // [rsp+88h] [rbp-188h] BYREF
  void *v98; // [rsp+90h] [rbp-180h] BYREF
  __int128 v99; // [rsp+98h] [rbp-178h]
  void *v100; // [rsp+B0h] [rbp-160h] BYREF
  __int128 v101; // [rsp+B8h] [rbp-158h]
  void *v102; // [rsp+D0h] [rbp-140h] BYREF
  __int128 v103; // [rsp+D8h] [rbp-138h]
  void *v104; // [rsp+F0h] [rbp-120h] BYREF
  __int128 v105; // [rsp+F8h] [rbp-118h]
  void *ptr; // [rsp+110h] [rbp-100h] BYREF
  __int128 v107; // [rsp+118h] [rbp-F8h]
  void *v108; // [rsp+130h] [rbp-E0h] BYREF
  __int128 v109; // [rsp+138h] [rbp-D8h]
  int v110; // [rsp+148h] [rbp-C8h]
  __int16 v111; // [rsp+14Ch] [rbp-C4h]
  char v112; // [rsp+14Eh] [rbp-C2h]
  void *v113; // [rsp+150h] [rbp-C0h]
  __int128 v114; // [rsp+158h] [rbp-B8h]
  void *s; // [rsp+168h] [rbp-A8h]
  __int64 v116; // [rsp+170h] [rbp-A0h]
  void *v117; // [rsp+178h] [rbp-98h]
  __int64 v118; // [rsp+180h] [rbp-90h]
  int v119; // [rsp+188h] [rbp-88h]
  __int64 v120; // [rsp+190h] [rbp-80h]
  void *v121[2]; // [rsp+198h] [rbp-78h] BYREF
  __int128 v122; // [rsp+1A8h] [rbp-68h]
  void *v123; // [rsp+1B8h] [rbp-58h]
  __int128 v124; // [rsp+1C0h] [rbp-50h]
  unsigned __int64 v125; // [rsp+1D8h] [rbp-38h]

  v125 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( !a3 )
      return 0;
    v8 = a2;
    if ( !*a3 )
      return 0;
  }
  else
  {
    if ( !a3 )
      return 0;
    v8 = *(_QWORD *)(a1 + 8);
    if ( !*a3 || !v8 )
      return 0;
  }
  v9 = *(_QWORD *)(v8 + 56);
  if ( !v9 )
    return 0;
  v10 = sub_631E40(v9, a3, 2);
  if ( !v10 )
    return 0;
  v11 = 0;
  sub_629EE0((__int64)v10, (const char **)&v91, 0, 0, 0, 0);
  v12 = v91;
  v98 = nullptr;
  v99 = 0;
  ++v91;
  if ( *v12 != 61 )
    return v11;
  v11 = sub_54DE00((__int64)&v98, &v91);
  if ( (_BYTE)v11 )
  {
    if ( (unsigned __int64)v99 > 1
      && (unsigned int)sub_632230(
                         a1,
                         a2,
                         (const char *)v98,
                         3,
                         (const char **)&v92,
                         (unsigned __int64)&v93,
                         (unsigned __int64)&v94,
                         (unsigned __int64)&v95,
                         (unsigned __int64)v89,
                         &v90) == 1 )
    {
      v14 = *v92;
      v96 = nullptr;
      v83 = v14;
      sub_630250(&v97, (__int64)v92, (__int64)v93, v95, nullptr, (__int64 **)&v96);
      v85 = v97;
      if ( v97 )
      {
        v15 = v97[1];
        if ( !v15 )
          goto LABEL_81;
        v16 = *v97;
        v17 = -56;
        if ( v15 != -1 )
          v17 = 56 * v15;
        v18 = v16 + v17;
        if ( v16 == v18 )
          goto LABEL_81;
        v82 = *v97;
        v19 = (__int64 *)a1;
        v87 = *v97;
        v20 = v18;
        v81 = v19;
        while ( 1 )
        {
          v21 = haystack;
          if ( *(_QWORD *)(v87 + 8) )
            v21 = *(const char **)v87;
          if ( !strcmp(v21, a3) )
            break;
          v87 += 56;
          if ( v20 == v87 )
            goto LABEL_81;
        }
        v23 = v87 - v82;
        if ( v87 - v82 < 0 )
          goto LABEL_81;
        v111 = 0;
        v24 = haystack;
        v108 = nullptr;
        v110 = -1;
        v112 = 0;
        v113 = nullptr;
        s = v121;
        v116 = 1;
        v117 = nullptr;
        v118 = 0;
        v119 = 1065353216;
        v120 = 0;
        v123 = nullptr;
        v109 = 0;
        v114 = 0;
        *(_OWORD *)v121 = 0;
        v122 = 0;
        v124 = 0;
        if ( (_QWORD)v99 )
          v24 = (const char *)v98;
        sub_6A6710(v81, a2, &v108, v24, -1, 0);
        if ( a4 )
        {
          v25 = (const char **)(*v85 + v23);
          v26 = strlen(a4);
          v27 = v26;
          if ( v26 )
          {
            v76 = v26 + 1;
            if ( (unsigned __int64)v25[2] < v26 + 1 )
            {
              v78 = v26;
              v80 = v26 + 1;
              *v25 = (const char *)qvector_reserve(v25, *v25, v76, 1);
              v27 = v78;
              v76 = v80;
            }
            v25[1] = (const char *)v76;
            v79 = v27;
            memmove((void *)*v25, a4, v27);
            v27 = v79;
            (*v25)[v79] = 0;
            v28 = v25[6];
            if ( v25[1] )
              v29 = *v25;
            else
              v29 = haystack;
          }
          else
          {
            v25[1] = nullptr;
            v28 = v25[6];
            v29 = haystack;
          }
          v30 = haystack;
          if ( (_QWORD)v99 )
            v30 = (const char *)v98;
          sub_63DF20(a2, v30, v29, v28, v27);
        }
        else
        {
          v70 = *((_BYTE *)v85 + 52) & 0x10;
          if ( (_BYTE)v70 )
            sub_4032C0(v85, 0);
          v71 = *v85 + v23;
          v72 = *(void **)(v71 + 24);
          if ( v72 )
          {
            *(_QWORD *)(v71 + 32) = 0;
            qfree(v72);
          }
          v73 = *(void **)v71;
          if ( *(_QWORD *)v71 )
          {
            *(_QWORD *)(v71 + 8) = 0;
            qfree(v73);
          }
          memmove((void *)v71, (const void *)(v71 + 56), *v85 + 56 * v85[1]-- - v71 - 56);
          if ( (_BYTE)v70 )
            sub_4032C0(v85, 1);
        }
        v31 = *(_QWORD **)(a2 + 56);
        if ( v31 && (v32 = sub_631E40(*(_QWORD *)(a2 + 56), a3, 0)) != nullptr )
        {
          sub_6331E0(v81, v31, (__int64)v32, 0);
          v100 = nullptr;
          v101 = 0;
          v33 = *((_DWORD *)v85 + 12);
          v102 = nullptr;
          v103 = 0;
          v104 = nullptr;
          v105 = 0;
          if ( (unsigned __int8)sub_51D630(
                                  (__int64)v85,
                                  (__int64 *)&v100,
                                  (__int64)&v102,
                                  (__int64)&v104,
                                  v83,
                                  v33 & 0xF,
                                  v96) )
          {
            sub_686900(&v102, &v100);
            sub_686900(&v104, &v100);
            v34 = v94;
            ptr = nullptr;
            v107 = 0;
            if ( v94 )
            {
              if ( *v94 )
              {
                v74 = strlen(v94);
                v75 = v74;
                if ( v74 )
                {
                  v84 = v74 + 1;
                  ptr = (void *)qvector_reserve(&ptr, 0, v74 + 1, 1);
                  *(_QWORD *)&v107 = v84;
                  memmove(ptr, v34, v75);
                  *((_BYTE *)ptr + v75) = 0;
                }
              }
            }
            if ( (unsigned __int8)sub_633EC0(v81, a2, (const char *)v98, 5, nullptr) )
            {
              v35 = *(_QWORD *)(a2 + 64);
              v36 = (unsigned int)sub_630670(
                                    v81,
                                    v35,
                                    (char *)v98,
                                    (char *)v100,
                                    (char *)v102,
                                    (char *)ptr,
                                    (char *)v104,
                                    v89,
                                    (__int64 *)&v90,
                                    0);
              if ( (*(_BYTE *)(v35 + 8) & 2) != 0 )
                *(_DWORD *)(*(_QWORD *)(v35 + 40) + 4LL * v90) = v36 - *(_DWORD *)(v35 + 32);
              v37 = *(_QWORD *)(*v81 + 1480);
              v38 = *(_DWORD *)(v37 + 2484) + 1;
              if ( *(_DWORD *)(v37 + 2484) == -1 )
                v38 = 1;
              *(_DWORD *)(v37 + 2484) = v38;
              mark_builtin_widgets(1024, 0, 1);
              sub_698450(v37);
              v39 = haystack;
              if ( (_QWORD)v99 )
                v39 = (const char *)v98;
              sub_63AF00(v81, a2, (__int64)v39, (char *)v100, v93, (__int64)&v108, 0.0, a6, (__int64)v85);
              v41 = v90;
              v42 = *v81;
              if ( v90 == -1 )
                v41 = 0;
              sub_396090(0x48u, 3, v41, a3, v40, v77);
              sub_5FE6F0(*(_QWORD *)(v42 + 1480), v41, a3, 0);
              if ( ptr )
              {
                *(_QWORD *)&v107 = 0;
                qfree(ptr);
              }
              if ( v104 )
              {
                *(_QWORD *)&v105 = 0;
                qfree(v104);
              }
              if ( v102 )
              {
                *(_QWORD *)&v103 = 0;
                qfree(v102);
              }
              if ( v100 )
              {
                *(_QWORD *)&v101 = 0;
                qfree(v100);
              }
              v43 = (char *)v123;
              if ( v123 )
              {
                v44 = v124;
                v45 = 0;
                if ( (_QWORD)v124 )
                {
                  do
                  {
                    v46 = &v43[128 * v45];
                    clear_tinfo_t(v46 + 64);
                    v47 = *((void **)v46 + 5);
                    if ( v47 )
                    {
                      *((_QWORD *)v46 + 6) = 0;
                      qfree(v47);
                    }
                    v48 = *((void **)v46 + 2);
                    if ( v48 )
                    {
                      *((_QWORD *)v46 + 3) = 0;
                      qfree(v48);
                    }
                    v43 = (char *)v123;
                    ++v45;
                  }
                  while ( v44 != v45 );
                }
                *(_QWORD *)&v124 = 0;
                qfree(v43);
              }
              if ( v121[1] )
              {
                *(_QWORD *)&v122 = 0;
                qfree(v121[1]);
              }
              v49 = v117;
              if ( v117 )
              {
                do
                {
                  v50 = v49;
                  v49 = (_QWORD *)*v49;
                  operator delete(v50, 0x20u);
                }
                while ( v49 );
              }
              memset(s, 0, 8 * v116);
              v118 = 0;
              v117 = nullptr;
              if ( s != v121 )
                operator delete(s, 8 * v116);
              v51 = (char *)v113;
              if ( v113 )
              {
                v52 = 0;
                v53 = v114;
                if ( (_QWORD)v114 )
                {
                  do
                  {
                    v54 = &v51[32 * v52];
                    v55 = *(void **)v54;
                    if ( *(_QWORD *)v54 )
                    {
                      *((_QWORD *)v54 + 1) = 0;
                      qfree(v55);
                      v51 = (char *)v113;
                    }
                    ++v52;
                  }
                  while ( v53 != v52 );
                }
                *(_QWORD *)&v114 = 0;
                qfree(v51);
              }
              if ( v108 )
              {
                *(_QWORD *)&v109 = 0;
                qfree(v108);
              }
LABEL_81:
              v56 = (char **)v96;
              if ( v96 )
              {
                v57 = *(char **)v96;
                if ( *(_QWORD *)v96 )
                {
                  v58 = *((_QWORD *)v96 + 1);
                  v59 = 0;
                  if ( v58 )
                  {
                    do
                    {
                      v60 = &v57[48 * v59];
                      v61 = *((void **)v60 + 3);
                      if ( v61 )
                      {
                        *((_QWORD *)v60 + 4) = 0;
                        qfree(v61);
                      }
                      v62 = *(void **)v60;
                      if ( *(_QWORD *)v60 )
                      {
                        *((_QWORD *)v60 + 1) = 0;
                        qfree(v62);
                      }
                      v57 = *v56;
                      ++v59;
                    }
                    while ( v58 != v59 );
                  }
                  v56[1] = nullptr;
                  qfree(v57);
                }
                qfree(v56);
              }
              v63 = (void *)v85[3];
              if ( v63 )
              {
                v85[4] = 0;
                qfree(v63);
              }
              v64 = (char *)*v85;
              if ( *v85 )
              {
                v65 = v85[1];
                v66 = 0;
                if ( v65 )
                {
                  for ( i = 0; i != v65; ++i )
                  {
                    v67 = &v64[v66];
                    v68 = *(void **)&v64[v66 + 24];
                    if ( v68 )
                    {
                      *((_QWORD *)v67 + 4) = 0;
                      qfree(v68);
                    }
                    v69 = *(void **)v67;
                    if ( *(_QWORD *)v67 )
                    {
                      *((_QWORD *)v67 + 1) = 0;
                      qfree(v69);
                    }
                    v64 = (char *)*v85;
                    v66 += 56;
                  }
                }
                v85[1] = 0;
                qfree(v64);
              }
              qfree(v85);
              goto LABEL_11;
            }
            if ( !under_debugger )
              interr(1265);
          }
          else if ( !under_debugger )
          {
            interr(1264);
          }
        }
        else if ( !under_debugger )
        {
          interr(1266);
        }
        BUG();
      }
    }
  }
  v11 = 0;
LABEL_11:
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    qfree(v98);
  }
  return v11;
}

