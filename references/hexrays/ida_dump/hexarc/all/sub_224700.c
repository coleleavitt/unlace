__int64 __fastcall sub_224700(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // al
  int tinfo_size; // ebx
  __int64 v16; // rdi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r14
  __int64 v19; // r12
  int *v20; // r14
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rbx
  int v25; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  char v28; // al
  int v29; // r13d
  __int64 v30; // rsi
  char v31; // al
  int v32; // eax
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  int *v35; // r9
  __int64 v36; // rbp
  __int64 v37; // r14
  __int64 v38; // r13
  signed int v39; // r12d
  signed int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rdi
  char v43; // cl
  __int64 v44; // rdx
  signed int v45; // r10d
  int v46; // ecx
  int v47; // esi
  bool v48; // al
  __int64 v49; // rdi
  int v50; // ecx
  int v51; // edi
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // rax
  __int64 i; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // ebx
  __int64 v60; // rax
  unsigned int v61; // edx
  __int64 v63; // rsi
  __int64 v64; // r8
  int *v65; // rbx
  int v66; // eax
  __int64 v67; // rax
  int v68; // eax
  char v69; // al
  __int64 v70; // rdi
  int v71; // eax
  char v72; // al
  int v73; // eax
  __int64 v74; // rdx
  int v75; // ebx
  __int64 v76; // rdx
  __int64 v77; // rax
  signed int v78; // eax
  int v79; // eax
  char v80; // al
  __int64 v81; // rdi
  int v82; // eax
  char v83; // al
  int v84; // ebp
  char v85; // al
  __int64 v86; // r8
  __int64 v87; // rsi
  int v88; // r12d
  int v89; // eax
  __int64 v90; // [rsp+8h] [rbp-D0h]
  __int64 v91; // [rsp+8h] [rbp-D0h]
  __int64 v92; // [rsp+8h] [rbp-D0h]
  __int64 v93; // [rsp+8h] [rbp-D0h]
  __int64 v94; // [rsp+8h] [rbp-D0h]
  __int64 v95; // [rsp+8h] [rbp-D0h]
  __int64 v96; // [rsp+10h] [rbp-C8h]
  int v97; // [rsp+18h] [rbp-C0h]
  int v98; // [rsp+1Ch] [rbp-BCh]
  __int64 v99; // [rsp+20h] [rbp-B8h]
  int v100; // [rsp+20h] [rbp-B8h]
  int v101; // [rsp+20h] [rbp-B8h]
  int v102; // [rsp+20h] [rbp-B8h]
  __int64 v103; // [rsp+28h] [rbp-B0h]
  int v104; // [rsp+30h] [rbp-A8h]
  int v105; // [rsp+34h] [rbp-A4h]
  _QWORD *v106; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v107; // [rsp+40h] [rbp-98h]
  unsigned __int64 v108; // [rsp+40h] [rbp-98h]
  int v109; // [rsp+48h] [rbp-90h]
  int *v110; // [rsp+48h] [rbp-90h]
  int *v111; // [rsp+48h] [rbp-90h]
  unsigned __int64 v112; // [rsp+50h] [rbp-88h]
  int *v113; // [rsp+58h] [rbp-80h]
  int v114; // [rsp+64h] [rbp-74h] BYREF
  __int64 v115; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v116; // [rsp+70h] [rbp-68h] BYREF
  __int64 v117; // [rsp+78h] [rbp-60h] BYREF
  __int64 tinfo_property; // [rsp+80h] [rbp-58h] BYREF
  int v119; // [rsp+88h] [rbp-50h]
  int v120; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v121; // [rsp+98h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v121 = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 936) + 40LL))(*(_QWORD *)(v3 + 936));
  v6 = *(_QWORD *)(v3 + 136);
  v7 = v5;
  if ( v6 <= v5 )
    v7 = *(_QWORD *)(v3 + 136);
  v8 = v5 == -1;
  v9 = *(_QWORD *)(a1 + 120);
  if ( !v8 )
    v6 = v7;
  if ( v9 != *(_QWORD *)(a1 + 88) )
  {
    v10 = *(_QWORD *)(v9 + 56);
    if ( v6 > v10 )
      v6 = v10;
  }
  v11 = *(_DWORD *)(a1 + 200);
  v12 = v6 - *(_QWORD *)(a1 + 176);
  v115 = v12;
  v13 = v12;
  if ( (v11 & 2) != 0
    && (v11 & 0x1418) == 0
    && *(_QWORD *)(a1 + 184) == -1
    && ((v90 = v12, v14 = get_tinfo_property(*(_QWORD *)(a1 + 168), 2), v13 = v90, (v14 & 0xFu) <= 0xA)
     || (v14 & 0x3F) == 0x2D) )
  {
    tinfo_size = 0;
    v105 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 168);
    if ( (_BYTE)v16 )
    {
      v91 = v13;
      if ( (get_tinfo_property(v16, 2) & 0xF) == 0xB )
      {
        tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 168), 11);
        v64 = v91;
        v63 = tinfo_property;
      }
      else
      {
        tinfo_property = 0;
        copy_tinfo_t(&tinfo_property, a1 + 168);
        v63 = tinfo_property;
        v64 = v91;
      }
      v92 = v64;
      tinfo_size = get_tinfo_size(0, v63, 0);
      clear_tinfo_t(&tinfo_property);
      v13 = v92;
      if ( tinfo_size < 0 )
        tinfo_size = 0;
      v105 = *(_DWORD *)(a1 + 196);
    }
    else
    {
      tinfo_size = 0;
      v105 = *(_DWORD *)(a1 + 196);
      if ( v105 >= 0 )
        tinfo_size = *(_DWORD *)(a1 + 196);
      if ( (*(_BYTE *)(a1 + 200) & 1) == 0 )
        tinfo_size = 0;
    }
  }
  v17 = *(_QWORD *)(a1 + 112);
  v114 = tinfo_size;
  v18 = v17 + 24;
  if ( (*(_BYTE *)(v17 + 80) & 2) == 0 )
    goto LABEL_99;
  v19 = v13;
  if ( *(int *)(v17 + 76) > v13 )
    goto LABEL_21;
  v93 = v13;
  v69 = get_tinfo_property(*(_QWORD *)(v17 + 48), 2);
  v13 = v93;
  if ( (v69 & 0xF) != 0xB )
  {
    v17 = *(_QWORD *)(a1 + 112);
    goto LABEL_21;
  }
  v79 = *(_DWORD *)(v17 + 80);
  if ( (v79 & 0x400) == 0
    && *(_DWORD *)(a1 + 196) == *(_DWORD *)(v17 + 76)
    && (v79 & 2) != 0
    && (v79 & 0x1018) == 0
    && *(_QWORD *)(v17 + 64) == -1
    && ((v80 = get_tinfo_property(*(_QWORD *)(v17 + 48), 2), v13 = v93, (v80 & 0xFu) <= 0xA) || (v80 & 0x3F) == 0x2D) )
  {
    v82 = 0;
  }
  else
  {
    v81 = *(_QWORD *)(v17 + 48);
    if ( (_BYTE)v81 )
    {
      v94 = v13;
      v85 = get_tinfo_property(v81, 2);
      tinfo_property = 0;
      if ( (v85 & 0xF) == 0xB )
      {
        tinfo_property = get_tinfo_property(*(_QWORD *)(v17 + 48), 11);
        v86 = v94;
        v87 = tinfo_property;
      }
      else
      {
        copy_tinfo_t(&tinfo_property, v17 + 48);
        v87 = tinfo_property;
        v86 = v94;
      }
      v95 = v86;
      v88 = get_tinfo_size(0, v87, 0);
      clear_tinfo_t(&tinfo_property);
      v82 = 0;
      v13 = v95;
      if ( v88 >= 0 )
        v82 = v88;
    }
    else
    {
      v82 = 0;
      if ( (*(_BYTE *)(v17 + 80) & 1) != 0 )
      {
        v82 = *(_DWORD *)(v17 + 76);
        if ( v82 < 0 )
          v82 = 0;
      }
    }
  }
  v17 = *(_QWORD *)(a1 + 112);
  if ( tinfo_size != v82 )
  {
LABEL_99:
    v19 = v13;
    if ( v17 != *(_QWORD *)(a1 + 120) )
      goto LABEL_22;
LABEL_100:
    v104 = 0;
    v98 = 0;
LABEL_101:
    v29 = v114;
    goto LABEL_102;
  }
  v19 = *(int *)(v18 + 52);
