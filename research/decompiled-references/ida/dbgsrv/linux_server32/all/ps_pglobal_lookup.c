/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pglobal_lookup
// Address: 0x08064A70

//----- (08064A70) --------------------------------------------------------
int __cdecl ps_pglobal_lookup(size_t *a1, const char *a2, char *a3, int *a4)
{
  size_t v4; // eax
  size_t v5; // edi
  size_t v6; // esi
  char *v7; // esi
  char *v8; // eax
  const char *v9; // ecx
  const char *v10; // eax
  char *v11; // edi
  int v12; // eax
  char *v13; // ecx
  int v14; // eax
  int v15; // edx
  size_t v16; // ecx
  char *v17; // edx
  const char *v18; // eax
  const char *v19; // ebx
  int v20; // eax
  size_t v21; // eax
  _DWORD *v22; // esi
  int v23; // edx
  int result; // eax
  int v25; // edi
  size_t v26; // eax
  size_t v27; // edi
  size_t v28; // esi
  const char *v29; // eax
  char *v30; // esi
  char *v31; // edi
  const char *v32; // ecx
  const char *v33; // eax
  int v34; // eax
  char *v35; // ecx
  int v36; // eax
  int v37; // edx
  char *v38; // ecx
  const char *v39; // eax
  const char *v40; // ebx
  int v41; // eax
  _DWORD *v42; // edi
  const char *v43; // eax
  size_t v44; // ecx
  int v45; // ebx
  const char *v46; // ecx
  int v47; // eax
  const char *v48; // ecx
  char *v49; // ecx
  int v50; // ecx
  const char *v51; // eax
  int v52; // eax
  int v53; // eax
  char *v54; // eax
  int v55; // ecx
  int v56; // eax
  bool v57; // zf
  const char *v58; // eax
  const char *v59; // ebx
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  const char *v63; // eax
  int v64; // eax
  const char *v65; // eax
  const char *v66; // ebx
  unsigned int v67; // eax
  int v68; // [esp-64h] [ebp-64h]
  char *v69; // [esp-5Ch] [ebp-5Ch]
  int v70; // [esp-58h] [ebp-58h]
  int v71; // [esp-58h] [ebp-58h]
  int v72; // [esp-58h] [ebp-58h]
  char *v73; // [esp-58h] [ebp-58h]
  const char *v74; // [esp-54h] [ebp-54h]
  int v75; // [esp-54h] [ebp-54h]
  char *v76; // [esp-54h] [ebp-54h]
  int v77; // [esp-54h] [ebp-54h]
  const char *v78; // [esp-50h] [ebp-50h]
  const char *v79; // [esp-50h] [ebp-50h]
  char *v80; // [esp-50h] [ebp-50h]
  char *v81; // [esp-4Ch] [ebp-4Ch]
  const char *v82; // [esp-4Ch] [ebp-4Ch]
  size_t v83; // [esp-4Ch] [ebp-4Ch]
  char *v84; // [esp-48h] [ebp-48h]
  int v85; // [esp-48h] [ebp-48h]
  char *v86; // [esp-48h] [ebp-48h]
  char *v87; // [esp-48h] [ebp-48h]
  int v88; // [esp-48h] [ebp-48h]
  const char *v89; // [esp-48h] [ebp-48h]
  int v90; // [esp-48h] [ebp-48h]
  int v91; // [esp-48h] [ebp-48h]
  size_t v92; // [esp-44h] [ebp-44h]
  char *v93; // [esp-44h] [ebp-44h]
  size_t v94; // [esp-44h] [ebp-44h]
  char *v95; // [esp-44h] [ebp-44h]
  int v96; // [esp-44h] [ebp-44h]
  const char *v97; // [esp-44h] [ebp-44h]
  int v98; // [esp-44h] [ebp-44h]
  int v99; // [esp-44h] [ebp-44h]
  int v100; // [esp-44h] [ebp-44h]
  int v101; // [esp-44h] [ebp-44h]
  _DWORD v102[4]; // [esp-3Ch] [ebp-3Ch] BYREF
  char *v103; // [esp-2Ch] [ebp-2Ch] BYREF
  size_t v104; // [esp-28h] [ebp-28h]
  _DWORD *v105; // [esp-24h] [ebp-24h]
  unsigned int v106; // [esp-20h] [ebp-20h]

  v106 = __readgsdword(0x14u);
  v103 = nullptr;
  v104 = 0;
  v105 = nullptr;
  if ( a3 )
  {
    v4 = strlen(a3);
    v5 = v4 + 1;
    v6 = v4;
    v103 = (char *)sub_80CF920((int)&v103, nullptr, v4 + 1, 1u);
    v104 = v5;
    memmove(v103, a3, v6);
    v103[v6] = 0;
    v7 = *((char **)&qword_811CFF4 + 1406);
    v81 = v103;
    if ( !v7 )
      goto LABEL_23;
  }
  else
  {
    v7 = (char *)dword_811E5EC;
    v81 = nullptr;
    if ( !dword_811E5EC )
      goto LABEL_25;
  }
  v8 = (char *)&qword_811CFF4 - 258076;
  v92 = v104;
  if ( v104 )
    v8 = v81;
  v78 = v8;
  v84 = (char *)&qword_811CFF4 + 5620;
  while ( 1 )
  {
    v14 = *((_DWORD *)v7 + 5);
    if ( !v92 )
      break;
    if ( v14 )
      goto LABEL_15;
    v9 = v81;
    v10 = (char *)&qword_811CFF4 - 258076;
    v11 = v7;
LABEL_8:
    v12 = strcmp(v10, v9);
    v13 = *((char **)v7 + 2);
    v7 = *((char **)v7 + 3);
    if ( v12 >= 0 )
    {
      v84 = v11;
      v7 = v13;
    }
    if ( !v7 )
    {
      v16 = v92;
      v17 = v84;
      goto LABEL_17;
    }
  }
  if ( v14 )
  {
LABEL_15:
    v10 = *((const char **)v7 + 4);
    v9 = v78;
    v11 = v7;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v15 = *((_DWORD *)v7 + 2);
    if ( !v15 )
      break;
    v84 = v7;
    v7 = *((char **)v7 + 2);
    if ( *(_DWORD *)(v15 + 20) )
      goto LABEL_15;
  }
  v16 = 0;
  v17 = v7;
LABEL_17:
  if ( v17 != (char *)&qword_811CFF4 + 5620 )
  {
    if ( !*((_DWORD *)v17 + 5) )
    {
      if ( v16 )
      {
        v18 = (char *)&qword_811CFF4 - 258076;
        goto LABEL_21;
      }
      goto LABEL_33;
    }
    v18 = *((const char **)v17 + 4);
    v19 = (char *)&qword_811CFF4 - 258076;
    if ( v16 )
LABEL_21:
      v19 = v81;
    v93 = v17;
    v20 = strcmp(v19, v18);
    v17 = v93;
    if ( v20 >= 0 )
    {
LABEL_33:
      if ( v81 )
      {
        v95 = v17;
        v104 = 0;
        sub_80CF780(v81);
        v17 = v95;
      }
      v23 = *((_DWORD *)v17 + 7);
      goto LABEL_36;
    }
  }
LABEL_23:
  if ( v81 )
  {
    v104 = 0;
    sub_80CF780(v81);
  }
LABEL_25:
  v105 = nullptr;
  v21 = *a1;
  v103 = (char *)&qword_811CFF4 - 6188;
  v104 = v21;
  sub_80A4C60((int (__cdecl ***)(_DWORD, int))&v103);
  v22 = v105;
  if ( !v105 )
  {
    result = 2;
    goto LABEL_37;
  }
  if ( v105[157] )
    sub_805E840((int)v105, a2);
  v23 = sub_805AEE0(v22, a3);
  if ( v23 == -1 )
  {
    if ( v22[199] == -1 )
    {
LABEL_30:
      result = 5;
      goto LABEL_37;
    }
    v103 = nullptr;
    v104 = 0;
    v105 = nullptr;
    if ( !(unsigned __int8)sub_80D2000(a3, (void **)&v103) )
    {
      if ( v103 )
      {
        v104 = 0;
        sub_80CF780(v103);
      }
LABEL_91:
      if ( v22[199] != -1 )
        sub_8058290();
      goto LABEL_30;
    }
    v25 = strtoull(v103, nullptr, 16);
    if ( v103 )
    {
      v104 = 0;
      sub_80CF780(v103);
    }
    if ( v25 == -1 )
      goto LABEL_91;
    v23 = v25 + v22[199];
  }
  v103 = nullptr;
  v104 = 0;
  v105 = nullptr;
  if ( a3 )
  {
    v85 = v23;
    v26 = strlen(a3);
    v27 = v26 + 1;
    v28 = v26;
    v103 = (char *)sub_80CF920((int)&v103, nullptr, v26 + 1, 1u);
    v104 = v27;
    memmove(v103, a3, v28);
    v23 = v85;
    v103[v28] = 0;
  }
  if ( !*((_DWORD *)&qword_811CFF4 + 1406) )
  {
    v69 = (char *)&qword_811CFF4 + 5620;
    v30 = (char *)&qword_811CFF4 + 5620;
    goto LABEL_68;
  }
  v70 = v23;
  v29 = (char *)&qword_811CFF4 - 258076;
  v94 = v104;
  if ( v104 )
    v29 = v103;
  v79 = v103;
  v82 = v29;
  v30 = *((char **)&qword_811CFF4 + 1406);
  v69 = (char *)&qword_811CFF4 + 5620;
  v86 = (char *)&qword_811CFF4 + 5620;
  while ( 2 )
  {
    v36 = *((_DWORD *)v30 + 5);
    if ( v94 )
    {
      v31 = v30;
      if ( !v36 )
      {
        v32 = v79;
        v33 = (char *)&qword_811CFF4 - 258076;
        goto LABEL_54;
      }
LABEL_62:
      v33 = *((const char **)v30 + 4);
      v32 = v82;
LABEL_54:
      v34 = strcmp(v33, v32);
      v35 = *((char **)v30 + 2);
      v30 = *((char **)v30 + 3);
      if ( v34 >= 0 )
      {
        v86 = v31;
        v30 = v35;
      }
      if ( !v30 )
      {
        v23 = v70;
        v30 = v86;
        v38 = (char *)v79;
        goto LABEL_64;
      }
      continue;
    }
    break;
  }
  if ( v36 )
  {
LABEL_61:
    v31 = v30;
    goto LABEL_62;
  }
  while ( 1 )
  {
    v37 = *((_DWORD *)v30 + 2);
    if ( !v37 )
      break;
    v86 = v30;
    v30 = *((char **)v30 + 2);
    if ( *(_DWORD *)(v37 + 20) )
      goto LABEL_61;
  }
  v23 = v70;
  v38 = (char *)v79;
LABEL_64:
  if ( v30 != v69 )
  {
    if ( *((_DWORD *)v30 + 5) )
    {
      v39 = *((const char **)v30 + 4);
      v40 = (char *)&qword_811CFF4 - 258076;
      if ( !v94 )
        goto LABEL_67;
      goto LABEL_87;
    }
    if ( !v94 )
      goto LABEL_83;
    v39 = (char *)&qword_811CFF4 - 258076;
LABEL_87:
    v40 = v38;
LABEL_67:
    v87 = v38;
    v96 = v23;
    v41 = strcmp(v40, v39);
    v23 = v96;
    v38 = v87;
    if ( v41 >= 0 )
      goto LABEL_83;
  }
LABEL_68:
  v88 = v23;
  v42 = (_DWORD *)operator new(0x20u);
  v43 = v103;
  v44 = v104;
  v45 = (int)v105;
  v103 = nullptr;
  v42[4] = v43;
  v23 = v88;
  v97 = v43;
  v102[2] = v44;
  v102[3] = v45;
  v83 = v44;
  v42[5] = v44;
  v42[6] = v45;
  v104 = 0;
  v105 = nullptr;
  v42[7] = 0;
  if ( v30 == v69 )
  {
    if ( !*((_DWORD *)&qword_811CFF4 + 1409) )
      goto LABEL_77;
    v55 = *((_DWORD *)&qword_811CFF4 + 1408);
    v56 = *(_DWORD *)(v55 + 20);
    if ( v83 )
    {
      v57 = v56 == 0;
      v58 = v97;
      if ( v57 )
      {
        v59 = (char *)&qword_811CFF4 - 258076;
        goto LABEL_105;
      }
    }
    else
    {
      if ( !v56 )
        goto LABEL_77;
      v58 = (char *)&qword_811CFF4 - 258076;
    }
    v59 = *(const char **)(v55 + 16);
LABEL_105:
    v76 = *((char **)&qword_811CFF4 + 1408);
    v30 = nullptr;
    v60 = strcmp(v59, v58);
    v23 = v88;
    v49 = v76;
    if ( v60 >= 0 )
      goto LABEL_77;
    goto LABEL_78;
  }
  v68 = *((_DWORD *)v30 + 5);
  if ( v68 )
  {
    v46 = *((const char **)v30 + 4);
    v89 = (char *)&qword_811CFF4 - 258076;
    if ( v83 )
      goto LABEL_71;
    goto LABEL_72;
  }
  if ( !v44 )
    goto LABEL_96;
  v46 = (char *)&qword_811CFF4 - 258076;
LABEL_71:
  v89 = v43;
LABEL_72:
  v71 = v23;
  v74 = v46;
  v47 = strcmp(v89, v46);
  v48 = v74;
  v23 = v71;
  if ( v47 >= 0 )
  {
    v77 = v71;
    v61 = strcmp(v48, v89);
    v23 = v71;
    if ( v61 < 0 )
    {
      if ( v30 != *((char **)&qword_811CFF4 + 1408) )
      {
        v62 = std::_Rb_tree_increment(v30);
        v63 = (char *)&qword_811CFF4 - 258076;
        if ( *(_DWORD *)(v62 + 20) )
          v63 = *(const char **)(v62 + 16);
        v73 = (char *)v62;
        v64 = strcmp(v89, v63);
        v23 = v77;
        if ( v64 >= 0 )
        {
LABEL_77:
          v90 = v23;
          sub_80648B0(v102, (int)&dword_811E5E4, (int)(v42 + 4));
          v30 = (char *)v102[0];
          v49 = (char *)v102[1];
          v23 = v90;
          goto LABEL_78;
        }
        if ( *((_DWORD *)v30 + 3) )
        {
          v49 = v73;
          v30 = v73;
          goto LABEL_78;
        }
      }
      v49 = v30;
      if ( v30 )
        goto LABEL_123;
    }
    goto LABEL_96;
  }
  v49 = v30;
  if ( v30 != *((char **)&qword_811CFF4 + 1407) )
  {
    v75 = v71;
    v50 = std::_Rb_tree_decrement(v30);
    v51 = (char *)&qword_811CFF4 - 258076;
    if ( *(_DWORD *)(v50 + 20) )
      v51 = *(const char **)(v50 + 16);
    v72 = v50;
    v52 = strcmp(v51, v89);
    v23 = v75;
    if ( v52 >= 0 )
      goto LABEL_77;
    v49 = (char *)v72;
    if ( *(_DWORD *)(v72 + 12) )
      v49 = v30;
    else
      v30 = nullptr;
  }
LABEL_78:
  if ( !v49 )
  {
LABEL_96:
    if ( v42 )
    {
      v54 = (char *)v97;
      if ( v97 )
      {
        v100 = v23;
        v42[5] = 0;
        sub_80CF780(v54);
        v23 = v100;
      }
      v101 = v23;
      operator delete(v42, 0x20u);
      v38 = v103;
      v23 = v101;
      goto LABEL_83;
    }
    *((_DWORD *)v30 + 7) = v23;
    goto LABEL_36;
  }
  if ( v30 || v49 == v69 )
  {
    v53 = 1;
    goto LABEL_82;
  }
  v68 = *((_DWORD *)v49 + 5);
LABEL_123:
  v65 = (char *)&qword_811CFF4 - 258076;
  if ( v68 )
    v65 = *((const char **)v49 + 4);
  v80 = v49;
  v91 = v23;
  v66 = (const char *)&dword_80DDFD8;
  if ( v83 )
    v66 = v97;
  v67 = strcmp(v66, v65);
  v23 = v91;
  v49 = v80;
  v53 = v67 >> 31;
LABEL_82:
  v98 = v23;
  v30 = (char *)v42;
  std::_Rb_tree_insert_and_rebalance(v53, v42, v49, v69);
  v38 = v103;
  v23 = v98;
  ++*((_DWORD *)&qword_811CFF4 + 1409);
LABEL_83:
  *((_DWORD *)v30 + 7) = v23;
  if ( v38 )
  {
    v99 = v23;
    v104 = 0;
    sub_80CF780(v38);
    v23 = v99;
  }
LABEL_36:
  *a4 = v23;
  result = 0;
LABEL_37:
  if ( v106 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E5E4: using guessed type int dword_811E5E4;
// 811E5EC: using guessed type int dword_811E5EC;
