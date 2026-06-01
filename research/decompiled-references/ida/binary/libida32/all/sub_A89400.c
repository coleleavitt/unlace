void __fastcall sub_A89400(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, char a5, unsigned __int64 *a6)
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
  __int64 *v40; // rsi
  __int64 *v41; // rdx
  unsigned __int64 v42; // r13
  __int64 *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  __int64 v49; // rbp
  __int64 *v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // r14
  __int64 v56; // rax
  __int64 *v57; // rdx
  unsigned __int64 v58; // rbp
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // rdx
  __int64 i; // r12
  __int64 *v63; // r13
  _QWORD **v64; // rbp
  _QWORD **v65; // r12
  __int64 v66; // r13
  unsigned int v67; // edx
  __int64 *v68; // r15
  unsigned __int64 v69; // r13
  __int64 *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rdx
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdi
  __int64 v80; // rbp
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdi
  __int64 v86; // r15
  __int64 v87; // r8
  unsigned int v88; // ecx
  __int64 *v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rbx
  unsigned __int64 v92; // rbx
  __int64 v93; // r12
  unsigned __int64 v94; // rax
  __int64 v95; // rbp
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // r12
  __int64 v102; // rdx
  unsigned int v103; // esi
  size_t v104; // rdx
  __int64 *v105; // rdx
  __int64 *v106; // rax
  _QWORD *v107; // rdx
  _QWORD *v108; // rax
  int v109; // r10d
  __int64 *v110; // rbx
  int v111; // ecx
  bool v112; // zf
  size_t v113; // rax
  __int64 v115; // [rsp+8h] [rbp-E0h]
  __int64 v116; // [rsp+8h] [rbp-E0h]
  __int64 v119; // [rsp+20h] [rbp-C8h]
  char v121; // [rsp+30h] [rbp-B8h]
  __int64 v124; // [rsp+58h] [rbp-90h] BYREF
  void *v125; // [rsp+60h] [rbp-88h] BYREF
  size_t v126; // [rsp+68h] [rbp-80h]
  _BYTE v127[16]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v128; // [rsp+80h] [rbp-68h] BYREF
  __int64 v129; // [rsp+88h] [rbp-60h] BYREF
  void *v130; // [rsp+90h] [rbp-58h]
  __int64 *v131; // [rsp+98h] [rbp-50h]
  __int64 *v132; // [rsp+A0h] [rbp-48h]
  __int64 v133; // [rsp+A8h] [rbp-40h]

  v121 = a5;
  if ( !sub_B5AB30(a2) || *(char *)(sub_B5AB30(a2) + 28) < 0 )
    return;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2 )
  {
    LODWORD(v129) = 0;
    v130 = nullptr;
    v131 = &v129;
    v132 = &v129;
    v133 = 0;
    v8 = (__int64 *)sub_EBA840(a1, a2);
    v121 = 0;
    v119 = 0;
    v47 = sub_B5ABC0(a2);
    if ( !v47 )
      goto LABEL_40;
  }
  else
  {
    LODWORD(v129) = 0;
    v130 = nullptr;
    v131 = &v129;
    v132 = &v129;
    v133 = 0;
    v6 = sub_EBA840(a1, a2);
    v7 = *(_QWORD *)(a2 + 104);
    v8 = (__int64 *)v6;
    sub_6E4DB0((__int64 *)(v7 + 96), v7, v9, v10, v11, v12);
    v17 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v17 + 24) & 1) != 0 )
      v18 = sub_B72C40(v17, v7, v13);
    else
      v18 = *(_QWORD *)(v17 + 24);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v13, v14, v15, v16);
    v19 = *(_QWORD *)(a2 + 104);
    v20 = v18 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
    sub_6E4DB0((__int64 *)(v19 + 96), v19, v21, v22, v23, v24);
    v26 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v26 + 24) & 1) != 0 )
      v27 = sub_B72C40(v26, v19, v25);
    else
      v27 = *(_QWORD *)(v26 + 24);
    while ( v20 != v27 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v27 + 12) & 1) == 0 )
        {
          v125 = **(void ***)(v27 + 16);
          v28 = sub_6B4E70(&v125);
          v29 = sub_F3F530(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL));
          sub_6E4DB0((__int64 *)(*(_QWORD *)(v29 + 104) + 96LL), *(_QWORD *)(v29 + 104), v30, v31, v32, v33);
          if ( (*(_BYTE *)(*(_QWORD *)(v29 + 128) + 1LL) & 2) == 0 )
            break;
        }
        v27 += 24;
        if ( v20 == v27 )
          goto LABEL_19;
      }
      v38 = sub_A68C30(v8 + 9, v29, v34, v35, v36, v37);
      v39 = sub_A74290((__int64)a1);
      v126 = v29;
      v40 = &v129;
      v41 = (__int64 *)v130;
      v42 = v39 * v38;
      v125 = (void *)v42;
      if ( v130 )
      {
        do
        {
          while ( v42 < v41[4] )
          {
            v40 = v41;
            v41 = (__int64 *)v41[2];
            if ( !v41 )
              goto LABEL_18;
          }
          v41 = (__int64 *)v41[3];
        }
        while ( v41 );
      }
