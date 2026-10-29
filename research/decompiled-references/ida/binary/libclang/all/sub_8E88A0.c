__int64 __fastcall sub_8E88A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r13
  _BYTE *v8; // r15
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // r12
  __int64 v17; // r12
  unsigned int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  _BYTE *v32; // r13
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rax
  _BYTE *v37; // rdx
  char v38; // r13
  char v39; // r12
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rax
  _BYTE *v43; // rdx
  __int64 v45; // [rsp+0h] [rbp-128h]
  __int64 v46; // [rsp+0h] [rbp-128h]
  _BYTE *v47; // [rsp+0h] [rbp-128h]
  __int64 v48; // [rsp+0h] [rbp-128h]
  __int64 v49; // [rsp+10h] [rbp-118h]
  char v50; // [rsp+10h] [rbp-118h]
  __int64 v51; // [rsp+18h] [rbp-110h]
  char v52; // [rsp+18h] [rbp-110h]
  __int64 v53; // [rsp+20h] [rbp-108h]
  __int64 v54; // [rsp+28h] [rbp-100h]
  _BYTE v55[24]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+48h] [rbp-E0h]
  __int64 v57; // [rsp+50h] [rbp-D8h]
  int v58; // [rsp+60h] [rbp-C8h]
  _BYTE v59[24]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+88h] [rbp-A0h]
  __int64 v61; // [rsp+90h] [rbp-98h]
  int v62; // [rsp+A0h] [rbp-88h]
  __int64 v63; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v64; // [rsp+B8h] [rbp-70h]
  __int64 v65; // [rsp+C8h] [rbp-60h]
  __int64 v66; // [rsp+D0h] [rbp-58h]
  char v67; // [rsp+D8h] [rbp-50h]
  int v68; // [rsp+E0h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v59, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v55, v4);
  sub_A1A5E0(v3, 56);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_8E6410((__int64)&v63, (__int64)v55);
  v6 = v65;
  v7 = v63;
  if ( v68
    || !*(_BYTE *)(sub_8E5480((__int64)&v63) + 51)
    || (v8 = (_BYTE *)(v6 + (unsigned int)v66 + 72), (unsigned int)v66 != v7) )
  {
    v8 = (_BYTE *)(v6 + v7 + 40);
  }
  sub_A1C0C0(&v63);
  if ( v58 == 1 )
  {
    v13 = v56;
    v63 = 1;
    v68 = 1;
    v66 = v57;
    v65 = v56;
    v64 = 0;
    goto LABEL_17;
  }
  if ( v58 == 2 )
  {
    v13 = v56;
    v63 = 1;
    v68 = 2;
    v65 = v56;
    v66 = 0;
    v67 = 1;
    v64 = 0;
LABEL_17:
    v17 = 41;
    goto LABEL_18;
  }
  v9 = v57;
  if ( (_DWORD)v57 == -1 )
  {
    if ( v58 == 3 )
      BUG();
    sub_A1C030(&v63, v56, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v56 + 32) + 12LL));
  }
  else
  {
    v10 = sub_8E5480((__int64)v55);
    v11 = *(unsigned int *)(v10 + 8);
    v12 = v11 + 32;
    if ( *(_QWORD *)(v10 + 32) )
      v12 = v11 + 16;
    sub_A1C030(&v63, v56, v9, v12 + v9);
  }
  v13 = v65;
  v14 = v63;
  if ( v68
    || (v45 = v63, v15 = sub_8E5480((__int64)&v63), v14 = v45, !*(_BYTE *)(v15 + 51))
    || (v16 = (_BYTE *)(v13 + (unsigned int)v66 + 72), (unsigned int)v66 != v45) )
  {
    v17 = v14 + 40;
LABEL_18:
    v16 = (_BYTE *)(v13 + v17);
  }
  sub_A1C0C0(&v63);
  if ( v62 == 1 )
  {
    v21 = v60;
    v63 = 0;
    v68 = 1;
    v66 = v61;
    v65 = v60;
    v64 = 0;
LABEL_54:
    v24 = 40;
    goto LABEL_29;
  }
  if ( v62 == 2 )
  {
    v21 = v60;
    v63 = 0;
    v68 = 2;
    v65 = v60;
    v66 = 0;
    v67 = 1;
    v64 = 0;
    goto LABEL_54;
  }
  v18 = v61;
  if ( (_DWORD)v61 == -1 )
  {
    if ( v62 == 3 )
      BUG();
    sub_A1C030(&v63, v60, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v60 + 32) + 12LL));
  }
  else
  {
    v19 = sub_8E5480((__int64)v59);
    v20 = 32;
    if ( *(_QWORD *)(v19 + 32) )
      v20 = 16;
    sub_A1C030(&v63, v60, v18, v20 + v18);
  }
  v21 = v65;
  v22 = v63;
  if ( v68
    || (v46 = v63, v23 = sub_8E5480((__int64)&v63), v22 = v46, !*(_BYTE *)(v23 + 51))
    || (v47 = (_BYTE *)(v21 + (unsigned int)v66 + 72), (unsigned int)v66 != v22) )
  {
    v24 = v22 + 40;
LABEL_29:
    v47 = (_BYTE *)(v21 + v24);
  }
  sub_A1C0C0(&v63);
  if ( v62 == 1 )
  {
    v29 = v60;
    v63 = 1;
    v68 = 1;
    v66 = v61;
    v65 = v60;
    v64 = 0;
LABEL_52:
    v33 = 41;
    goto LABEL_40;
  }
  if ( v62 == 2 )
  {
    v29 = v60;
    v63 = 1;
    v68 = 2;
    v65 = v60;
    v66 = 0;
    v67 = 1;
    v64 = 0;
    goto LABEL_52;
  }
  v25 = v61;
  if ( (_DWORD)v61 == -1 )
  {
    if ( v62 == 3 )
      BUG();
    sub_A1C030(&v63, v60, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v60 + 32) + 12LL));
  }
  else
  {
    v26 = sub_8E5480((__int64)v59);
    v27 = *(unsigned int *)(v26 + 8);
    v28 = v27 + 32;
    if ( *(_QWORD *)(v26 + 32) )
      v28 = v27 + 16;
    sub_A1C030(&v63, v60, v25, v28 + v25);
  }
  v29 = v65;
  v30 = v63;
  if ( v68
    || (v51 = v63, v49 = v65, v31 = sub_8E5480((__int64)&v63), v29 = v49, v30 = v51, !*(_BYTE *)(v31 + 51))
    || (v32 = (_BYTE *)(v49 + (unsigned int)v66 + 72), (unsigned int)v66 != v51) )
  {
    v33 = v30 + 40;
LABEL_40:
    v32 = (_BYTE *)(v29 + v33);
  }
  sub_A1C0C0(&v63);
  v50 = *v47 * *v8;
  v52 = *v32 * *v16;
  sub_8E6410((__int64)&v63, v5);
  v34 = v65;
  v35 = v63;
  if ( v68
    || (v54 = v63, v53 = v65, v36 = sub_8E5480((__int64)&v63), v34 = v53, v35 = v54, !*(_BYTE *)(v36 + 51))
    || (v37 = (_BYTE *)(v53 + (unsigned int)v66 + 72), (unsigned int)v66 != v54) )
  {
    v37 = (_BYTE *)(v34 + v35 + 40);
  }
  *v37 = v50 - v52;
  sub_A1C0C0(&v63);
  sub_8E6410((__int64)&v63, v5);
  sub_A1DB00(&v63);
  sub_A1C0C0(&v63);
  v38 = *v32 * *v8;
  v39 = *v47 * *v16;
  sub_8E6310((__int64)&v63, v5);
  v40 = v65;
  v41 = v63;
  if ( v68
    || (v48 = v65, v42 = sub_8E5480((__int64)&v63), v40 = v48, !*(_BYTE *)(v42 + 51))
    || (v43 = (_BYTE *)(v48 + (unsigned int)v66 + 72), (unsigned int)v66 != v41) )
  {
    v43 = (_BYTE *)(v40 + v41 + 40);
  }
  *v43 = v38 + v39;
  sub_A1C0C0(&v63);
  sub_8E6310((__int64)&v63, v5);
  sub_A1DB00(&v63);
  sub_A1C0C0(&v63);
  sub_A1DB00(v5);
  sub_A1C0C0(v55);
  return sub_A1C0C0(v59);
}

