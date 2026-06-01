void __fastcall sub_1718F80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r12
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 (*v12)(void); // rdx
  __int64 v13; // rcx
  __int64 (*v14)(void); // rax
  __int64 v15; // rdx
  char v16; // bp
  __int64 *v17; // rsi
  char *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 (*v27)(void); // rdx
  __int64 (__fastcall *v28)(__int64); // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  __int64 v47; // r12
  char v48; // dl
  unsigned __int64 v49; // rsi
  char *v50; // rdi
  __int64 v51; // r8
  unsigned __int64 *v52; // rcx
  char *v53; // rax
  char *v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rcx
  char *v57; // rdi
  char *v58; // rax
  char *v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // rbx
  _QWORD *v66; // r13
  _QWORD *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  char v74; // di
  unsigned __int64 v75; // rsi
  char *v76; // rcx
  __int64 v77; // rdi
  unsigned __int64 *v78; // rdx
  char *v79; // rax
  char *v80; // rcx
  char *v81; // rax
  char *v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // [rsp-10h] [rbp-398h]
  unsigned __int64 v88; // [rsp-8h] [rbp-390h]
  __int64 v89; // [rsp+8h] [rbp-380h]
  __int64 v90; // [rsp+8h] [rbp-380h]
  __int128 v91; // [rsp+20h] [rbp-368h] BYREF
  __int64 v92; // [rsp+30h] [rbp-358h]
  unsigned int v93[4]; // [rsp+40h] [rbp-348h] BYREF
  int v94; // [rsp+50h] [rbp-338h]
  __int64 v95; // [rsp+54h] [rbp-334h]
  int v96; // [rsp+60h] [rbp-328h]
  void *v97[2]; // [rsp+68h] [rbp-320h] BYREF
  __int64 v98; // [rsp+78h] [rbp-310h]
  char v99; // [rsp+80h] [rbp-308h]
  __int64 v100; // [rsp+88h] [rbp-300h]
  __int64 v101; // [rsp+90h] [rbp-2F8h]
  __int64 v102; // [rsp+98h] [rbp-2F0h]
  void *ptr; // [rsp+A0h] [rbp-2E8h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-2E0h]
  __int64 v105; // [rsp+B0h] [rbp-2D8h]
  __int64 v106; // [rsp+B8h] [rbp-2D0h] BYREF
  __int64 v107; // [rsp+C0h] [rbp-2C8h]
  char v108; // [rsp+F8h] [rbp-290h]
  _BYTE *v109; // [rsp+100h] [rbp-288h]
  __int64 v110; // [rsp+108h] [rbp-280h]
  int v111; // [rsp+110h] [rbp-278h]
  char v112; // [rsp+114h] [rbp-274h]
  _BYTE v113[72]; // [rsp+118h] [rbp-270h] BYREF
  __int64 v114; // [rsp+160h] [rbp-228h] BYREF
  __int64 v115; // [rsp+168h] [rbp-220h]
  __int64 v116; // [rsp+248h] [rbp-140h] BYREF
  __int64 v117; // [rsp+250h] [rbp-138h]
  __int64 v118; // [rsp+258h] [rbp-130h]
  int v119[62]; // [rsp+290h] [rbp-F8h] BYREF

  v5 = a4;
  v7 = sub_1A5B7C0(*a1, *(_QWORD *)(*a1 + 192), a3, a4, 0, 0);
  if ( v7 )
  {
    v9 = v7;
    v10 = (_QWORD *)a1[1];
    if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x14 )
    {
      LODWORD(ptr) = 33;
      BYTE4(ptr) = 0;
      v104 = 0;
      v105 = 0;
      v106 = 0;
      v107 = 0;
      v109 = v113;
      v11 = *v10;
      v108 = 0;
      v12 = *(__int64 (**)(void))(v11 + 48);
      v112 = 1;
      v110 = 8;
      v111 = 0;
      if ( (char *)v12 == (char *)sub_15A1860 )
      {
        v13 = (__int64)(v10 + 3);
      }
      else
      {
        v85 = v12();
        v10 = (_QWORD *)a1[1];
        v13 = v85;
        v11 = *v10;
      }
      v14 = *(__int64 (**)(void))(v11 + 40);
      if ( (char *)v14 == (char *)sub_15A1850 )
      {
        v15 = v10[6];
      }
      else
      {
        v90 = v13;
        v86 = v14();
        v13 = v90;
        v15 = v86;
      }
      v16 = 1;
      sub_16FF270((__int64)&v114, *a1, v15, v13, (unsigned int *)&ptr, v8, 0);
      sub_17038E0((__int64)&ptr);
      v104 = 16;
      v17 = &v116;
      ptr = &v106;
      LODWORD(v105) = 0;
      BYTE4(v105) = 1;
      sub_16FF160((__int64)&v116, (std::__detail::_List_node_base *)&v116);
      v21 = v88;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v9 + 120);
        if ( !v22 )
        {
          v17 = *(__int64 **)(v9 + 96);
          sub_A794E0(v17 + 11, (__int64)v17, v21, (__int64)v18, v19, v20);
          v22 = *(_QWORD *)(v9 + 120);
        }
        v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v23 )
        {
          v21 = v23;
          if ( (*(_BYTE *)(v23 + 72) & 1) != 0 )
          {
            sub_BA8900(v9);
            v21 = *(_QWORD *)(v9 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          }
          v24 = *(_QWORD *)(v21 + 56);
          if ( v24 )
            break;
        }
LABEL_17:
        v16 = 0;
        v9 = sub_BAB630(v9, (__int64)v17, v21, (__int64)v18, v19, v20);
        if ( !v9 )
        {
          sub_16FF8C0((__int64)&v116, v117);
          v25 = a1[1];
          if ( v114 != v115 )
            v9 = v114;
          if ( v25 )
            sub_1700D50(*a1, v25, v119, v9, -1431655765 * ((v115 - v114) >> 5));
          goto LABEL_22;
        }
      }
      while ( *(char *)(v24 + 28) < 0 || (*(_BYTE *)(v24 + 8) & 6) != 0 )
      {
        v24 = *(_QWORD *)(v24 + 128);
        if ( !v24 )
          goto LABEL_17;
      }
