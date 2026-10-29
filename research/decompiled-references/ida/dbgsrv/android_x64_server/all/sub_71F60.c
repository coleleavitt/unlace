/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71F60
// Address: 0x0000000000071F60

//----- (0000000000071F60) ----------------------------------------------------
unsigned __int64 __fastcall sub_71F60(
        __int64 a1,
        unsigned __int64 a2,
        const char *a3,
        int a4,
        __int64 **a5,
        double a6,
        __m128 a7)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  char *v12; // rax
  size_t v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  _BYTE *v17; // rax
  size_t v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  _BYTE *v22; // rax
  unsigned __int64 v23; // rax
  __int64 i; // rcx
  char v25; // r15
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rsi
  unsigned int v28; // ecx
  char v29; // r12
  char v30; // dl
  __int64 v31; // rax
  __int64 v32; // r13
  _BYTE *v33; // rax
  size_t v34; // r14
  __int64 v35; // rax
  __int64 v36; // rbp
  _BYTE *v37; // rax
  unsigned __int64 v38; // r15
  void *v39; // rbp
  const char *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned __int64 v43; // rbx
  _BYTE *v44; // rax
  size_t v45; // r14
  __int64 v46; // rax
  __int64 v47; // rbp
  unsigned __int64 v48; // rbx
  _BYTE *v49; // rax
  __int64 v50; // rdx
  int v51; // edx
  const char *v52; // rsi
  size_t v53; // r14
  __int64 v54; // rax
  __int64 v55; // rbp
  unsigned __int64 v56; // rbx
  _BYTE *v57; // rax
  const char *v58; // rdx
  __int64 **v59; // r12
  __int64 **v60; // rbp
  __int64 **v61; // rbx
  bool v62; // cf
  __int64 *v63; // rax
  __int64 v64; // r15
  _QWORD *v65; // rcx
  _QWORD *v66; // rax
  char *idcv_attr; // rbx
  char v68; // al
  char *v69; // rcx
  void **v70; // r14
  void **v71; // r15
  void *v72; // rcx
  void **v73; // rcx
  void **v74; // rax
  void **v75; // rbx
  void **v76; // rcx
  void **v77; // rax
  __int64 v78; // rbx
  bool v79; // zf
  __int64 *v80; // rbp
  char *v81; // rdx
  __int64 *v82; // rcx
  __int64 *v83; // rax
  __int64 v84; // rbp
  size_t v85; // r14
  __int64 v86; // rax
  __int64 v87; // rbp
  unsigned __int64 v88; // rbx
  _BYTE *v89; // rax
  __int64 *v90; // rax
  __int64 *v91; // rcx
  char *v92; // rbx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rbx
  unsigned __int64 v95; // rbp
  _BYTE *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rbp
  _BYTE *v99; // rax
  __int64 *v100; // rdi
  __int64 *v101; // rbx
  __int64 *v102; // rax
  __int64 *v103; // rcx
  __int64 *v104; // rax
  __int64 **v105; // rdx
  __int64 *v106; // rcx
  __int64 v107; // rcx
  char *v109; // [rsp+8h] [rbp-4C0h]
  __int64 v111; // [rsp+10h] [rbp-4B8h]
  void *v113[3]; // [rsp+20h] [rbp-4A8h] BYREF
  __int64 *v114; // [rsp+38h] [rbp-490h] BYREF
  __int128 v115; // [rsp+40h] [rbp-488h] BYREF
  void *ptr[4]; // [rsp+50h] [rbp-478h] BYREF
  char v117[8]; // [rsp+70h] [rbp-458h] BYREF
  void *v118[2]; // [rsp+78h] [rbp-450h]
  __int64 v119; // [rsp+88h] [rbp-440h]
  char v120[1024]; // [rsp+90h] [rbp-438h] BYREF
  unsigned __int64 v121; // [rsp+490h] [rbp-38h]

  v121 = __readfsqword(0x28u);
  v109 = (char *)a2;
  if ( a3 )
  {
    if ( a4 > 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = v8 - 1;
      if ( !v8 )
        v9 = 0;
      v10 = a4 + v9 + 1;
      if ( v8 < v10 )
      {
        v11 = a4 + v9;
        if ( *(_QWORD *)(a1 + 16) >= v10 )
        {
          v12 = *(char **)a1;
        }
        else
        {
          v12 = (char *)qvector_reserve(a1, *(char **)a1, a4 + v9 + 1, 1u);
          *(_QWORD *)a1 = v12;
        }
        *(_QWORD *)(a1 + 8) = v10;
        v12[v11] = 0;
      }
      memset((void *)(*(_QWORD *)a1 + v9), 32, a4);
    }
    v13 = strlen(a3);
    v14 = *(_QWORD *)(a1 + 8);
    v15 = v14 - 1;
    if ( !v14 )
      v15 = 0;
    v16 = v15 + v13 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v16 )
    {
      v17 = *(_BYTE **)a1;
    }
    else
    {
      v17 = qvector_reserve(a1, *(char **)a1, v15 + v13 + 1, 1u);
      *(_QWORD *)a1 = v17;
    }
    *(_QWORD *)(a1 + 8) = v16;
    v17[v15 + v13] = 0;
    memmove((void *)(*(_QWORD *)a1 + v15), a3, v13);
    v18 = __strlen_chk(": ", 3);
    v19 = *(_QWORD *)(a1 + 8);
    v20 = v19 - 1;
    if ( !v19 )
      v20 = 0;
    v21 = v18 + v20 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v21 )
    {
      v22 = *(_BYTE **)a1;
    }
    else
    {
      v22 = qvector_reserve(a1, *(char **)a1, v18 + v20 + 1, 1u);
      *(_QWORD *)a1 = v22;
    }
    *(_QWORD *)(a1 + 8) = v21;
    v22[v18 + v20] = 0;
    memmove((void *)(*(_QWORD *)a1 + v20), ": ", v18);
  }
  v117[0] = 2;
  *(_OWORD *)v118 = 0;
  v119 = 0;
  switch ( *(_BYTE *)a2 )
  {
    case 2:
      v111 = *(_QWORD *)(a2 + 8);
      sub_4E030(a1, "%11lld. %8llXh %11lloo ", v111, v111, v111);
      v23 = 0x8000000000000000LL;
      for ( i = 0; i != 64; i += 2 )
      {
        v120[i] = 49 - ((v111 & v23) == 0);
        v120[i + 1] = 49 - ((v111 & (v23 >> 1)) == 0);
        v23 >>= 2;
      }
      v120[64] = 0;
      sub_4E030(a1, "%sb '", v120);
      v25 = 0;
      v26 = 0;
      v27 = v111;
      do
      {
        v28 = (unsigned __int8)(v27 >> v25);
        v29 = 46;
        v30 = 46;
        if ( v28 != 255 )
          v30 = v27 >> v25;
        if ( v28 >= 0x20 )
          v29 = v30;
        v31 = *(_QWORD *)(a1 + 8);
        v32 = v31 - 1;
        if ( !v31 )
          v32 = 0;
        v33 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v32 + 2) )
        {
          v33 = qvector_reserve(a1, *(char **)a1, v32 + 2, 1u);
          *(_QWORD *)a1 = v33;
          v27 = v111;
        }
        *(_QWORD *)(a1 + 8) = v32 + 2;
        v33[v32] = v29;
        *(_BYTE *)(*(_QWORD *)a1 + v32 + 1) = 0;
        ++v26;
        v25 += 8;
      }
      while ( v26 < 8 );
      v34 = __strlen_chk("'", 2);
      v35 = *(_QWORD *)(a1 + 8);
      v36 = v35 - 1;
      if ( !v35 )
        v36 = 0;
      v37 = *(_BYTE **)a1;
      v38 = v34 + v36 + 1;
      if ( *(_QWORD *)(a1 + 16) < v38 )
      {
        v37 = qvector_reserve(a1, *(char **)a1, v34 + v36 + 1, 1u);
        *(_QWORD *)a1 = v37;
      }
      *(_QWORD *)(a1 + 8) = v38;
      v37[v36 + v34] = 0;
      v39 = (void *)(*(_QWORD *)a1 + v36);
      v40 = "'";
      goto LABEL_66;
    case 3:
      copy_idcv(v117, (char *)a2, 0.0, a7);
      idcv_string((__int64)v117, 0.0, a7);
      v109 = v117;
      goto LABEL_51;
    case 5:
      v53 = __strlen_chk("object", 7);
      v54 = *(_QWORD *)(a1 + 8);
      v55 = v54 - 1;
      if ( !v54 )
        v55 = 0;
      v56 = v53 + v55 + 1;
      if ( *(_QWORD *)(a1 + 16) >= v56 )
      {
        v57 = *(_BYTE **)a1;
      }
      else
      {
        v57 = qvector_reserve(a1, *(char **)a1, v53 + v55 + 1, 1u);
        *(_QWORD *)a1 = v57;
      }
      *(_QWORD *)(a1 + 8) = v56;
      v57[v55 + v53] = 0;
      memmove((void *)(*(_QWORD *)a1 + v55), "object", v53);
      *(_OWORD *)&ptr[1] = 0;
      ptr[0] = &ptr[1];
      v115 = 0;
      v114 = (__int64 *)&v115;
      v64 = a2;
      if ( *(_BYTE *)a2 != 5 || (v65 = *(_QWORD **)(a2 + 8), v66 = (_QWORD *)*v65, (_QWORD *)*v65 == v65 + 1) )
      {
        idcv_attr = nullptr;
      }
      else if ( v66[5] )
      {
        idcv_attr = (char *)v66[4];
      }
      else
      {
        idcv_attr = (char *)s1;
      }
