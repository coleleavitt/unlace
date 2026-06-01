unsigned __int64 __fastcall sub_18D19A0(__int64 *a1, __int64 *a2, __int64 *a3, unsigned int a4, double a5, double a6)
{
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // r10
  __int64 v23; // rdx
  unsigned int v24; // r15d
  unsigned __int64 v25; // r10
  unsigned int v26; // r14d
  unsigned int v27; // r11d
  unsigned __int64 v28; // rax
  int v29; // ecx
  int v30; // esi
  __int64 v31; // rax
  __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rbp
  char v37; // al
  char v38; // al
  int v39; // eax
  int v40; // ecx
  bool v41; // zf
  __int64 v42; // r14
  unsigned __int64 v43; // r15
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // r14
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r14
  unsigned __int64 v53; // r15
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // rdi
  unsigned __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rbx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rbp
  __int64 v65; // rbp
  __int64 v66; // rax
  __int64 v67; // rax
  char v69; // [rsp+17h] [rbp-121h]
  unsigned __int64 v70; // [rsp+18h] [rbp-120h]
  unsigned int v71; // [rsp+18h] [rbp-120h]
  unsigned __int8 v72; // [rsp+20h] [rbp-118h]
  unsigned int v73; // [rsp+28h] [rbp-110h]
  int v74; // [rsp+2Ch] [rbp-10Ch]
  __int64 v75; // [rsp+38h] [rbp-100h] BYREF
  __int64 v76; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v77; // [rsp+48h] [rbp-F0h] BYREF
  unsigned __int64 v78; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v79; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v80; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v81; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE v82[200]; // [rsp+70h] [rbp-C8h] BYREF

  v9 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v10 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v75 = v9;
  v11 = *(_QWORD *)(v10 + 8);
  v12 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  v13 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL];
  v76 = v11;
  v14 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = v13 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v13 | (unsigned __int8)v9) & 7;
  if ( v15 == (*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
             | ((unsigned __int8)*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v11) & 7) )
    return sub_ABBE20((_QWORD *)a1[31], v9, v11, 0);
  v77 = 0;
  v78 = 0;
  v16 = *(_QWORD *)v12;
  v17 = *(unsigned __int8 *)(*(_QWORD *)v12 + 16LL);
  if ( (_BYTE)v17 == 11 )
    goto LABEL_3;
  v15 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 11 )
  {
    v16 = sub_F63050(v16, v9, v17, v15);
    if ( v16 )
    {
      v14 = (__int64 *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_3:
      v77 = *(_QWORD *)(v16 + 32);
      v18 = *v14;
      if ( *(_BYTE *)(*v14 + 16) != 11 )
        v18 = sub_F63050(*v14, v9, v17, v15);
      v69 = 1;
      v78 = *(_QWORD *)(v18 + 32);
      goto LABEL_6;
    }
    v16 = *(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(unsigned __int8 *)(v16 + 16);
  }
  if ( (_BYTE)v17 != 42 )
    v16 = sub_F63050(v16, v9, v17, v15);
  v77 = *(_QWORD *)(v16 + 32);
  v59 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
  v69 = 0;
  if ( *(_BYTE *)(v59 + 16) == 42 )
    v78 = *(_QWORD *)(v59 + 32);
  else
    v78 = *(_QWORD *)(sub_F63050(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL), v9, v17, v15) + 32);
LABEL_6:
  v19 = *(_QWORD *)&byte_8[v77 & 0xFFFFFFFFFFFFFFF0LL];
  v20 = 0;
  if ( (v19 & 8) != 0 )
    v20 = *(__int64 *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL));
  v21 = v20 | ((unsigned __int8)v77 | (unsigned __int8)v19) & 7;
  v22 = *(_QWORD *)&byte_8[v78 & 0xFFFFFFFFFFFFFFF0LL];
  v23 = 0;
  if ( (v22 & 8) != 0 )
    v23 = *(__int64 *)((char *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL));
  v24 = (unsigned int)v21 >> 9;
  v25 = v23 | ((unsigned __int8)v78 | (unsigned __int8)v22) & 7;
  v26 = (unsigned int)v25 >> 9;
  v27 = (unsigned int)v25 >> 9;
  if ( (unsigned int)v25 >> 9 != (unsigned int)v21 >> 9 )
  {
    v70 = v25;
    v37 = sub_F56A30(v24, v26, a1[31]);
    v27 = (unsigned int)v21 >> 9;
    v25 = v70;
    if ( !v37 )
    {
      v38 = sub_F56A30(v26, v24, a1[31]);
      v25 = v70;
      if ( !v38 )
      {
        sub_168B9F0((__int64)v82, a1 + 1, a4, 0x14B7u, 0);
        v66 = sub_1605D30((__int64)v82, &v75);
        v67 = sub_1605D30(v66, &v76);
        v32 = &v79;
        LODWORD(v79) = 2;
        v33 = sub_1587D10(v67, (int *)&v79);
        goto LABEL_18;
      }
      v27 = v26;
    }
  }
  v28 = HIDWORD(v21);
  v29 = HIDWORD(v21);
  v30 = HIDWORD(v25);
  if ( HIDWORD(v25) && ((WORD2(v25) ^ 0xFFC0) & 0xFFC0) != 0 )
  {
    if ( v28 )
    {
      if ( ((WORD2(v21) ^ 0xFFC0) & 0xFFC0) == 0 )
        v29 = 0;
    }
    else
    {
      v29 = 0;
    }
LABEL_16:
    if ( v30 != v29 )
    {
      sub_168B9F0((__int64)v82, a1 + 1, a4, 0x1480u, 0);
      v31 = sub_1605D30((__int64)v82, &v75);
      v32 = &v76;
      v33 = sub_1605D30(v31, &v76);
LABEL_18:
      v34 = v33;
      v80 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)v32, a5);
      v35 = sub_1587DB0(v34, &v80);
      v81 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v80, a5);
      sub_1587DB0(v35, &v81);
      sub_15F7200(v82);
      return 0;
    }
    goto LABEL_24;
  }
  if ( v28 )
  {
    v30 = 0;
    if ( ((WORD2(v21) ^ 0xFFC0) & 0xFFC0) != 0 )
      goto LABEL_16;
  }
