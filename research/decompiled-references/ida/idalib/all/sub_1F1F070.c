void __fastcall sub_1F1F070(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ebp
  int v12; // r14d
  __int64 v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdx
  int v24; // r14d
  int v25; // r9d
  unsigned __int64 v26; // rax
  __int64 v27; // r15
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  bool v32; // zf
  unsigned __int64 v33; // rax
  _BYTE *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ebp
  int v39; // r14d
  __int64 v40; // rax
  _QWORD *v41; // r15
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rdx
  unsigned __int64 v51; // [rsp+0h] [rbp-138h]
  unsigned __int64 v52; // [rsp+0h] [rbp-138h]
  int v53; // [rsp+0h] [rbp-138h]
  unsigned int v54; // [rsp+0h] [rbp-138h]
  unsigned int v55; // [rsp+10h] [rbp-128h]
  __int64 v56; // [rsp+18h] [rbp-120h]
  __int64 v57; // [rsp+18h] [rbp-120h]
  void *ptr; // [rsp+20h] [rbp-118h] BYREF
  __int64 v59; // [rsp+28h] [rbp-110h]
  _BYTE v60[64]; // [rsp+30h] [rbp-108h] BYREF
  void *v61; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+78h] [rbp-C0h]
  _BYTE v63[184]; // [rsp+80h] [rbp-B8h] BYREF

  v4 = sub_1F19370(a1[2]);
  v5 = a1[2];
  *(_QWORD *)(a2 + 8) = v4;
  v6 = sub_1EE7490(v5);
  v7 = a1[2];
  *(_DWORD *)(a2 + 80) = v6;
  v8 = *(_DWORD *)(v7 + 24);
  LOBYTE(v6) = (4 * (*(_QWORD *)(*(_QWORD *)(v7 + 32) + 8LL * v8) & 1)) | *(_BYTE *)(a2 + 72) & 0xFB;
  *(_BYTE *)(a2 + 72) = v6;
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8LL * (v8 + 1));
  *(_BYTE *)(a2 + 72) = v6 | 0x20;
  *(_DWORD *)(a2 + 76) = v9;
  *(_DWORD *)(v7 + 24) = v8 + 3;
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8LL * (v8 + 2));
  v61 = v63;
  v55 = v10;
  v11 = v10;
  v62 = 0x1000000000LL;
  v51 = (unsigned int)v10;
  if ( (unsigned int)v10 > 0x10uLL )
  {
    sub_2237220(&v61, v63, (unsigned int)v10, 8);
    if ( !v55 )
    {
      v59 = 0x1000000000LL;
      ptr = v60;
      sub_2237220(&ptr, v60, v51, 4);
      v34 = ptr;
      goto LABEL_20;
    }
  }
  else if ( !(_DWORD)v10 )
  {
    v34 = v60;
    v59 = 0x1000000000LL;
    ptr = v60;
    goto LABEL_20;
  }
  v12 = 0;
  do
  {
    v13 = a1[2];
    v14 = *(_QWORD **)(v13 + 8);
    v15 = sub_1EE13A0((__int64)v14, *(_QWORD *)(v13 + 16), (__int64 *)(v13 + 32), (_DWORD *)(v13 + 24));
    v20 = sub_1EDB980(v14, v15, v16, v17, v18, v19);
    v21 = (unsigned int)v62;
    v22 = (unsigned int)v62 + 1LL;
    if ( v22 > HIDWORD(v62) )
    {
      v57 = v20;
      sub_2237220(&v61, v63, v22, 8);
      v21 = (unsigned int)v62;
      v23 = v61;
      v20 = v57;
    }
    else
    {
      v23 = v61;
    }
    ++v12;
    v23[v21] = v20;
    LODWORD(v62) = v62 + 1;
  }
  while ( v11 != v12 );
  ptr = v60;
  v59 = 0x1000000000LL;
  if ( v51 > 0x10 )
    sub_2237220(&ptr, v60, v51, 4);
  v24 = 0;
  do
  {
    while ( 1 )
    {
      v29 = a1[2];
      v30 = *(unsigned int *)(v29 + 24);
      v27 = *(_QWORD *)(v29 + 16);
      v31 = *(_QWORD *)(v29 + 8);
      v32 = *(_QWORD *)(v27 + 856) == 0;
      *(_DWORD *)(v29 + 24) = v30 + 1;
      v33 = *(_QWORD *)(*(_QWORD *)(v29 + 32) + 8 * v30);
      if ( !v32 )
      {
        v52 = v33;
        sub_1EDF870(v31, v27);
        v33 = v52;
      }
      v25 = __ROR4__(v33, 1);
      v26 = HIDWORD(v33);
      if ( v26 )
        v27 = *(_QWORD *)(*(_QWORD *)(v27 + 3320) + 8LL * (unsigned int)(v26 - 1));
      if ( v25 )
        v25 = v25 + *(_DWORD *)(v27 + 1648) - 2;
      v28 = (unsigned int)v59 + 1LL;
      if ( v28 > HIDWORD(v59) )
        break;
      ++v24;
      *((_DWORD *)ptr + (unsigned int)v59) = v25;
      LODWORD(v59) = v59 + 1;
      if ( v11 == v24 )
        goto LABEL_19;
    }
    v53 = v25;
    ++v24;
    sub_2237220(&ptr, v60, v28, 4);
    *((_DWORD *)ptr + (unsigned int)v59) = v53;
    LODWORD(v59) = v59 + 1;
  }
  while ( v11 != v24 );
LABEL_19:
  v34 = ptr;
LABEL_20:
  sub_BA9FB0(a2 + 16, v61, v55, v34, *(_QWORD *)(*a1 + 144));
  v35 = a1[2];
  v36 = *(unsigned int *)(v35 + 24);
  *(_DWORD *)(v35 + 24) = v36 + 1;
  v37 = *(_QWORD *)(*(_QWORD *)(v35 + 32) + 8 * v36);
  LODWORD(v62) = 0;
  v54 = v37;
  v38 = v37;
  if ( HIDWORD(v62) < (unsigned int)v37 )
    sub_2237220(&v61, v63, (unsigned int)v37, 8);
  v39 = 0;
  if ( v54 )
  {
    do
    {
      v40 = a1[2];
      v41 = *(_QWORD **)(v40 + 8);
      v42 = sub_1EE13A0((__int64)v41, *(_QWORD *)(v40 + 16), (__int64 *)(v40 + 32), (_DWORD *)(v40 + 24));
      v47 = sub_1EDB980(v41, v42, v43, v44, v45, v46);
      v48 = (unsigned int)v62;
      v49 = (unsigned int)v62 + 1LL;
      if ( v49 > HIDWORD(v62) )
      {
        v56 = v47;
        sub_2237220(&v61, v63, v49, 8);
        v48 = (unsigned int)v62;
        v50 = v61;
        v47 = v56;
      }
      else
      {
        v50 = v61;
      }
      ++v39;
      v50[v48] = v47;
      LODWORD(v62) = v62 + 1;
    }
    while ( v38 != v39 );
  }
  sub_BA9F50(a2 + 40, v61, v54, *(_QWORD *)(*a1 + 144));
  if ( ptr != v60 )
    free(ptr);
  if ( v61 != v63 )
    free(v61);
}
