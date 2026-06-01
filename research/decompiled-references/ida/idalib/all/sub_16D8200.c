void __fastcall sub_16D8200(__int64 a1, void **a2, __int64 a3, unsigned __int64 a4, unsigned int a5, double a6)
{
  void **v7; // r13
  unsigned __int64 v9; // rbx
  unsigned __int64 v11; // rbx
  char v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int16 v19; // ax
  __int64 v20; // rdi
  __int16 v21; // ax
  unsigned int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  unsigned int i; // eax
  __int64 v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rdi
  unsigned __int64 *v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  void ***v34; // rcx
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rcx
  __int64 *v38; // rax
  unsigned int v39; // eax
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rax
  unsigned __int8 v43; // r14
  char v44; // cl
  __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rbp
  bool v48; // al
  char v49; // cl
  unsigned __int64 v50; // rax
  char v51; // r12
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // rbp
  __int64 v70; // r8
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // eax
  unsigned int *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r13
  __int64 v79; // rbp
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 *v87; // rsi
  __int64 v88; // rcx
  char v89; // dl
  unsigned __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // r12
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rax
  __int64 v97; // [rsp+8h] [rbp-140h]
  char v98; // [rsp+10h] [rbp-138h]
  char v99; // [rsp+10h] [rbp-138h]
  char v100; // [rsp+10h] [rbp-138h]
  __int64 v101; // [rsp+10h] [rbp-138h]
  __int64 v103; // [rsp+20h] [rbp-128h]
  __int64 *v104; // [rsp+28h] [rbp-120h]
  char v105; // [rsp+38h] [rbp-110h]
  void *v106; // [rsp+40h] [rbp-108h]
  unsigned __int64 v107; // [rsp+48h] [rbp-100h]
  unsigned int v108; // [rsp+54h] [rbp-F4h] BYREF
  __int64 v109; // [rsp+58h] [rbp-F0h] BYREF
  unsigned __int64 v110; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v111; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v112[2]; // [rsp+70h] [rbp-D8h] BYREF
  void *v113; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v114; // [rsp+88h] [rbp-C0h]

  v7 = a2;
  v97 = (__int64)a2[5];
  v98 = *((_BYTE *)a2 + 56);
  v9 = (*((_DWORD *)a2 + 13) & 0x3FFFFFFF) - 1 - ((*((_DWORD *)a2 + 13) >> 30) & 1u);
  if ( v9 >= a4 )
  {
    sub_168B9F0((__int64)&v113, (__int64 *)(a1 + 8), a5, 0x13D2u, 0);
    LODWORD(v111) = 0;
    v35 = sub_1587D10((__int64)&v113, (int *)&v111);
    v36 = *((_DWORD *)a2 + 13);
LABEL_38:
    LODWORD(v112[0]) = v36 & 0x3FFFFFFF;
    sub_16CF160(v35, (unsigned int *)v112);
    sub_15F7200(&v113);
    return;
  }
  v11 = *(_QWORD *)(a3 + 8 * v9);
  v12 = 1;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) - 4) > 1 )
    v12 = *(_BYTE *)(a1 + 2440);
  v104 = *(__int64 **)(a1 + 2448);
  v103 = *(_QWORD *)(a1 + 248);
  if ( !v11 )
    return;
  v13 = v11;
  while ( 1 )
  {
    v14 = sub_BFBAE0(v13);
    v17 = sub_BFD550(v14);
    v19 = *(_WORD *)v17 & 0x1FF;
    if ( v19 == 71 )
    {
      v29 = *(_QWORD *)(v17 + 16);
      if ( !v29 )
        goto LABEL_21;
      if ( (*(_BYTE *)(v29 + 29) & 1) == 0 )
        return;
      v30 = sub_B8C3D0(v29, (__int64)a2, v15, v16, v17, v18);
      v32 = *v30;
      v33 = *v30 + 8LL * *((unsigned int *)v30 + 2);
      if ( v32 >= v33 )
      {
        if ( v32 == v33 )
          return;
        if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 384 )
        {
          v40 = (__int64 *)(v33 + 8);
          while ( (__int64 *)v32 != v40 )
          {
            v41 = *v40++;
            if ( *(_WORD *)(v41 + 36) == 384 )
              goto LABEL_49;
          }
          return;
        }
      }
      else
      {
        v34 = (void ***)v32;
        while ( 1 )
        {
          a2 = *v34;
          if ( *((_WORD *)*v34 + 18) == 384 )
            break;
          if ( (void ***)v33 == ++v34 )
            return;
        }
        if ( (void ***)v33 == v34 )
          return;
      }
LABEL_49:
      v37 = *(_QWORD *)v32;
      if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 384 )
      {
        v38 = (__int64 *)(v32 + 8);
        do
          v37 = *v38++;
        while ( *(_WORD *)(v37 + 36) != 384 );
      }
      if ( v97 != *(_QWORD *)(v37 + 40) )
      {
        v39 = sub_C00A40(v11, (__int64)a2, v32, v37, v31);
        sub_168B9F0((__int64)&v113, (__int64 *)(a1 + 8), v39, 0x1D1Eu, 0);
        v112[0] = sub_EEC8C0(v11, a1 + 8, a6);
        sub_1587DB0((__int64)&v113, v112);
        sub_15F7200(&v113);
        return;
      }
      v42 = *(__int64 **)(v37 + 48);
      v43 = *(_BYTE *)(v37 + 56);
      v44 = *(_BYTE *)(v37 + 57);
      v45 = *v42;
