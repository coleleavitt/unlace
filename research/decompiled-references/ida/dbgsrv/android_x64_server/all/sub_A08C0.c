/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A08C0
// Address: 0x00000000000A08C0

//----- (00000000000A08C0) ----------------------------------------------------
__int64 __fastcall sub_A08C0(
        __int64 a1,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 *a7,
        __int64 a8,
        _QWORD *a9,
        unsigned int a10)
{
  __int64 v13; // rbx
  void **v14; // rbp
  bool v15; // cc
  _DWORD *v16; // rax
  char *v17; // r15
  __int64 v18; // rax
  __int64 *v19; // rsi
  char *v20; // rbp
  __int64 v21; // r13
  int v22; // ebx
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // rsi
  _BYTE *v28; // rbp
  void *v29; // rcx
  char *v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rsi
  int v35; // eax
  __int64 *v36; // rax
  __int64 v37; // rbp
  __int64 v38; // r13
  signed int v39; // r15d
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  _BYTE *v42; // rdx
  void *v43; // rbp
  void *v44; // rdi
  const void *v45; // rsi
  size_t v46; // rdx
  __int128 *v47; // rbp
  void **v48; // rbx
  int v49; // eax
  __int128 *v50; // rax
  char *v51; // r13
  __int64 *v52; // rsi
  unsigned __int64 *v53; // rbx
  unsigned __int64 v54; // rdx
  void *v55; // rbp
  void **v56; // rbp
  __int128 *v57; // rbx
  int v58; // eax
  int v59; // ecx
  __int128 *v60; // rcx
  char *v61; // r15
  __int64 *v62; // rsi
  __int128 *v63; // rbx
  int v64; // eax
  void **v65; // rbp
  int v66; // ecx
  __int128 *v67; // rcx
  char *v68; // r15
  __int64 *v69; // rsi
  __int128 *v70; // rbx
  __int64 v71; // rbp
  __int128 *v72; // rcx
  __int128 *v73; // rax
  __int64 v74; // rbx
  bool v75; // zf
  _QWORD *v76; // rbp
  int v77; // r15d
  int v78; // r13d
  int v79; // eax
  int v80; // eax
  __int64 v81; // rax
  unsigned __int64 v82; // rbx
  __int64 v83; // rbp
  __int64 v84; // r15
  __int64 v85; // rax
  const void *v86; // rsi
  const void **v87; // rax
  unsigned __int64 v88; // rbp
  const void *v89; // r13
  char *v90; // rdi
  const char *v91; // r15
  size_t v92; // rax
  size_t v93; // rbx
  size_t v94; // rbp
  char *v95; // rdi
  __int64 v97; // [rsp+8h] [rbp-140h]
  __int64 v99; // [rsp+10h] [rbp-138h]
  char *v100; // [rsp+18h] [rbp-130h]
  __int64 v102; // [rsp+20h] [rbp-128h]
  __int64 v103; // [rsp+28h] [rbp-120h]
  _QWORD *v104; // [rsp+30h] [rbp-118h]
  _QWORD *v106; // [rsp+40h] [rbp-108h]
  __int64 v107; // [rsp+48h] [rbp-100h]
  __int128 v108; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v109; // [rsp+60h] [rbp-E8h]
  void *v110[2]; // [rsp+70h] [rbp-D8h] BYREF
  unsigned __int64 v111; // [rsp+80h] [rbp-C8h]
  __int128 *v112; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v113; // [rsp+98h] [rbp-B0h] BYREF
  _QWORD v114[2]; // [rsp+A8h] [rbp-A0h] BYREF
  char v115; // [rsp+B8h] [rbp-90h]
  __int128 v116; // [rsp+BCh] [rbp-8Ch]
  __int128 v117; // [rsp+CCh] [rbp-7Ch]
  __int128 v118; // [rsp+DCh] [rbp-6Ch]
  int v119; // [rsp+ECh] [rbp-5Ch]
  int v120; // [rsp+F0h] [rbp-58h] BYREF
  void *ptr[10]; // [rsp+F8h] [rbp-50h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v120 = -2;
  *(_OWORD *)&ptr[1] = 0;
  ptr[0] = (void *)-1LL;
  v13 = *(_QWORD *)(a1 + 312);
  if ( v13 )
  {
    v14 = (void **)(a1 + 312);
    v15 = *(_DWORD *)(v13 + 32) < (int)a3;
    if ( *(_DWORD *)(v13 + 32) > (signed int)a3 )
      goto LABEL_6;
    while ( v15 )
    {
      v14 = (void **)(v13 + 8);
      v16 = *(_DWORD **)(v13 + 8);
      if ( !v16 )
        break;
      while ( 1 )
      {
        v13 = (__int64)v16;
        v15 = v16[8] < (int)a3;
        if ( v16[8] <= (signed int)a3 )
          break;
LABEL_6:
        v16 = *(_DWORD **)v13;
        v14 = (void **)v13;
        if ( !*(_QWORD *)v13 )
          goto LABEL_9;
      }
    }
  }
  else
  {
    v13 = a1 + 312;
LABEL_9:
    v14 = (void **)v13;
  }
  v17 = (char *)*v14;
  if ( !*v14 )
  {
    v17 = (char *)operator new(0x40u);
    *((_DWORD *)v17 + 8) = a3;
    *(_OWORD *)(v17 + 40) = 0;
    *((_QWORD *)v17 + 7) = 0;
    *(_OWORD *)v17 = 0;
    *((_QWORD *)v17 + 2) = v13;
    *v14 = v17;
    v18 = **(_QWORD **)(a1 + 304);
    if ( v18 )
    {
      *(_QWORD *)(a1 + 304) = v18;
      v19 = (__int64 *)*v14;
    }
    else
    {
      v19 = (__int64 *)v17;
    }
    sub_4A450(*(__int64 **)(a1 + 312), v19);
    ++*(_QWORD *)(a1 + 320);
  }
  v20 = sub_A1A40((_QWORD *)v17 + 5);
  v104 = a6;
  v21 = a8;
  v113 = 0;
  v112 = &v113;
  v22 = 11;
  if ( (*(_DWORD *)(a1 + 188) & 0xFFFFFFF) == 7 )
    goto LABEL_183;
  v23 = *(_QWORD *)(a1 + 552);
  if ( !v23 )
    LODWORD(v23) = *(_DWORD *)(a1 + 648);
  sub_9A950((__int64)v20, (int)v23);
  v22 = 1;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 224LL))(
         a1,
         a3,
         0xFFFFFFFFLL,
         *(_QWORD *)v20,
         0) != 1 )
  {
LABEL_183:
    v91 = off_14EC60[v22];
    v92 = strlen(v91);
    if ( v92 )
    {
      v93 = v92;
      v94 = v92 + 1;
      if ( *(_QWORD *)(v21 + 16) >= v92 + 1 )
      {
        v95 = *(char **)v21;
      }
      else
      {
        v95 = (char *)qvector_reserve(v21, *(char **)v21, v92 + 1, 1u);
        *(_QWORD *)v21 = v95;
      }
      *(_QWORD *)(v21 + 8) = v94;
      memmove(v95, v91, v93);
      *(_BYTE *)(*(_QWORD *)v21 + v93) = 0;
    }
    else
    {
      *(_QWORD *)(v21 + 8) = 0;
    }
    goto LABEL_189;
  }
  v100 = v20;
  v24 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 456LL))(a1, v20);
  if ( v24 == -1 )
  {
    v22 = 2;
    goto LABEL_183;
  }
  *(_OWORD *)v110 = 0;
  v111 = 0;
  v25 = *(int *)(a1 + 244);
  v26 = (v104[1] + (int)v25 - 1) & -(int)v25;
  v27 = (v24 - v25 - v26) & 0xFFFFFFFFFFFFFFF0LL;
  *((_QWORD *)v100 + 4) = v27 + v26;
  v97 = v27;
  v22 = 4;
  if ( !(unsigned __int8)relocate_relobj(v104, v27, 0) )
    goto LABEL_178;
  v106 = v100 + 32;
  sub_56350((__int64)v110, v100 + 32, *(int *)(a1 + 244));
  sub_56350((__int64)v110, (const void *)*v104, v104[1]);
  v28 = (_BYTE *)(*(int *)(a1 + 244) + v26);
  v29 = v110[1];
  if ( v110[1] >= v28 )
  {
    if ( v110[1] != v28 )
    {
      LOBYTE(v114[0]) = 0;
      sub_5E330((__int64)v110, (unsigned __int64)v28, (char *)v114);
    }
  }
  else
  {
    v30 = (char *)v110[0];
    if ( v111 < (unsigned __int64)v28 )
    {
      v30 = (char *)qvector_reserve((__int64)v110, (char *)v110[0], (unsigned __int64)v28, 1u);
      v110[0] = v30;
      v29 = v110[1];
    }
    memset(&v30[(_QWORD)v29], 0, v28 - (_BYTE *)v29);
    v110[1] = v28;
  }
  v31 = v27 - *(int *)(a1 + 244);
  *((_QWORD *)v100 + 3) = v31;
  v22 = 2;
  if ( v31 >= v24 )
    goto LABEL_178;
  v32 = (*(__int64 (__fastcall **)(__int64, char *, __int128 **, void **))(*(_QWORD *)a1 + 448LL))(
          a1,
          v100,
          &v112,
          v110);
  v33 = v32;
  v34 = v32 + *((_QWORD *)v100 + 3);
  *((_QWORD *)v100 + 3) = v34;
  v35 = LODWORD(v110[1]) - v32;
  if ( v35 > 0 )
  {
    v22 = 5;
    if ( (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
           a1,
           v34,
           (char *)v110[0] + v33,
           v35,
           0) != v35 )
      goto LABEL_178;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 312LL))(
    a1,
    0,
    4,
    *v106,
    0xFFFFFFFFLL);
  v36 = a5;
  if ( a5[1] )
  {
    v37 = 0;
    do
    {
      v38 = 32 * v37;
      v103 = *v36;
      v39 = *(_DWORD *)(*v36 + 32 * v37);
      v22 = 3;
      if ( v39 == *(_DWORD *)(a1 + 652) || v39 == *(_DWORD *)(a1 + 656) )
        goto LABEL_177;
      v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 608LL))(a1, (unsigned int)v39);
      v41 = *(unsigned __int8 *)(v40 + 13);
      v107 = v37;
      if ( v41 <= 0x12 && (v42 = &algn_48033[5], _bittest64((const __int64 *)&v42, v41)) )
      {
        if ( v120 >= -1 )
        {
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            ptr[2] = nullptr;
          }
          v120 = -2;
        }
        memset(ptr, 0, 24);
        v120 = -1;
        v43 = *(void **)(v103 + v38 + 16);
        if ( v43 )
        {
          ptr[0] = qvector_reserve((__int64)ptr, nullptr, *(_QWORD *)(v103 + v38 + 16), 1u);
          memset((char *)ptr[1] + (unsigned __int64)ptr[0], 0, (size_t)v43 - (unsigned __int64)ptr[1]);
          ptr[1] = v43;
        }
        v44 = ptr[0];
        v45 = *(const void **)(v103 + v38 + 8);
        v46 = *(_QWORD *)(v103 + v38 + 16);
      }
      else
      {
        v53 = (unsigned __int64 *)(v38 + v103 + 16);
        v54 = *v53;
        if ( *v53 <= 8 && (*(_BYTE *)(v40 + 9) & 1) == 0 )
        {
          if ( v120 >= -1 )
          {
            if ( ptr[0] )
            {
              ptr[1] = nullptr;
              qfree(ptr[0]);
              ptr[0] = nullptr;
              ptr[2] = nullptr;
            }
            v120 = -2;
            v54 = *v53;
          }
          __memcpy_chk(ptr, *(_QWORD *)(v103 + v38 + 8), v54, 24);
          if ( *(_DWORD *)(v103 + v38 + 4) )
            ptr[0] = (char *)ptr[0] + v97;
          goto LABEL_45;
        }
        if ( v120 >= -1 )
        {
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            ptr[2] = nullptr;
          }
          v120 = -2;
        }
        memset(ptr, 0, 24);
        v120 = 0;
        v55 = (void *)*v53;
        if ( *v53 )
        {
          ptr[0] = qvector_reserve((__int64)ptr, nullptr, *v53, 1u);
          memset((char *)ptr[1] + (unsigned __int64)ptr[0], 0, (size_t)v55 - (unsigned __int64)ptr[1]);
          ptr[1] = v55;
        }
        v44 = ptr[0];
        v45 = *(const void **)(v103 + v38 + 8);
        v46 = *v53;
      }
      memcpy(v44, v45, v46);
