void __fastcall sub_AAD140(_QWORD *a1, __int64 a2, char *a3, __int64 a4, char a5, unsigned __int64 *a6)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r15
  unsigned __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r13
  __int64 v39; // rax
  int *v40; // rsi
  int *v41; // rdx
  unsigned __int64 v42; // r13
  int *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int *v55; // r14
  __int64 v56; // rax
  int *v57; // rdx
  unsigned __int64 v58; // rbp
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // rax
  int *v62; // rdx
  _BOOL8 v63; // rdi
  __int64 i; // r12
  const char *v65; // rsi
  _QWORD **v66; // rbp
  _QWORD **v67; // r12
  __int64 v68; // r13
  unsigned int v69; // edx
  int *v70; // r15
  unsigned __int64 v71; // r13
  int *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  int *v75; // rdx
  _BOOL8 v76; // rdi
  unsigned __int64 v77; // rsi
  int *v78; // rax
  unsigned __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdi
  __int64 v85; // rbp
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdi
  __int64 v91; // r15
  __int64 v92; // r8
  unsigned int v93; // ecx
  __int64 *v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rbx
  unsigned __int64 v97; // rbx
  __int64 v98; // r12
  unsigned __int64 v99; // rax
  __int64 v100; // rbp
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rax
  __int64 v106; // r12
  __int64 v107; // rdx
  unsigned int v108; // esi
  size_t v109; // rdx
  int *v110; // rdx
  int *v111; // rax
  unsigned __int64 v112; // rsi
  int *v113; // rax
  unsigned __int64 v114; // rcx
  int v115; // r10d
  __int64 *v116; // rbx
  int v117; // ecx
  bool v118; // zf
  size_t v119; // rax
  __int64 v121; // [rsp+8h] [rbp-E0h]
  __int64 v122; // [rsp+8h] [rbp-E0h]
  __int64 v125; // [rsp+20h] [rbp-C8h]
  char v127; // [rsp+30h] [rbp-B8h]
  __int64 v130; // [rsp+58h] [rbp-90h] BYREF
  void *v131; // [rsp+60h] [rbp-88h] BYREF
  size_t v132; // [rsp+68h] [rbp-80h]
  _BYTE v133[16]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v134; // [rsp+80h] [rbp-68h] BYREF
  int v135; // [rsp+88h] [rbp-60h] BYREF
  void *v136; // [rsp+90h] [rbp-58h]
  int *v137; // [rsp+98h] [rbp-50h]
  int *v138; // [rsp+A0h] [rbp-48h]
  __int64 v139; // [rsp+A8h] [rbp-40h]

  v127 = a5;
  if ( !sub_B7E870(a2) || *(char *)(sub_B7E870(a2) + 28) < 0 )
    return;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2 )
  {
    v135 = 0;
    v136 = nullptr;
    v137 = &v135;
    v138 = &v135;
    v139 = 0;
    v8 = (__int64 *)sub_EDE580(a1, a2);
    v127 = 0;
    v125 = 0;
    v47 = sub_B7E900(a2);
    if ( !v47 )
      goto LABEL_43;
  }
  else
  {
    v135 = 0;
    v136 = nullptr;
    v137 = &v135;
    v138 = &v135;
    v139 = 0;
    v6 = sub_EDE580(a1, a2);
    v7 = *(_QWORD *)(a2 + 104);
    v8 = (__int64 *)v6;
    sub_7052B0((__int64 *)(v7 + 96), v7, v9, v10, v11, v12);
    v17 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v17 + 24) & 1) != 0 )
      v18 = sub_B96980(v17, v7, v13);
    else
      v18 = *(_QWORD *)(v17 + 24);
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v13, v14, v15, v16);
    v19 = *(_QWORD *)(a2 + 104);
    v20 = v18 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
    sub_7052B0((__int64 *)(v19 + 96), v19, v21, v22, v23, v24);
    v26 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v26 + 24) & 1) != 0 )
      v27 = sub_B96980(v26, v19, v25);
    else
      v27 = *(_QWORD *)(v26 + 24);
    while ( v20 != v27 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v27 + 12) & 1) == 0 )
        {
          v131 = **(void ***)(v27 + 16);
          v28 = sub_6D5440(&v131);
          v29 = sub_F63270(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL));
          sub_7052B0((__int64 *)(*(_QWORD *)(v29 + 104) + 96LL), *(_QWORD *)(v29 + 104), v30, v31, v32, v33);
          if ( (*(_BYTE *)(*(_QWORD *)(v29 + 128) + 1LL) & 2) == 0 )
            break;
        }
        v27 += 24;
        if ( v20 == v27 )
          goto LABEL_19;
      }
      v38 = sub_A8C970(v8 + 9, v29, v34, v35, v36, v37);
      v39 = sub_A97FD0((__int64)a1);
      v132 = v29;
      v40 = &v135;
      v41 = (int *)v136;
      v42 = v39 * v38;
      v131 = (void *)v42;
      if ( v136 )
      {
        do
        {
          while ( v42 < *((_QWORD *)v41 + 4) )
          {
            v40 = v41;
            v41 = *((int **)v41 + 2);
            if ( !v41 )
              goto LABEL_18;
          }
          v41 = *((int **)v41 + 3);
        }
        while ( v41 );
      }
