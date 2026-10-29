void __fastcall sub_1F49950(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r12
  __int64 *v11; // rcx
  __int64 v12; // rdi
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r12d
  unsigned __int64 v28; // rax
  int v29; // r14d
  __int64 v30; // rax
  _QWORD *v31; // r15
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  int v40; // r14d
  int v41; // r9d
  unsigned __int64 v42; // rax
  __int64 v43; // r15
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  bool v48; // zf
  unsigned __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // [rsp+8h] [rbp-140h]
  unsigned __int64 v55; // [rsp+8h] [rbp-140h]
  int v56; // [rsp+8h] [rbp-140h]
  unsigned int v57; // [rsp+18h] [rbp-130h]
  __int64 v58; // [rsp+20h] [rbp-128h]
  __int64 v59; // [rsp+20h] [rbp-128h]
  void *ptr; // [rsp+30h] [rbp-118h] BYREF
  __int64 v61; // [rsp+38h] [rbp-110h]
  _BYTE v62[64]; // [rsp+40h] [rbp-108h] BYREF
  void *v63; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+88h] [rbp-C0h]
  _BYTE v65[184]; // [rsp+90h] [rbp-B8h] BYREF

  sub_1F458C0((__int64)a1, a2);
  *(_DWORD *)(a2 + 60) = sub_1EE7490(a1[2]);
  v3 = sub_1EEDED0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16), (_QWORD *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  v4 = a1[2];
  *(_QWORD *)(a2 + 80) = v3;
  v5 = sub_1EE7490(v4);
  v6 = a1[2];
  *(_DWORD *)(a2 + 136) = v5;
  v7 = sub_1EE7490(v6);
  v8 = a1[2];
  *(_DWORD *)(a2 + 140) = v7;
  v9 = sub_1EE7490(v8);
  v10 = *a1;
  *(_DWORD *)(a2 + 144) = v9;
  if ( *(_BYTE *)(v10 + 12692) )
  {
    v11 = *(__int64 **)(v10 + 12672);
    v12 = *(unsigned int *)(v10 + 12684);
    v13 = &v11[v12];
    if ( v11 != v13 )
    {
      v14 = *(__int64 **)(v10 + 12672);
      if ( a2 == *v11 )
        goto LABEL_42;
      while ( v13 != ++v14 )
      {
        if ( a2 == *v14 )
          goto LABEL_42;
      }
    }
    if ( (unsigned int)v12 < *(_DWORD *)(v10 + 12680) )
    {
      *(_DWORD *)(v10 + 12684) = v12 + 1;
      *v13 = a2;
      v11 = *(__int64 **)(v10 + 12672);
      v14 = &v11[v12];
      goto LABEL_42;
    }
  }
  v14 = (__int64 *)sub_2236760(v10 + 12672, a2);
  v11 = *(__int64 **)(v10 + 12672);
  if ( *(_BYTE *)(v10 + 12692) )
  {
LABEL_42:
    v15 = &v11[*(unsigned int *)(v10 + 12684)];
    goto LABEL_10;
  }
  v15 = &v11[*(unsigned int *)(v10 + 12680)];
LABEL_10:
  if ( v15 != v14 && (unsigned __int64)*v14 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v16 = v14 + 1;
    do
    {
      v17 = v16;
      if ( v15 == v16 )
        break;
      ++v16;
    }
    while ( (unsigned __int64)*v17 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v18 = a1[2];
  v19 = *(_QWORD **)(v18 + 8);
  v20 = sub_1EE13A0((__int64)v19, *(_QWORD *)(v18 + 16), (__int64 *)(v18 + 32), (_DWORD *)(v18 + 24));
  *(_QWORD *)(a2 + 88) = sub_1EDB980(v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(a2 + 96) = sub_1F1EED0(a1);
  v25 = a1[2];
  v26 = *(unsigned int *)(v25 + 24);
  *(_DWORD *)(v25 + 24) = v26 + 1;
  v28 = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 8 * v26);
  v63 = v65;
  v64 = 0x1000000000LL;
  v57 = v28;
  v27 = v28;
  v28 = (unsigned int)v28;
  v54 = v28;
  if ( (unsigned int)v28 > 0x10uLL )
  {
    sub_2237220(&v63, v65, (unsigned int)v28, 8);
    if ( v57 )
      goto LABEL_17;
LABEL_47:
    ptr = v62;
    v61 = 0x1000000000LL;
    if ( v54 <= 0x10 )
    {
      sub_BA9FB0(a2 + 104, v63, 0, ptr, *(_QWORD *)(*a1 + 144));
      goto LABEL_36;
    }
    goto LABEL_44;
  }
  if ( !(_DWORD)v28 )
    goto LABEL_47;
LABEL_17:
  v29 = 0;
  do
  {
    v30 = a1[2];
    v31 = *(_QWORD **)(v30 + 8);
    v32 = sub_1EE13A0((__int64)v31, *(_QWORD *)(v30 + 16), (__int64 *)(v30 + 32), (_DWORD *)(v30 + 24));
    v37 = sub_1EDB980(v31, v32, v33, v34, v35, v36);
    v38 = (unsigned int)v64;
    v39 = (unsigned int)v64 + 1LL;
    if ( v39 > HIDWORD(v64) )
    {
      v59 = v37;
      sub_2237220(&v63, v65, v39, 8);
      v38 = (unsigned int)v64;
      v37 = v59;
    }
    ++v29;
    *((_QWORD *)v63 + v38) = v37;
    LODWORD(v64) = v64 + 1;
  }
  while ( v27 != v29 );
  ptr = v62;
  v61 = 0x1000000000LL;
  if ( v54 > 0x10 )
  {
LABEL_44:
    sub_2237220(&ptr, v62, v54, 4);
    v58 = a2 + 104;
    if ( !v57 )
    {
      sub_BA9FB0(v58, v63, 0, ptr, *(_QWORD *)(*a1 + 144));
      goto LABEL_36;
    }
    goto LABEL_23;
  }
  v58 = a2 + 104;
LABEL_23:
  v40 = 0;
  do
  {
    while ( 1 )
    {
      v45 = a1[2];
      v46 = *(unsigned int *)(v45 + 24);
      v43 = *(_QWORD *)(v45 + 16);
      v47 = *(_QWORD *)(v45 + 8);
      v48 = *(_QWORD *)(v43 + 856) == 0;
      *(_DWORD *)(v45 + 24) = v46 + 1;
      v49 = *(_QWORD *)(*(_QWORD *)(v45 + 32) + 8 * v46);
      if ( !v48 )
      {
        v55 = v49;
        sub_1EDF870(v47, v43);
        v49 = v55;
      }
      v41 = __ROR4__(v49, 1);
      v42 = HIDWORD(v49);
      if ( v42 )
        v43 = *(_QWORD *)(*(_QWORD *)(v43 + 3320) + 8LL * (unsigned int)(v42 - 1));
      if ( v41 )
        v41 = v41 + *(_DWORD *)(v43 + 1648) - 2;
      v44 = (unsigned int)v61 + 1LL;
      if ( v44 > HIDWORD(v61) )
        break;
      ++v40;
      *((_DWORD *)ptr + (unsigned int)v61) = v41;
      LODWORD(v61) = v61 + 1;
      if ( v27 == v40 )
        goto LABEL_33;
    }
    ++v40;
    v56 = v41;
    sub_2237220(&ptr, v62, v44, 4);
    *((_DWORD *)ptr + (unsigned int)v61) = v56;
    LODWORD(v61) = v61 + 1;
  }
  while ( v27 != v40 );
LABEL_33:
  sub_BA9FB0(v58, v63, v57, ptr, *(_QWORD *)(*a1 + 144));
  v52 = *(_QWORD *)(a2 + 88);
  if ( v52 )
  {
    v53 = *(_QWORD *)(a2 + 40);
    if ( (v53 & 7) != 0 || (v53 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      sub_BABE50(v52, (__int64)v63, v57, *(__int64 **)(*a1 + 144), v50, v51);
  }
LABEL_36:
  if ( ptr != v62 )
    free(ptr);
  if ( v63 != v65 )
    free(v63);
}