LABEL_21:
  if ( v17 == *(_QWORD *)(a1 + 120) )
    goto LABEL_100;
LABEL_22:
  v97 = v13;
  v20 = &v114;
  v104 = 0;
  v98 = 0;
  v96 = (int)v13;
  v103 = v13;
  v106 = a2;
  do
  {
    while ( 1 )
    {
LABEL_23:
      if ( (get_tinfo_property(*(_QWORD *)(v17 + 48), 2) & 0xF) == 0xB )
      {
        v98 += 2;
      }
      else if ( !*(_DWORD *)(v17 + 76) )
      {
        v99 = *(_QWORD *)(v17 + 96);
        v21 = v99;
        if ( (get_tinfo_property(*(_QWORD *)(v17 + 48), 2) & 0x2F) == 0xD )
        {
          v98 += v99;
        }
        else
        {
          v55 = *(_QWORD *)(v17 + 88);
          for ( i = v55 + 40LL * *(_QWORD *)(v17 + 96); i != v55; v55 += 40 )
          {
            while ( 1 )
            {
              v57 = *(_QWORD *)(v55 + 16);
              if ( *(_DWORD *)v57 != 12 )
                break;
              v55 += 40;
              ++v21;
              if ( i == v55 )
                goto LABEL_97;
            }
            if ( *(_BYTE *)(v57 + 64) == 8 )
              v21 += *(_DWORD *)(*(_QWORD *)(v57 + 72) + 284LL) == 2;
          }
LABEL_97:
          v98 += v21;
        }
      }
      v116 = v17;
      sub_223340(a1, v20, (__int64 *)&v116, v97);
      v22 = *(_DWORD *)(v17 + 80);
      v23 = v96;
      if ( (v22 & 0x800) != 0 )
        goto LABEL_33;
      if ( (v22 & 2) == 0 || *(_QWORD *)(v17 + 64) == -1 )
      {
        if ( (v22 & 1) == 0 || (v33 = *(_QWORD *)(v17 + 88), v33 == v33 + 40LL * *(_QWORD *)(v17 + 96)) )
        {
          v23 = 0;
          goto LABEL_33;
        }
        v34 = v17;
        v35 = v20;
        v36 = *(_QWORD *)(v17 + 88);
        v37 = v19;
        v38 = v33 + 40LL * *(_QWORD *)(v17 + 96);
        v39 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v41 = *(_QWORD *)(v36 + 16);
            v40 = 0;
            if ( *(_DWORD *)v41 == 12 )
              break;
LABEL_57:
            if ( v39 < v40 )
              v39 = v40;
            v36 += 40;
            if ( v38 == v36 )
            {
LABEL_78:
              v23 = v39;
              v17 = v34;
              v19 = v37;
              v20 = v35;
              goto LABEL_33;
            }
          }
          v42 = *(_QWORD *)(v36 + 24);
          v43 = *(_BYTE *)(v41 + 48);
          if ( *(_BYTE *)(v41 + 32) != 10 || (v44 = v41 + 48, v42 != *(_QWORD *)(v41 + 40)) )
          {
            v40 = 0;
            if ( v43 != 10 || v42 != *(_QWORD *)(v41 + 56) )
              goto LABEL_57;
            v44 = v41 + 32;
            v43 = *(_BYTE *)(v41 + 32);
          }
          v45 = *(_QWORD *)(*(_QWORD *)(v42 + 8) + 8LL) - *(_DWORD *)(a1 + 176);
          if ( v43 != 4 )
            goto LABEL_64;
          v65 = *(int **)(v44 + 8);
          v66 = *v65;
          if ( (unsigned int)(*v65 - 12) <= 1 )
          {
            v111 = v35;
            v108 = v34;
            v102 = *(_QWORD *)(*(_QWORD *)(v42 + 8) + 8LL) - *(_DWORD *)(a1 + 176);
            v77 = sub_1161E0((__int64)v65, &tinfo_property);
            v45 = v102;
            v34 = v108;
            v35 = v111;
            if ( v77 && (*v65 == 12 || (int *)v77 == v65 + 8) )
            {
              v78 = sub_323690(*(_QWORD *)(*(_QWORD *)(v77 + 8) + 16LL), *(unsigned int *)(v77 + 4), 0);
              v34 = v108;
              v35 = v111;
              v45 = v78;
              if ( *v65 == 13 )
              {
                v40 = v78;
                goto LABEL_57;
              }
              if ( *(_BYTE *)tinfo_property == 4 )
                v65 = *(int **)(tinfo_property + 8);
            }
            v66 = *v65;
          }
          if ( v66 == 14
            && (v110 = v35,
                v107 = v34,
                v101 = v45,
                v67 = sub_1161E0((__int64)v65, nullptr),
                v45 = v101,
                v34 = v107,
                v35 = v110,
                v67)
            && (v68 = sub_323690(*(_QWORD *)(*(_QWORD *)(v67 + 8) + 16LL), *(unsigned int *)(v67 + 4), 0),
                v45 = v101,
                v34 = v107,
                v35 = v110,
                (v47 = v68) != 0) )
          {
            if ( v101 )
            {
              v40 = v101 + v68;
              v46 = v101 % v68;
              if ( v101 % v68 )
              {
                if ( v68 % v46 )
                  goto LABEL_74;
              }
              else
              {
                v46 = v68;
              }
            }
            else
            {
              v40 = v68;
              v46 = v68;
            }
            if ( v46 == -1 )
              goto LABEL_74;
          }
          else
          {
LABEL_64:
            v40 = v45 + 1;
            v46 = 1;
            v47 = 1;
          }
          v113 = v35;
          v112 = v34;
          v109 = v45;
          v100 = v46;
          v48 = sub_1163C0(v46);
          v49 = v100;
          v45 = v109;
          v34 = v112;
          v35 = v113;
          v50 = v100;
          if ( !v48 )
          {
            v51 = 5;
            v50 = 16;
            while ( v47 % v50 )
            {
              v50 >>= 1;
              if ( !--v51 )
              {
                v49 = 0;
                v50 = 0;
                goto LABEL_70;
              }
            }
            v49 = v50;
          }
LABEL_70:
          if ( v103 / v49 > 1 && (!v104 || v50 < v104) )
            v104 = v50;
LABEL_74:
          if ( v103 < v40 )
            goto LABEL_57;
          if ( v39 < (int)((v103 - v45) / v47 * v47 + v45) )
            v39 = (v103 - v45) / v47 * v47 + v45;
          v36 += 40;
          if ( v38 == v36 )
            goto LABEL_78;
        }
      }
      v24 = *(_QWORD *)(v17 + 56);
      v25 = *(_DWORD *)(v17 + 76);
      if ( v25 != -1 )
        LODWORD(v24) = v24 + v25;
      v23 = (int)v24 - *(_DWORD *)(a1 + 176);
