__int64 __fastcall sub_166AD70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        double a7,
        double a8)
{
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 *v11; // rbp
  _DWORD *v12; // r10
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned int *v17; // rbx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // rdi
  void *v24; // rdi
  void **v25; // rax
  void **v26; // r14
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rax
  bool v34; // cc
  unsigned int v35; // r14d
  unsigned int *v36; // r13
  unsigned int *v37; // rbp
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rax
  _QWORD *v40; // r15
  _QWORD *v41; // rbx
  _QWORD *v42; // rdi
  void *v43; // rdi
  void **v44; // r15
  void **v45; // rbx
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rax
  unsigned __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // r13
  unsigned int v57; // r12d
  unsigned int v58; // eax
  unsigned int *v59; // rbp
  unsigned int *v60; // r12
  __int64 v61; // rdx
  unsigned int *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbp
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbp
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rbp
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  _QWORD *v83; // rax
  int v84; // [rsp-10h] [rbp-288h]
  int v85; // [rsp-8h] [rbp-280h]
  __int64 v86; // [rsp+8h] [rbp-270h]
  _QWORD *v87; // [rsp+8h] [rbp-270h]
  void **v88; // [rsp+8h] [rbp-270h]
  _DWORD *v89; // [rsp+8h] [rbp-270h]
  _DWORD *v90; // [rsp+8h] [rbp-270h]
  unsigned int *v91; // [rsp+10h] [rbp-268h]
  __int64 v92; // [rsp+10h] [rbp-268h]
  __int64 v96; // [rsp+48h] [rbp-230h] BYREF
  __int16 v97; // [rsp+50h] [rbp-228h] BYREF
  unsigned int **v98; // [rsp+58h] [rbp-220h]
  unsigned int v99; // [rsp+60h] [rbp-218h] BYREF
  char v100; // [rsp+64h] [rbp-214h]
  _BYTE v101[16]; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v102; // [rsp+B0h] [rbp-1C8h]
  unsigned __int8 *v103[11]; // [rsp+C0h] [rbp-1B8h] BYREF
  char v104; // [rsp+118h] [rbp-160h]
  unsigned int v105; // [rsp+120h] [rbp-158h]
  char v106; // [rsp+124h] [rbp-154h]
  unsigned int *v107; // [rsp+130h] [rbp-148h] BYREF
  __int64 v108; // [rsp+138h] [rbp-140h]
  _BYTE v109[312]; // [rsp+140h] [rbp-138h] BYREF

  v107 = (unsigned int *)v109;
  v108 = 0x800000000LL;
  if ( !a4 )
    return 1;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = (unsigned __int64 *)(a3 + 8 * v10);
      v12 = (_DWORD *)*v11;
      if ( ((*(_DWORD *)*v11 >> 14) & 0xC) == 0 )
        break;
LABEL_3:
      v10 = ++v9;
      if ( v9 >= a4 )
        goto LABEL_32;
    }
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 1) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) <= 4u )
    {
      v13 = sub_A70010(*(_QWORD *)(a1 + 248), *((_QWORD *)v12 + 1));
      v14 = sub_160A600(a1, *v11, v13, 0xBu, 0, 0, a7, a8, 0) & 0xFFFFFFFFFFFFFFFELL;
      *v11 = v14;
      v12 = (_DWORD *)v14;
      a6 = v84;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 1)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
    {
      v86 = (__int64)v12;
      v15 = sub_A70010(*(_QWORD *)(a1 + 248), *((_QWORD *)v12 + 1));
      v16 = sub_C0A3E0(*(_QWORD **)(a1 + 248), v15, 12, v86, 0, 0, 0);
      *v11 = v16;
      v12 = (_DWORD *)v16;
      a5 = v85;
    }
    if ( ((*((_BYTE *)v12 + 1) >> 1) & 3) == 1 )
    {
      v48 = *((_QWORD *)v12 + 1);
      v49 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v49 + 16) - 43 <= 1
        || (v54 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v54 <= 1)
        && (v92 = *((_QWORD *)v12 + 1),
            v90 = v12,
            v49 = sub_F63050(*(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFF0LL), v48, v54, a4),
            v12 = v90,
            v48 = v92,
            v49) )
      {
        while ( 1 )
        {
          v48 = *(_QWORD *)(v49 + 32);
          if ( (*(_BYTE *)(v49 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v50 = v48 & 0xFFFFFFFFFFFFFFF0LL;
            v49 = *(_QWORD *)v50;
            v51 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v50 + 16LL) - 43;
            if ( (unsigned int)v51 <= 1 )
              break;
            v89 = v12;
            v52 = sub_F63050(v49, v50, v51, a4);
            v12 = v89;
            v48 = *(_QWORD *)(v52 + 32);
            if ( (*(_BYTE *)(v52 + 18) & 0x10) == 0 )
              goto LABEL_64;
          }
        }
      }
LABEL_64:
      v53 = sub_C0A3E0(*(_QWORD **)(a1 + 248), v48, 4, (__int64)v12, 0, 0, 0);
      *v11 = v53;
      v12 = (_DWORD *)v53;
    }
    v100 &= ~1u;
    v97 = 0;
    v99 = 0;
    v17 = &v107[8 * (unsigned int)v108];
    v91 = v107;
    v98 = nullptr;
    if ( v107 != v17 )
    {
      do
      {
        v17 -= 8;
        v18 = *((_QWORD *)v17 + 1);
        if ( v18 )
        {
          v19 = *((_QWORD *)v17 + 2);
          if ( v19 )
          {
            if ( v18 < v19 || v18 > v19 + 14848 )
            {
              v20 = *(_QWORD **)(v18 + 528);
              v21 = (unsigned __int64)*(unsigned int *)(v18 + 536) << 6;
              v22 = (_QWORD *)((char *)v20 + v21);
              if ( v20 != (_QWORD *)((char *)v20 + v21) )
              {
                do
                {
                  while ( 1 )
                  {
                    v22 -= 8;
                    v23 = (_QWORD *)v22[3];
                    if ( v23 == v22 + 5 )
                      break;
                    v87 = v20;
                    operator delete(v23);
                    v20 = v87;
                    if ( v87 == v22 )
                      goto LABEL_17;
                  }
                }
                while ( v20 != v22 );
LABEL_17:
                v22 = *(_QWORD **)(v18 + 528);
              }
              if ( v22 != (_QWORD *)(v18 + 544) )
                free(v22);
              v24 = *(void **)(v18 + 416);
              if ( v24 != (void *)(v18 + 432) )
                free(v24);
              v25 = (void **)(v18 + 384);
              v26 = (void **)(v18 + 64);
              do
              {
                while ( *v25 != v25 + 2 )
                {
                  v88 = v25;
                  operator delete(*v25);
                  v25 = v88 - 4;
                  if ( v88 - 4 == v26 )
                    goto LABEL_25;
                }
                v25 -= 4;
              }
              while ( v26 != v25 );
LABEL_25:
              operator delete((void *)v18, 0x3A0u);
            }
            else
            {
              v47 = *(unsigned int *)(v19 + 14976);
              *(_DWORD *)(v19 + 14976) = v47 + 1;
              *(_QWORD *)(v19 + 8 * v47 + 14848) = v18;
            }
          }
        }
      }
      while ( v91 != v17 );
      v12 = (_DWORD *)*v11;
    }
    v27 = *(_QWORD *)(a1 + 248);
    LODWORD(v108) = 0;
    v98 = &v107;
    v28 = sub_C82410((unsigned __int64)v12, (__int64)&v97, v27, 0, a5, a6);
    v32 = *v11;
    if ( !v28 || (_DWORD)v108 )
      break;
    v33 = sub_C09C20(*(_QWORD **)(a1 + 248), v32, (int *)&v99, v29, v30, v31);
    v34 = v99 <= 1;
    *v11 = v33;
    if ( v34 )
      goto LABEL_3;
    sub_A4F8E0((int *)&v99);
    v10 = ++v9;
    if ( v9 >= a4 )
    {
LABEL_32:
      v35 = 1;
      goto LABEL_33;
    }
  }
  v56 = a1 + 8;
  v57 = v9 + 1;
  v58 = sub_EEB7E0(*v11, v32, a7);
  sub_168B9F0(v101, v56, v58, 3155, 0);
  if ( v104 )
  {
    sub_AE9DF0(v103, a2, 0x10u);
    if ( !v104 )
      goto LABEL_87;
    goto LABEL_82;
  }
  if ( v106 )
  {
    v65 = sub_168B9E0(v101);
    v68 = v102;
    if ( v102 )
      v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
    v96 = v68;
    v69 = sub_1587BC0(v65, &v96, v63, v64, v66, v67);
    sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v105 + 8), a2, 0x10u);
    if ( !v104 )
    {
LABEL_87:
      if ( !v106 )
        goto LABEL_76;
      v72 = sub_168B9E0(v101);
      v75 = v102;
      if ( v102 )
        v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
      v96 = v75;
      v76 = sub_1587BC0(v72, &v96, v70, v71, v73, v74);
      sub_AE9DF0((unsigned __int8 **)(*v76 + 32LL * v105 + 8), v57, 3u);
      if ( !v104 )
      {
LABEL_91:
        if ( v106 )
        {
          v79 = sub_168B9E0(v101);
          v82 = v102;
          if ( v102 )
            v82 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
          v96 = v82;
          v83 = sub_1587BC0(v79, &v96, v77, v78, v80, v81);
          sub_AE9DF0((unsigned __int8 **)(*v83 + 32LL * v105 + 8), 4, 2u);
        }
        goto LABEL_76;
      }
LABEL_83:
      sub_AE9DF0(v103, 4, 2u);
      goto LABEL_76;
    }