LABEL_18:
      v27 += 24;
      sub_A62230(&v128, v40, &v125);
    }
LABEL_19:
    v119 = a2;
    v47 = sub_B5ABC0(a2);
    if ( !v47 )
    {
      v119 = a2;
      if ( !a5 )
        goto LABEL_27;
      goto LABEL_70;
    }
  }
LABEL_20:
  if ( (unsigned __int8)sub_B544B0(v47) || !(unsigned __int8)sub_B5AE10(v47, a1) )
  {
    v66 = v47;
    if ( *(char *)(v47 + 29) < 0 )
      v66 = sub_B4E9E0(v47);
    v67 = *(_DWORD *)(v66 + 68);
    if ( (v67 & 0xFFFFFFF0) == 0 )
    {
      sub_B5AD70(v66);
      v67 = *(_DWORD *)(v66 + 68);
    }
    v68 = &v129;
    v69 = *(_QWORD *)(v8[6] + 8LL * ((v67 >> 4) - 1));
    v70 = (__int64 *)v130;
    if ( v130 )
    {
      do
      {
        while ( v69 < v70[4] )
        {
          v68 = v70;
          v70 = (__int64 *)v70[2];
          if ( !v70 )
            goto LABEL_60;
        }
        v70 = (__int64 *)v70[3];
      }
      while ( v70 );
    }
LABEL_60:
    v71 = operator new(0x30u);
    *(_QWORD *)(v71 + 32) = v69;
    *(_QWORD *)(v71 + 40) = v47;
    v115 = v71;
    sub_A620D0(&v128, v68, (unsigned __int64 *)(v71 + 32));
    if ( !v72 )
    {
      v73 = v130;
      if ( v130 )
      {
        while ( 1 )
        {
          if ( v73[4] >= *(_QWORD *)(v115 + 32) )
          {
            v74 = (_QWORD *)v73[2];
            if ( !v74 )
              break;
          }
          else
          {
            v74 = (_QWORD *)v73[3];
            if ( !v74 )
              break;
          }
          v73 = v74;
        }
      }
    }
    std::_Rb_tree_insert_and_rebalance();
    ++v133;
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
  if ( v121 )
  {
LABEL_70:
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v119 + 104) + 96LL), *(_QWORD *)(v119 + 104), (__int64)v43, v44, v45, v46);
    v79 = *(_QWORD *)(v119 + 128);
    if ( (*(_BYTE *)(v79 + 32) & 1) != 0 )
      v80 = sub_B72C80();
    else
      v80 = *(_QWORD *)(v79 + 32);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v119 + 104) + 96LL), *(_QWORD *)(v119 + 104), v75, v76, v77, v78);
    v116 = v80 + 24LL * *(unsigned int *)(*(_QWORD *)(v119 + 128) + 20LL);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v119 + 104) + 96LL), *(_QWORD *)(v119 + 104), v81, v82, v83, v84);
    v85 = *(_QWORD *)(v119 + 128);
    if ( (*(_BYTE *)(v85 + 32) & 1) != 0 )
      v86 = sub_B72C80();
    else
      v86 = *(_QWORD *)(v85 + 32);
    if ( v86 == v116 )
    {
LABEL_107:
      v49 = *v8;
      goto LABEL_28;
    }
    while ( 1 )
    {
      v125 = **(void ***)(v86 + 16);
      v94 = sub_6B4E70(&v125);
      v95 = sub_F3F530(*(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFF0LL));
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v95 + 104) + 96LL), *(_QWORD *)(v95 + 104), v96, v97, v98, v99);
      v100 = *(_QWORD *)(v95 + 128);
      if ( (*(_BYTE *)(v100 + 1) & 2) == 0 )
        break;
