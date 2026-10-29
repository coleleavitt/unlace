__int64 __fastcall sub_1F15770(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        _QWORD *a7)
{
  __int64 v11; // rbx
  size_t v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64); // rax
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // r14
  _QWORD *v20; // rsi
  __int64 *v21; // r14
  __int64 *v22; // r15
  unsigned __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rbp
  __int64 *v29; // rax
  char *v30; // r14
  __int64 v31; // r13
  char *v32; // rbp
  unsigned __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rbp
  __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // rax
  _BYTE *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // r15
  _QWORD *v42; // rdi
  __int64 *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rbp
  size_t v46; // rax
  __int64 v47; // r15
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r13
  _QWORD *v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // r14
  int v55; // eax
  unsigned int *v56; // r13
  unsigned int v57; // eax
  int v58; // eax
  void *v59; // r12
  unsigned int *v60; // r15
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rsi
  unsigned int v63; // eax
  __int64 v64; // r14
  void *v65; // r12
  unsigned int v66; // ebp
  size_t v67; // r15
  char *v68; // rdi
  __int64 v70; // rdi
  void *v71; // r12
  unsigned __int64 v72; // rax
  bool v73; // zf
  __int64 v74; // rdi
  int v75; // eax
  int v76; // eax
  __int64 v77; // r12
  __int64 v78; // rbp
  __int64 v79; // r13
  __int64 v80; // rax
  __int64 *v81; // rax
  __int64 v82; // r13
  __int64 v83; // rbp
  __int64 v84; // r12
  __int64 v85; // rax
  __int64 v86; // r13
  __int64 *v87; // rbp
  __int64 *v88; // rcx
  __int64 v89; // rdx
  __int64 *v90; // rax
  __int64 v92; // [rsp+28h] [rbp-188h]
  __int64 v93; // [rsp+28h] [rbp-188h]
  __int64 *v94; // [rsp+30h] [rbp-180h]
  unsigned int *v95; // [rsp+30h] [rbp-180h]
  __int64 v96; // [rsp+40h] [rbp-170h]
  unsigned int v97; // [rsp+4Ch] [rbp-164h]
  unsigned __int64 v99; // [rsp+50h] [rbp-160h]
  __int64 v100; // [rsp+58h] [rbp-158h]
  __int64 v101; // [rsp+60h] [rbp-150h]
  unsigned int v103; // [rsp+74h] [rbp-13Ch]
  char *v104; // [rsp+78h] [rbp-138h]
  char *v105; // [rsp+80h] [rbp-130h]
  __int64 v106[2]; // [rsp+90h] [rbp-120h] BYREF
  int v107; // [rsp+A0h] [rbp-110h]
  __int64 v108; // [rsp+B0h] [rbp-100h]
  void *v109[2]; // [rsp+B8h] [rbp-F8h] BYREF
  _DWORD v110[4]; // [rsp+C8h] [rbp-E8h] BYREF
  void *v111[2]; // [rsp+D8h] [rbp-D8h] BYREF
  __int64 v112; // [rsp+E8h] [rbp-C8h]
  _BYTE v113[24]; // [rsp+F0h] [rbp-C0h] BYREF
  void *ptr; // [rsp+108h] [rbp-A8h] BYREF
  __int64 v115; // [rsp+110h] [rbp-A0h]
  _BYTE v116[152]; // [rsp+118h] [rbp-98h] BYREF

  v11 = a1;
  v12 = j__strlen("ReadAST");
  v101 = sub_224A990("ReadAST", v12, a2, a3);
  v13 = *(_DWORD *)(a1 + 504);
  *(_DWORD *)(a1 + 504) = a5;
  v107 = v13;
  v14 = *(_QWORD *)(a1 + 508);
  *(_DWORD *)(a1 + 508) = a4;
  v108 = v14;
  v100 = a1 + 24;
  v15 = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 512) = 1;
  v16 = *(__int64 (__fastcall **)(__int64))(v15 + 184);
  if ( v16 == sub_1EA8950 )
  {
    v17 = *(_DWORD *)(a1 + 9408) + 1;
    *(_DWORD *)(a1 + 9408) = v17;
    if ( v17 == 1 )
    {
      v70 = *(_QWORD *)(a1 + 496);
      if ( v70 )
        sub_224E010(v70);
    }
  }
  else
  {
    v16(a1 + 24);
  }
  v18 = *(_QWORD *)(v11 + 144);
  v103 = 0;
  if ( v18 )
    v103 = sub_C9BFA0(v11 + 24, v18);
  *(_OWORD *)v111 = 0;
  v19 = *(unsigned int *)(v11 + 168);
  ptr = v116;
  v115 = 0x400000000LL;
  LODWORD(v112) = 0;
  *(_OWORD *)v109 = 0;
  v110[0] = 0;
  v97 = sub_1EFD190(v11, a2, a3, a4, a5, 0, (__int64)&ptr, 0, 0, 0, 0, a6);
  if ( v97 )
  {
    sub_1FDB050(v11 + 160, *(_QWORD *)(v11 + 160) + 8 * v19);
    v71 = *(void **)(v11 + 520);
    *(_QWORD *)(v11 + 520) = 0;
    if ( v71 )
    {
      sub_1FD1300(v71);
      operator delete(v71, 0x5D8u);
    }
    sub_1FDD6C0(v11 + 160);
    v68 = (char *)ptr;
    goto LABEL_83;
  }
  if ( a7 )
  {
    if ( !(_DWORD)v115 )
      goto LABEL_8;
    v43 = (__int64 *)ptr;
    v44 = 3LL * (unsigned int)v115;
    *a7 = *(_QWORD *)((char *)ptr + v44 * 8 - 24);
  }
  else
  {
    v43 = (__int64 *)ptr;
    v44 = 3LL * (unsigned int)v115;
  }
  v94 = &v43[v44];
  if ( &v43[v44] == v43 )
    goto LABEL_8;
  do
  {
    v45 = *v43;
    v46 = j__strlen("Read Loaded AST");
    v47 = sub_224A990("Read Loaded AST", v46, *(_QWORD *)(v45 + 40), *(_QWORD *)(v45 + 48));
    sub_1EEFE90(v111, v11, v45, a6);
    if ( v111[0] )
    {
LABEL_79:
      sub_1EBF0A0(v11, (_QWORD **)v111);
      if ( v111[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v111[0] + 8LL))(v111[0]);
      goto LABEL_81;
    }
    v48 = *(_DWORD *)(v45 + 4);
    if ( (v48 == 5 || v48 <= 1) && !*(_BYTE *)(v45 + 211) )
    {
      sub_1EACE50(v11, 930, *(_BYTE **)(v45 + 8), *(_QWORD *)(v45 + 16), nullptr, 0, nullptr, 0);
LABEL_81:
      if ( v47 )
      {
        sub_224D6D0(v47);
        v97 = 1;
        v68 = (char *)ptr;
      }
      else
      {
        v68 = (char *)ptr;
        v97 = 1;
      }
      goto LABEL_83;
    }
    while ( !(unsigned __int8)sub_1EBF490(v45 + 464, 0x12u) )
    {
      sub_1EC7F30(v111, v11, v45);
      if ( v111[0] )
        goto LABEL_79;
    }
    v49 = *(_QWORD *)(v11 + 9400);
    *(_QWORD *)(v45 + 432) = v49;
    *(_QWORD *)(v11 + 9400) = *(_QWORD *)(v45 + 424) + v49;
    v50 = *(unsigned int *)(v11 + 536);
    v51 = *(_QWORD *)(v45 + 432);
    if ( (_DWORD)v50 )
    {
      v52 = (_QWORD *)(*(_QWORD *)(v11 + 528) + 16 * v50 - 16);
      if ( v51 == *v52 && v45 == v52[1] )
        goto LABEL_58;
    }
    else
    {
      v50 = 0;
    }
    if ( v50 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 540) )
    {
      sub_2237220(v11 + 528, v11 + 544, v50 + 1, 16);
      v50 = *(unsigned int *)(v11 + 536);
    }
    v53 = (_QWORD *)(*(_QWORD *)(v11 + 528) + 16 * v50);
    *v53 = v51;
    v53[1] = v45;
    ++*(_DWORD *)(v11 + 536);