LABEL_24:
  v39 = 63;
  v40 = 63;
  v74 = v27;
  if ( v27 == v24 )
    v40 = 1;
  v41 = v27 == v26;
  v42 = a1[31];
  v72 = v25;
  if ( v41 )
    v39 = 1;
  v71 = v40;
  v43 = v25 & 0xFFFFFFFF000001F8LL;
  v73 = v39;
  v44 = sub_6D5440(&v77);
  v45 = sub_A70F20(v42, v44, v21 & 0xFFFFFFFF000001F8LL);
  v46 = a1[31];
  v77 = v45;
  v47 = sub_6D5440(&v78);
  v78 = sub_A70F20(v46, v47, v43);
  v48 = sub_AA91B0(a1[31], v77, v78, 0, 0, 0);
  v79 = v48;
  if ( (v48 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v49 = (v72 | (unsigned __int8)v21) & 7;
    if ( (*(_BYTE *)(a1[29] + 47) & 0x20) != 0 )
    {
      v50 = *(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL];
      v51 = 0;
      if ( (v50 & 8) != 0 )
        v51 = *(__int64 *)((char *)&qword_18 + (v50 & 0xFFFFFFFFFFFFFFF0LL));
      v52 = a1[31];
      v53 = (unsigned int)(v74 << 9) | v51 & 0xFFFFFFFF000001FFLL | ((unsigned __int8)v50 | (unsigned __int8)v48) & 7;
      v54 = sub_6D5440(&v79);
      v55 = sub_A70F20(v52, v54, v53);
      v56 = v55 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v55 | (unsigned __int8)v49) & 7;
    }
    else
    {
      v56 = v48 & 0xFFFFFFFFFFFFFFF8LL | v49 | (unsigned int)(v48 & 7);
    }
    v57 = a1[31];
    if ( v69 )
      v58 = sub_A74B00(v57, v56);
    else
      v58 = sub_A70010(v57, v56);
    *a2 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v58, v71, 0, 0, a5, a6, 0);
    *a3 = sub_160A600((__int64)a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v58, v73, 0, 0, a5, a6, 0);
    return v58;
  }
  else
  {
    v60 = a1[31];
    v61 = sub_A70E70(v60, *(_QWORD *)(v60 + 18632), v74);
    v62 = sub_A70010(v60, v61);
    *a2 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v62, v71, 0, 0, a5, a6, 0);
    *a3 = sub_160A600((__int64)a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v62, v73, 0, 0, a5, a6, 0);
    sub_168B9F0((__int64)v82, a1 + 1, a4, 0x1640u, 0);
    v63 = sub_1605D30((__int64)v82, &v75);
    v64 = sub_1605D30(v63, &v76);
    v80 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v76, a5);
    v65 = sub_1587DB0(v64, &v80);
    v81 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v80, a5);
    sub_1587DB0(v65, &v81);
    sub_15F7200(v82);
    return v62;
  }
}
