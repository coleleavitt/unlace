void __fastcall sub_E878C0(__int64 a1, unsigned __int64 a2, char a3)
{
  int v3; // eax
  _QWORD *v4; // r13
  unsigned __int64 v5; // r15
  _QWORD *v7; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r14d
  unsigned int *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  bool v19; // r14
  unsigned int v20; // r14d
  __int64 v21; // rdx
  unsigned int *v22; // r14
  __int64 v23; // r14
  __int64 v24; // rdx
  bool v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rdx
  char v30; // r14
  __int64 v31; // rax
  int v32; // r14d
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rax
  char v45; // r14
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int *v53; // rsi
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rdi
  bool v56; // r14
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned __int64 *v71; // r15
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 *v75; // r14
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned __int64 v80; // rcx
  bool v81; // zf
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  __int64 (__fastcall *v84)(__int64); // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  bool v87; // bp
  __int64 v88; // r15
  __int64 v89; // rbp
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rcx
  __int64 v93; // rax
  __int64 *v94; // rbp
  __int64 v95; // rax
  __int64 *v96; // r13
  __int64 v97; // rsi
  __int64 v98; // rax
  __int64 v99; // [rsp-18h] [rbp-F8h]
  __int64 v100; // [rsp+0h] [rbp-E0h]
  unsigned int *v101; // [rsp+0h] [rbp-E0h]
  int v102; // [rsp+0h] [rbp-E0h]
  unsigned int *v103; // [rsp+0h] [rbp-E0h]
  __int64 v104; // [rsp+0h] [rbp-E0h]
  __int64 v105; // [rsp+8h] [rbp-D8h]
  __int64 v106; // [rsp+10h] [rbp-D0h]
  __int64 *v107; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+20h] [rbp-C0h]
  _BYTE v109[184]; // [rsp+28h] [rbp-B8h] BYREF

  v3 = *(_BYTE *)(a2 + 80) & 0x7F;
  if ( (unsigned int)(v3 - 60) <= 1 )
    return;
  v4 = (_QWORD *)(a2 + 72);
  v5 = a2 + 72;
  v7 = (_QWORD *)a2;
  while ( 1 )
  {
    if ( (unsigned int)(v3 - 34) <= 5 && v5 != 72 && (unsigned __int8)sub_B53D40(v5 - 72) )
    {
      if ( (*(_BYTE *)(v5 + 8) & 0x7Fu) - 35 > 3 )
        return;
      v9 = *(_QWORD *)(sub_B68470(v5) + 16);
      v10 = (v9 & 4) != 0 ? *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 8) : v9 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = *(_BYTE *)(v10 + 8) & 0x7F;
      if ( !v11 || v11 == 24 || sub_B53F10(v5 - 72) )
        return;
    }
    v12 = *(_QWORD *)(sub_B68470(v5) + 16);
    v5 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v12 & 4) != 0 )
      v5 = *(_QWORD *)v5;
    if ( !v5 )
      break;
    v3 = *(_BYTE *)(v5 + 8) & 0x7F;
    if ( (unsigned int)(v3 - 60) <= 1 )
      return;
  }
  v105 = a1 + 176;
  v13 = *(unsigned int *)(a1 + 184);
  v14 = *(_BYTE *)(a2 + 80) & 0x7F;
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    a2 = a1 + 192;
    sub_22134E0(a1 + 176, a1 + 192, v13 + 1, 4);
    v13 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v13) = v14;
  ++*(_DWORD *)(a1 + 184);
  v15 = (unsigned int *)sub_B53E10((__int64)v7);
  v106 = a1 + 24;
  v18 = *(_QWORD *)(a1 + 32);
  v19 = v15 != nullptr;
  if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(a1 + 40) )
  {
    a2 = a1 + 48;
    v101 = v15;
    sub_22130D0(a1 + 24, a1 + 48, v18 + 1, 1);
    v18 = *(_QWORD *)(a1 + 32);
    v15 = v101;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v18) = v19;
  ++*(_QWORD *)(a1 + 32);
  if ( v15 )
  {
    v18 = *(unsigned int *)(a1 + 184);
    a2 = *(unsigned int *)(a1 + 188);
    v20 = *v15;
    if ( v18 + 1 > a2 )
    {
      a2 = a1 + 192;
      v103 = v15;
      sub_22134E0(a1 + 176, a1 + 192, v18 + 1, 4);
      v18 = *(unsigned int *)(a1 + 184);
      v15 = v103;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v18) = v20;
    v21 = (__int64)(v15 + 2);
    ++*(_DWORD *)(a1 + 184);
    v100 = (__int64)&v15[6 * *v15 + 2];
    if ( (unsigned int *)v100 != v15 + 2 )
    {
      v22 = v15 + 2;
      do
      {
        v99 = *((_QWORD *)v22 + 2);
        v22 += 6;
        sub_E84950(a1, a2, v21, v18, v16, v17, *((_QWORD *)v22 - 3), *((char **)v22 - 2), v99);
      }
      while ( (unsigned int *)v100 != v22 );
    }
  }
  if ( (*((_BYTE *)v7 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v23 = *(_QWORD *)(v7[6] & 0xFFFFFFFFFFFFFFF0LL);
    v24 = *(unsigned __int8 *)(v23 + 16);
    if ( (unsigned int)(v24 - 25) > 1 )
    {
      v90 = sub_F3F310(*(_QWORD *)(v7[6] & 0xFFFFFFFFFFFFFFF0LL), a2, v24, v18);
      v23 = v90;
      if ( *(_BYTE *)(v90 + 16) == 26 )
        goto LABEL_105;
    }
    else if ( (_BYTE)v24 == 26 )
    {
LABEL_32:
      v25 = (*(_BYTE *)(v23 + 18) & 0x20) != 0;
      goto LABEL_33;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_106;
    v90 = sub_F3F310(v23, a2, v24, v18);
LABEL_105:
    if ( v90 )
      goto LABEL_32;
LABEL_106:
    v25 = 0;
LABEL_33:
    v26 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v26 + 1) > *(_QWORD *)(a1 + 40) )
    {
      a2 = a1 + 48;
      sub_22130D0(v106, a1 + 48, v26 + 1, 1);
      v26 = *(_QWORD *)(a1 + 32);
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v26) = v25;
    v27 = *(_QWORD *)(a1 + 32) + 1LL;
    *(_QWORD *)(a1 + 32) = v27;
    v28 = *(_QWORD *)(v7[6] & 0xFFFFFFFFFFFFFFF0LL);
    v29 = *(unsigned __int8 *)(v28 + 16);
    if ( (unsigned int)(v29 - 25) > 1 )
    {
      v98 = sub_F3F310(*(_QWORD *)(v7[6] & 0xFFFFFFFFFFFFFFF0LL), a2, v29, v27);
      v28 = v98;
      if ( *(_BYTE *)(v98 + 16) == 26 )
        goto LABEL_122;
    }
    else if ( (_BYTE)v29 == 26 )
    {
      goto LABEL_37;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
    {
      v27 = *(_QWORD *)(a1 + 32);
      v30 = 0;
      goto LABEL_38;
    }
    v98 = sub_F3F310(v28, a2, v29, v27);
LABEL_122:
    v27 = *(_QWORD *)(a1 + 32);
    if ( !v98 )
    {
      v30 = 0;
      goto LABEL_38;
    }
LABEL_37:
    v30 = *(_BYTE *)(v28 + 18) >> 7;
LABEL_38:
    if ( (unsigned __int64)(v27 + 1) > *(_QWORD *)(a1 + 40) )
    {
      sub_22130D0(v106, a1 + 48, v27 + 1, 1);
      v27 = *(_QWORD *)(a1 + 32);
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v27) = v30;
    ++*(_QWORD *)(a1 + 32);
  }
  v31 = *(unsigned int *)(a1 + 184);
  v32 = *((_BYTE *)v7 + 81) >> 5;
  if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(v105, a1 + 192, v31 + 1, 4);
    v31 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v31) = v32;
  v33 = *(_QWORD *)(a1 + 32);
  ++*(_DWORD *)(a1 + 184);
  v34 = (v7[10] >> 17) & 1LL;
  if ( (unsigned __int64)(v33 + 1) > *(_QWORD *)(a1 + 40) )
  {
    sub_22130D0(v106, a1 + 48, v33 + 1, 1);
    v33 = *(_QWORD *)(a1 + 32);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v33) = v34;
  v35 = *(_QWORD *)(a1 + 32);
  v36 = v35 + 1;
  v37 = v35 + 2;
  *(_QWORD *)(a1 + 32) = v36;
  v38 = (v7[10] >> 18) & 1LL;
  if ( v37 > *(_QWORD *)(a1 + 40) )
  {
    sub_22130D0(v106, a1 + 48, v37, 1);
    v36 = *(_QWORD *)(a1 + 32);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v36) = v38;
  v39 = *(_QWORD *)(a1 + 32);
  v40 = v39 + 1;
  v41 = v39 + 2;
  *(_QWORD *)(a1 + 32) = v40;
  v42 = (v7[10] >> 19) & 1LL;
  if ( v41 > *(_QWORD *)(a1 + 40) )
  {
    sub_22130D0(v106, a1 + 48, v41, 1);
    v40 = *(_QWORD *)(a1 + 32);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v40) = v42;
  v43 = *(_QWORD *)(a1 + 32);
  v44 = v43 + 1;
  *(_QWORD *)(a1 + 32) = v43 + 1;
  v45 = *((_BYTE *)v7 + 82) & 0x40;
  if ( v45 )
    v45 = (*((_BYTE *)v7 + 83) & 2) == 0;
  v46 = v43 + 2;
  if ( v46 > *(_QWORD *)(a1 + 40) )
  {
    sub_22130D0(v106, a1 + 48, v46, 1);
    v44 = *(_QWORD *)(a1 + 32);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v44) = v45;
  v47 = *(_QWORD *)(a1 + 32);
  v48 = v47 + 1;
  v49 = v47 + 2;
  *(_QWORD *)(a1 + 32) = v48;
  v50 = (v7[10] >> 26) & 1LL;
  if ( v49 > *(_QWORD *)(a1 + 40) )
  {
    sub_22130D0(v106, a1 + 48, v49, 1);
    v48 = *(_QWORD *)(a1 + 32);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v48) = v50;
  v51 = *(_QWORD *)(a1 + 32);
  v52 = v51 + 1;
  *(_QWORD *)(a1 + 32) = v51 + 1;
  if ( (*((_BYTE *)v7 + 83) & 8) != 0 )
  {
    v53 = (unsigned int *)v7[16];
    v54 = v51 + 2;
    v55 = *(_QWORD *)(a1 + 40);
    if ( *((_BYTE *)v53 + 4) )
    {
      v5 = *(_QWORD *)&v53[2 * *v53 + 2];
      v56 = v5 != 0;
      if ( v54 <= v55 )
        goto LABEL_58;
      goto LABEL_128;
    }
  }
  else
  {
    v55 = *(_QWORD *)(a1 + 40);
    v54 = v51 + 2;
  }
  v56 = 0;
  if ( v54 <= v55 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v51 + 1) = 0;
    ++*(_QWORD *)(a1 + 32);
    goto LABEL_60;
  }