LABEL_45:
      v47 = (__int128 *)v113;
      if ( (_QWORD)v113 )
      {
        v48 = (void **)&v113;
        while ( 1 )
        {
          v49 = *((_DWORD *)v47 + 8);
          if ( v39 >= v49 )
          {
            if ( v49 >= v39 )
              goto LABEL_55;
            v48 = (void **)v47 + 1;
            v50 = *((__int128 **)v47 + 1);
            if ( !v50 )
              goto LABEL_55;
          }
          else
          {
            v50 = *(__int128 **)v47;
            v48 = (void **)v47;
            if ( !*(_QWORD *)v47 )
            {
              v48 = (void **)v47;
              goto LABEL_55;
            }
          }
          v47 = v50;
        }
      }
      v47 = &v113;
      v48 = (void **)&v113;
LABEL_55:
      v51 = (char *)*v48;
      if ( !*v48 )
      {
        v51 = (char *)operator new(0x48u);
        *((_DWORD *)v51 + 8) = v39;
        *((_DWORD *)v51 + 10) = -2;
        *(_OWORD *)(v51 + 56) = 0;
        *((_QWORD *)v51 + 6) = -1;
        *(_OWORD *)v51 = 0;
        *((_QWORD *)v51 + 2) = v47;
        *v48 = v51;
        if ( *(_QWORD *)v112 )
        {
          v112 = *(__int128 **)v112;
          v52 = (__int64 *)*v48;
        }
        else
        {
          v52 = (__int64 *)v51;
        }
        sub_4A450((__int64 *)v113, v52);
        ++*((_QWORD *)&v113 + 1);
      }
      sub_9E470((__int64)(v51 + 40), (__int64)&v120);
      v37 = v107 + 1;
      v36 = a5;
    }
    while ( v107 + 1 < (unsigned __int64)a5[1] );
  }
  v21 = a8;
  v56 = (void **)&v113;
  if ( v120 >= -1 )
  {
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
    v120 = -2;
  }
  ptr[0] = *((void **)v100 + 3);
  v57 = (__int128 *)v113;
  if ( (_QWORD)v113 )
  {
    v58 = *(_DWORD *)(a1 + 652);
    while ( 1 )
    {
      v59 = *((_DWORD *)v57 + 8);
      if ( v58 >= v59 )
      {
        if ( v59 >= v58 )
          goto LABEL_91;
        v56 = (void **)v57 + 1;
        v60 = *((__int128 **)v57 + 1);
        if ( !v60 )
          goto LABEL_91;
      }
      else
      {
        v60 = *(__int128 **)v57;
        v56 = (void **)v57;
        if ( !*(_QWORD *)v57 )
        {
          v56 = (void **)v57;
          goto LABEL_91;
        }
      }
      v57 = v60;
    }
  }
  v57 = &v113;
