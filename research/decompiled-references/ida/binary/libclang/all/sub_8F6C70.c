__int64 __fastcall sub_8F6C70(__int64 a1)
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
  unsigned __int16 *v10; // r12
  __int64 v11; // r12
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int16 *v19; // r13
  __int64 v20; // r13
  unsigned int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int16 *v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int16 v36; // kr08_2
  __int16 v37; // r12
  unsigned __int16 v38; // kr0C_2
  __int16 v39; // bp
  unsigned int v40; // ebx
  __int64 v42; // [rsp+0h] [rbp-118h]
  __int64 v43; // [rsp+0h] [rbp-118h]
  unsigned int v44; // [rsp+0h] [rbp-118h]
  __int64 v45; // [rsp+0h] [rbp-118h]
  unsigned __int16 *v46; // [rsp+0h] [rbp-118h]
  __int64 v47; // [rsp+8h] [rbp-110h]
  __int64 v48; // [rsp+10h] [rbp-108h]
  __int64 v49; // [rsp+10h] [rbp-108h]
  __int16 v50; // [rsp+10h] [rbp-108h]
  __int16 v51; // [rsp+1Ch] [rbp-FCh]
  _BYTE v52[24]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v53; // [rsp+38h] [rbp-E0h]
  __int64 v54; // [rsp+40h] [rbp-D8h]
  int v55; // [rsp+50h] [rbp-C8h]
  _BYTE v56[24]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+78h] [rbp-A0h]
  __int64 v58; // [rsp+80h] [rbp-98h]
  int v59; // [rsp+90h] [rbp-88h]
  __int64 v60; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v61; // [rsp+A8h] [rbp-70h]
  __int64 v62; // [rsp+B8h] [rbp-60h]
  __int64 v63; // [rsp+C0h] [rbp-58h]
  char v64; // [rsp+C8h] [rbp-50h]
  int v65; // [rsp+D0h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v56, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v52, v4);
  sub_A1A5E0(v3, 56);
  v47 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( v55 == 1 )
  {
    v8 = v53;
    v60 = 0;
    v65 = 1;
    v63 = v54;
    v62 = v53;
    v61 = 0;
    goto LABEL_12;
  }
  if ( v55 == 2 )
  {
    v8 = v53;
    v60 = 0;
    v65 = 2;
    v62 = v53;
    v63 = 0;
    v64 = 1;
    v61 = 0;
LABEL_12:
    v11 = 40;
    goto LABEL_13;
  }
  v5 = v54;
  if ( (_DWORD)v54 == -1 )
  {
    if ( v55 == 3 )
      BUG();
    sub_A1C030(&v60, v53, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v53 + 32) + 12LL));
  }
  else
  {
    v6 = sub_8E5480((__int64)v52);
    v7 = 32;
    if ( *(_QWORD *)(v6 + 32) )
      v7 = 16;
    sub_A1C030(&v60, v53, v5, v7 + v5);
  }
  v8 = v62;
  v9 = v60;
  if ( v65
    || !*(_BYTE *)(sub_8E5480((__int64)&v60) + 51)
    || (v10 = (unsigned __int16 *)(v8 + (unsigned int)v63 + 72), (unsigned int)v63 != v9) )
  {
    v11 = v9 + 40;
LABEL_13:
    v10 = (unsigned __int16 *)(v8 + v11);
  }
  sub_A1C0C0(&v60);
  if ( v55 == 1 )
  {
    v16 = v53;
    v60 = 1;
    v65 = 1;
    v63 = v54;
    v62 = v53;
    v61 = 0;
LABEL_58:
    v20 = 41;
    goto LABEL_24;
  }
  if ( v55 == 2 )
  {
    v16 = v53;
    v60 = 1;
    v65 = 2;
    v62 = v53;
    v63 = 0;
    v64 = 1;
    v61 = 0;
    goto LABEL_58;
  }
  v12 = v54;
  if ( (_DWORD)v54 == -1 )
  {
    if ( v55 == 3 )
      BUG();
    sub_A1C030(&v60, v53, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v53 + 32) + 12LL));
  }
  else
  {
    v13 = sub_8E5480((__int64)v52);
    v14 = *(unsigned int *)(v13 + 8);
    v15 = v14 + 32;
    if ( *(_QWORD *)(v13 + 32) )
      v15 = v14 + 16;
    sub_A1C030(&v60, v53, v12, v15 + v12);
  }
  v16 = v62;
  v17 = v60;
  if ( v65
    || (v42 = v60, v18 = sub_8E5480((__int64)&v60), v17 = v42, !*(_BYTE *)(v18 + 51))
    || (v19 = (unsigned __int16 *)(v16 + (unsigned int)v63 + 72), (unsigned int)v63 != v42) )
  {
    v20 = v17 + 40;
LABEL_24:
    v19 = (unsigned __int16 *)(v16 + v20);
  }
  sub_A1C0C0(&v60);
  if ( v59 == 1 )
  {
    v24 = v57;
    v60 = 0;
    v65 = 1;
    v63 = v58;
    v62 = v57;
    v61 = 0;
LABEL_62:
    v28 = 40;
    goto LABEL_35;
  }
  if ( v59 == 2 )
  {
    v24 = v57;
    v60 = 0;
    v65 = 2;
    v62 = v57;
    v63 = 0;
    v64 = 1;
    v61 = 0;
    goto LABEL_62;
  }
  v21 = v58;
  if ( (_DWORD)v58 == -1 )
  {
    if ( v59 == 3 )
      BUG();
    sub_A1C030(&v60, v57, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v57 + 32) + 12LL));
  }
  else
  {
    v22 = sub_8E5480((__int64)v56);
    v23 = 32;
    if ( *(_QWORD *)(v22 + 32) )
      v23 = 16;
    sub_A1C030(&v60, v57, v21, v23 + v21);
  }
  v24 = v62;
  v25 = v60;
  if ( v65
    || (v48 = v60, v43 = v62, v26 = sub_8E5480((__int64)&v60), v24 = v43, v25 = v48, !*(_BYTE *)(v26 + 51))
    || (v27 = (unsigned __int16 *)(v43 + (unsigned int)v63 + 72), (unsigned int)v63 != v48) )
  {
    v28 = v25 + 40;
LABEL_35:
    v27 = (unsigned __int16 *)(v24 + v28);
  }
  sub_A1C0C0(&v60);
  if ( v59 == 1 )
  {
    v32 = v57;
    v60 = 1;
    v65 = 1;
    v63 = v58;
    v62 = v57;
    v61 = 0;
LABEL_60:
    v35 = 41;
    goto LABEL_46;
  }
  if ( v59 == 2 )
  {
    v32 = v57;
    v60 = 1;
    v65 = 2;
    v62 = v57;
    v63 = 0;
    v64 = 1;
    v61 = 0;
    goto LABEL_60;
  }
  if ( (_DWORD)v58 == -1 )
  {
    if ( v59 == 3 )
      BUG();
    sub_A1C030(&v60, v57, (unsigned int)v58, *(unsigned int *)(*(_QWORD *)(v57 + 32) + 12LL));
  }
  else
  {
    v44 = v58;
    v29 = sub_8E5480((__int64)v56);
    v30 = *(unsigned int *)(v29 + 8);
    v31 = v30 + 32;
    if ( *(_QWORD *)(v29 + 32) )
      v31 = v30 + 16;
    sub_A1C030(&v60, v57, v44, v31 + v44);
  }
  v32 = v62;
  v33 = v60;
  if ( v65
    || (v49 = v60, v45 = v62, v34 = sub_8E5480((__int64)&v60), v32 = v45, v33 = v49, !*(_BYTE *)(v34 + 51))
    || (v46 = (unsigned __int16 *)(v45 + (unsigned int)v63 + 72), (unsigned int)v63 != v49) )
  {
    v35 = v33 + 40;
LABEL_46:
    v46 = (unsigned __int16 *)(v32 + v35);
  }
  sub_A1C0C0(&v60);
  if ( is_mul_ok(*v27, *v10)
    && is_mul_ok(*v46, *v19)
    && (v51 = *v46 * *v19,
        v50 = *v27 * *v10,
        sub_8E6410((__int64)&v60, v47),
        *(_WORD *)sub_8F6C20(&v60) = v50 - v51,
        sub_A1C0C0(&v60),
        !__OFSUB__(v50, v51))
    && (sub_8E6410((__int64)&v60, v47),
        sub_A1DB00(&v60),
        sub_A1C0C0(&v60),
        v36 = *v10,
        v37 = *v46 * *v10,
        is_mul_ok(*v46, v36))
    && (v38 = *v27, v39 = *v27 * *v19, is_mul_ok(v38, *v19))
    && (sub_8E6310((__int64)&v60, v47), *(_WORD *)sub_8F6C20(&v60) = v39 + v37, sub_A1C0C0(&v60), !__OFADD__(v39, v37)) )
  {
    sub_8E6310((__int64)&v60, v47);
    sub_A1DB00(&v60);
    v40 = 1;
    sub_A1C0C0(&v60);
    sub_A1DB00(v47);
  }
  else
  {
    v40 = 0;
  }
  sub_A1C0C0(v52);
  sub_A1C0C0(v56);
  return v40;
}

