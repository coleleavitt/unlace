__int64 __fastcall sub_2F3A10(__int64 a1, _Unwind_Exception *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  _BOOL8 v7; // rcx
  _DWORD *v8; // rdi
  __int64 v9; // rax
  _QWORD *exception_cleanup; // rbx
  _QWORD *v11; // rbp
  _QWORD *v12; // rbx
  _QWORD *i; // rbp
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbx
  char v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rsi
  char v26; // al
  unsigned int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // rax
  int v31; // edx
  unsigned int **v32; // rax
  unsigned int *v33; // r12
  bool v34; // r14
  _DWORD *v35; // rdi
  _DWORD *v36; // rdi
  __int64 *v37; // rbx
  __int64 v38; // rbp
  __int64 v39; // rdx
  unsigned int v40; // ebp
  __int64 v41; // rdi
  __int64 v42; // rcx
  char v43; // al
  unsigned int v44; // eax
  char v45; // cl
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r14
  unsigned int *v49; // r12
  __int64 v50; // rdi
  int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rbp
  unsigned int **v58; // rax
  unsigned int *v59; // r12
  __int64 v60; // rdi
  unsigned int *v61; // rsi
  __int64 *v62; // r14
  __int64 v63; // rax
  __int64 *v64; // rbx
  __int64 v65; // rax
  char *v66; // rbx
  char *v67; // r12
  _DWORD *v68; // rbp
  bool v69; // zf
  void *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // eax
  __int64 *v74; // rdx
  __int64 v75; // r13
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdi
  int v80; // edx
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int8 v86; // al
  __int64 v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rbx
  _Unwind_Exception *v91; // [rsp+0h] [rbp-168h]
  __int64 v92; // [rsp+8h] [rbp-160h]
  int v93; // [rsp+10h] [rbp-158h]
  void *v94; // [rsp+18h] [rbp-150h]
  void *v95; // [rsp+18h] [rbp-150h]
  _DWORD *v96; // [rsp+18h] [rbp-150h]
  void *v97; // [rsp+20h] [rbp-148h]
  char v98; // [rsp+28h] [rbp-140h]
  void (__fastcall ***v99)(_QWORD); // [rsp+28h] [rbp-140h]
  void (__fastcall ***v100)(_QWORD); // [rsp+30h] [rbp-138h]
  void (__fastcall ***v101)(_QWORD); // [rsp+38h] [rbp-130h]
  int v102[2]; // [rsp+48h] [rbp-120h]
  int v103[2]; // [rsp+48h] [rbp-120h]
  void *v104; // [rsp+60h] [rbp-108h] BYREF
  __int64 v105; // [rsp+68h] [rbp-100h] BYREF
  __int64 v106; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v107; // [rsp+78h] [rbp-F0h] BYREF
  __int64 *v108; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD *v109; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v110; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v111[8]; // [rsp+98h] [rbp-D0h] BYREF
  void *v112; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+A8h] [rbp-C0h]
  _BYTE v114[184]; // [rsp+B0h] [rbp-B8h] BYREF

  result = *(unsigned __int8 *)(a1 + 746);
  v91 = a2;
  v92 = a3;
  v98 = result;
  if ( (_BYTE)result )
    return result;
  v6 = sub_186B270(0x80u);
  v7 = 0;
  v8 = (_DWORD *)v6;
  v9 = *(_QWORD *)(a3 + 8);
  if ( v9 )
    v7 = *(_DWORD *)(v9 - 4) != 0;
  v93 = (int)v8;
  sub_ED29A0(v8, *(_QWORD *)(a1 + 8), 1, v7);
  exception_cleanup = a2->exception_cleanup;
  ++v8[8];
  v104 = v8;
  if ( exception_cleanup )
  {
    v11 = &exception_cleanup[*((unsigned int *)exception_cleanup - 1)];
    if ( exception_cleanup != v11 )
    {
      while ( 1 )
      {
        sub_EDBA20((int)v8, *exception_cleanup++, 0, v91, v92, v93, (__int64)v94, (__int64)v97);
        if ( v11 == exception_cleanup )
          break;
        LODWORD(v8) = (_DWORD)v104;
      }
    }
  }
  v12 = *(_QWORD **)(v92 + 8);
  if ( v12 )
  {
    for ( i = &v12[*((unsigned int *)v12 - 1)]; i != v12; ++v12 )
    {
      v14 = *v12;
      v15 = sub_15D3210(*(_QWORD *)v104, *v12);
      sub_EDBA20((int)v104, v14, v15, v91, v92, v93, (__int64)v94, (__int64)v97);
    }
  }
  v16 = *(_QWORD *)(a1 + 8);
  v112 = nullptr;
  v17 = sub_D156B0(v16, (unsigned int)&v112);
  if ( *(_BYTE *)(a1 + 749) )
  {
    v18 = sub_EE4CD0();
    v19 = 0;
  }
  else
  {
    v75 = *(_QWORD *)(a1 + 8);
    v110 = 0;
    v18 = sub_186B270(0x160u);
    *(_QWORD *)v18 = qword_1C636A0;
    *(_QWORD *)(v18 + 16) = qword_1C63778;
    *(_DWORD *)(v18 + 8) = 0;
    *(_DWORD *)(v18 + 24) = 0;
    *(_BYTE *)(v18 + 28) = 0;
    *(_QWORD *)(v18 + 32) = 0;
    *(_DWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 48) = &off_1C62200;
    *(_QWORD *)(v18 + 64) = 0;
    *(_QWORD *)(v18 + 72) = 0;
    *(_QWORD *)(v18 + 88) = 0;
    *(_QWORD *)(v18 + 96) = 0;
    *(_QWORD *)(v18 + 104) = v75;
    *(_QWORD *)(v18 + 112) = 0;
    *(_QWORD *)(v18 + 120) = 0;
    *(_QWORD *)(v18 + 128) = 0;
    sub_180C0A0(v18 + 136);
    *(_QWORD *)(v18 + 176) = v75;
    *(_QWORD *)v18 = &off_1C4C5D8;
    *(_QWORD *)(v18 + 16) = &off_1C4C6F0;
    sub_1858590(v18 + 184, &v110);
    *(_OWORD *)(v18 + 192) = 0;
    sub_180C0A0(v18 + 208);
    v76 = *(_QWORD *)(v75 + 856);
    *(_QWORD *)(v18 + 248) = 0;
    *(_QWORD *)(v18 + 256) = v75;
    *(_QWORD *)(v18 + 264) = v76;
    *(_QWORD *)(v18 + 272) = 0;
    *(_QWORD *)(v18 + 280) = 0;
    if ( v76 )
      ++*(_DWORD *)(v76 + 8);
    *(_QWORD *)(v18 + 312) = v75;
    v19 = 1;
    *(_QWORD *)(v18 + 304) = sub_230350;
    *(_QWORD *)(v18 + 320) = 0;
    *(_QWORD *)(v18 + 328) = 0;
    *(_QWORD *)(v18 + 336) = 0;
    *(_BYTE *)(v18 + 344) = 0;
    *(_OWORD *)(v18 + 288) = 0;
  }
  v20 = *(_QWORD *)(a1 + 8);
  v109 = nullptr;
  v95 = (void *)sub_CF56E0(v20, (unsigned int)&v109);
  v21 = sub_D156B0(*(_QWORD *)(a1 + 8), (int)a1 + 288);
  v22 = sub_EE7B50(v21, v95, v18, v17);
  v96 = (_DWORD *)v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  sub_18572D0(&v109);
  if ( v19 )
    sub_18572D0(&v110);
  sub_18572D0(&v112);
  v110 = a1 + 288;
  sub_17F9A60(v111, "opt");
  v23 = 0;
  do
  {
    while ( 1 )
    {
LABEL_20:
      v24 = *((_QWORD *)v104 + 9);
      v25 = *(_QWORD *)v104;
      if ( !v24 )
        goto LABEL_36;
      v26 = *(_BYTE *)(v24 + 3) >> 6;
      if ( v26 )
      {
        if ( v26 == 1 )
          goto LABEL_66;
      }
      else
      {
        do
        {
          v24 = *(_QWORD *)(v24 + 16);
          v26 = *(_BYTE *)(v24 + 3) >> 6;
        }
        while ( !v26 );
        if ( v26 == 1 )
        {
LABEL_66:
          v27 = *(_DWORD *)(v24 + 4) + 1;
          goto LABEL_25;
        }
      }
      v27 = v26 == 2 ? *(_DWORD *)(v24 + 4) - 1 : *(_DWORD *)(v24 + 4);
LABEL_25:
      if ( v23 >= v27 )
        goto LABEL_36;
      v112 = nullptr;
      v28 = *(_QWORD *)(a1 + 8);
      v29 = v28;
      if ( (*((_BYTE *)v104 + 123) & 0x10) == 0 )
        break;
      v30 = *((_QWORD *)v104 + 13);
      v31 = 17;
      do
      {
        if ( *(char *)(v30 + 3) >= 0 )
        {
          if ( v23 == *(_DWORD *)(v30 + 4) )
          {
            v32 = (unsigned int **)(v30 + 8);
LABEL_31:
            v33 = *v32;
            if ( !*v32 )
              goto LABEL_110;
            goto LABEL_32;
          }
        }
        else if ( *(_BYTE *)(v30 + 3) >> 6 != 2 )
        {
          v32 = (unsigned int **)(*(_QWORD *)(v30 + 16) + 8LL * v23);
          goto LABEL_31;
        }
        v30 = *(_QWORD *)(v30 + 16);
        --v31;
      }
      while ( v31 );
      sub_236900((_QWORD *)(v25 + 672), (__int64 *)v104 + 13);
      v28 = *(_QWORD *)(a1 + 8);
      v33 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)v104 + 13) + 16LL) + 8LL * v23);
      if ( !v33 )
      {
LABEL_110:
        sub_15D6A80(v28, 0, &v112);
        v35 = v112;
        if ( v112 )
          goto LABEL_118;
        goto LABEL_111;
      }
