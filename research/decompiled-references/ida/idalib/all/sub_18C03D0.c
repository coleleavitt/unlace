__int64 __fastcall sub_18C03D0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // r12
  int v14; // eax
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 *v19; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r10
  bool v31; // al
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // r11
  __int64 v37; // r10
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // r10
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  char v63; // dl
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // rax
  __int64 v67; // r13
  unsigned __int64 v68; // r13
  char v69; // al
  char v70; // al
  unsigned __int64 v71; // r11
  bool v72; // al
  unsigned __int64 v73; // rax
  __int64 v74; // [rsp+8h] [rbp-A0h]
  __int64 v75; // [rsp+8h] [rbp-A0h]
  __int64 v76; // [rsp+8h] [rbp-A0h]
  __int64 v77; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v79; // [rsp+8h] [rbp-A0h]
  __int64 v80; // [rsp+10h] [rbp-98h]
  char v81; // [rsp+10h] [rbp-98h]
  unsigned __int64 v82; // [rsp+10h] [rbp-98h]
  unsigned __int64 v83; // [rsp+10h] [rbp-98h]
  __int64 v84; // [rsp+18h] [rbp-90h]
  _QWORD *v85; // [rsp+18h] [rbp-90h]
  int v86; // [rsp+18h] [rbp-90h]
  __int64 v87; // [rsp+18h] [rbp-90h]
  __int64 v88; // [rsp+20h] [rbp-88h]
  unsigned int v89; // [rsp+20h] [rbp-88h]
  __int64 v90; // [rsp+20h] [rbp-88h]
  __int64 v91; // [rsp+28h] [rbp-80h]
  __int64 v92; // [rsp+30h] [rbp-78h]
  unsigned __int64 v93; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v95; // [rsp+48h] [rbp-60h]
  _BYTE v96[88]; // [rsp+50h] [rbp-58h] BYREF

  v11 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
    v11 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 59 > 2 )
    return a2;
  v12 = v11 - 64;
  if ( v11 == 64 )
    return a2;
  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_BYTE *)(a4 + 28) & 0x7F;
  v15 = v13;
  if ( (unsigned int)(v14 - 49) > 2 )
  {
    if ( (unsigned int)(v14 - 35) > 3 )
      return a2;
    v81 = sub_B98200((_QWORD *)a4, v12);
    if ( !v81 )
      return a2;
    v85 = (_QWORD *)a4;
    ptr = (void *)sub_B98760(a4, v12);
    v76 = sub_C1BEF0((__int64)&ptr, v12, v39, v40);
    v19 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    ptr = (void *)sub_B987D0(v85, v12);
    v43 = sub_C1BEF0((__int64)&ptr, v12, v41, v42);
    v47 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v27 = v43;
    if ( *(_BYTE *)(v47 + 16) != 42 )
    {
      if ( !sub_18BBDD0(v47, v12, v44, v45) )
      {
        v48 = v13 & 0xFFFFFFFFFFFFFFF0LL;
        v30 = v13;
        v76 = v27;
        v81 = 0;
        goto LABEL_28;
      }
      v47 = *v19;
    }
    v30 = sub_F68450(v47, v12, v44, v45, v46);
    v48 = v30 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_28:
    v49 = *(_QWORD *)(v48 + 8);
    LODWORD(v48) = 0;
    if ( (v49 & 8) != 0 )
      v48 = *(__int64 *)((char *)&qword_18 + (v49 & 0xFFFFFFFFFFFFFFF0LL));
    v50 = (unsigned int)v48 >> 9;
    v51 = *(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL];
    LODWORD(v52) = 0;
    if ( (v51 & 8) != 0 )
    {
      v51 &= 0xFFFFFFFFFFFFFFF0LL;
      v52 = *(_QWORD *)(v51 + 24);
    }
    v53 = (unsigned int)v52 >> 9;
    v86 = v53;
    if ( v50 != (_DWORD)v53 )
    {
      v90 = v30;
      v54 = sub_A72780(*(_QWORD **)(a1 + 248), v30, v53, v51, v46);
      v55 = sub_A70E70(*(_QWORD *)(a1 + 248), v54, v86);
      v56 = v90;
      if ( v81 )
      {
        v55 = sub_A70010(*(_QWORD *)(a1 + 248), v55);
        v56 = v90;
      }
      v87 = v56;
      a2 = sub_160A600(a1, a2, v55, 0x3Fu, (*(_BYTE *)(a2 + 1) >> 1) & 3, 0, a7, a8, 0) & 0xFFFFFFFFFFFFFFFELL;
      v30 = v87;
    }
    goto LABEL_13;
  }
  v16 = *(_QWORD *)(v11 - 16);
  if ( v16 )
  {
    v17 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = v17;
  }
  else
  {
    v79 = *(_QWORD *)(a2 + 8);
    v17 = sub_A7AA70(*(_QWORD *)(a1 + 248), v12, v11, a4, a5, a6);
    v15 = v79;
    v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v74 = v15;
  v19 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v21 = ((unsigned __int8)*(_QWORD *)(v18 + 8) | (unsigned __int8)v17) & 7 | *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_BYTE *)(v20 + 16) == 42 )
  {
    v22 = *(_QWORD *)(a1 + 248);
    v23 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_10:
    v80 = v22;
    v75 = v20;
    v24 = sub_F68450(v23, v12, v18, v20, v22);
    LODWORD(v25) = 0;
    v26 = *(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v26 & 8) != 0 )
      v25 = *(__int64 *)((char *)&qword_18 + (v26 & 0xFFFFFFFFFFFFFFF0LL));
    v27 = sub_A70E70(v80, v21, (unsigned int)v25 >> 9);
    v28 = sub_A70010(*(_QWORD *)(a1 + 248), v27);
    v29 = v75;
    v81 = 1;
    v76 = v28;
    v30 = *(_QWORD *)(v29 + 32);
    goto LABEL_13;
  }
  v57 = sub_18BBDD0(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), v12, v18, v20);
  v22 = *(_QWORD *)(a1 + 248);
  v20 = v57;
  if ( v57 )
  {
    v23 = *v19;
    goto LABEL_10;
  }
  v58 = v19[1];
  LODWORD(v59) = 0;
  if ( (v58 & 8) != 0 )
    v59 = *(__int64 *)((char *)&qword_18 + (v58 & 0xFFFFFFFFFFFFFFF0LL));
  v60 = sub_A70E70(*(_QWORD *)(a1 + 248), v21, (unsigned int)v59 >> 9);
  v30 = v74;
  v81 = 0;
  v27 = v60;
  v76 = v60;