LABEL_91:
  v61 = (char *)*v56;
  if ( !*v56 )
  {
    v61 = (char *)operator new(0x48u);
    *((_DWORD *)v61 + 8) = *(_DWORD *)(a1 + 652);
    *((_DWORD *)v61 + 10) = -2;
    *(_OWORD *)(v61 + 56) = 0;
    *((_QWORD *)v61 + 6) = -1;
    *(_OWORD *)v61 = 0;
    *((_QWORD *)v61 + 2) = v57;
    *v56 = v61;
    if ( *(_QWORD *)v112 )
    {
      v112 = *(__int128 **)v112;
      v62 = (__int64 *)*v56;
    }
    else
    {
      v62 = (__int64 *)v61;
    }
    sub_4A450((__int64 *)v113, v62);
    ++*((_QWORD *)&v113 + 1);
  }
  sub_9E470((__int64)(v61 + 40), (__int64)&v120);
  ptr[0] = a2;
  v63 = (__int128 *)v113;
  if ( (_QWORD)v113 )
  {
    v64 = *(_DWORD *)(a1 + 656);
    v65 = (void **)&v113;
    while ( 1 )
    {
      v66 = *((_DWORD *)v63 + 8);
      if ( v64 >= v66 )
      {
        if ( v66 >= v64 )
          goto LABEL_106;
        v65 = (void **)v63 + 1;
        v67 = *((__int128 **)v63 + 1);
        if ( !v67 )
          goto LABEL_106;
      }
      else
      {
        v67 = *(__int128 **)v63;
        v65 = (void **)v63;
        if ( !*(_QWORD *)v63 )
        {
          v65 = (void **)v63;
          goto LABEL_106;
        }
      }
      v63 = v67;
    }
  }
  v63 = &v113;
  v65 = (void **)&v113;