LABEL_32:
      *v33 = (*v33 + 1) & 0x3FFFFFFF | *v33 & 0xC0000000;
      sub_15D6A80(v28, v33, &v112);
      if ( v112 )
      {
        v34 = *((_DWORD *)v112 - 1) != 0;
        sub_234C20((__int64 *)(v29 + 648), v33);
        v35 = v112;
        if ( v112 )
          goto LABEL_119;
        goto LABEL_34;
      }
      sub_234C20((__int64 *)(v29 + 648), v33);
      if ( !v112 )
        goto LABEL_111;
      ++v23;
      sub_186B220((char *)v112 - 8);
    }
    sub_15D6A80(v28, 0, &v112);
    v35 = v112;
    if ( !v112 )
    {
LABEL_111:
      ++v23;
      goto LABEL_20;
    }
LABEL_118:
    v34 = *(v35 - 1) != 0;
LABEL_119:
    sub_186B220(v35 - 2);
LABEL_34:
    ++v23;
  }
  while ( !v34 );
  v98 = v34;
LABEL_36:
  if ( !(unsigned __int8)sub_1859630(v110, "elim_01", v111, 1) || *(_QWORD *)(a1 + 760) || v98 || *(_BYTE *)(a1 + 749) )
  {
    if ( v96 )
      ++v96[2];
    sub_2EB3A0(*(void (__fastcall ****)(_QWORD))(a1 + 736));
    v99 = nullptr;
    v100 = nullptr;
    *(_QWORD *)(a1 + 736) = v96;
    v36 = v96;
    v101 = nullptr;
  }
  else
  {
    v77 = *(_QWORD *)(a1 + 8);
    v112 = nullptr;
    v78 = sub_733230(v77, &v112);
    v101 = (void (__fastcall ***)(_QWORD))v78;
    if ( v78 )
      ++*(_DWORD *)(v78 + 8);
    sub_18572D0(&v112);
    v79 = *(_QWORD *)(a1 + 8);
    v112 = nullptr;
    v84 = sub_C41930(v79, (unsigned int)&v112, v80, v81, v82, v83, (__int64)v91);
    v100 = (void (__fastcall ***)(_QWORD))v84;
    if ( v84 )
      ++*(_DWORD *)(v84 + 8);
    sub_18572D0(&v112);
    v85 = sub_C8AE60(*(_QWORD *)(a1 + 8));
    v99 = (void (__fastcall ***)(_QWORD))v85;
    if ( v85 )
      ++*(_DWORD *)(v85 + 8);
    v109 = nullptr;
    v86 = sub_1859630(v110, "pb.compile_equality", v111, 0);
    sub_1862300(&v109, "compile_equality", v86);
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD **))(*v100)[14])(v100, &v109);
    v87 = *(_QWORD *)(a1 + 8);
    v112 = nullptr;
    v88 = sub_D156B0(v87, (unsigned int)&v112);
    v89 = sub_EE7C20(v96, v101, v100, v99, v88);
    v90 = v89;
    if ( v89 )
      ++*(_DWORD *)(v89 + 8);
    sub_2EB3A0(*(void (__fastcall ****)(_QWORD))(a1 + 736));
    *(_QWORD *)(a1 + 736) = v90;
    sub_18572D0(&v112);
    sub_18572D0(&v109);
    v36 = *(_DWORD **)(a1 + 736);
  }
  v112 = v114;
  v113 = 0x1000000000LL;
  (*(void (__fastcall **)(_DWORD *, void **, void **))(*(_QWORD *)v36 + 128LL))(v36, &v104, &v112);
  v37 = *(__int64 **)v112;
  v38 = *(_QWORD *)(*(_QWORD *)v112 + 8LL);
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  sub_2EB3E0(*(void (****)(void))(a1 + 624));
  *(_QWORD *)(a1 + 624) = v38;
  sub_2FCDE0(v91);
  v39 = v37[9];
  v40 = 0;
  v41 = *v37;
  if ( !v39 )
    goto LABEL_80;
  while ( 2 )
  {
    v42 = v39;
    v43 = *(_BYTE *)(v39 + 3) >> 6;
    if ( v43 )
    {
      if ( v43 != 1 )
        goto LABEL_47;
LABEL_69:
      v44 = *(_DWORD *)(v42 + 4) + 1;
    }
    else
    {
      do
      {
        v42 = *(_QWORD *)(v42 + 16);
        v43 = *(_BYTE *)(v42 + 3) >> 6;
      }
      while ( !v43 );
      if ( v43 == 1 )
        goto LABEL_69;
LABEL_47:
      if ( v43 == 2 )
        v44 = *(_DWORD *)(v42 + 4) - 1;
      else
        v44 = *(_DWORD *)(v42 + 4);
    }
    v45 = *((_BYTE *)v37 + 123);
    if ( v40 >= v44 )
      goto LABEL_81;
    v46 = *(_QWORD *)(v92 + 8);
    if ( v46 && *(_DWORD *)(v46 - 4) )
    {
      v47 = *((_BYTE *)v37 + 123) & 0x10;
      v48 = *(_QWORD *)(a1 + 8);
      v109 = nullptr;
      if ( (_DWORD)v47 )
      {
        v49 = *(unsigned int **)sub_2FCF50(v41 + 672, v37 + 13, v40, v47);
        if ( v49 )
          *v49 = (*v49 + 1) & 0x3FFFFFFF | *v49 & 0xC0000000;
        v50 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v50 = v48;
        v49 = nullptr;
      }
      sub_15D6A80(v50, v49, &v109);
      if ( v109 && (v51 = *((_DWORD *)v109 - 1)) != 0 )
      {
        if ( v51 == 1 )
        {
          *(_QWORD *)v103 = *v109;
          if ( *(_QWORD *)v103 == sub_2FCEB0(v37, v40) )
          {
            if ( v49 )
              sub_234C20((__int64 *)(v48 + 648), v49);
            if ( !v109 )
              goto LABEL_79;
            goto LABEL_78;
          }
        }
        v52 = sub_2FCEB0(v37, v40);
        if ( *(_WORD *)(v52 + 4) || !sub_2EB300(*(_QWORD **)(a1 + 656), *(_DWORD *)(a1 + 664), *(_QWORD *)(v52 + 16)) )
        {
          *(_QWORD *)v102 = *(_QWORD *)(a1 + 8);
          sub_2FCEB0(v37, v40);
          if ( v109 )
            v54 = *((unsigned int *)v109 - 1);
          else
            v54 = 0;
          sub_15EC1C0(*(_QWORD *)(a1 + 8), v54);
          v55 = sub_15E1B70(v102[0]);
          v108 = (__int64 *)v55;
          if ( v55 )
            ++*(_DWORD *)(v55 + 8);
          sub_2F13A0(&v91->exception_cleanup, &v108);
        }
        else
        {
          v53 = sub_2FCEB0(v37, v40);
          v107 = v53;
          if ( v53 )
            ++*(_DWORD *)(v53 + 8);
          sub_2F13A0(&v91->exception_cleanup, &v107);
        }
      }
      else
      {
        v72 = sub_2FCEB0(v37, v40);
        v106 = v72;
        if ( v72 )
          ++*(_DWORD *)(v72 + 8);
        sub_2F13A0(&v91->exception_cleanup, &v106);
      }
      if ( v49 )
        sub_234C20((__int64 *)(v48 + 648), v49);
      if ( !v109 )
        goto LABEL_79;
LABEL_78:
      sub_186B220(v109 - 1);
      goto LABEL_79;
    }
    if ( (*((_BYTE *)v37 + 123) & 0x20) != 0 )
    {
      v71 = *(_QWORD *)(v41 + 864);
      goto LABEL_114;
    }
    v73 = 18;
    while ( 2 )
    {
      if ( !--v73 )
      {
        sub_233F80((__int64 *)(v41 + 616), (_DWORD *)v37 + 18);
        v74 = (__int64 *)(*(_QWORD *)(v37[9] + 16) + 8LL * v40);
        goto LABEL_130;
      }
      if ( *(char *)(v39 + 3) < 0 )
      {
        if ( *(_BYTE *)(v39 + 3) >> 6 != 2 )
        {
          v74 = (__int64 *)(*(_QWORD *)(v39 + 16) + 8LL * v40);
          goto LABEL_130;
        }
        goto LABEL_132;
      }
      if ( v40 != *(_DWORD *)(v39 + 4) )
      {
LABEL_132:
        v39 = *(_QWORD *)(v39 + 16);
        continue;
      }
      break;
    }
    v74 = (__int64 *)(v39 + 8);
LABEL_130:
    v71 = *v74;
LABEL_114:
    v105 = v71;
    if ( v71 )
      ++*(_DWORD *)(v71 + 8);
    sub_2F13A0(&v91->exception_cleanup, &v105);
LABEL_79:
    v39 = v37[9];
    v41 = *v37;
    ++v40;
    if ( v39 )
      continue;
    break;
  }
