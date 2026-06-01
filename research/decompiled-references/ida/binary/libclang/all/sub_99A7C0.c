__int64 __fastcall sub_99A7C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // r14
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned int *v29; // r12
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _DWORD *v32; // rax
  unsigned int *v33; // r13
  unsigned int v34; // r14d
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rbp
  unsigned __int64 v40; // rax
  __int64 v41; // r15
  _QWORD *v42; // rdi
  unsigned int v43; // ebp
  __int64 (__fastcall *v44)(__int64); // rax
  _QWORD *v45; // rdi
  __int64 (*v46)(void); // rdx
  _QWORD *v47; // rdi
  _QWORD *v48; // rdi
  _QWORD *v49; // rdi
  _QWORD *v50; // rdi
  _QWORD *v51; // rdi
  _QWORD *v52; // rdi
  _QWORD **v53; // rdi
  _QWORD *v54; // rdi
  unsigned __int64 v55; // rax
  _QWORD *v56; // rdi
  __int64 (__fastcall *v57)(__int64); // rax
  _QWORD *v58; // rdi
  __int64 (*v59)(void); // rdx
  _QWORD *v60; // rdi
  _QWORD *v61; // rdi
  _QWORD *v62; // rdi
  _QWORD *v63; // rdi
  _QWORD *v64; // rdi
  _QWORD *v65; // rdi
  _QWORD **v66; // rdi
  _QWORD *v67; // r12
  __int64 v68; // r13
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // ebp
  unsigned __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rax
  unsigned __int64 v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // r14
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned __int8 **v82; // rbp
  unsigned __int8 *v83; // rbx
  __int64 v84; // r8
  __int64 v85; // r15
  unsigned __int8 *v86; // rdx
  __int64 v87; // rax
  unsigned __int8 *v88; // rbx
  unsigned __int8 *v89; // rdx
  __int64 v90; // rax
  unsigned __int8 *v91; // rbx
  unsigned __int8 *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned __int8 *v95; // rbx
  __int64 v96; // r13
  unsigned __int8 *v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rbp
  __int64 v100; // rax
  unsigned __int8 **v101; // rdi
  __int64 v102; // rdi
  int v103; // edx
  __int64 v104; // rdi
  int v105; // edx
  __int64 v106; // rdi
  int v107; // edx
  __int64 v108; // rax
  __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // rax
  __int64 v112; // r13
  __int64 v113; // rax
  __int64 v114; // r13
  void *v115; // rdi
  unsigned __int8 *v116; // rdx
  int v117; // eax
  __int64 v118; // rax
  __int64 v119; // r12
  __int64 v120; // r14
  __int64 v121; // r12
  void *v122; // rdi
  unsigned __int8 *v123; // rdx
  int v124; // eax
  __int64 v125; // rax
  __int64 v126; // r13
  __int64 v127; // r15
  __int64 v128; // r13
  void *v129; // rdi
  unsigned __int8 *v130; // rdx
  int v131; // eax
  __int64 v132; // rax
  __int64 v133; // r13
  __int64 v134; // rax
  __int64 v135; // r13
  void *v136; // rdi
  unsigned int v137; // [rsp+8h] [rbp-90h]
  __int64 v138; // [rsp+8h] [rbp-90h]
  __int64 v139; // [rsp+10h] [rbp-88h]
  unsigned __int8 v140; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v141; // [rsp+20h] [rbp-78h] BYREF
  __int64 v142; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v143[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v144[11]; // [rsp+40h] [rbp-58h] BYREF

  v142 = a2;
  v144[1] = &v142;
  v144[2] = &v140;
  v143[1] = &v141;
  v144[0] = a1;
  v5 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3 & 7;
  v143[0] = a1;
  v141 = v5;
  v5 &= 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v5;
  v140 = a4;
  if ( (unsigned __int8)sub_B07770(v6, a2, v5) )
  {
    sub_996D50(v144, 0);
    return 0;
  }
  v7 = *(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v8 == 41 )
  {
    sub_996D50(v144, 1);
    return 0;
  }
  if ( v8 == 32 )
  {
    sub_996D50(v144, 2);
    return 0;
  }
  if ( (v141 & 4) != 0 || (byte_8[v141 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
  {
    sub_996D50(v144, 3);
    return 0;
  }
  v9 = sub_B0E890(v7);
  v10 = v9;
  if ( v9 )
  {
    if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 57 > 2 )
      goto LABEL_44;
    v11 = *(_QWORD *)(v9 + 104);
    v12 = *(_QWORD *)(v11 + 96);
    v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v12 & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_18;
    }
    else
    {
      if ( v13 <= 3 || (v12 & 2) == 0 )
        goto LABEL_18;
      v14 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
      v15 = v14[2275];
      if ( !v15 )
      {
        *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
        goto LABEL_18;
      }
      v16 = v14[274];
      v14[284] += 24LL;
      v13 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2 = v13 + 24;
      if ( v14[275] >= v13 + 24 && v16 )
      {
        v14[274] = a2;
      }
      else
      {
        a2 = 24;
        v13 = sub_996C10((__int64)(v14 + 274), 24, 3);
      }
      *(_QWORD *)v13 = v15;
      v12 = v13 | 5;
      *(_DWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = v11;
      *(_QWORD *)(v11 + 96) = v13 | 5;
      LOBYTE(v13) = v13 & 0xFA | 4;
    }
    if ( (v13 & 4) != 0 )
    {
      v17 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v17 )
      {
        v104 = *(_QWORD *)v17;
        v105 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
        if ( v17[2] != v105 )
        {
          v17[2] = v105;
          a2 = v11;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v104 + 144LL))(v104, v11);
        }
      }
    }
LABEL_18:
    v18 = *(_QWORD *)(v10 + 128);
    if ( (*(_BYTE *)(v18 + 24) & 1) != 0 )
      v19 = sub_7A2E20(v18);
    else
      v19 = *(_QWORD *)(v18 + 24);
    v20 = *(_QWORD *)(v10 + 104);
    v21 = *(_QWORD *)(v20 + 96);
    v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v21 & 1) != 0 )
    {
      if ( !v22 )
      {
        v27 = *(_QWORD *)(v10 + 128);
        v29 = (unsigned int *)(v19 + 24LL * *(unsigned int *)(v27 + 16));
        goto LABEL_91;
      }
    }
    else
    {
      if ( v22 <= 3 )
      {
        if ( !v22 )
        {
          v27 = *(_QWORD *)(v10 + 128);
          v29 = (unsigned int *)(24LL * *(unsigned int *)(v27 + 16) + v19);
          goto LABEL_91;
        }
LABEL_31:
        v27 = *(_QWORD *)(v10 + 128);
        v28 = v27;
        v29 = (unsigned int *)(v19 + 24LL * *(unsigned int *)(v27 + 16));
        v30 = *(_QWORD *)(v20 + 96);
        v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v30 & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_91;
        }
        else
        {
          if ( v31 <= 3 )
            goto LABEL_91;
          if ( (v30 & 2) == 0 )
            goto LABEL_36;
          v77 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
          v78 = v77[2275];
          if ( !v78 )
          {
            *(_QWORD *)(v20 + 96) = v20 & 0xFFFFFFFFFFFFFFFALL | 1;
            v27 = *(_QWORD *)(v10 + 128);
            goto LABEL_91;
          }
          v79 = v77[274];
          v77[284] += 24LL;
          v31 = (v79 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          a2 = v31 + 24;
          if ( v77[275] >= v31 + 24 && v79 )
          {
            v77[274] = a2;
          }
          else
          {
            a2 = 24;
            v31 = sub_996C10((__int64)(v77 + 274), 24, 3);
          }
          *(_QWORD *)v31 = v78;
          *(_DWORD *)(v31 + 8) = 0;
          v30 = v31 | 5;
          *(_QWORD *)(v31 + 16) = v20;
          *(_QWORD *)(v20 + 96) = v31 | 5;
          LOBYTE(v31) = v31 & 0xFA | 4;
        }
        if ( (v31 & 4) != 0 )
        {
          v32 = (_DWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v32 )
          {
            v102 = *(_QWORD *)v32;
            v103 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
            if ( v32[2] != v103 )
            {
              v32[2] = v103;
              a2 = v20;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v102 + 144LL))(v102, v20);
            }
          }
          v28 = *(_QWORD *)(v10 + 128);
LABEL_36:
          if ( (*(_BYTE *)(v28 + 24) & 1) != 0 )
            v33 = (unsigned int *)sub_7A2E20(v28);
          else
            v33 = *(unsigned int **)(v28 + 24);
          if ( v29 != v33 )
          {
            while ( 1 )
            {
              v34 = v140;
              v35 = *(_QWORD *)(**((_QWORD **)v33 + 2) & 0xFFFFFFFFFFFFFFF0LL);
              v36 = *(_QWORD *)(v35 + 8);
              if ( (v36 & 7) != 0 || (v37 = v35 & 0xFFFFFFFFFFFFFFF0LL, (v36 & 8) != 0) )
                v37 = sub_B0CF30(**((_QWORD **)v33 + 2), a2) & 0xFFFFFFFFFFFFFFF0LL;
              a2 = v142;
              if ( !(unsigned __int8)sub_99A7C0(a1, v142, v37, v34) )
                break;
              v33 += 6;
              if ( v33 == v29 )
                goto LABEL_44;
            }
            v73 = ((unsigned __int64)*v33 << 32) | *v33;
            v74 = *(_QWORD *)(**((_QWORD **)v33 + 2) & 0xFFFFFFFFFFFFFFF0LL);
            v75 = *(_QWORD *)(v74 + 8);
            if ( (v75 & 7) != 0 || (v76 = v74 & 0xFFFFFFFFFFFFFFF0LL, (v75 & 8) != 0) )
              v76 = sub_B0CF30(**((_QWORD **)v33 + 2), a2) & 0xFFFFFFFFFFFFFFF0LL;
            sub_997710(v143, 1, v76, v73);
            return 0;
          }
LABEL_44:
          v38 = sub_7868A0(v10);
          if ( v38 )
          {
LABEL_45:
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 48)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 42 <= 1 )
            {
              sub_996D50(v144, 4);
              return 0;
            }
            if ( !(unsigned __int8)sub_99A7C0(a1, v142, *(_QWORD *)(v38 + 48), v140) )
            {
              v108 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v38 + 16LL))(v38);
              sub_997710(v143, 0, *(_QWORD *)(v38 + 48), v108);
              return 0;
            }
            while ( 1 )
            {
              v40 = *(_QWORD *)(v38 + 8);
              v38 = v40 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v40 <= 7 )
                break;
              if ( (*(_BYTE *)(v38 + 28) & 0x7Fu) - 47 <= 2 )
                goto LABEL_45;
            }
          }
          goto LABEL_56;
        }
        v27 = *(_QWORD *)(v10 + 128);