LABEL_77:
      if ( v16 && sub_BA8FC0(v24) )
        goto LABEL_74;
      v17 = nullptr;
      if ( (*(_QWORD *)(v24 + 40) & 7) == 0 )
        v17 = (__int64 *)(*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFFFFFFF8LL);
      v21 = BYTE4(v105);
      if ( !BYTE4(v105) )
        goto LABEL_87;
      v57 = (char *)ptr;
      v20 = HIDWORD(v104);
      v19 = 8LL * HIDWORD(v104);
      v59 = (char *)ptr + v19;
      if ( ptr != (char *)ptr + v19 )
      {
        v58 = (char *)ptr;
        if ( v17 == *(__int64 **)ptr )
        {
LABEL_99:
          v21 = 0;
          goto LABEL_67;
        }
        while ( 1 )
        {
          v58 += 8;
          if ( v59 == v58 )
            break;
          if ( v17 == *(__int64 **)v58 )
            goto LABEL_99;
        }
      }
      if ( HIDWORD(v104) < (unsigned int)v104 )
      {
        v20 = (unsigned int)++HIDWORD(v104);
        *(_QWORD *)v59 = v17;
        v57 = (char *)ptr;
        v58 = (char *)ptr + v19;
      }
      else
      {
LABEL_87:
        v58 = (char *)sub_2236760(&ptr, v17);
        v57 = (char *)ptr;
        if ( !BYTE4(v105) )
        {
          v18 = (char *)ptr + 8 * (unsigned int)v104;
LABEL_68:
          if ( v18 != v58 )
          {
            v17 = (__int64 *)(*(_QWORD *)v58 + 2LL);
            if ( (unsigned __int64)v17 <= 1 )
            {
              do
                v58 += 8;
              while ( v18 != v58 && *(_QWORD *)v58 >= 0xFFFFFFFFFFFFFFFELL );
            }
          }
          if ( (_BYTE)v21 )
          {
            v60 = *(_QWORD *)(*a1 + 544);
            v94 = sub_16FE9F0((__int64)&v114, v24);
            *(_OWORD *)v97 = 0;
            *(_QWORD *)v93 = v24;
            v95 = 0;
            v99 = v99 & 0x80 | 0x40;
            v96 = 0;
            v98 = 0;
            v100 = 0;
            v101 = 0;
            v102 = 0;
            sub_15A3440(v93, 1, v61, v62, v63, v64);
            v17 = (__int64 *)v93;
            sub_1715C60((__int64)&v114, (__int64)v93, v60, 0, 0, 0);
            v65 = v97[1];
            v66 = v97[0];
            if ( v97[1] != v97[0] )
            {
              do
              {
                while ( 1 )
                {
                  v67 = (_QWORD *)v66[3];
                  v21 = (unsigned __int64)(v66 + 5);
                  if ( v67 == v66 + 5 )
                    break;
                  operator delete(v67);
                  v66 += 8;
                  if ( v66 == v65 )
                    goto LABEL_94;
                }
                v66 += 8;
              }
              while ( v65 != v66 );
LABEL_94:
              v66 = v97[0];
            }
            if ( v66 )
              operator delete(v66);
          }
LABEL_74:
          while ( 1 )
          {
            v24 = *(_QWORD *)(v24 + 128);
            if ( !v24 )
              goto LABEL_17;
            if ( *(char *)(v24 + 28) >= 0 && (*(_BYTE *)(v24 + 8) & 6) == 0 )
              goto LABEL_77;
          }
        }
      }