LABEL_128:
  sub_22130D0(v106, a1 + 48, v54, 1);
  v52 = *(_QWORD *)(a1 + 32);
LABEL_58:
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v52) = v56;
  ++*(_QWORD *)(a1 + 32);
  if ( v5 )
    sub_21FEE70(
      v105,
      v5 + 4LL * *(unsigned int *)(v5 + 4) + 20,
      *(_DWORD *)(v5 + 16) * ((*(_WORD *)(v5 + 2) >> 6) & 7u));
LABEL_60:
  sub_E81B80(a1, (__int64)v7);
  v60 = *(_QWORD *)(v7[6] & 0xFFFFFFFFFFFFFFF0LL);
  v61 = (unsigned int)*(unsigned __int8 *)(v60 + 16) - 25;
  if ( (unsigned int)v61 > 1 )
    v60 = sub_F3F310(v60, v7, v61, v57);
  v62 = *(_QWORD *)(v60 + 24);
  sub_E847E0(a1, v62, v61, v57, v58, v59);
  v65 = sub_B52330((__int64)v7, v62, v63, v64);
  v66 = *(unsigned int *)(a1 + 184);
  v67 = *(unsigned int *)(a1 + 188);
  if ( v66 + 1 > v67 )
  {
    v67 = a1 + 192;
    v102 = v65;
    sub_22134E0(v105, a1 + 192, v66 + 1, 4);
    v66 = *(unsigned int *)(a1 + 184);
    v65 = v102;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v66) = v65;
  v68 = *(unsigned int *)(a1 + 188);
  v69 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
  *(_DWORD *)(a1 + 184) = v69;
  if ( v69 + 1 > v68 )
  {
    v67 = a1 + 192;
    sub_22134E0(v105, a1 + 192, v69 + 1, 4);
    v69 = *(unsigned int *)(a1 + 184);
  }
  v70 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(v70 + 4 * v69) = 0;
  ++*(_DWORD *)(a1 + 184);
  v71 = (unsigned __int64 *)v7[15];
  v75 = &v71[(unsigned int)sub_B52330((__int64)v7, v67, v70, v68)];
  while ( v75 != v71 )
  {
    v67 = *v71++;
    sub_E853B0(a1, v67);
  }
  if ( a3 )
  {
    v82 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v82 + 1) > *(_QWORD *)(a1 + 40) )
    {
      sub_22130D0(v106, a1 + 48, v82 + 1, 1);
      v82 = *(_QWORD *)(a1 + 32);
    }
    goto LABEL_103;
  }
  v76 = v7[10];
  if ( ((*((_BYTE *)v7 + 82) & 0x40) == 0 || (v76 & 0x2000000) != 0)
    && (v76 & 0x2000000) == 0
    && ((*((_BYTE *)v7 + 83) & 8) != 0 || (v7[16] & 1) == 0 && !v7[16])
    && (*((_BYTE *)v7 + 83) & 0x40) == 0
    && (v76 & 0x2000000000LL) == 0
    && (v76 & 0x4000000000LL) == 0 )
  {
    if ( !sub_B69240((__int64)v7, v67, BYTE4(v76) & 0x40, v72, v73, v74) )
      goto LABEL_101;
    v76 = v7[10];
  }
  if ( (v76 & 0x2000000) != 0 )
  {
LABEL_101:
    v82 = *(_QWORD *)(a1 + 32);
    v80 = *(_QWORD *)(a1 + 40);
    v83 = v82 + 1;
    goto LABEL_102;
  }
  v77 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 32LL))(v7);
  v80 = *(_QWORD *)(a1 + 40);
  v81 = (*(_BYTE *)(v77 + 82) & 0x40) == 0;
  v82 = *(_QWORD *)(a1 + 32);
  v83 = v82 + 1;
  if ( !v81 || (*((_BYTE *)v7 + 83) & 0x40) != 0 )
  {
LABEL_102:
    if ( v83 > v80 )
    {
      sub_22130D0(v106, a1 + 48, v83, 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + (*(_QWORD *)(a1 + 32))++) = 0;
      return;
    }
LABEL_103:
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v82) = 0;
    ++*(_QWORD *)(a1 + 32);
    return;
  }
  if ( v83 > v80 )
  {
    sub_22130D0(v106, a1 + 48, v83, 1);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32)) = 1;
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v82) = 1;
  }
  ++*(_QWORD *)(a1 + 32);
  v84 = *(__int64 (__fastcall **)(__int64))(*v7 + 64LL);
  if ( v84 == sub_6CEBD0 )
    v85 = sub_B5BA10(v7, &v107, (__int64)sub_6CEBD0, v80, v78, v79);
  else
    v85 = v84((__int64)v7);
  v86 = *(_QWORD *)(a1 + 32);
  v87 = v85 != 0;
  if ( (unsigned __int64)(v86 + 1) > *(_QWORD *)(a1 + 40) )
  {
    v104 = v85;
    sub_22130D0(v106, a1 + 48, v86 + 1, 1);
    v86 = *(_QWORD *)(a1 + 32);
    v85 = v104;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v86) = v87;
  ++*(_QWORD *)(a1 + 32);
  if ( v85 )
    sub_EF6790(v85, v105);
  v107 = (__int64 *)v109;
  v108 = 0x1000000000LL;
  v88 = sub_B6AC30((__int64)v4);
  if ( v88 )
  {
    v89 = (unsigned int)v108;
    do
    {
      if ( (unsigned __int8)sub_E80DD0(v88, v4) )
      {
        if ( v89 + 1 > (unsigned __int64)HIDWORD(v108) )
        {
          sub_22134E0(&v107, v109, v89 + 1, 8);
          v89 = (unsigned int)v108;
        }
        v107[v89] = v88;
        v89 = (unsigned int)(v108 + 1);
        LODWORD(v108) = v108 + 1;
      }
      v88 = *(_QWORD *)(v88 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( v88 );
  }
  else
  {
    LODWORD(v89) = v108;
  }
  v91 = *(unsigned int *)(a1 + 184);
  if ( v91 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(v105, a1 + 192, v91 + 1, 4);
    v91 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v91) = v89;
  v92 = *(unsigned int *)(a1 + 188);
  v93 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
  *(_DWORD *)(a1 + 184) = v93;
  if ( v93 + 1 > v92 )
  {
    sub_22134E0(v105, a1 + 192, v93 + 1, 4);
    v93 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v93) = 0;
  v94 = v107;
  v95 = (unsigned int)v108;
  ++*(_DWORD *)(a1 + 184);
  v96 = &v94[v95];
  if ( v94 != v96 )
  {
    do
    {
      v97 = *v94++;
      sub_E853B0(a1, v97);
    }
    while ( v96 != v94 );
    v96 = v107;
  }
  if ( v96 != (__int64 *)v109 )
    free(v96);
}