LABEL_91:
        v28 = v27;
        goto LABEL_36;
      }
      if ( (v21 & 2) == 0 )
      {
        v28 = *(_QWORD *)(v10 + 128);
        v29 = (unsigned int *)(v19 + 24LL * *(unsigned int *)(v28 + 16));
        goto LABEL_36;
      }
      v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
      v24 = v23[2275];
      if ( !v24 )
      {
        *(_QWORD *)(v20 + 96) = v20 & 0xFFFFFFFFFFFFFFFALL | 1;
        v20 = *(_QWORD *)(v10 + 104);
        goto LABEL_31;
      }
      v25 = v23[274];
      v23[284] += 24LL;
      v22 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2 = v22 + 24;
      if ( v23[275] >= v22 + 24 && v25 )
      {
        v23[274] = a2;
      }
      else
      {
        a2 = 24;
        v22 = sub_996C10((__int64)(v23 + 274), 24, 3);
      }
      *(_QWORD *)v22 = v24;
      v21 = v22 | 5;
      *(_DWORD *)(v22 + 8) = 0;
      *(_QWORD *)(v22 + 16) = v20;
      *(_QWORD *)(v20 + 96) = v22 | 5;
      LOBYTE(v22) = v22 & 0xFA | 4;
    }
    if ( (v22 & 4) != 0 )
    {
      v26 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v26 )
      {
        v106 = *(_QWORD *)v26;
        v107 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
        if ( v26[2] != v107 )
        {
          v26[2] = v107;
          a2 = v20;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v106 + 144LL))(v106, v20);
        }
      }
    }
    v20 = *(_QWORD *)(v10 + 104);
    goto LABEL_31;
  }