LABEL_80:
  v45 = *((_BYTE *)v37 + 123);
LABEL_81:
  if ( (v45 & 0x20) == 0 )
    goto LABEL_94;
  v56 = v45 & 0x10;
  v57 = *(_QWORD *)(a1 + 8);
  v108 = nullptr;
  if ( (_DWORD)v56 )
  {
    v58 = (unsigned int **)sub_2FCF50(v41 + 672, v37 + 13, 0, v56);
    v59 = *v58;
    if ( *v58 )
    {
      v60 = *(_QWORD *)(a1 + 8);
      v61 = *v58;
      *v59 = (*v59 + 1) & 0x3FFFFFFF | *v59 & 0xC0000000;
      sub_15D6A80(v60, v61, &v108);
      v62 = v108;
      if ( v108 )
      {
        v63 = *((unsigned int *)v108 - 1);
        if ( (_DWORD)v63 )
          goto LABEL_86;
      }
LABEL_91:
      sub_234C20((__int64 *)(v57 + 648), v59);
LABEL_92:
      v62 = v108;
      if ( v108 )
        goto LABEL_93;
      goto LABEL_94;
    }
    sub_15D6A80(*(_QWORD *)(a1 + 8), 0, &v108);
  }
  else
  {
    sub_15D6A80(v57, 0, &v108);
  }
  v62 = v108;
  if ( v108 )
  {
    v63 = *((unsigned int *)v108 - 1);
    v59 = nullptr;
    if ( (_DWORD)v63 )
    {
LABEL_86:
      v64 = &v62[v63];
      do
      {
        v65 = *v62;
        v109 = (_QWORD *)v65;
        if ( v65 )
          ++*(_DWORD *)(v65 + 8);
        sub_2F13A0((_QWORD *)(a1 + 728), &v109);
        ++v62;
      }
      while ( v64 != v62 );
      if ( v59 )
        goto LABEL_91;
      goto LABEL_92;
    }
LABEL_93:
    sub_186B220(v62 - 1);
  }
LABEL_94:
  v66 = (char *)v112;
  v67 = (char *)v112 + 8 * (unsigned int)v113;
  if ( v112 < v67 )
  {
    do
    {
      while ( 1 )
      {
        v68 = *(_DWORD **)v66;
        if ( *(_QWORD *)v66 )
        {
          v69 = v68[8]-- == 1;
          if ( v69 )
            break;
        }
        v66 += 8;
        if ( v66 >= v67 )
          goto LABEL_100;
      }
      v66 += 8;
      sub_ED44E0(v68);
      sub_186B220(v68);
    }
    while ( v66 < v67 );
LABEL_100:
    v66 = (char *)v112;
  }
  if ( v66 != v114 && v66 )
    sub_186B220(v66);
  sub_2EB3A0(v99);
  sub_2EB3A0(v100);
  sub_2EB3A0(v101);
  sub_18572D0(v111);
  result = sub_2EB3A0((void (__fastcall ***)(_QWORD))v96);
  v70 = v104;
  if ( v104 )
  {
    v69 = (*((_DWORD *)v104 + 8))-- == 1;
    if ( v69 )
    {
      sub_ED44E0(v70);
      return sub_186B220(v70);
    }
  }
  return result;
}

