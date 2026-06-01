void __fastcall sub_16F8570(__int64 *a1, unsigned __int64 a2, __int64 a3, double a4)
{
  bool v4; // zf
  __int64 v6; // r12
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // r13
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // r9
  int v24; // r13d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r14d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // r15d
  unsigned int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  size_t v44; // rax
  const char *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 *v49; // rbp
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // eax
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rax
  unsigned __int64 v61; // r12
  unsigned int v62; // r13d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r14
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // [rsp+8h] [rbp-150h]
  __int64 v91; // [rsp+8h] [rbp-150h]
  __int64 v92; // [rsp+8h] [rbp-150h]
  __int64 v93; // [rsp+8h] [rbp-150h]
  __int64 v94; // [rsp+10h] [rbp-148h]
  __int64 v95; // [rsp+10h] [rbp-148h]
  __int64 v96; // [rsp+18h] [rbp-140h] BYREF
  __int64 v97; // [rsp+20h] [rbp-138h] BYREF
  __int64 v98; // [rsp+28h] [rbp-130h] BYREF
  void *v99[2]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v100[16]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v101; // [rsp+50h] [rbp-108h] BYREF
  char v102; // [rsp+58h] [rbp-100h]
  __int64 v103; // [rsp+5Ch] [rbp-FCh]
  char v104; // [rsp+64h] [rbp-F4h]
  void *v105; // [rsp+68h] [rbp-F0h]
  __int64 v106; // [rsp+70h] [rbp-E8h]
  _BYTE v107[24]; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v108[200]; // [rsp+90h] [rbp-C8h] BYREF

  v4 = *(_DWORD *)(a2 + 16) == 1;
  v96 = a3;
  if ( !v4 )
    return;
  v6 = *(_QWORD *)(a3 + 40) & 7LL;
  if ( (*(_QWORD *)(a3 + 40) & 7) != 0 || (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return;
  v9 = sub_B75A50(a3, 0);
  if ( v9 > 0xF6 )
  {
    if ( v9 - 561 > 5 )
      goto LABEL_8;
  }
  else if ( v9 < 0xF1 && v9 - 94 > 5 )
  {
LABEL_8:
    v10 = v96;
    if ( !v96 )
      return;
    v11 = *(_QWORD *)(v96 + 40) & 7LL;
    if ( (*(_QWORD *)(v96 + 40) & 7) != 0 )
      return;
    v12 = *(_QWORD *)(v96 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v12 )
      return;
    v13 = *(_QWORD *)(v12 + 16);
    if ( *(_DWORD *)v13 != 3 )
      return;
LABEL_12:
    if ( *(_WORD *)(v13 + 16) == 25185 && *(_BYTE *)(v13 + 18) == 115 )
    {
      v14 = sub_B8EC80(v10);
      if ( v14 )
        goto LABEL_15;
    }
    goto LABEL_13;
  }
  v10 = v96;
  LODWORD(v11) = sub_B75A50(a3, 0);
  if ( v96 )
  {
    v42 = *(_QWORD *)(v96 + 40);
    if ( (v42 & 7) == 0 )
    {
      v43 = v42 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v43 )
      {
        v13 = *(_QWORD *)(v43 + 16);
        if ( *(_DWORD *)v13 == 3 )
          goto LABEL_12;
      }
    }
  }
LABEL_13:
  if ( !(_DWORD)v11 )
    return;
  v14 = 0;
LABEL_15:
  v15 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v16 = *(_QWORD *)(sub_BFBAE0(v15) + 8);
  v98 = *(_QWORD *)(v15 + 8);
  v97 = v16;
  if ( sub_F65360(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL), 0, v98, v17, v18, v19) )
  {
    if ( v14 )
    {
      v99[0] = v100;
      v44 = j__strlen("std::abs");
      v45 = "std::abs";
      sub_16BA000(v99, "std::abs", (__int64)&aStdAbs[v44]);
    }
    else
    {
      v45 = *(const char **)(a1[31] + 17520);
      sub_FBD280((__int64)v99, (__int64)v45, v11);
    }
    v49 = a1 + 1;
    v50 = sub_C00A40(a2, (__int64)v45, v46, v47, v48);
    sub_168B9F0((__int64)v108, v49, v50, 0x1D54u, 0);
    v51 = sub_1605D30((__int64)v108, &v97);
    sub_1605D30(v51, &v98);
    sub_15F7200(v108);
    v55 = sub_C00A40(a2, (__int64)&v98, v52, v53, v54);
    sub_168B9F0((__int64)v108, v49, v55, 0x18CEu, 0);
    v56 = sub_1682A40((__int64)v108, (__int64)v99);
    v57 = sub_EEC8C0(*(_QWORD *)(a2 + 32), (__int64)v99, a4);
    v103 = 0;
    v104 = 0;
    v105 = v107;
    v106 = 0;
    v107[0] = 0;
    v107[16] = 0;
    v101 = v57;
    v102 = 1;
    sub_1589170(v56, &v101);
    if ( v105 != v107 )
      operator delete(v105);
    sub_15F7200(v108);
    if ( v99[0] != v100 )
      operator delete(v99[0]);
    return;
  }
  v22 = *(_QWORD *)(v97 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 || sub_16C4770(v22) )
  {
    LODWORD(v101) = 0;
    v58 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v97 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    if ( (unsigned int)(v58 - 25) > 1 )
    {
      v58 = (unsigned int)(v58 - 2);
      if ( (unsigned __int8)v58 <= 4u )
        LODWORD(v101) = 2;
    }
    else
    {
      LODWORD(v101) = 1;
    }
    v59 = sub_C00A40(a2, 0, v58, v20, v21);
    sub_168B9F0((__int64)v108, a1 + 1, v59, 0x1C50u, 0);
    v60 = sub_1588370((__int64)v108, (unsigned int *)&v101);
    sub_1605D30(v60, &v97);
    sub_15F7200(v108);
    return;
  }
  if ( v14 )
    return;
  v24 = sub_16B95E0(v97, 0, v97, v20, v21, v23);
  v29 = sub_16B95E0(v98, 0, v25, v26, v27, v28);
  if ( v24 == v29 )
  {
    v61 = sub_A97D20(a1[31], *(_QWORD *)(v97 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v61 > sub_A97D20(a1[31], *(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      v62 = sub_16B91E0((_QWORD *)a1[31], v97, v11);
      v66 = sub_C00A40(a2, v97, v63, v64, v65);
      sub_168B9F0((__int64)v108, a1 + 1, v66, 0x194Bu, 0);
      v67 = sub_16060E0((__int64)v108, &v96);
      v68 = sub_1605D30(v67, &v97);
      sub_1605D30(v68, &v98);
      sub_15F7200(v108);
      if ( v62 )
      {
        v69 = sub_EEC8C0(*(_QWORD *)(a2 + 32), (__int64)&v98, a4);
        v73 = sub_C00A40(a2, (__int64)&v98, v70, v71, v72);
        sub_16F7D30(a1, v73, v69, v62, v97);
      }
    }
    return;
  }
  if ( v24 == 1 )
  {
    if ( (_DWORD)v11 == 99 )
      goto LABEL_114;
    if ( (unsigned int)v11 <= 0x63 )
    {
      if ( (_DWORD)v11 != 96 )
      {
        if ( (unsigned int)v11 > 0x60 )
        {
          if ( (_DWORD)v11 != 97 )
          {
            LODWORD(v6) = 561;
            goto LABEL_30;
          }
          goto LABEL_114;
        }
        if ( (_DWORD)v11 != 94 )
        {
          if ( (_DWORD)v11 == 95 )
            LODWORD(v6) = 562;
          goto LABEL_30;
        }
      }
    }
    else if ( (_DWORD)v11 != 243 )
    {
      if ( (unsigned int)v11 <= 0xF3 )
      {
        if ( (_DWORD)v11 != 241 )
        {
          if ( (_DWORD)v11 == 242 )
            LODWORD(v6) = 562;
          goto LABEL_30;
        }
      }
      else if ( (_DWORD)v11 != 245 )
      {
        if ( (unsigned int)v11 >= 0xF5 )
        {
          if ( (_DWORD)v11 == 246 )
            LODWORD(v6) = 562;
          goto LABEL_30;
        }
LABEL_114:
        LODWORD(v6) = 562;
        goto LABEL_30;
      }
    }
    LODWORD(v6) = 561;
    goto LABEL_30;
  }
  if ( v24 )
  {
    if ( (_DWORD)v11 == 99 )
      goto LABEL_115;
    if ( (unsigned int)v11 <= 0x63 )
    {
      if ( (_DWORD)v11 != 96 )
      {
        if ( (unsigned int)v11 > 0x60 )
        {
          if ( (_DWORD)v11 != 97 )
          {
            LODWORD(v6) = 241;
            goto LABEL_30;
          }
          goto LABEL_115;
        }
        if ( (_DWORD)v11 != 94 )
        {
          if ( (_DWORD)v11 == 95 )
            LODWORD(v6) = 242;
          goto LABEL_30;
        }
      }
    }
    else if ( (_DWORD)v11 != 563 )
    {
      if ( (unsigned int)v11 <= 0x233 )
      {
        if ( (_DWORD)v11 != 561 )
        {
          if ( (_DWORD)v11 == 562 )
            LODWORD(v6) = 242;
          goto LABEL_30;
        }
      }
      else if ( (_DWORD)v11 != 565 )
      {
        if ( (unsigned int)v11 >= 0x235 )
        {
          if ( (_DWORD)v11 == 566 )
            LODWORD(v6) = 242;
          goto LABEL_30;
        }
LABEL_115:
        LODWORD(v6) = 242;
        goto LABEL_30;
      }
    }
    LODWORD(v6) = 241;
    goto LABEL_30;
  }
  if ( (_DWORD)v11 == 246 )
  {
    LODWORD(v6) = 95;
    goto LABEL_30;
  }
  if ( (unsigned int)v11 > 0xF6 )
  {
    if ( (_DWORD)v11 != 563 )
    {
      LODWORD(v6) = 94;
      if ( (unsigned int)v11 <= 0x233 )
      {
        if ( (_DWORD)v11 != 561 )
        {
          LODWORD(v6) = 95;
          if ( (_DWORD)v11 != 562 )
            LODWORD(v6) = 0;
        }
      }
      else if ( (_DWORD)v11 != 565 )
      {
        LODWORD(v6) = 95;
        if ( (unsigned int)v11 >= 0x235 && (_DWORD)v11 != 566 )
          LODWORD(v6) = 0;
      }
      goto LABEL_30;
    }
LABEL_126:
    LODWORD(v6) = 94;
    goto LABEL_30;
  }
  if ( (_DWORD)v11 == 243 )
    goto LABEL_126;
  if ( (unsigned int)v11 > 0xF3 )
  {
    LODWORD(v6) = 95;
    if ( (_DWORD)v11 != 244 )
      LODWORD(v6) = 94;
  }
  else
  {
    LODWORD(v6) = 94;
    if ( (_DWORD)v11 != 241 )
    {
      LODWORD(v6) = 95;
      if ( (_DWORD)v11 != 242 )
        LODWORD(v6) = 0;
    }
  }
LABEL_30:
  v33 = sub_16B91E0((_QWORD *)a1[31], v97, v6);
  if ( v33 )
  {
    v34 = sub_C00A40(a2, v97, v30, v31, v32);
    sub_168B9F0((__int64)v108, a1 + 1, v34, 0x1D91u, 0);
    v35 = (__int64)&v96;
    v36 = sub_16060E0((__int64)v108, &v96);
    if ( *(_BYTE *)(v36 + 120) )
    {
      v35 = v29;
      v90 = v36;
      sub_16B71B0((unsigned __int8 **)(v36 + 32), v29);
      v74 = v90;
    }
    else
    {
      if ( !*(_BYTE *)(v36 + 132) )
      {
LABEL_33:
        sub_15F7200(v108);
        v37 = sub_EEC8C0(*(_QWORD *)(a2 + 32), v35, a4);
        v41 = sub_C00A40(a2, v35, v38, v39, v40);
        sub_16F7D30(a1, v41, v37, v33, v97);
        return;
      }
      v94 = v36;
      v75 = sub_168B9E0((_QWORD *)v36);
      v79 = v94;
      v91 = v75;
      v80 = *(_QWORD *)(v94 + 16);
      if ( v80 )
      {
        v80 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v80 + 32LL))(*(_QWORD *)(v94 + 16));
        v79 = v94;
      }
      v95 = v79;
      v101 = v80;
      v81 = sub_1587BC0(v91, &v101, v79, v76, v77, v78);
      v35 = v29;
      sub_16B71B0((unsigned __int8 **)(*v81 + 32LL * *(unsigned int *)(v95 + 128) + 8), v29);
      v74 = v95;
    }
    if ( *(_BYTE *)(v74 + 120) )
    {
      v35 = v24;
      sub_16B71B0((unsigned __int8 **)(v74 + 32), v24);
    }
    else if ( *(_BYTE *)(v74 + 132) )
    {
      v92 = v74;
      v82 = sub_168B9E0((_QWORD *)v74);
      v86 = v92;
      v87 = v82;
      v88 = *(_QWORD *)(v92 + 16);
      if ( v88 )
      {
        v88 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v88 + 32LL))(*(_QWORD *)(v92 + 16));
        v86 = v92;
      }
      v93 = v86;
      v101 = v88;
      v89 = sub_1587BC0(v87, &v101, v86, v83, v84, v85);
      v35 = v24;
      sub_16B71B0((unsigned __int8 **)(*v89 + 32LL * *(unsigned int *)(v93 + 128) + 8), v24);
    }
    goto LABEL_33;
  }
}