LABEL_56:
  v41 = *(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v42 = *(_QWORD **)(a1 + 24);
    v43 = v140;
    v44 = *(__int64 (__fastcall **)(__int64))(*v42 + 104LL);
    if ( v44 == sub_8D7E60 )
    {
      v45 = (_QWORD *)v42[3];
      v46 = *(__int64 (**)(void))(*v45 + 104LL);
      if ( (char *)v46 != (char *)v44 )
        goto LABEL_101;
      v47 = (_QWORD *)v45[3];
      v44 = *(__int64 (__fastcall **)(__int64))(*v47 + 104LL);
      if ( (char *)v44 != (char *)v46 )
        goto LABEL_99;
      v48 = (_QWORD *)v47[3];
      v46 = *(__int64 (**)(void))(*v48 + 104LL);
      if ( (char *)v46 != (char *)v44 )
        goto LABEL_101;
      v49 = (_QWORD *)v48[3];
      v44 = *(__int64 (__fastcall **)(__int64))(*v49 + 104LL);
      if ( (char *)v44 != (char *)v46 )
        goto LABEL_99;
      v50 = (_QWORD *)v49[3];
      v46 = *(__int64 (**)(void))(*v50 + 104LL);
      if ( (char *)v46 != (char *)v44 )
        goto LABEL_101;
      v51 = (_QWORD *)v50[3];
      v44 = *(__int64 (__fastcall **)(__int64))(*v51 + 104LL);
      if ( (char *)v44 != (char *)v46 )
        goto LABEL_99;
      v52 = (_QWORD *)v51[3];
      v46 = *(__int64 (**)(void))(*v52 + 104LL);
      if ( (char *)v46 != (char *)v44 )
      {
LABEL_101:
        v54 = (_QWORD *)v46();
        goto LABEL_67;
      }
      v53 = (_QWORD **)v52[3];
      v44 = (__int64 (__fastcall *)(__int64))(*v53)[13];
      if ( (char *)v44 == (char *)v46 )
      {
        v54 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v53[3] + 104LL))(v53[3]);
LABEL_67:
        v55 = sub_6CB5B0(v54, v141);
        if ( !(unsigned __int8)sub_99A7C0(a1, v142, v55, v43) )
          return 0;
        v41 = *(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_69;
      }
    }