LABEL_79:
      v86 += 24;
      if ( v86 == v116 )
        goto LABEL_107;
    }
    v101 = v8[9];
    v102 = *(_QWORD *)(v100 + 88);
    v103 = *(_DWORD *)(v101 + 104);
    v124 = v102;
    if ( !v103 )
    {
      v125 = nullptr;
      goto LABEL_83;
    }
    v46 = v103 - 1;
    v87 = *(_QWORD *)(v101 + 88);
    v88 = v46 & (((unsigned int)v102 >> 9) ^ ((unsigned int)v102 >> 4));
    v89 = (__int64 *)(v87 + 24LL * v88);
    v90 = *v89;
    if ( v102 != *v89 )
    {
      v109 = 1;
      v110 = nullptr;
      if ( v90 == -4096 )
      {
LABEL_123:
        v111 = *(_DWORD *)(v101 + 96);
        v125 = v89;
        v44 = (unsigned int)(v111 + 1);
        v45 = (unsigned int)(4 * v44);
        if ( (unsigned int)v45 < 3 * v103 )
        {
          v45 = v103 >> 3;
          if ( v103 - *(_DWORD *)(v101 + 100) - (unsigned int)v44 > (unsigned int)v45 )
            goto LABEL_125;
          goto LABEL_84;
        }
LABEL_83:
        v103 *= 2;
LABEL_84:
        sub_A6E490((__int64 **)(v101 + 88), v103, v102, v44, v45, v46);
        sub_A4A0A0((__int64 *)(v101 + 88), &v124, &v125);
        v102 = v124;
        LODWORD(v44) = *(_DWORD *)(v101 + 96) + 1;
        v89 = (__int64 *)v125;
LABEL_125:
        v112 = *v89 == -4096;
        *(_DWORD *)(v101 + 96) = v44;
        if ( !v112 )
          --*(_DWORD *)(v101 + 100);
        *v89 = v102;
        v91 = 0;
        v89[1] = 0;
        *((_BYTE *)v89 + 16) = 0;
        goto LABEL_78;
      }
      while ( 1 )
      {
        if ( !v110 && v90 == -8192 )
          v110 = v89;
        v88 = v46 & (v109 + v88);
        v89 = (__int64 *)(v87 + 24LL * v88);
        v90 = *v89;
        if ( v102 == *v89 )
          break;
        if ( v90 == -4096 )
        {
          if ( v110 )
            v89 = v110;
          goto LABEL_123;
        }
        ++v109;
      }
    }
    v91 = v89[1];
LABEL_78:
    v92 = sub_A74290((__int64)a1) * v91;
    v93 = *(_QWORD *)v8[9];
    if ( v92 >= sub_A74290((__int64)a1) * v93 )
    {
      v105 = (__int64 *)v130;
      if ( !v130 )
        goto LABEL_106;
      v106 = &v129;
      do
      {
        while ( v92 <= v105[4] )
        {
          v106 = v105;
          v105 = (__int64 *)v105[2];
          if ( !v105 )
            goto LABEL_104;
        }
        v105 = (__int64 *)v105[3];
      }
      while ( v105 );
LABEL_104:
      v44 = (__int64)&v128;
      v43 = &v129;
      if ( v106 == &v129 || v92 < v106[4] )
      {
LABEL_106:
        v125 = (void *)v92;
        v126 = v95;
        sub_A62230(&v128, &v129, &v125);
      }
    }
    goto LABEL_79;
  }
  if ( !v119 )
  {
LABEL_40:
    v49 = *v8;
    v50 = v131;
    goto LABEL_41;
  }