LABEL_61:
      v46 = ((_DWORD)v7[6] & 0x3FFFFFFF) - 1 - ((*((_DWORD *)v7 + 12) >> 30) & 1u);
      if ( v46 >= a4 )
      {
        sub_168B9F0((__int64)&v113, (__int64 *)(a1 + 8), a5, 0x13D2u, 0);
        LODWORD(v111) = 1;
        v35 = sub_1587D10((__int64)&v113, (int *)&v111);
        v36 = *((_DWORD *)v7 + 12);
        goto LABEL_38;
      }
      v47 = *(_QWORD *)(a3 + 8 * v46);
      if ( v98 )
      {
        if ( (*(_WORD *)v47 & 0x1FF) == 0x4F )
        {
          v99 = v44;
          v48 = sub_F67340(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL));
          v44 = v99;
          if ( v48 && ((*(_WORD *)(v47 + 2) >> 3) & 0x7F) == 1 )
            v47 = *(_QWORD *)(v47 + 16);
        }
        v100 = v44;
        v109 = *(_QWORD *)(v47 + 8);
        if ( sub_F67340(*(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF0LL)) )
          return;
        v49 = 2 * (v100 & 1);
        v50 = *(_QWORD *)(a1 + 248);
        v51 = v49 | v43 & 1 | v105 & 0xFC;
        if ( (v49 & 2) == 0 )
        {
          v52 = sub_A70010(v50, v45);
          v110 = v52;
          if ( (v51 & 1) == 0 )
          {
            v87 = (__int64 *)(v52 & 0xFFFFFFFFFFFFFFF0LL);
            v88 = *(_QWORD *)&byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL];
            v89 = v88 | v109;
            v90 = v88 & 0xFFFFFFFFFFFFFFF8LL;
            v91 = v90 | v89 & 7;
            if ( (*(_QWORD *)&byte_8[v52 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v52 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v52) & 7) == v91 )
              return;
            v92 = sub_F68450(*v87, (__int64)v87, v91, v90, v55);
            v96 = sub_F68450(*(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v87, v93, v94, v95);
            v45 = v92;
            if ( sub_16B5970(v96, v92) )
              return;
            goto LABEL_72;
          }
          v56 = sub_F68450(*(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL), v45, v53, v54, v55);
          v45 = sub_F68450(*(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF0LL), v45, v57, v58, v59);
          v60 = sub_16C47E0(*(_QWORD *)(a1 + 248), v45, v56) ^ 1;
LABEL_71:
          if ( !(_BYTE)v60 )
            return;
LABEL_72:
          v64 = sub_C00A40(v47, v45, v61, v62, v63);
          sub_168B9F0((__int64)&v113, (__int64 *)(a1 + 8), v64, 0x1D1Du, 0);
          v65 = sub_1605D30((__int64)&v113, &v109);
          v66 = v65;
          if ( *(_BYTE *)(v65 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v65 + 32), v97, 5u);
          }
          else if ( *(_BYTE *)(v65 + 132) )
          {
            v81 = sub_168B9E0((_QWORD *)v65);
            v85 = *(_QWORD *)(v66 + 16);
            if ( v85 )
            {
              v101 = v81;
              v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v85 + 32LL))(v85);
              v81 = v101;
            }
            v112[0] = v85;
            v86 = sub_1587BC0(v81, v112, v81, v82, v83, v84);
            sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * *(unsigned int *)(v66 + 128) + 8), v97, 5u);
          }
          v108 = v43;
          v67 = sub_1588370(v66, &v108);
          v68 = sub_1605D30(v67, (__int64 *)&v110);
          v111 = sub_EEC8C0(v47, (__int64)&v110, a6);
          v69 = sub_1587DB0(v68, &v111);
          v112[0] = sub_EEC8C0(v11, (__int64)&v111, a6);
          sub_1587DB0(v69, v112);
          sub_15F7200(&v113);
          return;
        }
      }
      else
      {
        v70 = *(_QWORD *)(v47 + 8);
        v109 = v70;
        if ( ((2 * (v44 & 1)) & 2) == 0 )
        {
          v110 = v45;
          if ( (v43 & 1) == 0 )
          {
            if ( (*(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v45) & 7) == (*(_QWORD *)&byte_8[v70 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v70 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v70) & 7)
              || sub_16B5970(v70, v45) )
            {
              return;
            }
            goto LABEL_72;
          }
          v80 = v45;
          v45 = v70;
          v60 = sub_16C47E0(*(_QWORD *)(a1 + 248), v70, v80) ^ 1;
          goto LABEL_71;
        }
        v50 = *(_QWORD *)(a1 + 248);
      }
      v71 = v50;
      if ( !(unsigned int)sub_BFE6E0(v47, v50, 2, a6) )
      {
        v75 = sub_C00A40(v47, v71, v72, v73, v74);
        sub_168B9F0((__int64)&v113, (__int64 *)(a1 + 8), v75, 0x1D1Cu, 0);
        v76 = *(unsigned int **)(v97 + 16);
        v77 = *v76;
        v112[0] = (__int64)(v76 + 4);
        v112[1] = v77;
        v78 = sub_166BAF0((__int64)&v113, (__int64)v112);
        v110 = sub_EEC8C0(v47, (__int64)v112, a6);
        v79 = sub_1587DB0(v78, (__int64 *)&v110);
        v111 = sub_EEC8C0(v11, (__int64)&v110, a6);
        sub_1587DB0(v79, &v111);
        sub_15F7200(&v113);
      }
      return;
    }
    if ( v19 <= 0x47u )
      break;
    if ( v19 == 118 )
    {
      if ( ((*(_WORD *)(v17 + 2) >> 3) & 0x3F) != 0x20 )
        return;
      v13 = *(_QWORD *)(v17 + 24);
    }
    else
    {
      if ( v19 < 0x76u || ((v19 + 384) & 0x1FFu) > 1 )
        return;
      v20 = v19 == 128 ? *(_QWORD *)(v17 + 24) : *(_QWORD *)(v17 + 32);
      a2 = &v113;
      v107 = v17;
      if ( !(unsigned __int8)sub_C3D850(v20, &v113, v103, v12, v17, v18) )
        return;
      v21 = *(_WORD *)v107 & 0x1FF;
      if ( !(_BYTE)v113 )
      {
        if ( v21 != 128 )
        {
          v13 = *(_QWORD *)(v107 + 48);
          goto LABEL_44;
        }
LABEL_86:
        v13 = *(_QWORD *)(v107 + 40);
        goto LABEL_44;
      }
      if ( v21 != 128 )
        goto LABEL_86;
      v13 = *(_QWORD *)(v107 + 32);
    }
