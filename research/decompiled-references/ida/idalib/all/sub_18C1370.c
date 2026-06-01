__int64 __fastcall sub_18C1370(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // r12
  int v14; // eax
  unsigned __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 *v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r10
  bool v32; // al
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // r11
  __int64 v38; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // r10
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  char v64; // dl
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  __int64 v68; // r13
  unsigned __int64 v69; // r13
  char v70; // al
  char v71; // al
  unsigned __int64 v72; // r11
  bool v73; // al
  unsigned __int64 v74; // rax
  __int64 v75; // [rsp+8h] [rbp-A0h]
  __int64 v76; // [rsp+8h] [rbp-A0h]
  __int64 v77; // [rsp+8h] [rbp-A0h]
  __int64 v78; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v80; // [rsp+8h] [rbp-A0h]
  __int64 v81; // [rsp+10h] [rbp-98h]
  char v82; // [rsp+10h] [rbp-98h]
  unsigned __int64 v83; // [rsp+10h] [rbp-98h]
  unsigned __int64 v84; // [rsp+10h] [rbp-98h]
  __int64 v85; // [rsp+18h] [rbp-90h]
  _QWORD *v86; // [rsp+18h] [rbp-90h]
  int v87; // [rsp+18h] [rbp-90h]
  __int64 v88; // [rsp+18h] [rbp-90h]
  __int64 v89; // [rsp+20h] [rbp-88h]
  unsigned int v90; // [rsp+20h] [rbp-88h]
  __int64 v91; // [rsp+20h] [rbp-88h]
  __int64 v92; // [rsp+28h] [rbp-80h]
  __int64 v93; // [rsp+30h] [rbp-78h]
  unsigned __int64 v94; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v96; // [rsp+48h] [rbp-60h]
  _BYTE v97[88]; // [rsp+50h] [rbp-58h] BYREF

  v11 = *(_QWORD *)(a7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a7 + 16) & 4) != 0 )
    v11 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 59 > 2 )
    return a2;
  v12 = v11 - 64;
  if ( v11 == 64 )
    return a2;
  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_BYTE *)(a7 + 28) & 0x7F;
  v15 = v13;
  v16 = (unsigned int)(v14 - 49);
  if ( (unsigned int)v16 > 2 )
  {
    if ( (unsigned int)(v14 - 35) > 3 )
      return a2;
    v82 = sub_B98200((_QWORD *)a7, v12);
    if ( !v82 )
      return a2;
    v86 = (_QWORD *)a7;
    ptr = (void *)sub_B98760(a7, v12);
    v77 = sub_C1BEF0((__int64)&ptr, v12, v40, v41);
    v20 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    ptr = (void *)sub_B987D0(v86, v12);
    v44 = sub_C1BEF0((__int64)&ptr, v12, v42, v43);
    v48 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v28 = v44;
    if ( *(_BYTE *)(v48 + 16) != 42 )
    {
      if ( !sub_18BBDD0(v48, v12, v45, v46) )
      {
        v49 = v13 & 0xFFFFFFFFFFFFFFF0LL;
        v31 = v13;
        v77 = v28;
        v82 = 0;
        goto LABEL_28;
      }
      v48 = *v20;
    }
    v31 = sub_F68450(v48, v12, v45, v46, v47);
    v49 = v31 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_28:
    v50 = *(_QWORD *)(v49 + 8);
    LODWORD(v49) = 0;
    if ( (v50 & 8) != 0 )
      v49 = *(__int64 *)((char *)&qword_18 + (v50 & 0xFFFFFFFFFFFFFFF0LL));
    v51 = (unsigned int)v49 >> 9;
    v52 = *(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL];
    LODWORD(v53) = 0;
    if ( (v52 & 8) != 0 )
    {
      v52 &= 0xFFFFFFFFFFFFFFF0LL;
      v53 = *(_QWORD *)(v52 + 24);
    }
    v54 = (unsigned int)v53 >> 9;
    v87 = v54;
    if ( (_DWORD)v54 != v51 )
    {
      v91 = v31;
      v55 = sub_A72780(*(_QWORD **)(a1 + 248), v31, v54, v52, v47);
      v56 = sub_A70E70(*(_QWORD *)(a1 + 248), v55, v87);
      v57 = v91;
      if ( v82 )
      {
        v56 = sub_A70010(*(_QWORD *)(a1 + 248), v56);
        v57 = v91;
      }
      v88 = v57;
      a2 = sub_160A600(a1, a2, v56, 0x3Fu, (*(_BYTE *)(a2 + 1) >> 1) & 3, 0, a4, a5, 0) & 0xFFFFFFFFFFFFFFFELL;
      v31 = v88;
    }
    goto LABEL_13;
  }
  v17 = *(_QWORD *)(v11 - 16);
  if ( v17 )
  {
    v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    v19 = v18;
  }
  else
  {
    v80 = *(_QWORD *)(a2 + 8);
    v18 = sub_A7AA70(*(_QWORD *)(a1 + 248), v12, v11, v16, a7, a8);
    v15 = v80;
    v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v75 = v15;
  v20 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v22 = ((unsigned __int8)*(_QWORD *)(v19 + 8) | (unsigned __int8)v18) & 7 | *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_BYTE *)(v21 + 16) == 42 )
  {
    v23 = *(_QWORD *)(a1 + 248);
    v24 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_10:
    v81 = v23;
    v76 = v21;
    v25 = sub_F68450(v24, v12, v19, v21, v23);
    LODWORD(v26) = 0;
    v27 = *(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v27 & 8) != 0 )
      v26 = *(__int64 *)((char *)&qword_18 + (v27 & 0xFFFFFFFFFFFFFFF0LL));
    v28 = sub_A70E70(v81, v22, (unsigned int)v26 >> 9);
    v29 = sub_A70010(*(_QWORD *)(a1 + 248), v28);
    v30 = v76;
    v82 = 1;
    v77 = v29;
    v31 = *(_QWORD *)(v30 + 32);
    goto LABEL_13;
  }
  v58 = sub_18BBDD0(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), v12, v19, v21);
  v23 = *(_QWORD *)(a1 + 248);
  v21 = v58;
  if ( v58 )
  {
    v24 = *v20;
    goto LABEL_10;
  }
  v59 = v20[1];
  LODWORD(v60) = 0;
  if ( (v59 & 8) != 0 )
    v60 = *(__int64 *)((char *)&qword_18 + (v59 & 0xFFFFFFFFFFFFFFF0LL));
  v61 = sub_A70E70(*(_QWORD *)(a1 + 248), v22, (unsigned int)v60 >> 9);
  v31 = v75;
  v82 = 0;
  v28 = v61;
  v77 = v61;