LABEL_81:
      if ( idcv_attr )
      {
        v68 = *idcv_attr;
        if ( *idcv_attr )
        {
          if ( v68 == 48 )
          {
            if ( !idcv_attr[1] )
            {
LABEL_90:
              qsscanf(idcv_attr, "%llu", v113);
              v70 = (void **)ptr[1];
              if ( !ptr[1] )
              {
                v71 = &ptr[1];
                v70 = &ptr[1];
                goto LABEL_104;
              }
              v71 = &ptr[1];
              while ( 1 )
              {
                v72 = v70[4];
                if ( v113[0] >= v72 )
                {
                  if ( v72 >= v113[0] || (v71 = v70 + 1, (v73 = (void **)v70[1]) == nullptr) )
                  {
                    if ( !*v71 )
                    {
LABEL_104:
                      v74 = (void **)operator new(0x28u);
                      v74[4] = v113[0];
                      *(_OWORD *)v74 = 0;
                      v74[2] = v70;
                      *v71 = v74;
                      if ( *(_QWORD *)ptr[0] )
                      {
                        ptr[0] = *(void **)ptr[0];
                        v74 = (void **)*v71;
                      }
                      sub_4A450((__int64 *)ptr[1], (__int64 *)v74);
                      ++ptr[2];
                    }
LABEL_107:
                    v64 = a2;
LABEL_108:
                    idcv_attr = (char *)next_idcv_attr(v64, idcv_attr);
                    goto LABEL_81;
                  }
                }
                else
                {
                  v73 = (void **)*v70;
                  v71 = v70;
                  if ( !*v70 )
                  {
                    v71 = v70;
                    if ( !*v70 )
                      goto LABEL_104;
                    goto LABEL_107;
                  }
                }
                v70 = v73;
              }
            }
          }
          else
          {
            v69 = idcv_attr + 1;
            while ( v68 >= 0 && (unsigned int)(unsigned __int8)v68 - 48 <= 9 )
            {
              v68 = *v69++;
              if ( !v68 )
                goto LABEL_90;
            }
          }
        }
        sub_37F60((__int64)v113, idcv_attr);
        sub_80140(&v114, (__int64)v113, (__int128 *)v113);
        if ( v113[0] )
        {
          v113[1] = nullptr;
          qfree(v113[0]);
          v113[0] = nullptr;
          v113[2] = nullptr;
        }
        goto LABEL_108;
      }
      v75 = (void **)ptr[0];
      if ( ptr[0] != &ptr[1] )
      {
        do
        {
          qsnprintf(v120, 1024, "%llu", v75[4]);
          sub_7FF70(a1, v64, v120, a4 + 2, 0.0, a7);
          v76 = (void **)v75[1];
          if ( v76 )
          {
            do
            {
              v77 = v76;
              v76 = (void **)*v76;
            }
            while ( v76 );
          }
          else
          {
            v77 = (void **)v75[2];
            if ( *v77 != v75 )
            {
              v78 = (__int64)(v75 + 2);
              do
              {
                v77 = *(void ***)(*(_QWORD *)v78 + 16LL);
                v79 = *v77 == *(void **)v78;
                v78 = *(_QWORD *)v78 + 16LL;
              }
              while ( !v79 );
            }
          }
          v75 = v77;
        }
        while ( v77 != &ptr[1] );
      }
      v80 = v114;
      if ( v114 != (__int64 *)&v115 )
      {
        do
        {
          v81 = (char *)s1;
          if ( v80[5] )
            v81 = (char *)v80[4];
          sub_7FF70(a1, v64, v81, a4 + 2, 0.0, a7);
          v82 = (__int64 *)v80[1];
          if ( v82 )
          {
            do
            {
              v83 = v82;
              v82 = (__int64 *)*v82;
            }
            while ( v82 );
          }
          else
          {
            v83 = (__int64 *)v80[2];
            if ( (__int64 *)*v83 != v80 )
            {
              v84 = (__int64)(v80 + 2);
              do
              {
                v83 = *(__int64 **)(*(_QWORD *)v84 + 16LL);
                v79 = *v83 == *(_QWORD *)v84;
                v84 = *(_QWORD *)v84 + 16LL;
              }
              while ( !v79 );
            }
          }
          v80 = v83;
        }
        while ( v83 != (__int64 *)&v115 );
      }
      sub_80260((__int64)&v114, (_QWORD *)v115);
      sub_488B0((__int64)ptr, (_QWORD *)ptr[1]);
      goto LABEL_172;
    case 6:
      sub_4E030(a1, "function (idx=%d)", *(_DWORD *)(a2 + 8));
      goto LABEL_172;
    case 7:
LABEL_51:
      memset(ptr, 0, 24);
      v50 = *((_QWORD *)v109 + 2);
      if ( v50 )
      {
        v51 = v50 - 1;
        v52 = *((const char **)v109 + 1);
      }
      else
      {
        v51 = 0;
        v52 = s1;
      }
      qstr2user((__int64)ptr, v52, v51);
      if ( ptr[1] )
        v58 = (const char *)ptr[0];
      else
        v58 = s1;
      sub_4E030(a1, "\"%s\"", v58);
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
      goto LABEL_172;
    case 8:
      sub_4E030(a1, "pvoid (%p)", *(const void **)(a2 + 8));
      goto LABEL_172;
    case 9:
      sub_4E030(a1, "0x%llXi64", *(_QWORD *)(a2 + 8));
      goto LABEL_172;
    case 0xA:
      v45 = __strlen_chk("ref (", 6);
      v46 = *(_QWORD *)(a1 + 8);
      v47 = v46 - 1;
      if ( !v46 )
        v47 = 0;
      v48 = v45 + v47 + 1;
      if ( *(_QWORD *)(a1 + 16) >= v48 )
      {
        v49 = *(_BYTE **)a1;
      }
      else
      {
        v49 = qvector_reserve(a1, *(char **)a1, v45 + v47 + 1, 1u);
        *(_QWORD *)a1 = v49;
      }
      *(_QWORD *)(a1 + 8) = v48;
      v49[v47 + v45] = 0;
      memmove((void *)(*(_QWORD *)a1 + v47), "ref (", v45);
      v59 = a5 + 1;
      v60 = (__int64 **)a5[1];
      if ( !v60 )
      {
        v60 = a5 + 1;
        v61 = a5 + 1;
        goto LABEL_129;
      }
      v61 = a5 + 1;
      v62 = (unsigned __int64)v60[4] < a2;
      if ( (unsigned __int64)v60[4] <= a2 )
        goto LABEL_70;
      break;
    default:
      v34 = __strlen_chk("bad?", 5);
      v41 = *(_QWORD *)(a1 + 8);
      v42 = v41 - 1;
      if ( !v41 )
        v42 = 0;
      v43 = v34 + v42 + 1;
      if ( *(_QWORD *)(a1 + 16) >= v43 )
      {
        v44 = *(_BYTE **)a1;
      }
      else
      {
        v44 = qvector_reserve(a1, *(char **)a1, v34 + v42 + 1, 1u);
        *(_QWORD *)a1 = v44;
      }
      *(_QWORD *)(a1 + 8) = v43;
      v44[v42 + v34] = 0;
      v39 = (void *)(*(_QWORD *)a1 + v42);
      v40 = "bad?";