LABEL_99:
    v54 = (_QWORD *)((__int64 (*)(void))v44)();
    goto LABEL_67;
  }
LABEL_69:
  if ( (unsigned int)*(unsigned __int8 *)(v41 + 16) - 56 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 > 1 )
      return 1;
    v41 = sub_B0D320(v41);
    if ( !v41 )
      return 1;
  }
  v56 = *(_QWORD **)(a1 + 24);
  v57 = *(__int64 (__fastcall **)(__int64))(*v56 + 104LL);
  if ( v57 != sub_8D7E60 )
    goto LABEL_105;
  v58 = (_QWORD *)v56[3];
  v59 = *(__int64 (**)(void))(*v58 + 104LL);
  if ( (char *)v59 != (char *)v57 )
    goto LABEL_116;
  v60 = (_QWORD *)v58[3];
  v57 = *(__int64 (__fastcall **)(__int64))(*v60 + 104LL);
  if ( (char *)v57 != (char *)v59 )
  {
LABEL_105:
    v67 = (_QWORD *)((__int64 (*)(void))v57)();
    goto LABEL_80;
  }
  v61 = (_QWORD *)v60[3];
  v59 = *(__int64 (**)(void))(*v61 + 104LL);
  if ( (char *)v59 != (char *)v57 )
  {
LABEL_116:
    v67 = (_QWORD *)v59();
    goto LABEL_80;
  }
  v62 = (_QWORD *)v61[3];
  v57 = *(__int64 (__fastcall **)(__int64))(*v62 + 104LL);
  if ( (char *)v57 != (char *)v59 )
    goto LABEL_105;
  v63 = (_QWORD *)v62[3];
  v59 = *(__int64 (**)(void))(*v63 + 104LL);
  if ( (char *)v59 != (char *)v57 )
    goto LABEL_116;
  v64 = (_QWORD *)v63[3];
  v57 = *(__int64 (__fastcall **)(__int64))(*v64 + 104LL);
  if ( (char *)v57 != (char *)v59 )
    goto LABEL_105;
  v65 = (_QWORD *)v64[3];
  v59 = *(__int64 (**)(void))(*v65 + 104LL);
  if ( (char *)v59 != (char *)v57 )
    goto LABEL_116;
  v66 = (_QWORD **)v65[3];
  v57 = (__int64 (__fastcall *)(__int64))(*v66)[13];
  if ( (char *)v57 != (char *)v59 )
    goto LABEL_105;
  v67 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v66[3] + 104LL))(v66[3]);
