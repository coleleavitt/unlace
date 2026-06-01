__int64 __fastcall sub_9D22F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  char *v6; // r12
  __int64 v7; // r15
  void *v8; // r14
  __int64 v9; // rdx
  void *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r15
  void *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  char v22; // r15
  char v23; // r15
  __int64 v24; // r15
  char v25; // r15
  char v26; // r12
  char v27; // r12
  unsigned int v28; // ebx
  __int64 v30; // r12
  char v31; // r12
  __int64 v32; // [rsp+0h] [rbp-178h]
  void *v33; // [rsp+0h] [rbp-178h]
  unsigned int v34; // [rsp+Ch] [rbp-16Ch]
  __int64 v35; // [rsp+10h] [rbp-168h]
  __int64 v36; // [rsp+18h] [rbp-160h]
  __int64 v37; // [rsp+20h] [rbp-158h]
  void *v38; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-130h]
  void *v40; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-120h]
  void *v42; // [rsp+60h] [rbp-118h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-110h]
  void *v44; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v45; // [rsp+78h] [rbp-100h]
  _BYTE v46[64]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v47[24]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-A0h]
  __int64 v49; // [rsp+E0h] [rbp-98h]
  int v50; // [rsp+F0h] [rbp-88h]
  void *v51; // [rsp+100h] [rbp-78h] BYREF
  __int128 v52; // [rsp+108h] [rbp-70h]
  __int64 v53; // [rsp+118h] [rbp-60h]
  __int64 v54; // [rsp+120h] [rbp-58h]
  char v55; // [rsp+128h] [rbp-50h]
  int v56; // [rsp+130h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v47, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v46, v4);
  sub_A1A5E0(v3, 56);
  v37 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_9C3F30((__int64)&v51, (__int64)v46);
  if ( v56 )
    goto LABEL_6;
  v5 = *(_QWORD *)(v53 + 32);
  if ( *(_DWORD *)(v5 + 16) != (_DWORD)v54 && (_DWORD)v54 )
    v5 = *(_QWORD *)(v53 + (unsigned int)v54 + 32);
  if ( !*(_BYTE *)(v5 + 51) || (v6 = (char *)v51 + v53 + 72, v51 != (void *)(unsigned int)v54) )