LABEL_66:
      memmove(v39, v40, v34);
      goto LABEL_172;
  }
LABEL_73:
  v63 = *v60;
  v61 = v60;
  if ( !*v60 )
  {
    v61 = v60;
    goto LABEL_136;
  }
  do
  {
    v60 = (__int64 **)v63;
    v62 = v63[4] < a2;
    if ( v63[4] > a2 )
      goto LABEL_73;
LABEL_70:
    if ( !v62 )
      break;
    v61 = v60 + 1;
    v63 = v60[1];
  }
  while ( v63 );
LABEL_129:
  if ( *v61 )
    goto LABEL_130;
LABEL_136:
  v90 = (__int64 *)operator new(0x28u);
  v90[4] = a2;
  *(_OWORD *)v90 = 0;
  v90[2] = (__int64)v60;
  *v61 = v90;
  v91 = (__int64 *)**a5;
  if ( v91 )
  {
    *a5 = v91;
    v90 = *v61;
  }
  sub_4A450(a5[1], v90);
  a5[2] = (__int64 *)((char *)a5[2] + 1);
  v92 = deref_idcv((char *)a2, 1, 0.0, a7);
  if ( v92 )
  {
    sub_71F60(a1, (unsigned __int64)v92, nullptr, a4 + 4, a5, 0.0, a7);
    if ( a4 > 0 && *v92 == 5 )
    {
      v93 = *(_QWORD *)(a1 + 8);
      v94 = v93 - 1;
      if ( !v93 )
        v94 = 0;
      v95 = v94 + a4 + 1;
      if ( v93 < v95 )
      {
        if ( *(_QWORD *)(a1 + 16) >= v95 )
        {
          v96 = *(_BYTE **)a1;
        }
        else
        {
          v96 = qvector_reserve(a1, *(char **)a1, v94 + a4 + 1, 1u);
          *(_QWORD *)a1 = v96;
        }
        *(_QWORD *)(a1 + 8) = v95;
        v96[v94 + a4] = 0;
      }
      memset((void *)(*(_QWORD *)a1 + v94), 32, a4);
    }
    v97 = *(_QWORD *)(a1 + 8);
    v98 = v97 - 1;
    if ( !v97 )
      v98 = 0;
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v98 + 2) )
    {
      v99 = *(_BYTE **)a1;
    }
    else
    {
      v99 = qvector_reserve(a1, *(char **)a1, v98 + 2, 1u);
      *(_QWORD *)a1 = v99;
    }
    *(_QWORD *)(a1 + 8) = v98 + 2;
    v99[v98] = 41;
    *(_BYTE *)(*(_QWORD *)a1 + v98 + 1) = 0;
    goto LABEL_156;
  }