LABEL_13:
  if ( (*(_BYTE *)(*(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 || (*(_BYTE *)(*v20 + 17) & 4) != 0 )
    return a2;
  v89 = v31;
  v32 = sub_18BBB30(v31, v28);
  v33 = a2;
  if ( v32 )
    return v33;
  v93 = v89;
  v34 = sub_EEC8C0(a2, v28, a4);
  v37 = v77 & 0xFFFFFFFFFFFFFFF0LL;
  v85 = v34;
  v38 = v89;
  v90 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
  if ( a3 )
  {
    if ( ((*(__int64 *)(a3 + 8) >> 1) & 3) == 2 )
    {
      v68 = *(_QWORD *)(a3 + 16);
      if ( v68 )
      {
        v69 = v68 & 0xFFFFFFFFFFFFFFF0LL;
        v92 = v38;
        v94 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
        v70 = sub_183BD10(a1, (unsigned int)v34, v93, v94, v35, v36);
        v38 = v92;
        v37 = v77 & 0xFFFFFFFFFFFFFFF0LL;
        if ( v70 )
        {
          ptr = v97;
          v96 = 0x400000000LL;
          v71 = sub_1851070(a1, v92, v94, v85, v85, (__int64)&ptr, 0);
          v72 = v77 & 0xFFFFFFFFFFFFFFF0LL;
          if ( v71 )
            goto LABEL_19;
          if ( v82 )
          {
            v74 = sub_A70010(*(_QWORD *)(a1 + 248), v69);
            v72 = v77 & 0xFFFFFFFFFFFFFFF0LL;
            v69 = v74;
          }
          v84 = v72;
          a2 = sub_160A600(a1, a2, v69, 8u, v90, (__int64)&ptr, a4, a5, 0) & 0xFFFFFFFFFFFFFFFELL;
          v73 = sub_18BBB30(v94, v28);
          v33 = a2;
          v37 = v84;
          if ( v73 )
            goto LABEL_20;
          if ( ptr != v97 )
          {
            free(ptr);
            v37 = v84;
          }
          v13 = v69;
          v38 = v94;
        }
      }
    }
  }
  v83 = v37;
  ptr = v97;
  v96 = 0x400000000LL;
  if ( !(unsigned __int8)sub_1851070(a1, v38, v28, v85, v85, (__int64)&ptr, 1) )
  {
    v62 = 0;
    v63 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v63 & 8) != 0 )
      v62 = *(__int64 *)((char *)&qword_18 + (v63 & 0xFFFFFFFFFFFFFFF0LL));
    v64 = v63 | v13;
    LODWORD(v63) = 0;
    v65 = v62 | v64 & 7;
    v66 = *(_QWORD *)(v83 + 8);
    if ( (v66 & 8) != 0 )
      v63 = *(__int64 *)((char *)&qword_18 + (v66 & 0xFFFFFFFFFFFFFFF0LL));
    v67 = sub_A70F20(*(_QWORD *)(a1 + 248), v77, (unsigned int)v63 & 0xFFFFFE00 | v65 & 0xFFFFFFFF000001FFLL);
    v33 = sub_160A600(a1, a2, v67, 8u, v90, (__int64)&ptr, a4, a5, 0);
    goto LABEL_20;
  }
LABEL_19:
  v33 = 1;
LABEL_20:
  if ( ptr != v97 )
  {
    v78 = v33;
    free(ptr);
    return v78;
  }
  return v33;
}