LABEL_18:
      v27 += 24;
      sub_A85F70(&v134, (__int64)v40, &v131);
    }
LABEL_19:
    v125 = a2;
    v47 = sub_B7E900(a2);
    if ( !v47 )
    {
      v125 = a2;
      if ( !a5 )
        goto LABEL_27;
      goto LABEL_78;
    }
  }
LABEL_20:
  if ( (unsigned __int8)sub_B781F0(v47) || !(unsigned __int8)sub_B7EB50(v47, a1) )
  {
    v68 = v47;
    if ( *(char *)(v47 + 29) < 0 )
      v68 = sub_B72720(v47);
    v69 = *(_DWORD *)(v68 + 68);
    if ( (v69 & 0xFFFFFFF0) == 0 )
    {
      sub_B7EAB0(v68);
      v69 = *(_DWORD *)(v68 + 68);
    }
    v70 = &v135;
    v71 = *(_QWORD *)(v8[6] + 8LL * ((v69 >> 4) - 1));
    v72 = (int *)v136;
    if ( v136 )
    {
      do
      {
        while ( v71 < *((_QWORD *)v72 + 4) )
        {
          v70 = v72;
          v72 = *((int **)v72 + 2);
          if ( !v72 )
            goto LABEL_63;
        }
        v72 = *((int **)v72 + 3);
      }
      while ( v72 );
    }
LABEL_63:
    v73 = operator new(0x30u);
    *(_QWORD *)(v73 + 32) = v71;
    *(_QWORD *)(v73 + 40) = v47;
    v121 = v73;
    v74 = sub_A85E10(&v134, (__int64)v70, (unsigned __int64 *)(v73 + 32));
    if ( v75 )
    {
      v76 = v74 || v75 == &v135 || *(_QWORD *)(v121 + 32) < *((_QWORD *)v75 + 4);
    }
    else
    {
      v75 = (int *)v136;
      if ( v136 )
      {
        v77 = *(_QWORD *)(v121 + 32);
        while ( 1 )
        {
          v79 = *((_QWORD *)v75 + 4);
          if ( v79 >= v77 )
          {
            v78 = *((int **)v75 + 2);
            if ( !v78 )
              goto LABEL_74;
          }
          else
          {
            v78 = *((int **)v75 + 3);
            if ( !v78 )
            {
LABEL_74:
              v76 = 1;
              if ( v75 != &v135 )
                v76 = v79 >= v77;
              goto LABEL_67;
            }
          }
          v75 = v78;
        }
      }
      v76 = 1;
      v75 = &v135;
    }
LABEL_67:
    std::_Rb_tree_insert_and_rebalance(v76, v121, v75, &v135);
    ++v139;
  }
  while ( 1 )
  {
    v48 = *(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v47 = v48;
    if ( !v48 )
      break;
    if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_20;
  }
  if ( v127 )
  {
LABEL_78:
    sub_7052B0((__int64 *)(*(_QWORD *)(v125 + 104) + 96LL), *(_QWORD *)(v125 + 104), (__int64)v43, v44, v45, v46);
    v84 = *(_QWORD *)(v125 + 128);
    if ( (*(_BYTE *)(v84 + 32) & 1) != 0 )
      v85 = sub_B969C0();
    else
      v85 = *(_QWORD *)(v84 + 32);
    sub_7052B0((__int64 *)(*(_QWORD *)(v125 + 104) + 96LL), *(_QWORD *)(v125 + 104), v80, v81, v82, v83);
    v122 = v85 + 24LL * *(unsigned int *)(*(_QWORD *)(v125 + 128) + 20LL);
    sub_7052B0((__int64 *)(*(_QWORD *)(v125 + 104) + 96LL), *(_QWORD *)(v125 + 104), v86, v87, v88, v89);
    v90 = *(_QWORD *)(v125 + 128);
    if ( (*(_BYTE *)(v90 + 32) & 1) != 0 )
      v91 = sub_B969C0();
    else
      v91 = *(_QWORD *)(v90 + 32);
    if ( v91 == v122 )
    {
LABEL_115:
      v49 = *v8;
      goto LABEL_28;
    }
    while ( 1 )
    {
      v131 = **(void ***)(v91 + 16);
      v99 = sub_6D5440(&v131);
      v100 = sub_F63270(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL));
      sub_7052B0((__int64 *)(*(_QWORD *)(v100 + 104) + 96LL), *(_QWORD *)(v100 + 104), v101, v102, v103, v104);
      v105 = *(_QWORD *)(v100 + 128);
      if ( (*(_BYTE *)(v105 + 1) & 2) == 0 )
        break;
LABEL_87:
      v91 += 24;
      if ( v91 == v122 )
        goto LABEL_115;
    }
    v106 = v8[9];
    v107 = *(_QWORD *)(v105 + 88);
    v108 = *(_DWORD *)(v106 + 104);
    v130 = v107;
    if ( !v108 )
    {
      v131 = nullptr;
      goto LABEL_91;
    }
    v46 = v108 - 1;
    v92 = *(_QWORD *)(v106 + 88);
    v93 = v46 & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
    v94 = (__int64 *)(v92 + 24LL * v93);
    v95 = *v94;
    if ( v107 != *v94 )
    {
      v115 = 1;
      v116 = nullptr;
      if ( v95 == -4096 )
      {
LABEL_132:
        v117 = *(_DWORD *)(v106 + 96);
        v131 = v94;
        v44 = (unsigned int)(v117 + 1);
        v45 = (unsigned int)(4 * v44);
        if ( (unsigned int)v45 < 3 * v108 )
        {
          v45 = v108 >> 3;
          if ( v108 - *(_DWORD *)(v106 + 100) - (unsigned int)v44 > (unsigned int)v45 )
            goto LABEL_134;
          goto LABEL_92;
        }
LABEL_91:
        v108 *= 2;
LABEL_92:
        sub_A921D0((__int64 **)(v106 + 88), v108, v107, v44, v45, v46);
        sub_A6DDE0((__int64 *)(v106 + 88), &v130, &v131);
        v107 = v130;
        LODWORD(v44) = *(_DWORD *)(v106 + 96) + 1;
        v94 = (__int64 *)v131;
LABEL_134:
        v118 = *v94 == -4096;
        *(_DWORD *)(v106 + 96) = v44;
        if ( !v118 )
          --*(_DWORD *)(v106 + 100);
        *v94 = v107;
        v96 = 0;
        v94[1] = 0;
        *((_BYTE *)v94 + 16) = 0;
        goto LABEL_86;
      }
      while ( 1 )
      {
        if ( !v116 && v95 == -8192 )
          v116 = v94;
        v93 = v46 & (v115 + v93);
        v94 = (__int64 *)(v92 + 24LL * v93);
        v95 = *v94;
        if ( v107 == *v94 )
          break;
        if ( v95 == -4096 )
        {
          if ( v116 )
            v94 = v116;
          goto LABEL_132;
        }
        ++v115;
      }
    }
    v96 = v94[1];
LABEL_86:
    v97 = sub_A97FD0((__int64)a1) * v96;
    v98 = *(_QWORD *)v8[9];
    if ( v97 >= sub_A97FD0((__int64)a1) * v98 )
    {
      v110 = (int *)v136;
      if ( !v136 )
        goto LABEL_114;
      v111 = &v135;
      do
      {
        while ( v97 <= *((_QWORD *)v110 + 4) )
        {
          v111 = v110;
          v110 = *((int **)v110 + 2);
          if ( !v110 )
            goto LABEL_112;
        }
        v110 = *((int **)v110 + 3);
      }
      while ( v110 );
LABEL_112:
      v44 = (__int64)&v134;
      v43 = &v135;
      if ( v111 == &v135 || v97 < *((_QWORD *)v111 + 4) )
      {
LABEL_114:
        v131 = (void *)v97;
        v132 = v100;
        sub_A85F70(&v134, (__int64)&v135, &v131);
      }
    }
    goto LABEL_87;
  }
  if ( !v125 )
  {
LABEL_43:
    v49 = *v8;
    v50 = (__int64)v137;
    goto LABEL_44;
  }