LABEL_58:
    if ( v47 )
      sub_224D6D0(v47);
    v43 += 3;
  }
  while ( v94 != v43 );
  v105 = (char *)ptr + 24 * (unsigned int)v115;
  if ( ptr != v105 )
  {
    v104 = (char *)ptr;
    while ( 1 )
    {
      v54 = *(_QWORD *)v104;
      v55 = *(_DWORD *)(*(_QWORD *)v104 + 168LL);
      if ( v55 )
        *(_DWORD *)(v54 + 168) = *(_DWORD *)(v54 + 1644) + v55 - 1;
      v56 = *(unsigned int **)(v54 + 1712);
      v95 = *(unsigned int **)(v54 + 1720);
      if ( v95 != v56 )
        break;
LABEL_102:
      v104 += 24;
      if ( v105 == v104 )
        goto LABEL_8;
    }
    v93 = v54;
    while ( 2 )
    {
      v109[0] = (void *)(*(_QWORD *)(v93 + 1696) + *v56);
      v63 = sub_1EA91E0((char **)v109);
      v64 = *(_QWORD *)(v11 + 136);
      v65 = v109[0];
      v66 = v63;
      v67 = v63 - 1;
      if ( (*(_BYTE *)(*(_QWORD *)(v64 + 56) + 1LL) & 8) != 0 )
      {
        v60 = (unsigned int *)sub_1ECF440(v64 + 552, v109[0], v67);
LABEL_71:
        v61 = *(_QWORD *)v60 & 0xFFFFFFEF7FFFFFFFLL | 0x1080000000LL;
        *(_QWORD *)v60 = v61;
        if ( (v61 & 0x100000000LL) == 0 )
          sub_1EA8800(v11, v60, 1);
        v62 = *(_QWORD *)((char *)v109[0] + v66) >> 1;
        if ( v62 )
          v62 = sub_1EE0A70(v11, v93, v62);
        sub_1EAC1F0((_QWORD *)v11, v62, (__int64)v60);
      }
      else
      {
        v57 = sub_2244B30(v109[0], v67);
        v58 = sub_2244E60(v64 + 552, v65, v67, v57);
        if ( v58 == -1 )
          sub_FBDEE0((__int64 **)v111, (__int64 *)(*(_QWORD *)(v64 + 552) + 8LL * *(unsigned int *)(v64 + 560)), 1);
        else
          sub_FBDEE0((__int64 **)v111, (__int64 *)(*(_QWORD *)(v64 + 552) + 8LL * v58), 1);
        v59 = v111[0];
        sub_FBDEE0(
          (__int64 **)v111,
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v11 + 136) + 552LL)
                    + 8LL * *(unsigned int *)(*(_QWORD *)(v11 + 136) + 560LL)),
          1);
        if ( v59 != v111[0] )
        {
          v60 = *(unsigned int **)(*(_QWORD *)v59 + 8LL);
          goto LABEL_71;
        }
      }
      if ( v95 == ++v56 )
        goto LABEL_102;
      continue;
    }
  }