LABEL_6:
    v6 = (char *)v51 + v53 + 40;
  sub_A1C0C0(&v51);
  sub_9C3DD0((__int64)&v51, (__int64)v46);
  v7 = v53;
  v8 = v51;
  if ( v56
    || !*(_BYTE *)(sub_8E5480((__int64)&v51) + 51)
    || (v36 = v7 + (unsigned int)v54 + 72, (void *)(unsigned int)v54 != v8) )
  {
    v36 = (__int64)v8 + v7 + 40;
  }
  sub_A1C0C0(&v51);
  sub_9C3F30((__int64)&v51, (__int64)v47);
  v9 = v53;
  v10 = v51;
  if ( v56
    || (v32 = v53, v11 = sub_8E5480((__int64)&v51), v9 = v32, !*(_BYTE *)(v11 + 51))
    || (v12 = (__int64)v10 + v32 + 72, v10 != (void *)(unsigned int)v54) )
  {
    v12 = (__int64)v10 + v9 + 40;
  }
  sub_A1C0C0(&v51);
  if ( v50 == 1 )
  {
    v17 = v48;
    v51 = &dword_0 + 1;
    v56 = 1;
    v54 = v49;
    v53 = v48;
    v52 = 0;
    goto LABEL_30;
  }
  if ( v50 == 2 )
  {
    v17 = v48;
    v51 = &dword_0 + 1;
    v56 = 2;
    v53 = v48;
    v54 = 0;
    v55 = 1;
    v52 = 0;
LABEL_30:
    v20 = 41;
    goto LABEL_31;
  }
  v13 = v49;
  if ( (_DWORD)v49 == -1 )
  {
    if ( v50 == 3 )
      BUG();
    sub_A1C030(&v51, v48, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v48 + 32) + 12LL));
  }
  else
  {
    v14 = sub_8E5480((__int64)v47);
    v15 = *(unsigned int *)(v14 + 8);
    v16 = v15 + 32;
    if ( *(_QWORD *)(v14 + 32) )
      v16 = v15 + 16;
    sub_A1C030(&v51, v48, v13, v16 + v13);
  }
  v17 = v53;
  v18 = v51;
  if ( v56
    || (v33 = v51, v19 = sub_8E5480((__int64)&v51), v18 = v33, !*(_BYTE *)(v19 + 51))
    || (v35 = (__int64)v33 + v17 + 72, v33 != (void *)(unsigned int)v54) )
  {
    v20 = (__int64)v18 + 40;
LABEL_31:
    v35 = v17 + v20;
  }
  sub_A1C0C0(&v51);
  v21 = *((_DWORD *)v6 + 2);
  v39 = 3;
  v38 = &byte_7;
  v34 = v21;
  LODWORD(v52) = *(_DWORD *)(v12 + 8);
  if ( (unsigned int)v52 > 0x40 )
    sub_2585B30(&v51);
  else
    v51 = *(void **)v12;
  v45 = *((_DWORD *)v6 + 2);
  if ( v45 > 0x40 )
    sub_2585B30(&v44);
  else
    v44 = *(void **)v6;
  v22 = sub_9337C0((__int64)&v44, (__int64)&v51, v34, (__int64)&v38);
  if ( v45 > 0x40 && v44 )
    operator delete[](v44);
  if ( (unsigned int)v52 > 0x40 && v51 )
    operator delete[](v51);
  if ( v22 )
    goto LABEL_90;
  v41 = 3;
  v40 = &byte_7;
  LODWORD(v52) = *(_DWORD *)(v35 + 8);
  if ( (unsigned int)v52 > 0x40 )
    sub_2585B30(&v51);
  else
    v51 = *(void **)v35;
  v45 = *(_DWORD *)(v36 + 8);
  if ( v45 > 0x40 )
    sub_2585B30(&v44);
  else
    v44 = *(void **)v36;
  v23 = sub_9337C0((__int64)&v44, (__int64)&v51, v34, (__int64)&v40);
  if ( v45 > 0x40 && v44 )
    operator delete[](v44);
  if ( (unsigned int)v52 > 0x40 && v51 )
    operator delete[](v51);
  if ( v23 )
    goto LABEL_88;
  sub_9C3F30((__int64)&v51, v37);
  v24 = sub_8F8D30((__int64 *)&v51);
  v45 = v41;
  if ( v41 > 0x40 )
    sub_2585B30(&v44);
  else
    v44 = v40;
  v43 = v39;
  if ( v39 > 0x40 )
    sub_2585B30(&v42);
  else
    v42 = v38;
  v25 = sub_934540((__int64)&v42, (__int64)&v44, v34, v24);
  if ( v43 > 0x40 && v42 )
    operator delete[](v42);
  if ( v45 > 0x40 && v44 )
    operator delete[](v44);
  sub_A1C0C0(&v51);
  if ( v25 )
    goto LABEL_88;
  sub_9C3F30((__int64)&v51, v37);
  sub_A1DB00(&v51);
  sub_A1C0C0(&v51);
  LODWORD(v52) = *(_DWORD *)(v35 + 8);
  if ( (unsigned int)v52 > 0x40 )
    sub_2585B30(&v51);
  else
    v51 = *(void **)v35;
  v45 = *((_DWORD *)v6 + 2);
  if ( v45 > 0x40 )
    sub_2585B30(&v44);
  else
    v44 = *(void **)v6;
  v26 = sub_9337C0((__int64)&v44, (__int64)&v51, v34, (__int64)&v38);
  if ( v45 > 0x40 && v44 )
    operator delete[](v44);
  if ( (unsigned int)v52 > 0x40 && v51 )
    operator delete[](v51);
  if ( v26 )
    goto LABEL_88;
  LODWORD(v52) = *(_DWORD *)(v12 + 8);
  if ( (unsigned int)v52 > 0x40 )
    sub_2585B30(&v51);
  else
    v51 = *(void **)v12;
  v45 = *(_DWORD *)(v36 + 8);
  if ( v45 > 0x40 )
    sub_2585B30(&v44);
  else
    v44 = *(void **)v36;
  v27 = sub_9337C0((__int64)&v44, (__int64)&v51, v34, (__int64)&v40);
  if ( v45 > 0x40 && v44 )
    operator delete[](v44);
  if ( (unsigned int)v52 > 0x40 && v51 )
    operator delete[](v51);
  if ( v27 )
    goto LABEL_88;
  sub_9C3DD0((__int64)&v51, v37);
  v30 = sub_8F8D30((__int64 *)&v51);
  v45 = v41;
  if ( v41 > 0x40 )
    sub_2585B30(&v44);
  else
    v44 = v40;
  v43 = v39;
  if ( v39 > 0x40 )
    sub_2585B30(&v42);
  else
    v42 = v38;
  v31 = sub_92DE90((__int64)&v42, (__int64)&v44, v34, v30);
  if ( v43 > 0x40 && v42 )
    operator delete[](v42);
  if ( v45 > 0x40 && v44 )
    operator delete[](v44);
  sub_A1C0C0(&v51);
  if ( v31 )
  {
LABEL_88:
    if ( v41 > 0x40 && v40 )
      operator delete[](v40);
LABEL_90:
    if ( v39 > 0x40 && v38 )
      operator delete[](v38);
    v28 = 0;
    goto LABEL_94;
  }
  sub_9C3DD0((__int64)&v51, v37);
  sub_A1DB00(&v51);
  sub_A1C0C0(&v51);
  sub_A1DB00(v37);
  if ( v41 > 0x40 && v40 )
    operator delete[](v40);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  v28 = 1;
LABEL_94:
  sub_A1C0C0(v46);
  sub_A1C0C0(v47);
  return v28;
}