LABEL_44:
    if ( !v13 )
      return;
  }
  if ( v19 == 4 )
  {
    if ( (unsigned int)(*(_BYTE *)(v17 + 2) >> 3) - 4 > 1 )
      return;
    v13 = *(_QWORD *)(v17 + 16);
    goto LABEL_44;
  }
  if ( v19 != 52 )
    return;
  sub_16B6640((__int64)&v113, *(_QWORD *)(v17 + 16), *(_DWORD *)(v17 + 24));
  v22 = v114;
  if ( v114 <= 0x40 )
  {
    v106 = v113;
    goto LABEL_21;
  }
  if ( v22 - (unsigned int)sub_2206780(&v113) > 0x40 )
  {
    if ( v113 )
      operator delete[](v113);
  }
  else
  {
    v106 = *(void **)v113;
    operator delete[](v113);
LABEL_21:
    if ( v104 )
    {
      v23 = *((unsigned int *)v104 + 4);
      v24 = *v104;
      if ( (_DWORD)v23 )
      {
        v25 = 1;
        for ( i = (v23 - 1)
                & (((0xBF58476D1CE4E5B9LL
                   * ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v106) >> 31) ^ (484763065 * (_DWORD)v106)
                    | ((unsigned __int64)(((unsigned int)v97 >> 9) ^ ((unsigned int)v97 >> 4)) << 32))) >> 31)
                 ^ (484763065 * (((0xBF58476D1CE4E5B9LL * (unsigned __int64)v106) >> 31) ^ (484763065 * (_DWORD)v106))));
              ;
              i = (v23 - 1) & v28 )
        {
          v27 = v24 + 32LL * i;
          if ( v97 == *(_QWORD *)v27 && *(void **)(v27 + 8) == v106 )
            break;
          if ( *(_QWORD *)v27 == -4096 && *(_QWORD *)(v27 + 8) == -1 )
            return;
          v28 = v25 + i;
          ++v25;
        }
        if ( v27 != v24 + 32 * v23 )
        {
          v45 = *(_QWORD *)(v27 + 16);
          v105 = *(_BYTE *)(v27 + 24);
          v43 = v105 & 1;
          v44 = (v105 & 2) != 0;
          goto LABEL_61;
        }
      }
    }
  }
}