LABEL_8:
  if ( a4 - 2 <= 2 )
  {
    v86 = *(_QWORD *)(v11 + 136);
    sub_FBDEE0((__int64 **)v111, *(__int64 **)(v86 + 552), *(_DWORD *)(v86 + 560) == 0);
    v87 = (__int64 *)v111[0];
    sub_FBDEE0((__int64 **)v111, (__int64 *)(*(_QWORD *)(v86 + 552) + 8LL * *(unsigned int *)(v86 + 560)), 1);
    v88 = (__int64 *)v111[0];
    if ( v111[0] != v87 )
    {
      v89 = *v87;
      do
      {
        **(_QWORD **)(v89 + 8) = **(_QWORD **)(v89 + 8) & 0xFFFFFFEF7FFFFFFFLL | 0x1080000000LL;
        v89 = v87[1];
        if ( v89 != -8 && v89 )
        {
          ++v87;
        }
        else
        {
          v90 = v87 + 2;
          do
          {
            do
            {
              v89 = *v90;
              v87 = v90++;
            }
            while ( v89 == -8 );
          }
          while ( !v89 );
        }
      }
      while ( v88 != v87 );
    }
  }
  v20 = *(_QWORD **)(v11 + 4944);
  if ( *(_DWORD *)(v11 + 4952) )
    sub_1898540((__m128 *)v111, v20, &v20[2 * *(unsigned int *)(v11 + 4960)], v11 + 4944, 0);
  else
    sub_1898540(
      (__m128 *)v111,
      &v20[2 * *(unsigned int *)(v11 + 4960)],
      &v20[2 * *(unsigned int *)(v11 + 4960)],
      v11 + 4944,
      1);
  v21 = (__int64 *)v111[0];
  v22 = (__int64 *)v111[1];
  v23 = *(_QWORD *)(v11 + 4944) + 16LL * *(unsigned int *)(v11 + 4960);
  sub_1898540((__m128 *)v111, (_QWORD *)v23, (_QWORD *)v23, v11 + 4944, 1);
  v28 = (__int64 *)v111[0];
  while ( v21 != v28 )
  {
    v23 = (unsigned __int64)v21;
    *(_BYTE *)sub_1EDB210(v11 + 4968, v21, v24, v25, v26, v27) = 1;
    if ( v22 == v21 + 2 )
    {
      v21 = v22;
    }
    else if ( (unsigned __int64)v21[2] < 0xFFFFFFFFFFFFFFFELL )
    {
      v21 += 2;
    }
    else
    {
      v29 = v21 + 4;
      do
      {
        v21 = v29;
        if ( v22 == v29 )
          break;
        v29 += 2;
      }
      while ( (unsigned __int64)*v21 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  v30 = (char *)ptr;
  v31 = v11 + 160;
  v32 = (char *)ptr + 24 * (unsigned int)v115;
  if ( ptr != v32 )
  {
    v92 = v11;
    do
    {
      v33 = *(_QWORD *)v30;
      v23 = *(_QWORD *)v30;
      sub_1FDD7A0(v31, *(_QWORD *)v30);
      *(_DWORD *)(v33 + 808) = a5;
      v25 = *((_QWORD *)v30 + 1);
      v24 = *((unsigned int *)v30 + 4);
      if ( v25 && (_DWORD)v24 )
      {
        v25 = *(unsigned int *)(v25 + 1648);
        v24 = (unsigned int)(v24 + v25 - 2);
      }
      v30 += 24;
      *(_DWORD *)(v33 + 812) = v24;
    }
    while ( v32 != v30 );
    v11 = v92;
  }
  v34 = *(_DWORD *)(v11 + 4616);
  if ( v34 )
  {
    v35 = 0;
    v36 = 16 * (3LL * (unsigned int)(v34 - 1) + 3);
    do
    {
      v37 = v35 + *(_QWORD *)(v11 + 4608);
      v23 = *(unsigned int *)(v37 + 20);
      if ( (_DWORD)v23 )
        v23 = (unsigned int)sub_1EDFD20(v11, *(_QWORD *)v37, v23);
      v38 = sub_1EAD760(v11, v23);
      v24 = *(unsigned int *)(v37 + 16);
      v106[0] = v38;
      if ( (_DWORD)v24 == 1 )
      {
        v24 = *(unsigned __int8 *)(v37 + 24);
        if ( v38 || (v24 & 1) != 0 )
        {
          v26 = *(_QWORD *)(v37 + 8);
          v25 = *(unsigned int *)(v26 + 1040);
          v23 = *(unsigned int *)(v26 + 1044);
          v72 = (4 * (v24 & 1)) | v38 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v25 + 1 > v23 )
          {
            v23 = v26 + 1048;
            v99 = v72;
            v96 = *(_QWORD *)(v37 + 8);
            sub_2237220(v26 + 1032, v26 + 1048, v25 + 1, 8);
            v26 = v96;
            v72 = v99;
            v25 = *(unsigned int *)(v96 + 1040);
          }
          v24 = *(_QWORD *)(v26 + 1032);
          *(_QWORD *)(v24 + 8 * v25) = v72;
          ++*(_DWORD *)(v26 + 1040);
        }
      }
      else if ( (_DWORD)v24 )
      {
        if ( (_DWORD)v24 == 2 )
        {
          if ( v38 )
          {
            v113[0] = 0;
            v112 = 0;
            v111[1] = v113;
            v39 = *(_BYTE **)(v37 + 32);
            v111[0] = (void *)v38;
            if ( v39 )
            {
              v40 = (__int64)&v39[*(_QWORD *)(v37 + 40)];
              v109[0] = v110;
              sub_1EA9D80(v109, v39, v40);
            }
            else
            {
              LOBYTE(v110[0]) = 0;
              v109[1] = nullptr;
              v109[0] = v110;
            }
            sub_A0AAD0((__int64)&v111[1], v109);
            if ( v109[0] != v110 )
              operator delete(v109[0]);
            v41 = *(_QWORD *)(v37 + 8);
            v23 = *(_QWORD *)(v41 + 1760);
            if ( v23 == *(_QWORD *)(v41 + 1768) )
            {
              sub_13F7E70((char **)(v41 + 1752), v23, (__int64)v111);
            }
            else
            {
              v42 = (_QWORD *)(v23 + 8);
              *(void **)v23 = v111[0];
              *(_QWORD *)(v23 + 8) = v23 + 24;
              v23 = (unsigned __int64)v111[1];
              sub_1EA9CC0(v42, (_BYTE *)v111[1], (__int64)v111[1] + v112);
              *(_QWORD *)(v41 + 1760) += 40LL;
            }
            if ( v111[1] != v113 )
              operator delete(v111[1]);
          }
        }
        else if ( (_DWORD)v24 == 3 && v38 )
        {
          v23 = (unsigned __int64)v106;
          sub_12F1A10(*(_QWORD *)(v37 + 8) + 976LL, v106, v24, v25, v26, v27);
        }
      }
      else if ( v38 )
      {
        v23 = (unsigned __int64)v106;
        sub_12F1A10(*(_QWORD *)(v37 + 8) + 920LL, v106, v24, v25, v26, v27);
      }
      v35 += 48;
    }
    while ( v36 != v35 );
  }
  v73 = *(_QWORD *)(v11 + 144) == 0;
  *(_DWORD *)(v11 + 4616) = 0;
  if ( !v73 )
    sub_1F151E0(v11, v23, v24, v25, v26, v27);
  if ( *(_QWORD *)(v11 + 128) )
    sub_1ECD650(v11);
  v74 = *(_QWORD *)(v11 + 64);
  if ( v74 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v74 + 16LL))(v74, v11);
  v75 = *(_DWORD *)(**(_QWORD **)(v11 + 160) + 168LL);
  if ( v75 )
  {
    if ( a4 == 3 )
    {
      *(_DWORD *)(*(_QWORD *)(v11 + 80) + 524LL) = v75;
    }
    else if ( a4 == 4 )
    {
      *(_DWORD *)(*(_QWORD *)(v11 + 80) + 520LL) = v75;
    }
  }
  if ( *(_QWORD *)(v11 + 144) )
  {
    v76 = *(_DWORD *)(v11 + 12832);
    if ( v76 )
    {
      v77 = 0;
      v78 = 8LL * (unsigned int)(v76 - 1) + 8;
      do
      {
        v79 = *(_QWORD *)(*(_QWORD *)(v11 + 12824) + v77);
        v77 += 8;
        v80 = sub_B88050(v79);
        sub_1F33AD0(v11, v80, v79, v103);
      }
      while ( v78 != v77 );
    }
  }
  v68 = (char *)ptr;
  v81 = *(__int64 **)(*(_QWORD *)(v11 + 136) + 104LL);
  v82 = *v81;
  if ( (*(_BYTE *)(*v81 + 624) & 0x20) != 0 )
  {
    if ( (_DWORD)v115 )
    {
      v83 = 0;
      v84 = 8 * (3LL * (unsigned int)(v115 - 1) + 3);
      do
      {
        v85 = *(_QWORD *)&v68[v83];
        if ( !*(_DWORD *)(v85 + 4) && *(_QWORD *)(v85 + 1280) < *(_QWORD *)(v82 + 296) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v11 + 288) + 24LL))(
            *(_QWORD *)(v11 + 288),
            *(_QWORD *)(v85 + 8),
            *(_QWORD *)(v85 + 16));
          v68 = (char *)ptr;
        }
        v83 += 24;
      }
      while ( v83 != v84 );
    }
    else
    {
      v97 = 0;
    }
  }
LABEL_83:
  if ( v68 != v116 )
    free(v68);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 24) + 192LL))(v100);
  *(_QWORD *)(v11 + 508) = v108;
  *(_DWORD *)(v11 + 504) = v107;
  if ( v101 )
    sub_224D6D0(v101);
  return v97;
}