LABEL_82:
    sub_AE9DF0(v103, v57, 3u);
    if ( !v104 )
      goto LABEL_91;
    goto LABEL_83;
  }
LABEL_76:
  sub_15F7200(v101);
  v59 = v107;
  v60 = &v107[8 * (unsigned int)v108];
  if ( v107 != v60 )
  {
    do
    {
      v61 = *v59;
      v62 = v59 + 2;
      v59 += 8;
      sub_168CDE0(v101, v56, v61, v62, 0);
      sub_15F7200(v101);
    }
    while ( v60 != v59 );
  }
  if ( v99 > 1 )
    sub_A4F8E0((int *)&v99);
  v35 = 0;
LABEL_33:
  v36 = v107;
  v37 = &v107[8 * (unsigned int)v108];
  if ( v107 != v37 )
  {
    do
    {
      v37 -= 8;
      v38 = *((_QWORD *)v37 + 1);
      if ( v38 )
      {
        v39 = *((_QWORD *)v37 + 2);
        if ( v39 )
        {
          if ( v38 < v39 || v38 > v39 + 14848 )
          {
            v40 = *(_QWORD **)(v38 + 528);
            v41 = &v40[8 * (unsigned __int64)*(unsigned int *)(v38 + 536)];
            if ( v40 != v41 )
            {
              do
              {
                while ( 1 )
                {
                  v41 -= 8;
                  v42 = (_QWORD *)v41[3];
                  if ( v42 == v41 + 5 )
                    break;
                  operator delete(v42);
                  if ( v40 == v41 )
                    goto LABEL_40;
                }
              }
              while ( v40 != v41 );
LABEL_40:
              v41 = *(_QWORD **)(v38 + 528);
            }
            if ( v41 != (_QWORD *)(v38 + 544) )
              free(v41);
            v43 = *(void **)(v38 + 416);
            v44 = (void **)(v38 + 416);
            if ( v43 != (void *)(v38 + 432) )
              free(v43);
            v45 = (void **)(v38 + 96);
            do
            {
              while ( 1 )
              {
                v44 -= 4;
                if ( *v44 == v44 + 2 )
                  break;
                operator delete(*v44);
                if ( v44 == v45 )
                  goto LABEL_48;
              }
            }
            while ( v44 != v45 );
LABEL_48:
            operator delete((void *)v38, 0x3A0u);
          }
          else
          {
            v55 = *(unsigned int *)(v39 + 14976);
            *(_DWORD *)(v39 + 14976) = v55 + 1;
            *(_QWORD *)(v39 + 8 * v55 + 14848) = v38;
          }
        }
      }
    }
    while ( v36 != v37 );
    v37 = v107;
  }
  if ( v37 != (unsigned int *)v109 )
    free(v37);
  return v35;
}