LABEL_33:
      v26 = *(_QWORD *)v17;
      if ( v19 < v23 )
        v19 = v23;
      if ( (v26 & 2) != 0 )
        goto LABEL_38;
      v27 = *(_QWORD *)(v17 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
        break;
      do
      {
        v17 = v27;
        v27 = *(_QWORD *)(v27 + 8);
      }
      while ( (*(_BYTE *)v27 & 2) == 0 );
LABEL_38:
      if ( *(_QWORD *)(a1 + 120) == v17 )
        goto LABEL_39;
    }
    v52 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
    v53 = *v52;
    if ( (*v52 & 2) == 0 )
    {
      while ( v17 == v52[2] )
      {
        v17 = v53 & 0xFFFFFFFFFFFFFFFCLL;
        v53 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v53 & 2) != 0 )
        {
          if ( *(_QWORD *)(a1 + 120) != v17 )
            goto LABEL_23;
          goto LABEL_39;
        }
        v54 = v52;
        v52 = (_QWORD *)v17;
        v17 = (unsigned __int64)v54;
      }
    }
    v17 = (unsigned __int64)v52;
  }
  while ( *(_QWORD **)(a1 + 120) != v52 );
LABEL_39:
  a2 = v106;
  if ( v114 < v104 || v104 > 0 && v114 % v104 )
    v114 = v104;
  if ( v98 <= 0 )
    goto LABEL_101;
  v28 = sub_223BC0(a1, &v115, v20, v104);
  v29 = v114;
  if ( !v28 )
  {
    if ( (get_tinfo_property(*v106, 2) & 0xF) == 0xB )
    {
      if ( v29 )
      {
        if ( *(_DWORD *)(a1 + 196) > v29 )
          v98 = 2;
        goto LABEL_104;
      }
LABEL_103:
      v114 = 1;
      goto LABEL_104;
    }
LABEL_102:
    if ( v29 )
      goto LABEL_104;
    goto LABEL_103;
  }
  v19 = v115;
  tinfo_property = v115;
  if ( !v114 )
  {
    v104 = 1;
    v98 = 2;
    goto LABEL_103;
  }
  v30 = v115;
  while ( v30 % v29 )
  {
    do
      v29 /= 2;
    while ( v30 % v29 );
    v114 = v29;
    v31 = sub_223BC0(a1, &tinfo_property, v20, v104);
    v29 = v114;
    if ( !v31 )
    {
      v19 = v115;
      goto LABEL_50;
    }
    v30 = tinfo_property;
    v115 = tinfo_property;
    if ( !v114 )
    {
      v19 = tinfo_property;
LABEL_50:
      v32 = 1;
      v98 = 2;
      if ( v114 > 0 )
        v32 = v114;
      v104 = v32;
      goto LABEL_102;
    }
  }
  v89 = 1;
  v19 = v115;
  v98 = 2;
  if ( v29 > 0 )
    v89 = v29;
  v104 = v89;