LABEL_106:
  v68 = (char *)*v65;
  if ( !*v65 )
  {
    v68 = (char *)operator new(0x48u);
    *((_DWORD *)v68 + 8) = *(_DWORD *)(a1 + 656);
    *((_DWORD *)v68 + 10) = -2;
    *(_OWORD *)(v68 + 56) = 0;
    *((_QWORD *)v68 + 6) = -1;
    *(_OWORD *)v68 = 0;
    *((_QWORD *)v68 + 2) = v63;
    *v65 = v68;
    if ( *(_QWORD *)v112 )
    {
      v112 = *(__int128 **)v112;
      v69 = (__int64 *)*v65;
    }
    else
    {
      v69 = (__int64 *)v68;
    }
    sub_4A450((__int64 *)v113, v69);
    ++*((_QWORD *)&v113 + 1);
  }
  sub_9E470((__int64)(v68 + 40), (__int64)&v120);
  v70 = v112;
  v71 = v97;
  if ( v112 != &v113 )
  {
    do
    {
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 232LL))(
             a1,
             a3,
             *((unsigned int *)v70 + 8),
             (__int64)v70 + 40,
             0) != 1 )
      {
        v22 = 6;
        goto LABEL_179;
      }
      v100[40] = 1;
      v72 = *((__int128 **)v70 + 1);
      if ( v72 )
      {
        do
        {
          v73 = v72;
          v72 = *(__int128 **)v72;
        }
        while ( v72 );
      }
      else
      {
        v73 = *((__int128 **)v70 + 2);
        if ( *(__int128 **)v73 != v70 )
        {
          v74 = (__int64)(v70 + 1);
          do
          {
            v73 = *(__int128 **)(*(_QWORD *)v74 + 16LL);
            v75 = *(_QWORD *)v73 == *(_QWORD *)v74;
            v74 = *(_QWORD *)v74 + 16LL;
          }
          while ( !v75 );
        }
      }
      v70 = v73;
    }
    while ( v73 != &v113 );
  }
  v22 = 0;
  if ( (a10 & 1) != 0 )
    goto LABEL_179;
  *(_BYTE *)(a1 + 184) = 1;
  v22 = 9;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a1 + 168) != 1 )
    goto LABEL_178;
  v102 = a1 + 168;
  v114[0] = 0xFFFFFFFFLL;
  v114[1] = -1;
  v76 = v114;
  if ( a9 )
    v76 = a9;
  v115 = 0;
  v22 = 0;
  v118 = 0;
  v117 = 0;
  v116 = 0;
  v119 = 0;
  if ( (a10 & 4) != 0 )
  {
    v77 = HIWORD(a10);
    v78 = 1;
    if ( HIWORD(a10) )
    {
      v99 = 1000000LL * (unsigned int)v77 + get_nsec_stamp();
      goto LABEL_131;
    }
    LODWORD(v99) = 0;
    v77 = 0;
    goto LABEL_130;
  }
  v77 = 40;
  LODWORD(v99) = 0;
  v78 = 0;
  while ( 1 )
  {
    v79 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, v76, (unsigned int)v77);
    if ( !v79 )
      goto LABEL_130;
    if ( v79 == -1 )
    {
      v22 = 8;
      goto LABEL_176;
    }
    v80 = *((_DWORD *)v76 + 5) & 0xFFFFFFF;
    if ( v80 == 4 )
    {
      if ( *((_DWORD *)v76 + 1) == a3 )
      {
LABEL_148:
        v97 = -1;
        sub_9B070(a1, (__int64)v76, 8u);
        goto LABEL_176;
      }
    }
    else if ( v80 == 2 )
    {
      goto LABEL_148;
    }
    if ( v22 == 12 )
    {
      sub_9B070(a1, (__int64)v76, 0xAu);
      set_debug_event_code((__int64)v76, 0);
      v22 = 12;
      set_debug_event_code(v102, 0);
      goto LABEL_176;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)a1 + 464LL))(
           a1,
           a3,
           v76,
           *v106) )
    {
      break;
    }
    if ( (*((_DWORD *)v76 + 5) & 0xFFFFFFF) == 7 )
    {
      if ( (a10 & 2) == 0 )
      {
        v87 = (const void **)(v76 + 5);
        if ( v76 + 5 != (_QWORD *)a8 )
        {
          v88 = v76[6];
          if ( v88 < 2 )
          {
            *(_QWORD *)(a8 + 8) = 0;
          }
          else
          {
            v89 = *v87;
            if ( *(_QWORD *)(a8 + 16) >= v88 )
            {
              v90 = *(char **)a8;
            }
            else
            {
              v90 = (char *)qvector_reserve(a8, *(char **)a8, v88, 1u);
              *(_QWORD *)a8 = v90;
            }
            *(_QWORD *)(a8 + 8) = v88;
            memmove(v90, v89, v88 - 1);
            *(_BYTE *)(*(_QWORD *)a8 + v88 - 1) = 0;
          }
        }
      }
      set_debug_event_code(v102, 0);
      *(_BYTE *)(a1 + 184) = 1;
      v22 = 10;
      goto LABEL_176;
    }
    if ( (unsigned int)sub_9B070(a1, (__int64)v76, 0xAu) )
    {
      v22 = 7;
      goto LABEL_176;
    }
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 168LL))(a1, v76);
    set_debug_event_code((__int64)v76, 0);
