/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_slice
// Address: 0x00000000000744D0

//----- (00000000000744D0) ----------------------------------------------------
__int64 __fastcall set_idcv_slice(char *a1, __int64 a2, unsigned __int64 a3, void ***a4, char a5, double a6, __m128 a7)
{
  unsigned __int64 v10; // r15
  int v12; // eax
  int qerrno; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char *v17; // rbx
  void **v18; // rax
  unsigned __int64 v19; // r14
  size_t v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r12
  bool v25; // cc
  size_t v26; // rbp
  unsigned __int64 v27; // rbp
  char *v28; // rax
  void **v29; // rbp
  void *v30; // r13
  void **v31; // rax
  const char *v32; // rbp
  void **v33; // r12
  const char *v34; // rdi
  int v35; // eax
  void **v36; // rbp
  void *v37; // rdi
  void **v38; // rbp
  int v40; // r14d
  int v41; // r14d
  unsigned __int64 v42; // rbp
  void ***v43; // r15
  char *v44; // r13
  int *v45; // r12
  _BYTE *v46; // rax
  void **v47; // rax
  unsigned __int64 v48; // rcx
  char v49; // bl
  void *v50; // r15
  size_t v51; // rdx
  size_t v52; // r14
  int *v53; // r13
  __int64 v54; // rax
  unsigned __int64 v55; // rbp
  unsigned __int64 v56; // r15
  _BYTE *v57; // rax
  char *v58; // rdi
  char v59; // al
  char *v60; // rcx
  char *v61; // rax
  void **v62; // rcx
  void **v63; // rax
  __int64 v64; // r12
  bool v65; // zf
  int v66; // eax
  unsigned __int64 v67; // r15
  _QWORD *v68; // r12
  __int64 v69; // r14
  const char *v70; // rbx
  const char *v71; // rdi
  int v72; // eax
  void *v73; // rdi
  char *v74; // rdi
  char v75; // al
  char *v76; // rcx
  __int64 *v77; // rax
  __int64 **v78; // rcx
  char *v79; // rax
  __int64 v80; // rbp
  _QWORD *v81; // rbx
  __int128 *v82; // rcx
  __int128 *v83; // rax
  __int64 v84; // rbx
  void **v85; // r12
  char *v86; // rax
  void **v87; // rcx
  void **v88; // rax
  __int64 v89; // r12
  void ***v90; // [rsp+0h] [rbp-E8h]
  void **v91; // [rsp+0h] [rbp-E8h]
  __int64 v92; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v93; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v94; // [rsp+8h] [rbp-E0h]
  void *v95; // [rsp+10h] [rbp-D8h]
  int v96; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v97; // [rsp+18h] [rbp-D0h]
  void *v98; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v99; // [rsp+28h] [rbp-C0h] BYREF
  void *v100; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v101; // [rsp+38h] [rbp-B0h]
  __int64 v102; // [rsp+40h] [rbp-A8h]
  void *v103; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v104; // [rsp+50h] [rbp-98h] BYREF
  void **v105; // [rsp+68h] [rbp-80h] BYREF
  void **v106; // [rsp+70h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v108; // [rsp+88h] [rbp-60h]
  char v109[32]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v110; // [rsp+B0h] [rbp-38h]

  v10 = a2;
  v110 = __readfsqword(0x28u);
  while ( 1 )
  {
    v12 = *a1;
    if ( v12 != 10 )
      break;
    a1 = deref_idcv(a1, 0, a6, a7);
    if ( !a1 )
    {
      qerrno = get_qerrno();
LABEL_51:
      LODWORD(v38) = qerrno;
      return (unsigned int)v38;
    }
  }
  if ( v12 != 5 )
  {
    if ( v12 != 7 )
    {
      qerrno = set_qerrno(0x620u);
      goto LABEL_51;
    }
    v14 = *((_QWORD *)a1 + 2);
    v15 = v14 - 1;
    if ( !v14 )
      v15 = 0;
    if ( a2 < 0 )
    {
      v10 = v15 + a2;
      if ( (__int64)(v15 + a2) < 0 )
        v10 = 0;
    }
    if ( v10 > v15 )
      v10 = v15;
    v16 = v10 + 1;
    if ( (a5 & 1) != 0 )
      a3 = v10 + 1;
    if ( (a3 & 0x8000000000000000LL) != 0LL )
    {
      a3 += v15;
      if ( (a3 & 0x8000000000000000LL) != 0LL )
        a3 = 0;
    }
    if ( a3 > v15 )
      a3 = v15;
    if ( v10 > a3 )
      a3 = v10;
    LOBYTE(v106) = 2;
    *(_OWORD *)ptr = 0;
    v108 = 0;
    if ( *(_BYTE *)a4 == 7
      || (LODWORD(v38) = copy_idcv((char *)&v106, (char *)a4, 0.0, a7), v40 = 1, !(_DWORD)v38)
      && (a4 = &v106, LODWORD(v38) = idcv_string((__int64)&v106, 0.0, a7), v16 = v10 + 1, !(_DWORD)v38) )
    {
      v17 = a1 + 8;
      v90 = a4;
      v18 = a4[2];
      v19 = (unsigned __int64)v18 - 1;
      if ( !v18 )
        v19 = 0;
      v20 = a3 - v10;
      if ( v19 < a3 - v10 )
      {
        v21 = *((_QWORD *)v17 + 1);
        v22 = v21 - 1;
        if ( !v21 )
          v22 = 0;
        if ( v20 != v19 && v22 > v10 )
        {
          v93 = a3;
          v23 = a3 - v19;
          v24 = v10;
          v25 = v22 <= v23;
          v26 = v22 - v23;
          if ( !v25 )
          {
            memmove((void *)(v10 + *(_QWORD *)v17), (const void *)(*(_QWORD *)v17 + v23), v26);
            v16 = v10 + v26 + 1;
            v24 = v10 + v26;
          }
          if ( *((_QWORD *)v17 + 2) >= v16 )
          {
            v28 = *(char **)v17;
          }
          else
          {
            v27 = v16;
            v28 = (char *)qvector_reserve((__int64)v17, *(char **)v17, v16, 1u);
            *(_QWORD *)v17 = v28;
            v16 = v27;
          }
          *((_QWORD *)v17 + 1) = v16;
          v28[v24] = 0;
          a3 = v93;
        }
      }
      v50 = (void *)(*(_QWORD *)v17 + v10);
      v51 = v20;
      if ( v19 < v20 )
        v51 = v19;
      memcpy(v50, v90[1], v51);
      v25 = v19 <= v20;
      v52 = v19 - v20;
      if ( !v25 )
      {
        if ( v20 | (unsigned __int64)v90[2] )
          v53 = (int *)((char *)v90[1] + v20);
        else
          v53 = &dword_101BA4;
        v54 = *((_QWORD *)v17 + 1);
        v55 = v54 - 1;
        if ( !v54 )
          v55 = 0;
        v56 = v52 + v55 + 1;
        if ( *((_QWORD *)v17 + 2) >= v56 )
        {
          v57 = *(_BYTE **)v17;
        }
        else
        {
          v57 = qvector_reserve((__int64)v17, *(char **)v17, v52 + v55 + 1, 1u);
          *(_QWORD *)v17 = v57;
        }
        *((_QWORD *)v17 + 1) = v56;
        v57[v52 + v55] = 0;
        if ( v55 > a3 )
        {
          memmove((void *)(a3 + *(_QWORD *)v17 + v52), (const void *)(a3 + *(_QWORD *)v17), v55 - a3);
          v55 = a3;
        }
        memmove((void *)(*(_QWORD *)v17 + v55), v53, v52);
      }
      LODWORD(v38) = 0;
      v40 = 0;
    }
    if ( (char)v106 == 5 )
    {
      sub_72DD0((char **)ptr[0], (char *)&v106, 0.0, a7);
    }
    else if ( (char)v106 == 7 && ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v108 = 0;
    }
    if ( !v40 )
      goto LABEL_172;
    return (unsigned int)v38;
  }
  if ( (a5 & 1) != 0 )
  {
    qsnprintf(v109, 32, "%llu", a2);
    qerrno = set_idcv_attr((__int64)a1, v109, (char *)a4, 0, a6, a7);
    goto LABEL_51;
  }
  v94 = a3;
  *(_OWORD *)ptr = 0;
  v106 = ptr;
  if ( *(_BYTE *)a4 == 7 )
  {
    v97 = a2;
    if ( (unsigned __int64)a4[2] >= 2 )
    {
      v41 = 1;
      v42 = 0;
      do
      {
        v43 = a4;
        v100 = (void *)v42;
        v103 = &v100;
        v44 = (char *)sub_808A0((__int64 **)&v106, (unsigned __int64 *)&v100, (__int64)&dword_1034A4, (_QWORD **)&v103);
        v45 = (int *)((char *)v43[1] + v42);
        if ( !((unsigned __int64)v43[2] | v42) )
          v45 = &dword_101BA4;
        free_idcv(v44 + 40, 0.0, a7);
        v44[40] = 7;
        *((_OWORD *)v44 + 3) = 0;
        *((_QWORD *)v44 + 8) = 0;
        v46 = qvector_reserve((__int64)(v44 + 48), nullptr, 2u, 1u);
        *((_QWORD *)v44 + 6) = v46;
        *((_QWORD *)v44 + 7) = 2;
        *v46 = *(_BYTE *)v45;
        *(_BYTE *)(*((_QWORD *)v44 + 6) + 1LL) = 0;
        v42 = v41;
        a4 = v43;
        v47 = v43[2];
        v48 = (unsigned __int64)v47 - 1;
        if ( !v47 )
          v48 = 0;
        ++v41;
      }
      while ( v48 > v42 );
    }
    goto LABEL_109;
  }
  if ( *(_BYTE *)a4 != 5 )
  {
    LODWORD(v38) = set_qerrno(0x620u);
    v49 = 0;
    goto LABEL_171;
  }
  v29 = a4[1];
  sub_37F60((__int64)&v103, "0");
  v30 = v29[1];
  v31 = v29 + 1;
  v97 = a2;
  if ( !v30 )
  {
    v37 = v103;
    v33 = v29 + 1;
    v36 = v29 + 1;
    if ( !v103 )
      goto LABEL_91;
    goto LABEL_90;
  }
  v32 = (const char *)v103;
  v95 = v103;
  if ( !(_QWORD)v104 )
    v32 = s1;
  v91 = v31;
  v33 = v31;
  do
  {
    v34 = s1;
    if ( *((_QWORD *)v30 + 5) )
      v34 = *((const char **)v30 + 4);
    v35 = strcmp(v34, v32);
    if ( v35 >= 0 )
      v33 = (void **)v30;
    v30 = *((void **)v30 + (v35 < 0));
  }
  while ( v30 );
  v36 = v91;
  v37 = v95;
  if ( v95 )
  {
LABEL_90:
    *(_QWORD *)&v104 = 0;
    qfree(v37);
    v103 = nullptr;
    *((_QWORD *)&v104 + 1) = 0;
  }
LABEL_91:
  if ( v33 != v36 )
  {
    while ( 1 )
    {
      v58 = (char *)s1;
      if ( v33[5] )
        v58 = (char *)v33[4];
      v59 = *v58;
      if ( *v58 != 48 )
        break;
      if ( v58[1] )
        goto LABEL_109;
LABEL_102:
      qsscanf(v58, "%llu", &v100);
      v103 = &v100;
      v61 = (char *)sub_807B0((__int64 **)&v106, (unsigned __int64 *)&v100, (__int64)&dword_1034A4, (_QWORD **)&v103);
      copy_idcv(v61 + 40, (char *)v33 + 56, 0.0, a7);
      v62 = (void **)v33[1];
      if ( v62 )
      {
        do
        {
          v63 = v62;
          v62 = (void **)*v62;
        }
        while ( v62 );
      }
      else
      {
        v63 = (void **)v33[2];
        if ( *v63 != v33 )
        {
          v64 = (__int64)(v33 + 2);
          do
          {
            v63 = *(void ***)(*(_QWORD *)v64 + 16LL);
            v65 = *v63 == *(void **)v64;
            v64 = *(_QWORD *)v64 + 16LL;
          }
          while ( !v65 );
        }
      }
      v33 = v63;
      if ( v63 == v36 )
        goto LABEL_109;
    }
    if ( v59 )
    {
      v60 = v58 + 1;
      while ( v59 >= 0 && (unsigned int)(unsigned __int8)v59 - 48 <= 9 )
      {
        v59 = *v60++;
        if ( !v59 )
          goto LABEL_102;
      }
    }
  }
LABEL_109:
  v66 = 0;
  v67 = v97;
  if ( (__int64)(v94 - v97) >= 0 )
    v66 = v94 - v97;
  LODWORD(v38) = LODWORD(ptr[1]) - v66;
  v92 = *((_QWORD *)a1 + 1);
  if ( LODWORD(ptr[1]) != v66 )
  {
    v104 = 0;
    v103 = &v104;
    sub_37F60((__int64)&v100, "0");
    v96 = (int)v38;
    v68 = (_QWORD *)(v92 + 8);
    v69 = *(_QWORD *)(v92 + 8);
    if ( v69 )
    {
      v70 = (const char *)v100;
      v98 = v100;
      if ( !v101 )
        v70 = s1;
      v38 = (void **)(v92 + 8);
      do
      {
        v71 = s1;
        if ( *(_QWORD *)(v69 + 40) )
          v71 = *(const char **)(v69 + 32);
        v72 = strcmp(v71, v70);
        if ( v72 >= 0 )
          v38 = (void **)v69;
        v69 = *(_QWORD *)(v69 + 8LL * (v72 < 0));
      }
      while ( v69 );
      v73 = v98;
      if ( !v98 )
        goto LABEL_125;
    }
    else
    {
      v73 = v100;
      v38 = (void **)(v92 + 8);
      if ( !v100 )
      {
LABEL_125:
        if ( v38 != v68 )
        {
          while ( 1 )
          {
            v74 = (char *)s1;
            if ( v38[5] )
              v74 = (char *)v38[4];
            v75 = *v74;
            if ( *v74 != 48 )
              break;
            if ( v74[1] )
              goto LABEL_150;
LABEL_136:
            qsscanf(v74, "%llu", &v99);
            if ( v99 >= v97 )
            {
              if ( v99 >= v94 )
              {
                qsnprintf(v109, 32, "%llu", v96 + v99);
                sub_37F60((__int64)&v100, v109);
                v105 = &v100;
                v79 = (char *)sub_80990((__int64 **)&v103, (__int64)&v100, (__int64)&dword_1034A4, &v105);
                copy_idcv(v79 + 56, (char *)v38 + 56, 0.0, a7);
                if ( v100 )
                {
                  v101 = 0;
                  qfree(v100);
                  v100 = nullptr;
                  v102 = 0;
                }
              }
              v78 = sub_80AE0(v92, (__int64 *)v38, 0.0, a7);
            }
            else
            {
              v77 = (__int64 *)v38[1];
              if ( v77 )
              {
                do
                {
                  v78 = (__int64 **)v77;
                  v77 = (__int64 *)*v77;
                }
                while ( v77 );
              }
              else
              {
                v78 = (__int64 **)v38[2];
                if ( *v78 != (__int64 *)v38 )
                {
                  v80 = (__int64)(v38 + 2);
                  do
                  {
                    v78 = *(__int64 ***)(*(_QWORD *)v80 + 16LL);
                    v65 = *v78 == *(__int64 **)v80;
                    v80 = *(_QWORD *)v80 + 16LL;
                  }
                  while ( !v65 );
                }
              }
            }
            v38 = (void **)v78;
            if ( v78 == v68 )
              goto LABEL_150;
          }
          if ( v75 )
          {
            v76 = v74 + 1;
            while ( v75 >= 0 && (unsigned int)(unsigned __int8)v75 - 48 <= 9 )
            {
              v75 = *v76++;
              if ( !v75 )
                goto LABEL_136;
            }
          }
        }
LABEL_150:
        v81 = v103;
        if ( v103 != &v104 )
        {
          do
          {
            sub_80350((_QWORD **)v92, v68, (__int64)(v81 + 4), (__int64)(v81 + 4), 0.0, a7);
            v82 = (__int128 *)v81[1];
            if ( v82 )
            {
              do
              {
                v83 = v82;
                v82 = *(__int128 **)v82;
              }
              while ( v82 );
            }
            else
            {
              v83 = (__int128 *)v81[2];
              if ( *(_QWORD **)v83 != v81 )
              {
                v84 = (__int64)(v81 + 2);
                do
                {
                  v83 = *(__int128 **)(*(_QWORD *)v84 + 16LL);
                  v65 = *(_QWORD *)v83 == *(_QWORD *)v84;
                  v84 = *(_QWORD *)v84 + 16LL;
                }
                while ( !v65 );
              }
            }
            v81 = v83;
          }
          while ( v83 != &v104 );
        }
        sub_6F300((__int64)&v103, (char *)v104, 0.0, a7);
        goto LABEL_159;
      }
    }
    v101 = 0;
    qfree(v73);
    v100 = nullptr;
    v102 = 0;
    goto LABEL_125;
  }
LABEL_159:
  v85 = v106;
  v49 = 1;
  if ( v106 != ptr )
  {
    v38 = &v103;
    do
    {
      qsnprintf(v109, 32, "%llu", v67);
      sub_37F60((__int64)&v103, v109);
      v100 = &v103;
      v86 = (char *)sub_80990((__int64 **)v92, (__int64)&v103, (__int64)&dword_1034A4, (_QWORD **)&v100);
      copy_idcv(v86 + 56, (char *)v85 + 40, 0.0, a7);
      if ( v103 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v103);
        v103 = nullptr;
        *((_QWORD *)&v104 + 1) = 0;
      }
      v87 = (void **)v85[1];
      if ( v87 )
      {
        do
        {
          v88 = v87;
          v87 = (void **)*v87;
        }
        while ( v87 );
      }
      else
      {
        v88 = (void **)v85[2];
        if ( *v88 != v85 )
        {
          v89 = (__int64)(v85 + 2);
          do
          {
            v88 = *(void ***)(*(_QWORD *)v89 + 16LL);
            v65 = *v88 == *(void **)v89;
            v89 = *(_QWORD *)v89 + 16LL;
          }
          while ( !v65 );
        }
      }
      ++v67;
      v85 = v88;
    }
    while ( v88 != ptr );
    v49 = 1;
  }
LABEL_171:
  sub_80300((__int64)&v106, (char *)ptr[0], 0.0, a7);
  if ( v49 )
LABEL_172:
    LODWORD(v38) = 0;
  return (unsigned int)v38;
}
// 101BA4: using guessed type int dword_101BA4;
// 1034A4: using guessed type int dword_1034A4;