LABEL_27:
  v49 = *(_QWORD *)v8[9];
LABEL_28:
  v50 = (__int64)v137;
  sub_7052B0((__int64 *)(*(_QWORD *)(v125 + 104) + 96LL), *(_QWORD *)(v125 + 104), (__int64)v43, v44, v45, v46);
  if ( (*(_BYTE *)(*(_QWORD *)(v125 + 128) + 1LL) & 4) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v125 + 104) + 96LL), *(_QWORD *)(v125 + 104), v51, v52, v53, v54);
    if ( !*(_DWORD *)(*(_QWORD *)(v125 + 128) + 20LL) )
      goto LABEL_44;
  }
  if ( (int *)v50 == &v135 || *(_QWORD *)(v50 + 32) )
  {
    if ( a4 )
    {
      sub_9EE7C0(a3, "\"_vptr$");
      sub_B86A00(&v131, v125 + 40);
      v109 = v132;
      if ( !v132 )
      {
        v119 = j__strlen("?");
        sub_99BDC0(&v131, 0, 0, "?", v119);
        v109 = v132;
      }
      sub_9EE560(a3, v131, v109);
      sub_A6F610(a3, 34);
      if ( v131 != v133 )
        operator delete(v131);
    }
    sub_9EE7C0(a3, "^^?");
LABEL_44:
    if ( *(char *)(a2 + 74) < 0 )
      goto LABEL_45;
    goto LABEL_32;
  }
  if ( *(char *)(a2 + 74) < 0 )
    goto LABEL_46;
