__int64 __fastcall sub_738C60(_QWORD *a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rdi
  bool v8; // zf
  _DWORD *v9; // rax
  char *v10; // rax
  char *v11; // rax
  _OWORD *v12; // rax
  char *v13; // rax
  __int64 v14; // rsi
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 v25; // r12
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  _QWORD *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // edx
  unsigned int v37; // ebp
  unsigned int v39; // r13d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbp
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 *v49; // rcx
  unsigned int v50; // ebp
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // r12d
  unsigned int v55; // ecx
  unsigned int *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  _QWORD *v62; // rcx
  _QWORD *v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  _QWORD *v67; // rcx
  _QWORD *v68; // rax
  unsigned int v69; // ebp
  unsigned int v70; // ecx
  unsigned int *v71; // rax
  __int64 v72; // rcx
  unsigned int v73; // ebp
  unsigned int v74; // ecx
  unsigned int *v75; // rax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  _QWORD *v78; // rdx
  _QWORD *v79; // rdx
  _QWORD *v80; // rdx
  char **v81; // r13
  char **exception; // r13
  char **v83; // r13
  char **v84; // r13
  char **v85; // r13
  __int64 v86; // [rsp+8h] [rbp-E0h]
  char v87; // [rsp+17h] [rbp-D1h]
  __int64 v88; // [rsp+18h] [rbp-D0h]
  int v89[2]; // [rsp+20h] [rbp-C8h] BYREF
  void *v90; // [rsp+28h] [rbp-C0h]
  __int64 v91; // [rsp+30h] [rbp-B8h]
  int v92; // [rsp+38h] [rbp-B0h]
  void *v93; // [rsp+40h] [rbp-A8h]
  __int64 v94; // [rsp+48h] [rbp-A0h]
  int v95; // [rsp+50h] [rbp-98h]
  void *ptr; // [rsp+58h] [rbp-90h]
  __int64 v97; // [rsp+60h] [rbp-88h]
  int v98; // [rsp+68h] [rbp-80h]
  void *v99; // [rsp+70h] [rbp-78h]
  __int64 v100; // [rsp+78h] [rbp-70h]
  int v101; // [rsp+80h] [rbp-68h]
  _BYTE v102[96]; // [rsp+88h] [rbp-60h] BYREF

  v88 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v87 = 0;
  for ( i = a2; ; i = v17 )
  {
    v4 = a1[62];
    v5 = a1[18];
    v6 = *(_QWORD *)(i + 16);
    if ( v4 )
    {
      v7 = a1[63];
      v8 = (*(_DWORD *)(v4 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v7, v4);
    }
    a1[62] = 0;
    v9 = *(_DWORD **)(v6 + 24);
    if ( !v9 || *v9 )
      goto LABEL_22;
    *(_QWORD *)v89 = *(_QWORD *)v5;
    v86 = *(_QWORD *)v89;
    v10 = (char *)sub_186B270(0x140u);
    *(_QWORD *)v10 = 0;
    *((_QWORD *)v10 + 28) = 1;
    *((_QWORD *)v10 + 1) = 0;
    *((_QWORD *)v10 + 2) = 0;
    *((_QWORD *)v10 + 3) = 1;
    *((_QWORD *)v10 + 4) = 0;
    *((_QWORD *)v10 + 5) = 0;
    *((_QWORD *)v10 + 6) = 0;
    *((_QWORD *)v10 + 7) = 0;
    *((_QWORD *)v10 + 8) = 1;
    *((_QWORD *)v10 + 9) = 0;
    *((_QWORD *)v10 + 10) = 0;
    *((_QWORD *)v10 + 11) = 0;
    *((_QWORD *)v10 + 12) = 0;
    *((_QWORD *)v10 + 13) = 1;
    *((_QWORD *)v10 + 14) = 0;
    *((_QWORD *)v10 + 15) = 0;
    *((_QWORD *)v10 + 16) = 0;
    *((_QWORD *)v10 + 17) = 0;
    *((_QWORD *)v10 + 18) = 1;
    *((_QWORD *)v10 + 19) = 0;
    *((_QWORD *)v10 + 20) = 0;
    *((_QWORD *)v10 + 21) = 0;
    *((_QWORD *)v10 + 22) = 0;
    *((_QWORD *)v10 + 23) = 1;
    *((_QWORD *)v10 + 24) = 0;
    *((_QWORD *)v10 + 25) = 0;
    *((_QWORD *)v10 + 26) = 0;
    *((_QWORD *)v10 + 27) = 0;
    v10[228] = 0;
    *((_QWORD *)v10 + 31) = 0;
    *(_OWORD *)(v10 + 232) = 0;
    *((_QWORD *)v10 + 32) = 0;
    *((_QWORD *)v10 + 33) = 1;
    *((_QWORD *)v10 + 34) = 0;
    *((_QWORD *)v10 + 35) = 0;
    *((_QWORD *)v10 + 36) = 0;
    *((_QWORD *)v10 + 37) = 0;
    *((_QWORD *)v10 + 38) = 1;
    *((_QWORD *)v10 + 39) = 0;
    v90 = v10;
    v91 = 8;
    v92 = 0;
    v11 = (char *)sub_186B270(0x140u);
    *(_QWORD *)v11 = 0;
    *((_QWORD *)v11 + 28) = 1;
    *((_QWORD *)v11 + 1) = 0;
    *((_QWORD *)v11 + 2) = 0;
    *((_QWORD *)v11 + 3) = 1;
    *((_QWORD *)v11 + 4) = 0;
    *((_QWORD *)v11 + 5) = 0;
    *((_QWORD *)v11 + 6) = 0;
    *((_QWORD *)v11 + 7) = 0;
    *((_QWORD *)v11 + 8) = 1;
    *((_QWORD *)v11 + 9) = 0;
    *((_QWORD *)v11 + 10) = 0;
    *((_QWORD *)v11 + 11) = 0;
    *((_QWORD *)v11 + 12) = 0;
    *((_QWORD *)v11 + 13) = 1;
    *((_QWORD *)v11 + 14) = 0;
    *((_QWORD *)v11 + 15) = 0;
    *((_QWORD *)v11 + 16) = 0;
    *((_QWORD *)v11 + 17) = 0;
    *((_QWORD *)v11 + 18) = 1;
    *((_QWORD *)v11 + 19) = 0;
    *((_QWORD *)v11 + 20) = 0;
    *((_QWORD *)v11 + 21) = 0;
    *((_QWORD *)v11 + 22) = 0;
    *((_QWORD *)v11 + 23) = 1;
    *((_QWORD *)v11 + 24) = 0;
    *((_QWORD *)v11 + 25) = 0;
    *((_QWORD *)v11 + 26) = 0;
    *((_QWORD *)v11 + 27) = 0;
    v11[228] = 0;
    *((_QWORD *)v11 + 31) = 0;
    *(_OWORD *)(v11 + 232) = 0;
    *((_QWORD *)v11 + 32) = 0;
    *((_QWORD *)v11 + 33) = 1;
    *((_QWORD *)v11 + 34) = 0;
    *((_QWORD *)v11 + 35) = 0;
    *((_QWORD *)v11 + 36) = 0;
    *((_QWORD *)v11 + 37) = 0;
    *((_QWORD *)v11 + 38) = 1;
    *((_QWORD *)v11 + 39) = 0;
    v93 = v11;
    v94 = 8;
    v95 = 0;
    v12 = (_OWORD *)sub_186B270(0x80u);
    ptr = v12;
    *v12 = 0;
    v12[1] = 0;
    v12[2] = 0;
    v12[3] = 0;
    v12[4] = 0;
    v12[5] = 0;
    v12[6] = 0;
    v12[7] = 0;
    v97 = 8;
    v98 = 0;
    v13 = (char *)sub_186B270(0x140u);
    *(_QWORD *)v13 = 0;
    *((_QWORD *)v13 + 28) = 1;
    *((_QWORD *)v13 + 1) = 0;
    *((_QWORD *)v13 + 2) = 0;
    *((_QWORD *)v13 + 3) = 1;
    *((_QWORD *)v13 + 4) = 0;
    *((_QWORD *)v13 + 5) = 0;
    *((_QWORD *)v13 + 6) = 0;
    *((_QWORD *)v13 + 7) = 0;
    *((_QWORD *)v13 + 8) = 1;
    *((_QWORD *)v13 + 9) = 0;
    *((_QWORD *)v13 + 10) = 0;
    *((_QWORD *)v13 + 11) = 0;
    *((_QWORD *)v13 + 12) = 0;
    *((_QWORD *)v13 + 13) = 1;
    *((_QWORD *)v13 + 14) = 0;
    *((_QWORD *)v13 + 15) = 0;
    *((_QWORD *)v13 + 16) = 0;
    *((_QWORD *)v13 + 17) = 0;
    *((_QWORD *)v13 + 18) = 1;
    *((_QWORD *)v13 + 19) = 0;
    *((_QWORD *)v13 + 20) = 0;
    *((_QWORD *)v13 + 21) = 0;
    *((_QWORD *)v13 + 22) = 0;
    *((_QWORD *)v13 + 23) = 1;
    *((_QWORD *)v13 + 24) = 0;
    *((_QWORD *)v13 + 25) = 0;
    *((_QWORD *)v13 + 26) = 0;
    *((_QWORD *)v13 + 27) = 0;
    v13[228] = 0;
    *((_QWORD *)v13 + 31) = 0;
    *(_OWORD *)(v13 + 232) = 0;
    *((_QWORD *)v13 + 32) = 0;
    *((_QWORD *)v13 + 33) = 1;
    *((_QWORD *)v13 + 34) = 0;
    *((_QWORD *)v13 + 35) = 0;
    *((_QWORD *)v13 + 36) = 0;
    *((_QWORD *)v13 + 37) = 0;
    *((_QWORD *)v13 + 38) = 1;
    *((_QWORD *)v13 + 39) = 0;
    v99 = v13;
    v100 = 8;
    v101 = 0;
    sub_16744A0(v102, v86);
    v14 = *(unsigned int *)(v5 + 8);
    v102[24] = 1;
    v15 = sub_14AE330((int)v89);
    if ( v15 == 5 )
    {
      sub_149FE90(v89, v14);
LABEL_22:
      ++*(_DWORD *)(i + 8);
      if ( !v87 )
      {
        v58 = (_QWORD *)a1[7];
        if ( v58 )
        {
          v59 = *((_DWORD *)v58 - 1);
          if ( v59 == *((_DWORD *)v58 - 2) )
          {
            v73 = (3 * v59 + 1) >> 1;
            v74 = 8 * v73 + 8;
            if ( 8 * v59 + 8 >= v74 || v59 >= v73 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_737700((__int64 *)v89, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v89);
              sub_233E40((__int64)v89);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v75 = (unsigned int *)sub_186B300(v58 - 1, v74);
            v76 = v75[1];
            v58 = v75 + 2;
            *v75 = v73;
            a1[7] = v75 + 2;
            LODWORD(v75) = v76;
            v62 = &v58[v76];
            v61 = (_DWORD)v75 + 1;
          }
          else
          {
            v60 = v59;
            v61 = v59 + 1;
            v62 = &v58[v60];
          }
        }
        else
        {
          v79 = (_QWORD *)sub_186B270(0x18u);
          *v79 = 2;
          v61 = 1;
          v58 = v79 + 1;
          a1[7] = v58;
          v62 = v58;
        }
        *v62 = i;
        *((_DWORD *)v58 - 1) = v61;
        v63 = (_QWORD *)a1[11];
        if ( v63 )
        {
          v64 = *((_DWORD *)v63 - 1);
          if ( v64 == *((_DWORD *)v63 - 2) )
          {
            v69 = (3 * v64 + 1) >> 1;
            v70 = 8 * v69 + 8;
            if ( 8 * v64 + 8 >= v70 || v64 >= v69 )
            {
              v81 = (char **)__cxa_allocate_exception(0x28u);
              sub_737700((__int64 *)v89, "Overflow encountered when expanding vector");
              *v81 = (char *)off_1C63128;
              sub_2333C0(v81 + 1, v89);
              sub_233E40((__int64)v89);
              __cxa_throw(v81, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v71 = (unsigned int *)sub_186B300(v63 - 1, v70);
            v72 = v71[1];
            v63 = v71 + 2;
            *v71 = v69;
            a1[11] = v71 + 2;
            LODWORD(v71) = v72;
            v67 = &v63[v72];
            v66 = (_DWORD)v71 + 1;
          }
          else
          {
            v65 = v64;
            v66 = v64 + 1;
            v67 = &v63[v65];
          }
        }
        else
        {
          v80 = (_QWORD *)sub_186B270(0x18u);
          *v80 = 2;
          v66 = 1;
          v63 = v80 + 1;
          a1[11] = v63;
          v67 = v63;
        }
        *v67 = 0;
        *((_DWORD *)v63 - 1) = v66;
        goto LABEL_45;
      }
      v18 = a1[60];
      if ( v18 && (v19 = a1[61], v8 = *(_DWORD *)(v18 + 8) == 1, --*(_DWORD *)(v18 + 8), v8) )
      {
        sub_15D7BC0(v19, v18);
        a1[60] = i;
        v17 = i;
LABEL_26:
        if ( !v17 )
          goto LABEL_28;
      }
      else
      {
        a1[60] = i;
        v17 = i;
      }
      ++*(_DWORD *)(v17 + 8);
LABEL_28:
      v20 = (_QWORD *)a1[7];
      if ( v20 )
      {
        v21 = *((_DWORD *)v20 - 1);
        if ( v21 == *((_DWORD *)v20 - 2) )
        {
          v39 = (3 * v21 + 1) >> 1;
          v40 = 8 * v39 + 8;
          if ( 8 * v21 + 8 >= (unsigned int)v40 || v21 >= v39 )
          {
            v84 = (char **)__cxa_allocate_exception(0x28u);
            sub_737700((__int64 *)v89, "Overflow encountered when expanding vector");
            *v84 = (char *)off_1C63128;
            sub_2333C0(v84 + 1, v89);
            sub_233E40((__int64)v89);
            __cxa_throw(v84, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v41 = (unsigned int *)sub_186B300(v20 - 1, v40);
          v42 = v41[1];
          v20 = v41 + 2;
          *v41 = v39;
          a1[7] = v41 + 2;
          LODWORD(v41) = v42;
          v24 = &v20[v42];
          v23 = (_DWORD)v41 + 1;
        }
        else
        {
          v22 = v21;
          v23 = v21 + 1;
          v24 = &v20[v22];
        }
      }
      else
      {
        v68 = (_QWORD *)sub_186B270(0x18u);
        v20 = v68 + 1;
        *v68 = 2;
        v23 = 1;
        a1[7] = v20;
        v24 = v20;
      }
      *v24 = v17;
      v25 = a1[62];
      *((_DWORD *)v20 - 1) = v23;
      if ( v25 )
      {
        v26 = (_QWORD *)a1[11];
        ++*(_DWORD *)(v25 + 8);
        if ( v26 )
        {
          v27 = *((_DWORD *)v26 - 1);
          if ( v27 == *((_DWORD *)v26 - 2) )
          {
            v50 = (3 * v27 + 1) >> 1;
            v51 = 8 * v50 + 8;
            if ( 8 * v27 + 8 >= (unsigned int)v51 || v27 >= v50 )
            {
              v85 = (char **)__cxa_allocate_exception(0x28u);
              sub_737700((__int64 *)v89, "Overflow encountered when expanding vector");
              *v85 = (char *)off_1C63128;
              sub_2333C0(v85 + 1, v89);
              sub_233E40((__int64)v89);
              __cxa_throw(v85, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v52 = (unsigned int *)sub_186B300(v26 - 1, v51);
            v53 = v52[1];
            v26 = v52 + 2;
            *v52 = v50;
            a1[11] = v52 + 2;
            LODWORD(v52) = v53;
            v30 = &v26[v53];
            v29 = (_DWORD)v52 + 1;
          }
          else
          {
            v28 = v27;
            v29 = v27 + 1;
            v30 = &v26[v28];
          }
        }
        else
        {
          v77 = (_QWORD *)sub_186B270(0x18u);
          v26 = v77 + 1;
          *v77 = 2;
          v29 = 1;
          a1[11] = v26;
          v30 = v26;
        }
        *v30 = v25;
        *((_DWORD *)v26 - 1) = v29;
      }
      else
      {
        v43 = sub_15DE370(a1[1]);
        v44 = v43;
        if ( v43 )
          ++*(_DWORD *)(v43 + 8);
        v45 = (_QWORD *)a1[11];
        if ( v45 )
        {
          v46 = *((_DWORD *)v45 - 1);
          if ( v46 == *((_DWORD *)v45 - 2) )
          {
            v54 = (3 * v46 + 1) >> 1;
            v55 = 8 * v54 + 8;
            if ( 8 * v46 + 8 >= v55 || v46 >= v54 )
            {
              v83 = (char **)__cxa_allocate_exception(0x28u);
              sub_737700((__int64 *)v89, "Overflow encountered when expanding vector");
              *v83 = (char *)off_1C63128;
              sub_2333C0(v83 + 1, v89);
              sub_233E40((__int64)v89);
              __cxa_throw(v83, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v56 = (unsigned int *)sub_186B300(v45 - 1, v55);
            v57 = v56[1];
            v45 = v56 + 2;
            *v56 = v54;
            a1[11] = v56 + 2;
            LODWORD(v56) = v57;
            v49 = &v45[v57];
            v48 = (_DWORD)v56 + 1;
          }
          else
          {
            v47 = v46;
            v48 = v46 + 1;
            v49 = &v45[v47];
          }
        }
        else
        {
          v78 = (_QWORD *)sub_186B270(0x18u);
          *v78 = 2;
          v48 = 1;
          v45 = v78 + 1;
          a1[11] = v45;
          v49 = v45;
        }
        *v49 = v44;
        *((_DWORD *)v45 - 1) = v48;
      }
      v31 = a1[62];
      if ( v31 )
      {
        v32 = a1[63];
        v8 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v32, v31);
      }
      v33 = a1[60];
      a1[62] = 0;
      if ( v33 )
      {
        v34 = a1[61];
        v8 = (*(_DWORD *)(v33 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v34, v33);
      }
      a1[60] = 0;
      v35 = a1[5];
      if ( v35 )
      {
        v36 = *(_DWORD *)(v35 - 4);
        if ( v36 )
          *(_BYTE *)(v35 + 16LL * (unsigned int)(v36 - 1) + 8) |= 2u;
      }
LABEL_45:
      v37 = 1;
      goto LABEL_46;
    }
    v16 = a1[60];
    if ( v16 == *(_QWORD *)(*(_QWORD *)v5 + 864LL) || v16 == *(_QWORD *)(*(_QWORD *)v5 + 856LL) )
    {
      ++**(_DWORD **)(v5 + 248);
    }
    else if ( HIDWORD(v100) )
    {
      ++*(_DWORD *)(*(_QWORD *)(v5 + 248) + 4LL);
    }
    sub_149FE90(v89, v14);
    v17 = a1[60];
    if ( v15 == 4 )
      goto LABEL_26;
    if ( *(_WORD *)(v17 + 4) || *(_DWORD *)(v17 + 24) )
      break;
    ++*(_DWORD *)(v17 + 8);
    v8 = (*(_DWORD *)(i + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v88, i);
    v87 = 1;
  }
  v37 = 0;
LABEL_46:
  v8 = (*(_DWORD *)(i + 8))-- == 1;
  if ( v8 )
    sub_15D7BC0(v88, i);
  return v37;
}

