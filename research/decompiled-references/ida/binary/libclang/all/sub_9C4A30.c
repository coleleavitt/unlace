__int64 __fastcall sub_9C4A30(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  _DWORD *v11; // r12
  __int64 v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // r15
  _DWORD *v19; // r13
  __int64 v20; // r13
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rax
  _DWORD *v27; // r14
  __int64 v28; // r14
  unsigned int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  _DWORD *v36; // r15
  __int64 v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  _DWORD *v41; // rdx
  int v42; // r13d
  int v43; // r12d
  __int64 v44; // r15
  __int64 v45; // r14
  _DWORD *v46; // rax
  __int64 v48; // [rsp+10h] [rbp-118h]
  __int64 v49; // [rsp+10h] [rbp-118h]
  int v50; // [rsp+10h] [rbp-118h]
  __int64 v51; // [rsp+18h] [rbp-110h]
  int v52; // [rsp+18h] [rbp-110h]
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
  if ( v58 == 1 )
  {
    v9 = v56;
    v63 = 0;
    v68 = 1;
    v66 = v57;
    v65 = v56;
    v64 = 0;
    goto LABEL_12;
  }
  if ( v58 == 2 )
  {
    v9 = v56;
    v63 = 0;
    v68 = 2;
    v65 = v56;
    v66 = 0;
    v67 = 1;
    v64 = 0;
LABEL_12:
    v12 = 40;
    goto LABEL_13;
  }
  v6 = v57;
  if ( (_DWORD)v57 == -1 )
  {
    if ( v58 == 3 )
      BUG();
    sub_A1C030(&v63, v56, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v56 + 32) + 12LL));
  }
  else
  {
    v7 = sub_8E5480((__int64)v55);
    v8 = 32;
    if ( *(_QWORD *)(v7 + 32) )
      v8 = 16;
    sub_A1C030(&v63, v56, v6, v8 + v6);
  }
  v9 = v65;
  v10 = v63;
  if ( v68
    || !*(_BYTE *)(sub_8E5480((__int64)&v63) + 51)
    || (v11 = (_DWORD *)(v9 + (unsigned int)v66 + 72), (unsigned int)v66 != v10) )
  {
    v12 = v10 + 40;
LABEL_13:
    v11 = (_DWORD *)(v9 + v12);
  }
  sub_A1C0C0(&v63);
  if ( v58 == 1 )
  {
    v17 = v56;
    v63 = 1;
    v68 = 1;
    v66 = v57;
    v65 = v56;
    v64 = 0;
LABEL_58:
    v20 = 41;
    goto LABEL_24;
  }
  if ( v58 == 2 )
  {
    v17 = v56;
    v63 = 1;
    v68 = 2;
    v65 = v56;
    v66 = 0;
    v67 = 1;
    v64 = 0;
    goto LABEL_58;
  }
  v13 = v57;
  if ( (_DWORD)v57 == -1 )
  {
    if ( v58 == 3 )
      BUG();
    sub_A1C030(&v63, v56, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v56 + 32) + 12LL));
  }
  else
  {
    v14 = sub_8E5480((__int64)v55);
    v15 = *(unsigned int *)(v14 + 8);
    v16 = v15 + 32;
    if ( *(_QWORD *)(v14 + 32) )
      v16 = v15 + 16;
    sub_A1C030(&v63, v56, v13, v16 + v13);
  }
  v17 = v65;
  v18 = v63;
  if ( v68
    || !*(_BYTE *)(sub_8E5480((__int64)&v63) + 51)
    || (v19 = (_DWORD *)(v17 + (unsigned int)v66 + 72), (unsigned int)v66 != v18) )
  {
    v20 = v18 + 40;
LABEL_24:
    v19 = (_DWORD *)(v17 + v20);
  }
  sub_A1C0C0(&v63);
  if ( v62 == 1 )
  {
    v24 = v60;
    v63 = 0;
    v68 = 1;
    v66 = v61;
    v65 = v60;
    v64 = 0;
LABEL_62:
    v28 = 40;
    goto LABEL_35;
  }
  if ( v62 == 2 )
  {
    v24 = v60;
    v63 = 0;
    v68 = 2;
    v65 = v60;
    v66 = 0;
    v67 = 1;
    v64 = 0;
    goto LABEL_62;
  }
  v21 = v61;
  if ( (_DWORD)v61 == -1 )
  {
    if ( v62 == 3 )
      BUG();
    sub_A1C030(&v63, v60, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v60 + 32) + 12LL));
  }
  else
  {
    v22 = sub_8E5480((__int64)v59);
    v23 = 32;
    if ( *(_QWORD *)(v22 + 32) )
      v23 = 16;
    sub_A1C030(&v63, v60, v21, v23 + v21);
  }
  v24 = v65;
  v25 = v63;
  if ( v68
    || (v48 = v63, v26 = sub_8E5480((__int64)&v63), v25 = v48, !*(_BYTE *)(v26 + 51))
    || (v27 = (_DWORD *)(v24 + (unsigned int)v66 + 72), (unsigned int)v66 != v48) )
  {
    v28 = v25 + 40;
LABEL_35:
    v27 = (_DWORD *)(v24 + v28);
  }
  sub_A1C0C0(&v63);
  if ( v62 == 1 )
  {
    v33 = v60;
    v63 = 1;
    v68 = 1;
    v66 = v61;
    v65 = v60;
    v64 = 0;
LABEL_60:
    v37 = 41;
    goto LABEL_46;
  }
  if ( v62 == 2 )
  {
    v33 = v60;
    v63 = 1;
    v68 = 2;
    v65 = v60;
    v66 = 0;
    v67 = 1;
    v64 = 0;
    goto LABEL_60;
  }
  v29 = v61;
  if ( (_DWORD)v61 == -1 )
  {
    if ( v62 == 3 )
      BUG();
    sub_A1C030(&v63, v60, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v60 + 32) + 12LL));
  }
  else
  {
    v30 = sub_8E5480((__int64)v59);
    v31 = *(unsigned int *)(v30 + 8);
    v32 = v31 + 32;
    if ( *(_QWORD *)(v30 + 32) )
      v32 = v31 + 16;
    sub_A1C030(&v63, v60, v29, v32 + v29);
  }
  v33 = v65;
  v34 = v63;
  if ( v68
    || (v51 = v63, v49 = v65, v35 = sub_8E5480((__int64)&v63), v33 = v49, v34 = v51, !*(_BYTE *)(v35 + 51))
    || (v36 = (_DWORD *)(v49 + (unsigned int)v66 + 72), (unsigned int)v66 != v51) )
  {
    v37 = v34 + 40;
LABEL_46:
    v36 = (_DWORD *)(v33 + v37);
  }
  sub_A1C0C0(&v63);
  v50 = *v27 * *v11;
  v52 = *v36 * *v19;
  sub_9C3F30((__int64)&v63, v5);
  v38 = v65;
  v39 = v63;
  if ( v68
    || (v54 = v63, v53 = v65, v40 = sub_8E5480((__int64)&v63), v38 = v53, v39 = v54, !*(_BYTE *)(v40 + 51))
    || (v41 = (_DWORD *)(v53 + (unsigned int)v66 + 72), (unsigned int)v66 != v54) )
  {
    v41 = (_DWORD *)(v38 + v39 + 40);
  }
  *v41 = v50 - v52;
  sub_A1C0C0(&v63);
  sub_9C3F30((__int64)&v63, v5);
  sub_A1DB00(&v63);
  sub_A1C0C0(&v63);
  v42 = *v27 * *v19;
  v43 = *v36 * *v11;
  sub_9C3DD0((__int64)&v63, v5);
  v44 = v65;
  v45 = v63;
  if ( v68
    || !*(_BYTE *)(sub_8E5480((__int64)&v63) + 51)
    || (v46 = (_DWORD *)(v44 + (unsigned int)v66 + 72), (unsigned int)v66 != v45) )
  {
    v46 = (_DWORD *)(v44 + v45 + 40);
  }
  *v46 = v42 + v43;
  sub_A1C0C0(&v63);
  sub_9C3DD0((__int64)&v63, v5);
  sub_A1DB00(&v63);
  sub_A1C0C0(&v63);
  sub_A1DB00(v5);
  sub_A1C0C0(v55);
  return sub_A1C0C0(v59);
}