LABEL_32:
  v55 = &v135;
  v56 = sub_A97FD0((__int64)a1);
  v57 = (int *)v136;
  v58 = v56 * v49;
  if ( v136 )
  {
    do
    {
      while ( v58 < *((_QWORD *)v57 + 4) )
      {
        v55 = v57;
        v57 = *((int **)v57 + 2);
        if ( !v57 )
          goto LABEL_37;
      }
      v57 = *((int **)v57 + 3);
    }
    while ( v57 );
  }
LABEL_37:
  v59 = operator new(0x30u);
  *(_QWORD *)(v59 + 32) = v58;
  v60 = v59;
  *(_QWORD *)(v59 + 40) = 0;
  v61 = sub_A85E10(&v134, (__int64)v55, (unsigned __int64 *)(v59 + 32));
  if ( v62 )
  {
    v63 = v61 || v62 == &v135 || *(_QWORD *)(v60 + 32) < *((_QWORD *)v62 + 4);
  }
  else
  {
    v62 = (int *)v136;
    if ( v136 )
    {
      v112 = *(_QWORD *)(v60 + 32);
      while ( 1 )
      {
        v114 = *((_QWORD *)v62 + 4);
        v113 = v114 >= v112 ? *((int **)v62 + 2) : *((int **)v62 + 3);
        if ( !v113 )
          break;
        v62 = v113;
      }
      v63 = 1;
      if ( v62 != &v135 )
        v63 = v114 >= v112;
    }
    else
    {
      v63 = 1;
      v62 = &v135;
    }
  }
  std::_Rb_tree_insert_and_rebalance(v63, v60, v62, &v135);
  ++v139;
LABEL_45:
  if ( (int *)v50 != &v135 )
  {
LABEL_46:
    for ( i = *(_QWORD *)(v50 + 40); i; i = *(_QWORD *)(v50 + 40) )
    {
      if ( (*(_BYTE *)(i + 28) & 0x7Fu) - 59 > 2 )
      {
        if ( a4 )
        {
          sub_A6F610(a3, 34);
          sub_B86A00(&v131, i + 40);
          sub_9EE560(a3, v131, v132);
          if ( v131 != v133 )
            operator delete(v131);
          sub_A6F610(a3, 34);
        }
        if ( (*(_BYTE *)(i + 68) & 1) != 0 )
        {
          v65 = a3;
          sub_A6F690((__int64)a1, a3, *(_QWORD *)(i + 48), i);
        }
        else
        {
          v131 = *(void **)(i + 48);
          sub_AAC2A0((__int64)a1, (__int64 *)&v131);
          v65 = (const char *)v131;
          sub_AAC350(a1, (unsigned __int64)v131, a3, 18, a4, a6);
        }
      }
      else
      {
        v65 = (const char *)i;
        sub_AAD140(a1, i, a3, a4, 0, a6);
      }
      v50 = std::_Rb_tree_increment(v50, v65);
      if ( (int *)v50 == &v135 )
        break;
    }
  }
  v66 = (_QWORD **)v136;
  if ( v136 )
  {
    do
    {
      sub_A6F1A0((__int64)&v134, v66[3]);
      v67 = (_QWORD **)v66[2];
      operator delete(v66);
      v66 = v67;
    }
    while ( v67 );
  }
}