LABEL_130:
  v85 = __strlen_chk("?)", 3);
  v86 = *(_QWORD *)(a1 + 8);
  v87 = v86 - 1;
  if ( !v86 )
    v87 = 0;
  v88 = v85 + v87 + 1;
  if ( *(_QWORD *)(a1 + 16) >= v88 )
  {
    v89 = *(_BYTE **)a1;
  }
  else
  {
    v89 = qvector_reserve(a1, *(char **)a1, v85 + v87 + 1, 1u);
    *(_QWORD *)a1 = v89;
  }
  *(_QWORD *)(a1 + 8) = v88;
  v89[v87 + v85] = 0;
  memmove((void *)(*(_QWORD *)a1 + v87), "?)", v85);
LABEL_156:
  v100 = *v59;
  if ( *v59 )
  {
    v101 = (__int64 *)(a5 + 1);
    v102 = *v59;
    do
    {
      if ( v102[4] >= a2 )
        v101 = v102;
      v102 = (__int64 *)v102[v102[4] < a2];
    }
    while ( v102 );
    if ( v101 != (__int64 *)v59 && v101[4] <= a2 )
    {
      v103 = (__int64 *)v101[1];
      if ( v103 )
      {
        do
        {
          v104 = v103;
          v103 = (__int64 *)*v103;
        }
        while ( v103 );
        v105 = a5;
        if ( *a5 != v101 )
          goto LABEL_171;
      }
      else
      {
        v104 = (__int64 *)v101[2];
        v105 = a5;
        if ( (__int64 *)*v104 != v101 )
        {
          v106 = v101 + 2;
          do
          {
            v107 = *v106;
            v104 = *(__int64 **)(v107 + 16);
            v79 = *v104 == v107;
            v106 = (__int64 *)(v107 + 16);
          }
          while ( !v79 );
        }
        if ( *a5 != v101 )
          goto LABEL_171;
      }
      *v105 = v104;
LABEL_171:
      v105[2] = (__int64 *)((char *)v105[2] - 1);
      sub_4C430(v100, v101);
      operator delete(v101);
    }
  }
LABEL_172:
  if ( v117[0] == 5 )
  {
    sub_72DD0((char **)v118[0], v117, 0.0, a7);
  }
  else if ( v117[0] == 7 && v118[0] )
  {
    v118[1] = nullptr;
    qfree(v118[0]);
    v118[0] = nullptr;
    v119 = 0;
  }
  return __readfsqword(0x28u);
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