LABEL_67:
      v18 = &v57[8 * HIDWORD(v104)];
      goto LABEL_68;
    }
  }
  else
  {
    v10 = (_QWORD *)a1[1];
  }
  LODWORD(ptr) = 33;
  BYTE4(ptr) = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v109 = v113;
  v26 = *v10;
  v108 = 0;
  v27 = *(__int64 (**)(void))(v26 + 48);
  v112 = 1;
  v110 = 8;
  v111 = 0;
  if ( (char *)v27 != (char *)sub_15A1860 )
  {
    v83 = v27();
    v10 = (_QWORD *)a1[1];
    v29 = v83;
    v28 = *(__int64 (__fastcall **)(__int64))(*v10 + 40LL);
    if ( v28 == sub_15A1850 )
      goto LABEL_27;
LABEL_127:
    v89 = v29;
    v84 = ((__int64 (*)(void))v28)();
    v29 = v89;
    v30 = v84;
    goto LABEL_28;
  }
  v28 = *(__int64 (__fastcall **)(__int64))(v26 + 40);
  v29 = (__int64)(v10 + 3);
  if ( v28 != sub_15A1850 )
    goto LABEL_127;
LABEL_27:
  v30 = v10[6];
LABEL_28:
  sub_16FF270((__int64)&v114, *a1, v30, v29, (unsigned int *)&ptr, v8, 0);
  sub_17038E0((__int64)&ptr);
  v31 = *a1;
  ptr = &v106;
  v104 = 16;
  LODWORD(v105) = 0;
  BYTE4(v105) = 1;
  v32 = sub_1A5B7C0(v31, *(_QWORD *)(v31 + 192), a3, v5, 0, 0);
  v36 = v32;
  if ( !v32 || (*(_BYTE *)(v32 + 28) & 0x7F) != 0x14 )
    goto LABEL_39;
  v37 = *(_QWORD *)(v32 + 120);
  if ( !v37 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(v36 + 96) + 88LL), *(_QWORD *)(v36 + 96), v33, v87, v34, v35);
    v37 = *(_QWORD *)(v36 + 120);
  }
  v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v38 )
    goto LABEL_39;
  if ( (*(_BYTE *)(v38 + 72) & 1) != 0 )
  {
    sub_BA8900(v36);
    v38 = *(_QWORD *)(v36 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v39 = *(_QWORD *)(v38 + 56);
  if ( !v39 )
    goto LABEL_39;
  while ( *(char *)(v39 + 28) < 0 || (*(_BYTE *)(v39 + 8) & 6) != 0 )
  {
    v39 = *(_QWORD *)(v39 + 128);
    if ( !v39 )
      goto LABEL_39;
  }
  v74 = BYTE4(v105);
LABEL_104:
  v75 = *(_QWORD *)(v39 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v39 + 40) & 7) != 0 )
    v75 = 0;
  if ( v74 )
  {
    v76 = (char *)ptr;
    v77 = 8LL * HIDWORD(v104);
    v78 = (unsigned __int64 *)((char *)ptr + v77);
    if ( ptr != (char *)ptr + v77 )
    {
      v79 = (char *)ptr;
      if ( v75 == *(_QWORD *)ptr )
        goto LABEL_114;
      while ( 1 )
      {
        v79 += 8;
        if ( v78 == (unsigned __int64 *)v79 )
          break;
        if ( v75 == *(_QWORD *)v79 )
          goto LABEL_114;
      }
    }
    if ( HIDWORD(v104) < (unsigned int)v104 )
    {
      ++HIDWORD(v104);
      *v78 = v75;
      v76 = (char *)ptr;
      v79 = (char *)ptr + v77;
LABEL_114:
      v74 = 1;
      v80 = &v76[8 * HIDWORD(v104)];
      goto LABEL_115;
    }
  }
  v79 = (char *)sub_2236760(&ptr, v75);
  v74 = BYTE4(v105);
  v76 = (char *)ptr;
  if ( BYTE4(v105) )
    goto LABEL_114;
  v80 = (char *)ptr + 8 * (unsigned int)v104;