LABEL_27:
  v49 = *(_QWORD *)v8[9];
LABEL_28:
  v50 = v131;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v119 + 104) + 96LL), *(_QWORD *)(v119 + 104), (__int64)v43, v44, v45, v46);
  if ( (*(_BYTE *)(*(_QWORD *)(v119 + 128) + 1LL) & 4) == 0 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v119 + 104) + 96LL), *(_QWORD *)(v119 + 104), v51, v52, v53, v54);
    if ( !*(_DWORD *)(*(_QWORD *)(v119 + 128) + 20LL) )
      goto LABEL_41;
  }
  if ( v50 == &v129 || v50[4] )
  {
    if ( a4 )
    {
      sub_9CAA80(a3, "\"_vptr$");
      sub_B62CC0(&v125, v119 + 40);
      v104 = v126;
      if ( !v126 )
      {
        v113 = j__strlen("?");
        sub_978080(&v125, 0, 0, "?", v113);
        v104 = v126;
      }
      sub_9CA820(a3, v125, v104);
      sub_A4B8D0(a3, 34);
      if ( v125 != v127 )
        operator delete(v125);
    }
    sub_9CAA80(a3, "^^?");
LABEL_41:
    if ( *(char *)(a2 + 74) < 0 )
      goto LABEL_42;
    goto LABEL_32;
  }
  if ( *(char *)(a2 + 74) < 0 )
    goto LABEL_43;
LABEL_32:
  v55 = &v129;
  v56 = sub_A74290((__int64)a1);
  v57 = (__int64 *)v130;
  v58 = v56 * v49;
  if ( v130 )
  {
    do
    {
      while ( v58 < v57[4] )
      {
        v55 = v57;
        v57 = (__int64 *)v57[2];
        if ( !v57 )
          goto LABEL_37;
      }
      v57 = (__int64 *)v57[3];
    }
    while ( v57 );
  }
LABEL_37:
  v59 = operator new(0x30u);
  *(_QWORD *)(v59 + 32) = v58;
  v60 = v59;
  *(_QWORD *)(v59 + 40) = 0;
  sub_A620D0(&v128, v55, (unsigned __int64 *)(v59 + 32));
  if ( !v61 )
  {
    v107 = v130;
    if ( v130 )
    {
      while ( 1 )
      {
        v108 = (_QWORD *)(v107[4] >= *(_QWORD *)(v60 + 32) ? v107[2] : v107[3]);
        if ( !v108 )
          break;
        v107 = v108;
      }
    }
  }
  std::_Rb_tree_insert_and_rebalance();
  ++v133;
LABEL_42:
  if ( v50 != &v129 )
  {
LABEL_43:
    for ( i = v50[5]; i; i = v63[5] )
    {
      if ( (*(_BYTE *)(i + 28) & 0x7Fu) - 59 > 2 )
      {
        if ( a4 )
        {
          sub_A4B8D0(a3, 34);
          sub_B62CC0(&v125, i + 40);
          sub_9CA820(a3, v125, v126);
          if ( v125 != v127 )
            operator delete(v125);
          sub_A4B8D0(a3, 34);
        }
        if ( (*(_BYTE *)(i + 68) & 1) != 0 )
        {
          sub_A4B950((__int64)a1, a3, *(_QWORD *)(i + 48), i);
        }
        else
        {
          v125 = *(void **)(i + 48);
          sub_A88560((__int64)a1, (__int64 *)&v125);
          sub_A88610(a1, (unsigned __int64)v125, a3, 18, a4, a6);
        }
      }
      else
      {
        sub_A89400(a1, i, a3, a4, 0, a6);
      }
      v63 = (__int64 *)std::_Rb_tree_increment();
      if ( v63 == &v129 )
        break;
    }
  }
  v64 = (_QWORD **)v130;
  if ( v130 )
  {
    do
    {
      sub_A4B460((__int64)&v128, v64[3]);
      v65 = (_QWORD **)v64[2];
      operator delete(v64);
      v64 = v65;
    }
    while ( v65 );
  }
}