LABEL_80:
  v68 = *(_QWORD *)(v41 + 32);
  v69 = *(unsigned int *)(v41 + 20);
  v70 = *(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v70 + 16) == 57
    && (v71 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v70 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v71 + 16) == 13)
    && ((*(_WORD *)(v71 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v137 = 1;
    v72 = *(_DWORD *)(v41 + 20);
  }
  else
  {
    v137 = sub_6F6DE0((__int64)v67, *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL));
    v72 = v69 * v137;
  }
  if ( v72 % (unsigned __int64)sub_6F6DE0((__int64)v67, *(_QWORD *)(v67[2311] & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v80 = sub_A180F0(*(_QWORD *)(a1 + 200), v142);
    v81 = sub_A2E130(a1, v80, 2186, 0);
    v82 = (unsigned __int8 **)v81;
    if ( v81 )
    {
      v83 = *(unsigned __int8 **)v81;
      if ( !*(_QWORD *)v81 )
      {
        v109 = *(_QWORD *)(v81 + 8);
        v110 = *(_DWORD *)(v109 + 14976);
        if ( v110 )
        {
          v111 = (unsigned int)(v110 - 1);
          *(_DWORD *)(v109 + 14976) = v111;
          v83 = *(unsigned __int8 **)(v109 + 8 * v111 + 14848);
          v112 = *((unsigned int *)v83 + 134);
          v113 = *((_QWORD *)v83 + 66);
          *v83 = 0;
          *((_DWORD *)v83 + 106) = 0;
          v114 = v113 + (v112 << 6);
          while ( v113 != v114 )
          {
            while ( 1 )
            {
              v114 -= 64;
              v115 = *(void **)(v114 + 24);
              if ( v115 == (void *)(v114 + 40) )
                break;
              v139 = v113;
              operator delete(v115, *(_QWORD *)(v114 + 40) + 1LL);
              v113 = v139;
              if ( v139 == v114 )
                goto LABEL_144;
            }
          }
LABEL_144:
          *((_DWORD *)v83 + 134) = 0;
        }
        else
        {
          v83 = (unsigned __int8 *)operator new(0x3A0u);
          *v83 = 0;
          *((_QWORD *)v83 + 12) = v83 + 112;
          *((_QWORD *)v83 + 16) = v83 + 144;
          *((_QWORD *)v83 + 20) = v83 + 176;
          *((_QWORD *)v83 + 21) = 0;
          *((_QWORD *)v83 + 24) = v83 + 208;
          *((_QWORD *)v83 + 25) = 0;
          *((_QWORD *)v83 + 28) = v83 + 240;
          *((_QWORD *)v83 + 29) = 0;
          *((_QWORD *)v83 + 32) = v83 + 272;
          *((_QWORD *)v83 + 33) = 0;
          *((_QWORD *)v83 + 36) = v83 + 304;
          *((_QWORD *)v83 + 37) = 0;
          *((_QWORD *)v83 + 40) = v83 + 336;
          *((_QWORD *)v83 + 44) = v83 + 368;
          *((_QWORD *)v83 + 48) = v83 + 400;
          *((_QWORD *)v83 + 13) = 0;
          v83[112] = 0;
          *((_QWORD *)v83 + 17) = 0;
          v83[144] = 0;
          v83[176] = 0;
          v83[208] = 0;
          v83[240] = 0;
          v83[272] = 0;
          v83[304] = 0;
          *((_QWORD *)v83 + 41) = 0;
          v83[336] = 0;
          *((_QWORD *)v83 + 45) = 0;
          v83[368] = 0;
          *((_QWORD *)v83 + 49) = 0;
          v83[400] = 0;
          *((_QWORD *)v83 + 52) = v83 + 432;
          *((_QWORD *)v83 + 53) = 0x800000000LL;
          *((_QWORD *)v83 + 66) = v83 + 544;
          *((_QWORD *)v83 + 67) = 0x600000000LL;
        }
        *v82 = v83;
      }
      v84 = v41;
      v85 = v137;
      v83[*v83 + 1] = 8;
      v86 = *v82;
      v87 = **v82;
      *v86 = v87 + 1;
      *(_QWORD *)&v86[8 * v87 + 16] = v84 & 0xFFFFFFFFFFFFFFF0LL;
      v88 = *v82;
      if ( !*v82 )
      {
        v130 = v82[1];
        v131 = *((_DWORD *)v130 + 3744);
        if ( v131 )
        {
          v132 = (unsigned int)(v131 - 1);
          *((_DWORD *)v130 + 3744) = v132;
          v88 = *(unsigned __int8 **)&v130[8 * v132 + 14848];
          *((_DWORD *)v88 + 106) = 0;
          v133 = *((unsigned int *)v88 + 134);
          v134 = *((_QWORD *)v88 + 66);
          *v88 = 0;
          v135 = v134 + (v133 << 6);
          while ( v134 != v135 )
          {
            while ( 1 )
            {
              v135 -= 64;
              v136 = *(void **)(v135 + 24);
              if ( v136 == (void *)(v135 + 40) )
                break;
              v138 = v134;
              operator delete(v136, *(_QWORD *)(v135 + 40) + 1LL);
              v134 = v138;
              if ( v138 == v135 )
                goto LABEL_165;
            }
          }
LABEL_165:
          *((_DWORD *)v88 + 134) = 0;
        }
        else
        {
          v88 = (unsigned __int8 *)operator new(0x3A0u);
          *v88 = 0;
          *((_QWORD *)v88 + 12) = v88 + 112;
          *((_QWORD *)v88 + 13) = 0;
          *((_QWORD *)v88 + 16) = v88 + 144;
          *((_QWORD *)v88 + 17) = 0;
          *((_QWORD *)v88 + 20) = v88 + 176;
          *((_QWORD *)v88 + 21) = 0;
          *((_QWORD *)v88 + 24) = v88 + 208;
          *((_QWORD *)v88 + 25) = 0;
          *((_QWORD *)v88 + 28) = v88 + 240;
          *((_QWORD *)v88 + 29) = 0;
          *((_QWORD *)v88 + 32) = v88 + 272;
          *((_QWORD *)v88 + 36) = v88 + 304;
          *((_QWORD *)v88 + 40) = v88 + 336;
          *((_QWORD *)v88 + 44) = v88 + 368;
          *((_QWORD *)v88 + 48) = v88 + 400;
          v88[112] = 0;
          v88[144] = 0;
          v88[176] = 0;
          v88[208] = 0;
          v88[240] = 0;
          *((_QWORD *)v88 + 33) = 0;
          v88[272] = 0;
          *((_QWORD *)v88 + 37) = 0;
          v88[304] = 0;
          *((_QWORD *)v88 + 41) = 0;
          v88[336] = 0;
          *((_QWORD *)v88 + 45) = 0;
          v88[368] = 0;
          *((_QWORD *)v88 + 49) = 0;
          v88[400] = 0;
          *((_QWORD *)v88 + 52) = v88 + 432;
          *((_QWORD *)v88 + 53) = 0x800000000LL;
          *((_QWORD *)v88 + 66) = v88 + 544;
          *((_QWORD *)v88 + 67) = 0x600000000LL;
        }
        *v82 = v88;
      }
      v88[*v88 + 1] = 3;
      v89 = *v82;
      v90 = **v82;
      *v89 = v90 + 1;
      *(_QWORD *)&v89[8 * v90 + 16] = v85;
      v91 = *v82;
      if ( !*v82 )
      {
        v123 = v82[1];
        v124 = *((_DWORD *)v123 + 3744);
        if ( v124 )
        {
          v125 = (unsigned int)(v124 - 1);
          *((_DWORD *)v123 + 3744) = v125;
          v91 = *(unsigned __int8 **)&v123[8 * v125 + 14848];
          v126 = *((unsigned int *)v91 + 134);
          v127 = *((_QWORD *)v91 + 66);
          *v91 = 0;
          *((_DWORD *)v91 + 106) = 0;
          v128 = v127 + (v126 << 6);
          while ( v127 != v128 )
          {
            while ( 1 )
            {
              v128 -= 64;
              v129 = *(void **)(v128 + 24);
              if ( v129 == (void *)(v128 + 40) )
                break;
              operator delete(v129, *(_QWORD *)(v128 + 40) + 1LL);
              if ( v127 == v128 )
                goto LABEL_158;
            }
          }
LABEL_158:
          *((_DWORD *)v91 + 134) = 0;
        }
        else
        {
          v91 = (unsigned __int8 *)operator new(0x3A0u);
          *v91 = 0;
          *((_QWORD *)v91 + 12) = v91 + 112;
          *((_QWORD *)v91 + 13) = 0;
          *((_QWORD *)v91 + 16) = v91 + 144;
          *((_QWORD *)v91 + 17) = 0;
          *((_QWORD *)v91 + 20) = v91 + 176;
          *((_QWORD *)v91 + 21) = 0;
          *((_QWORD *)v91 + 24) = v91 + 208;
          *((_QWORD *)v91 + 28) = v91 + 240;
          *((_QWORD *)v91 + 32) = v91 + 272;
          *((_QWORD *)v91 + 36) = v91 + 304;
          *((_QWORD *)v91 + 40) = v91 + 336;
          *((_QWORD *)v91 + 44) = v91 + 368;
          *((_QWORD *)v91 + 48) = v91 + 400;
          v91[112] = 0;
          v91[144] = 0;
          v91[176] = 0;
          *((_QWORD *)v91 + 25) = 0;
          v91[208] = 0;
          *((_QWORD *)v91 + 29) = 0;
          v91[240] = 0;
          *((_QWORD *)v91 + 33) = 0;
          v91[272] = 0;
          *((_QWORD *)v91 + 37) = 0;
          v91[304] = 0;
          *((_QWORD *)v91 + 41) = 0;
          v91[336] = 0;
          *((_QWORD *)v91 + 45) = 0;
          v91[368] = 0;
          *((_QWORD *)v91 + 49) = 0;
          v91[400] = 0;
          *((_QWORD *)v91 + 52) = v91 + 432;
          *((_QWORD *)v91 + 53) = 0x800000000LL;
          *((_QWORD *)v91 + 66) = v91 + 544;
          *((_QWORD *)v91 + 67) = 0x600000000LL;
        }
        *v82 = v91;
      }
      v91[*v91 + 1] = 3;
      v92 = *v82;
      v93 = **v82;
      *v92 = v93 + 1;
      *(_QWORD *)&v92[8 * v93 + 16] = v69;
      v94 = sub_6F6DE0((__int64)v67, *(_QWORD *)(v67[2311] & 0xFFFFFFFFFFFFFFF0LL));
      v95 = *v82;
      v96 = v94;
      if ( !*v82 )
      {
        v116 = v82[1];
        v117 = *((_DWORD *)v116 + 3744);
        if ( v117 )
        {
          v118 = (unsigned int)(v117 - 1);
          *((_DWORD *)v116 + 3744) = v118;
          v95 = *(unsigned __int8 **)&v116[8 * v118 + 14848];
          v119 = *((unsigned int *)v95 + 134);
          v120 = *((_QWORD *)v95 + 66);
          *v95 = 0;
          *((_DWORD *)v95 + 106) = 0;
          v121 = v120 + (v119 << 6);
          while ( v120 != v121 )
          {
            while ( 1 )
            {
              v121 -= 64;
              v122 = *(void **)(v121 + 24);
              if ( v122 == (void *)(v121 + 40) )
                break;
              operator delete(v122, *(_QWORD *)(v121 + 40) + 1LL);
              if ( v120 == v121 )
                goto LABEL_151;
            }
          }
LABEL_151:
          *((_DWORD *)v95 + 134) = 0;
        }
        else
        {
          v95 = (unsigned __int8 *)operator new(0x3A0u);
          *v95 = 0;
          *((_QWORD *)v95 + 12) = v95 + 112;
          *((_QWORD *)v95 + 13) = 0;
          *((_QWORD *)v95 + 16) = v95 + 144;
          *((_QWORD *)v95 + 20) = v95 + 176;
          *((_QWORD *)v95 + 24) = v95 + 208;
          *((_QWORD *)v95 + 28) = v95 + 240;
          *((_QWORD *)v95 + 32) = v95 + 272;
          *((_QWORD *)v95 + 36) = v95 + 304;
          *((_QWORD *)v95 + 40) = v95 + 336;
          *((_QWORD *)v95 + 44) = v95 + 368;
          *((_QWORD *)v95 + 48) = v95 + 400;
          v95[112] = 0;
          *((_QWORD *)v95 + 17) = 0;
          v95[144] = 0;
          *((_QWORD *)v95 + 21) = 0;
          v95[176] = 0;
          *((_QWORD *)v95 + 25) = 0;
          v95[208] = 0;
          *((_QWORD *)v95 + 29) = 0;
          v95[240] = 0;
          *((_QWORD *)v95 + 33) = 0;
          v95[272] = 0;
          *((_QWORD *)v95 + 37) = 0;
          v95[304] = 0;
          *((_QWORD *)v95 + 41) = 0;
          v95[336] = 0;
          *((_QWORD *)v95 + 45) = 0;
          v95[368] = 0;
          *((_QWORD *)v95 + 49) = 0;
          v95[400] = 0;
          *((_QWORD *)v95 + 52) = v95 + 432;
          *((_QWORD *)v95 + 53) = 0x800000000LL;
          *((_QWORD *)v95 + 66) = v95 + 544;
          *((_QWORD *)v95 + 67) = 0x600000000LL;
        }
        *v82 = v95;
      }
      v95[*v95 + 1] = 3;
      v97 = *v82;
      v98 = **v82;
      *v97 = v98 + 1;
      *(_QWORD *)&v97[8 * v98 + 16] = v96;
    }
    else
    {
      sub_6F6DE0((__int64)v67, *(_QWORD *)(v67[2311] & 0xFFFFFFFFFFFFFFF0LL));
    }
    return 0;
  }
  if ( (unsigned __int8)sub_B080B0(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v99 = sub_6BF060(v67, v68);
    if ( v99 == sub_2575D30() )
    {
      v100 = sub_A180F0(*(_QWORD *)(a1 + 200), v142);
      v101 = (unsigned __int8 **)sub_A2E130(a1, v100, 2189, 0);
      if ( v101 )
        sub_8356A0(v101, v68, 8u);
      return 0;
    }
  }
  return 1;
}