LABEL_115:
  if ( v80 != v79 && *(_QWORD *)v79 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v81 = v79 + 8;
    do
    {
      v82 = v81;
      if ( v80 == v81 )
        break;
      v81 += 8;
    }
    while ( *(_QWORD *)v82 >= 0xFFFFFFFFFFFFFFFELL );
  }
  while ( 1 )
  {
    v39 = *(_QWORD *)(v39 + 128);
    if ( !v39 )
      break;
    if ( *(char *)(v39 + 28) >= 0 && (*(_BYTE *)(v39 + 8) & 6) == 0 )
      goto LABEL_104;
  }
LABEL_39:
  v40 = operator new(0x28u);
  *(_QWORD *)(v40 + 16) = 0;
  *(_QWORD *)(v40 + 24) = 0;
  *(_DWORD *)(v40 + 32) = 0;
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v40,
    (std::__detail::_List_node_base *)&v116);
  ++v118;
  v41 = sub_168B6C0((__int64)a1);
  v46 = sub_704780(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v41 + 2264) + 80LL) + 72LL),
          *(_QWORD *)(*(_QWORD *)(v41 + 2264) + 80LL),
          v42,
          v43,
          v44,
          v45);
  v47 = sub_B8E970((__int64)(v46 + 5));
  if ( v47 )
  {
    while ( (*(_BYTE *)(v47 + 28) & 0x7F) != 0x17 )
    {
LABEL_59:
      v47 = *(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v47 )
        goto LABEL_60;
    }
    v48 = BYTE4(v105);
    v49 = *(_QWORD *)(v47 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v47 + 40) & 7) != 0 )
      v49 = 0;
    if ( !BYTE4(v105) )
      goto LABEL_100;
    v50 = (char *)ptr;
    v51 = 8LL * HIDWORD(v104);
    v52 = (unsigned __int64 *)((char *)ptr + v51);
    if ( ptr != (char *)ptr + v51 )
    {
      v53 = (char *)ptr;
      if ( v49 == *(_QWORD *)ptr )
      {
LABEL_102:
        v48 = 0;
        goto LABEL_51;
      }
      while ( 1 )
      {
        v53 += 8;
        if ( v52 == (unsigned __int64 *)v53 )
          break;
        if ( v49 == *(_QWORD *)v53 )
          goto LABEL_102;
      }
    }
    if ( HIDWORD(v104) < (unsigned int)v104 )
    {
      ++HIDWORD(v104);
      *v52 = v49;
      v50 = (char *)ptr;
      v53 = (char *)ptr + v51;
    }
    else
    {
LABEL_100:
      v53 = (char *)sub_2236760(&ptr, v49);
      v50 = (char *)ptr;
      if ( !BYTE4(v105) )
      {
        v54 = (char *)ptr + 8 * (unsigned int)v104;
LABEL_52:
        if ( v54 != v53 && (*(_QWORD *)v53 == -2 || *(_QWORD *)v53 == -1) )
        {
          do
            v53 += 8;
          while ( v54 != v53 && *(_QWORD *)v53 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v48 )
        {
          v68 = *a1;
          v91 = 0;
          v69 = *(_QWORD *)(v68 + 544);
          v92 = 0;
          v94 = sub_16FE9F0((__int64)&v114, v47);
          *(_QWORD *)v93 = v47;
          *(_OWORD *)v97 = v91;
          v95 = 0;
          v91 = 0;
          v98 = v92;
          v96 = 0;
          v92 = 0;
          v100 = 0;
          v99 = v99 & 0x80 | 0x40;
          v101 = 0;
          v102 = 0;
          sub_15A3440(v93, 1, v70, v71, v72, v73);
          sub_1715C60((__int64)&v114, (__int64)v93, v69, 0, 0, 0);
          sub_1705410((__int64)v97);
          sub_1705410((__int64)&v91);
        }
        goto LABEL_59;
      }
    }
LABEL_51:
    v54 = &v50[8 * HIDWORD(v104)];
    goto LABEL_52;
  }
LABEL_60:
  sub_16FF8C0((__int64)&v116, v117);
  v55 = a1[1];
  v56 = 0;
  if ( v114 != v115 )
    v56 = v114;
  if ( v55 )
  {
    sub_1700D50(*a1, v55, v119, v56, -1431655765 * ((v115 - v114) >> 5));
    if ( !BYTE4(v105) )
      goto LABEL_64;
  }
  else
  {
LABEL_22:
    if ( !BYTE4(v105) )
LABEL_64:
      free(ptr);
  }
  sub_1700A70((__int64)&v114);
}