LABEL_104:
  if ( (get_tinfo_property(*a2, 2) & 0xF) == 0xB )
    goto LABEL_110;
  if ( !v104 || (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
  {
    if ( (unsigned __int8)*a2 )
    {
      v74 = get_tinfo_size(0, *a2, 0);
      v58 = *(int *)(a1 + 196);
      if ( v58 != v74 )
        goto LABEL_110;
    }
    else
    {
      v58 = *(int *)(a1 + 196);
    }
    if ( v58 >= v115 || v115 == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) )
      return 0;
LABEL_110:
    if ( v98 > 1 || v104 )
      goto LABEL_112;
    return 0;
  }
LABEL_112:
  v59 = v114;
  if ( v115 <= v19 )
    v19 = v115;
  if ( v19 % v114 )
  {
    v19 = v115 - v115 % v114;
    if ( v19 + *(_QWORD *)(a1 + 176) < *(_QWORD *)(a1 + 128) )
      return 0;
  }
  v60 = v105;
  if ( v105 < (__int64)v114 )
    v60 = v114;
  v61 = 0;
  if ( v19 >= v60 )
  {
    v70 = *(_QWORD *)(a1 + 168);
    if ( !(_BYTE)v70 )
      goto LABEL_160;
    v71 = *(_DWORD *)(a1 + 200);
    if ( (v71 & 2) == 0 || (v71 & 0x1418) != 0 || *(_QWORD *)(a1 + 184) != -1 )
      goto LABEL_188;
    v72 = get_tinfo_property(v70, 2);
    if ( (v72 & 0xFu) <= 0xA || (v72 & 0x3F) == 0x2D )
    {
      v73 = 0;
      goto LABEL_192;
    }
    v70 = *(_QWORD *)(a1 + 168);
    if ( (_BYTE)v70 )
    {
LABEL_188:
      v83 = get_tinfo_property(v70, 2);
      tinfo_property = 0;
      if ( (v83 & 0xF) == 0xB )
        tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 168), 11);
      else
        copy_tinfo_t(&tinfo_property, a1 + 168);
      v84 = get_tinfo_size(0, tinfo_property, 0);
      clear_tinfo_t(&tinfo_property);
      v73 = 0;
      if ( v84 >= 0 )
        v73 = v84;
    }
    else
    {
      v73 = 0;
      if ( (*(_BYTE *)(a1 + 200) & 1) != 0 )
      {
        v73 = *(_DWORD *)(a1 + 196);
        if ( v73 < 0 )
          v73 = 0;
      }
    }
LABEL_192:
    if ( v59 == v73 )
    {
      v117 = 0;
      copy_tinfo_t(&v117, a1 + 168);
      goto LABEL_161;
    }
LABEL_160:
    sub_324D40(&v117, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v59);
LABEL_161:
    if ( (get_tinfo_property(v117, 2) & 0xF) == 0xB )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(v117, 11);
      copy_tinfo_t(&v117, &tinfo_property);
      clear_tinfo_t(&tinfo_property);
    }
    v75 = get_tinfo_size(0, v117, 0);
    clear_tinfo_t(a1 + 168);
    if ( v75 > 0 )
    {
      if ( v75 == v19 )
      {
        v76 = v117;
        v117 = *(_QWORD *)(a1 + 168);
        *(_QWORD *)(a1 + 168) = v76;
      }
      else
      {
        v119 = 0;
        tinfo_property = 0;
        v120 = v19 / v75;
        copy_tinfo_t(&tinfo_property, &v117);
        create_tinfo(a1 + 168, 11, 11, &tinfo_property);
        clear_tinfo_t(&tinfo_property);
      }
    }
    *(_DWORD *)(a1 + 196) = v19;
    clear_tinfo_t(&v117);
    return 1;
  }
  return v61;
}