LABEL_130:
    if ( v78 )
    {
LABEL_131:
      if ( v78 == 2 )
      {
        if ( v77 <= 0 || (v77 = (int)(v99 - get_nsec_stamp()) / 1000000, v78 = 2, v77 <= 0) )
        {
          v78 = 2;
          v22 = 12;
          if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, 0) <= 0 )
            goto LABEL_176;
        }
      }
      else
      {
        v78 = 2;
      }
    }
  }
  set_debug_event_code(v102, 0);
  if ( a4 <= 0
    || (v22 = 5, v104[1] >= (unsigned __int64)a4)
    && (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
         a1,
         v97,
         *v104,
         a4,
         0) == a4 )
  {
    v22 = 0;
    if ( a7 )
    {
      if ( a7[1] )
      {
        v108 = 0;
        v109 = 0;
        v81 = *(_QWORD *)(a1 + 552);
        if ( !v81 )
          LODWORD(v81) = *(_DWORD *)(a1 + 648);
        sub_9A950((__int64)&v108, (int)v81);
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 224LL))(
               a1,
               a3,
               0xFFFFFFFFLL,
               v108,
               0) <= 0 )
        {
          v22 = 1;
        }
        else
        {
          if ( a7[1] )
          {
            v82 = 0;
            v83 = 16;
            do
            {
              v84 = *a7;
              v85 = 32LL * *(int *)(*a7 + v83 - 16);
              if ( *(int *)(v108 + v85) < -1 )
                v86 = (const void *)(v108 + v85 + 8);
              else
                v86 = *(const void **)(v108 + v85 + 8);
              memcpy(*(void **)(*a7 + v83 - 8), v86, *(_QWORD *)(v84 + v83));
              *(_DWORD *)(v84 + v83 - 12) = 0;
              ++v82;
              v83 += 32;
            }
            while ( v82 < a7[1] );
          }
          v22 = 0;
        }
        sub_9AA40((__int64)&v108);
      }
    }
  }
LABEL_176:
  free_debug_event((__int64)v114);
LABEL_177:
  v21 = a8;
LABEL_178:
  v71 = v97;
LABEL_179:
  if ( v110[0] )
  {
    v110[1] = nullptr;
    qfree(v110[0]);
    v110[0] = nullptr;
    v111 = 0;
  }
  if ( v22 )
  {
    if ( v22 != 10 )
      goto LABEL_183;
LABEL_189:
    v71 = -1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 432LL))(a1, a3);
  }
  sub_A39C0((__int64)&v112, (int *)v113);
  if ( v120 >= -1 )
  {
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
    v120 = -2;
  }
  return v71;
}
// A158D: conditional instruction was optimized away because ebx.4==0
// 33BE0: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 48033: using guessed type _BYTE algn_48033[13];
// 14EC60: using guessed type char *off_14EC60[13];
