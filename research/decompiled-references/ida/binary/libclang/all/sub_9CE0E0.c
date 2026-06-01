__int64 __fastcall sub_9CE0E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned int *v10; // r12
  __int64 v11; // r12
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int *v19; // r13
  __int64 v20; // r13
  unsigned int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int *v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  bool v36; // of
  int v37; // r12d
  int v38; // ebp
  unsigned int v39; // ebx
  __int64 v41; // [rsp+0h] [rbp-118h]
  __int64 v42; // [rsp+0h] [rbp-118h]
  unsigned int v43; // [rsp+0h] [rbp-118h]
  __int64 v44; // [rsp+0h] [rbp-118h]
  unsigned int *v45; // [rsp+0h] [rbp-118h]
  __int64 v46; // [rsp+8h] [rbp-110h]
  __int64 v47; // [rsp+10h] [rbp-108h]
  __int64 v48; // [rsp+10h] [rbp-108h]
  int v49; // [rsp+10h] [rbp-108h]
  int v50; // [rsp+1Ch] [rbp-FCh]
  _BYTE v51[24]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+38h] [rbp-E0h]
  __int64 v53; // [rsp+40h] [rbp-D8h]
  int v54; // [rsp+50h] [rbp-C8h]
  _BYTE v55[24]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+78h] [rbp-A0h]
  __int64 v57; // [rsp+80h] [rbp-98h]
  int v58; // [rsp+90h] [rbp-88h]
  __int64 v59; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-70h]
  __int64 v61; // [rsp+B8h] [rbp-60h]
  __int64 v62; // [rsp+C0h] [rbp-58h]
  char v63; // [rsp+C8h] [rbp-50h]
  int v64; // [rsp+D0h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v55, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v51, v4);
  sub_A1A5E0(v3, 56);
  v46 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( v54 == 1 )
  {
    v8 = v52;
    v59 = 0;
    v64 = 1;
    v62 = v53;
    v61 = v52;
    v60 = 0;
    goto LABEL_12;
  }
  if ( v54 == 2 )
  {
    v8 = v52;
    v59 = 0;
    v64 = 2;
    v61 = v52;
    v62 = 0;
    v63 = 1;
    v60 = 0;
LABEL_12:
    v11 = 40;
    goto LABEL_13;
  }
  v5 = v53;
  if ( (_DWORD)v53 == -1 )
  {
    if ( v54 == 3 )
      BUG();
    sub_A1C030(&v59, v52, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v52 + 32) + 12LL));
  }
  else
  {
    v6 = sub_8E5480((__int64)v51);
    v7 = 32;
    if ( *(_QWORD *)(v6 + 32) )
      v7 = 16;
    sub_A1C030(&v59, v52, v5, v7 + v5);
  }
  v8 = v61;
  v9 = v59;
  if ( v64
    || !*(_BYTE *)(sub_8E5480((__int64)&v59) + 51)
    || (v10 = (unsigned int *)(v8 + (unsigned int)v62 + 72), (unsigned int)v62 != v9) )
  {
    v11 = v9 + 40;
LABEL_13:
    v10 = (unsigned int *)(v8 + v11);
  }
  sub_A1C0C0(&v59);
  if ( v54 == 1 )
  {
    v16 = v52;
    v59 = 1;
    v64 = 1;
    v62 = v53;
    v61 = v52;
    v60 = 0;
LABEL_58:
    v20 = 41;
    goto LABEL_24;
  }
  if ( v54 == 2 )
  {
    v16 = v52;
    v59 = 1;
    v64 = 2;
    v61 = v52;
    v62 = 0;
    v63 = 1;
    v60 = 0;
    goto LABEL_58;
  }
  v12 = v53;
  if ( (_DWORD)v53 == -1 )
  {
    if ( v54 == 3 )
      BUG();
    sub_A1C030(&v59, v52, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v52 + 32) + 12LL));
  }
  else
  {
    v13 = sub_8E5480((__int64)v51);
    v14 = *(unsigned int *)(v13 + 8);
    v15 = v14 + 32;
    if ( *(_QWORD *)(v13 + 32) )
      v15 = v14 + 16;
    sub_A1C030(&v59, v52, v12, v15 + v12);
  }
  v16 = v61;
  v17 = v59;
  if ( v64
    || (v41 = v59, v18 = sub_8E5480((__int64)&v59), v17 = v41, !*(_BYTE *)(v18 + 51))
    || (v19 = (unsigned int *)(v16 + (unsigned int)v62 + 72), (unsigned int)v62 != v41) )
  {
    v20 = v17 + 40;
LABEL_24:
    v19 = (unsigned int *)(v16 + v20);
  }
  sub_A1C0C0(&v59);
  if ( v58 == 1 )
  {
    v24 = v56;
    v59 = 0;
    v64 = 1;
    v62 = v57;
    v61 = v56;
    v60 = 0;
LABEL_62:
    v28 = 40;
    goto LABEL_35;
  }
  if ( v58 == 2 )
  {
    v24 = v56;
    v59 = 0;
    v64 = 2;
    v61 = v56;
    v62 = 0;
    v63 = 1;
    v60 = 0;
    goto LABEL_62;
  }
  v21 = v57;
  if ( (_DWORD)v57 == -1 )
  {
    if ( v58 == 3 )
      BUG();
    sub_A1C030(&v59, v56, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v56 + 32) + 12LL));
  }
  else
  {
    v22 = sub_8E5480((__int64)v55);
    v23 = 32;
    if ( *(_QWORD *)(v22 + 32) )
      v23 = 16;
    sub_A1C030(&v59, v56, v21, v23 + v21);
  }
  v24 = v61;
  v25 = v59;
  if ( v64
    || (v47 = v59, v42 = v61, v26 = sub_8E5480((__int64)&v59), v24 = v42, v25 = v47, !*(_BYTE *)(v26 + 51))
    || (v27 = (unsigned int *)(v42 + (unsigned int)v62 + 72), (unsigned int)v62 != v47) )
  {
    v28 = v25 + 40;
LABEL_35:
    v27 = (unsigned int *)(v24 + v28);
  }
  sub_A1C0C0(&v59);
  if ( v58 == 1 )
  {
    v32 = v56;
    v59 = 1;
    v64 = 1;
    v62 = v57;
    v61 = v56;
    v60 = 0;
LABEL_60:
    v35 = 41;
    goto LABEL_46;
  }
  if ( v58 == 2 )
  {
    v32 = v56;
    v59 = 1;
    v64 = 2;
    v61 = v56;
    v62 = 0;
    v63 = 1;
    v60 = 0;
    goto LABEL_60;
  }
  if ( (_DWORD)v57 == -1 )
  {
    if ( v58 == 3 )
      BUG();
    sub_A1C030(&v59, v56, (unsigned int)v57, *(unsigned int *)(*(_QWORD *)(v56 + 32) + 12LL));
  }
  else
  {
    v43 = v57;
    v29 = sub_8E5480((__int64)v55);
    v30 = *(unsigned int *)(v29 + 8);
    v31 = v30 + 32;
    if ( *(_QWORD *)(v29 + 32) )
      v31 = v30 + 16;
    sub_A1C030(&v59, v56, v43, v31 + v43);
  }
  v32 = v61;
  v33 = v59;
  if ( v64
    || (v48 = v59, v44 = v61, v34 = sub_8E5480((__int64)&v59), v32 = v44, v33 = v48, !*(_BYTE *)(v34 + 51))
    || (v45 = (unsigned int *)(v44 + (unsigned int)v62 + 72), (unsigned int)v62 != v48) )
  {
    v35 = v33 + 40;
LABEL_46:
    v45 = (unsigned int *)(v32 + v35);
  }
  sub_A1C0C0(&v59);
  if ( !is_mul_ok(*v27, *v10)
    || !is_mul_ok(*v45, *v19)
    || (v49 = *v27 * *v10,
        v50 = *v45 * *v19,
        sub_9C3F30((__int64)&v59, v46),
        *(_DWORD *)sub_8F7480(&v59) = v49 - v50,
        sub_A1C0C0(&v59),
        __OFSUB__(v49, v50))
    || (sub_9C3F30((__int64)&v59, v46),
        sub_A1DB00(&v59),
        sub_A1C0C0(&v59),
        v36 = (unsigned __int64)((int)*v45 * (__int64)(int)*v10) >> 32 != 0,
        v37 = *v45 * *v10,
        v36)
    || (v36 = (unsigned __int64)((int)*v27 * (__int64)(int)*v19) >> 32 != 0, v38 = *v27 * *v19, v36)
    || (sub_9C3DD0((__int64)&v59, v46), *(_DWORD *)sub_8F7480(&v59) = v38 + v37, sub_A1C0C0(&v59), __OFADD__(v38, v37)) )
  {
    v39 = 0;
  }
  else
  {
    sub_9C3DD0((__int64)&v59, v46);
    sub_A1DB00(&v59);
    v39 = 1;
    sub_A1C0C0(&v59);
    sub_A1DB00(v46);
  }
  sub_A1C0C0(v51);
  sub_A1C0C0(v55);
  return v39;
}