LABEL_13:
  if ( (*(_BYTE *)(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 || (*(_BYTE *)(*v19 + 17) & 4) != 0 )
    return a2;
  v88 = v30;
  v31 = sub_18BBB30(v30, v27);
  v32 = a2;
  if ( v31 )
    return v32;
  v92 = v88;
  v33 = sub_EEC8C0(a2, v27, a7);
  v36 = v76 & 0xFFFFFFFFFFFFFFF0LL;
  v84 = v33;
  v37 = v88;
  v89 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
  if ( a3 )
  {
    if ( ((*(__int64 *)(a3 + 8) >> 1) & 3) == 2 )
    {
      v67 = *(_QWORD *)(a3 + 16);
      if ( v67 )
      {
        v68 = v67 & 0xFFFFFFFFFFFFFFF0LL;
        v91 = v37;
        v93 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
        v69 = sub_183BD10(a1, (unsigned int)v33, v92, v93, v34, v35);
        v37 = v91;
        v36 = v76 & 0xFFFFFFFFFFFFFFF0LL;
        if ( v69 )
        {
          ptr = v96;
          v95 = 0x400000000LL;
          v70 = sub_1851070(a1, v91, v93, v84, v84, (__int64)&ptr, 0);
          v71 = v76 & 0xFFFFFFFFFFFFFFF0LL;
          if ( v70 )
            goto LABEL_19;
          if ( v81 )
          {
            v73 = sub_A70010(*(_QWORD *)(a1 + 248), v68);
            v71 = v76 & 0xFFFFFFFFFFFFFFF0LL;
            v68 = v73;
          }
          v83 = v71;
          a2 = sub_160A600(a1, a2, v68, 8u, v89, (__int64)&ptr, a7, a8, 0) & 0xFFFFFFFFFFFFFFFELL;
          v72 = sub_18BBB30(v93, v27);
          v32 = a2;
          v36 = v83;
          if ( v72 )
            goto LABEL_20;
          if ( ptr != v96 )
          {
            free(ptr);
            v36 = v83;
          }
          v13 = v68;
          v37 = v93;
        }
      }
    }
  }
  v82 = v36;
  ptr = v96;
  v95 = 0x400000000LL;
  if ( !(unsigned __int8)sub_1851070(a1, v37, v27, v84, v84, (__int64)&ptr, 1) )
  {
    v61 = 0;
    v62 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v62 & 8) != 0 )
      v61 = *(__int64 *)((char *)&qword_18 + (v62 & 0xFFFFFFFFFFFFFFF0LL));
    v63 = v62 | v13;
    LODWORD(v62) = 0;
    v64 = v61 | v63 & 7;
    v65 = *(_QWORD *)(v82 + 8);
    if ( (v65 & 8) != 0 )
      v62 = *(__int64 *)((char *)&qword_18 + (v65 & 0xFFFFFFFFFFFFFFF0LL));
    v66 = sub_A70F20(*(_QWORD *)(a1 + 248), v76, (unsigned int)v62 & 0xFFFFFE00 | v64 & 0xFFFFFFFF000001FFLL);
    v32 = sub_160A600(a1, a2, v66, 8u, v89, (__int64)&ptr, a7, a8, 0);
    goto LABEL_20;
  }
LABEL_19:
  v32 = 1;
LABEL_20:
  if ( ptr != v96 )
  {
    v77 = v32;
    free(ptr);
    return v77;
  }
  return v32;
}
