__int64 __fastcall sub_9C6B80(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r12
  _QWORD *v9; // r14
  __int64 v10; // rbp
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r14
  _QWORD *v17; // rsi
  __int64 v18; // rsi
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r14
  _QWORD *v24; // rsi
  __int64 v25; // rsi
  unsigned int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 v31; // r14
  _QWORD *v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 *v41; // rdi
  __int64 v43; // [rsp+8h] [rbp-250h]
  __int64 v44; // [rsp+8h] [rbp-250h]
  __int64 v45; // [rsp+28h] [rbp-230h]
  __int64 v46[4]; // [rsp+40h] [rbp-218h] BYREF
  __int64 v47[4]; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v48[4]; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v49[4]; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v50[4]; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v51[4]; // [rsp+E0h] [rbp-178h] BYREF
  __int64 v52[4]; // [rsp+100h] [rbp-158h] BYREF
  __int64 v53[4]; // [rsp+120h] [rbp-138h] BYREF
  __int64 v54[4]; // [rsp+140h] [rbp-118h] BYREF
  _BYTE v55[24]; // [rsp+160h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+178h] [rbp-E0h]
  __int64 v57; // [rsp+180h] [rbp-D8h]
  int v58; // [rsp+190h] [rbp-C8h]
  _BYTE v59[24]; // [rsp+1A0h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+1B8h] [rbp-A0h]
  __int64 v61; // [rsp+1C0h] [rbp-98h]
  int v62; // [rsp+1D0h] [rbp-88h]
  __int64 v63; // [rsp+1E0h] [rbp-78h] BYREF
  __int128 v64; // [rsp+1E8h] [rbp-70h]
  __int64 v65; // [rsp+1F8h] [rbp-60h]
  __int64 v66; // [rsp+200h] [rbp-58h]
  char v67; // [rsp+208h] [rbp-50h]
  int v68; // [rsp+210h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v59, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v55, v4);
  sub_A1A5E0(v3, 56);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_9C3F30((__int64)&v63, (__int64)v55);
  v7 = v65;
  v8 = v63;
  if ( v68
    || !*(_BYTE *)(sub_8E5480((__int64)&v63) + 51)
    || (v9 = (_QWORD *)(v7 + (unsigned int)v66 + 72), (unsigned int)v66 != v8) )
  {
    v9 = (_QWORD *)(v7 + v8 + 40);
  }
  v10 = sub_2575D20(&v63, v55, v6);
  if ( *v9 == v10 )
    sub_257CF50(v46, v9);
  else
    sub_25768A0(v46, v9);
  sub_A1C0C0(&v63);
  if ( v58 == 1 )
  {
    v15 = v56;
    v63 = 1;
    v68 = 1;
    v66 = v57;
    v65 = v56;
    v64 = 0;
    goto LABEL_19;
  }
  if ( v58 == 2 )
  {
    v15 = v56;
    v63 = 1;
    v68 = 2;
    v65 = v56;
    v66 = 0;
    v67 = 1;
    v64 = 0;
LABEL_19:
    v18 = 41;
    goto LABEL_20;
  }
  v11 = v57;
  if ( (_DWORD)v57 == -1 )
  {
    if ( v58 == 3 )
      BUG();
    sub_A1C030(&v63, v56, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v56 + 32) + 12LL));
  }
  else
  {
    v12 = sub_8E5480((__int64)v55);
    v13 = *(unsigned int *)(v12 + 8);
    v14 = v13 + 32;
    if ( *(_QWORD *)(v12 + 32) )
      v14 = v13 + 16;
    sub_A1C030(&v63, v56, v11, v14 + v11);
  }
  v15 = v65;
  v16 = v63;
  if ( v68
    || !*(_BYTE *)(sub_8E5480((__int64)&v63) + 51)
    || (v17 = (_QWORD *)(v15 + (unsigned int)v66 + 72), (unsigned int)v66 != v16) )
  {
    v18 = v16 + 40;
LABEL_20:
    v17 = (_QWORD *)(v15 + v18);
  }
  if ( *v17 == v10 )
    sub_257CF50(v47, v17);
  else
    sub_25768A0(v47, v17);
  sub_A1C0C0(&v63);
  if ( v62 == 1 )
  {
    v22 = v60;
    v63 = 0;
    v68 = 1;
    v66 = v61;
    v65 = v60;
    v64 = 0;
LABEL_77:
    v25 = 40;
    goto LABEL_33;
  }
  if ( v62 == 2 )
  {
    v22 = v60;
    v63 = 0;
    v68 = 2;
    v65 = v60;
    v66 = 0;
    v67 = 1;
    v64 = 0;
    goto LABEL_77;
  }
  v19 = v61;
  if ( (_DWORD)v61 == -1 )
  {
    if ( v62 == 3 )
      BUG();
    sub_A1C030(&v63, v60, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v60 + 32) + 12LL));
  }
  else
  {
    v20 = sub_8E5480((__int64)v59);
    v21 = 32;
    if ( *(_QWORD *)(v20 + 32) )
      v21 = 16;
    sub_A1C030(&v63, v60, v19, v21 + v19);
  }
  v22 = v65;
  v23 = v63;
  if ( v68
    || !*(_BYTE *)(sub_8E5480((__int64)&v63) + 51)
    || (v24 = (_QWORD *)(v22 + (unsigned int)v66 + 72), (unsigned int)v66 != v23) )
  {
    v25 = v23 + 40;
LABEL_33:
    v24 = (_QWORD *)(v22 + v25);
  }
  if ( *v24 == v10 )
    sub_257CF50(v48, v24);
  else
    sub_25768A0(v48, v24);
  sub_A1C0C0(&v63);
  if ( v62 == 1 )
  {
    v30 = v60;
    v63 = 1;
    v68 = 1;
    v66 = v61;
    v65 = v60;
    v64 = 0;
LABEL_75:
    v33 = 41;
    goto LABEL_46;
  }
  if ( v62 == 2 )
  {
    v30 = v60;
    v63 = 1;
    v68 = 2;
    v65 = v60;
    v66 = 0;
    v67 = 1;
    v64 = 0;
    goto LABEL_75;
  }
  v26 = v61;
  if ( (_DWORD)v61 == -1 )
  {
    if ( v62 == 3 )
      BUG();
    sub_A1C030(&v63, v60, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v60 + 32) + 12LL));
  }
  else
  {
    v27 = sub_8E5480((__int64)v59);
    v28 = *(unsigned int *)(v27 + 8);
    v29 = v28 + 32;
    if ( *(_QWORD *)(v27 + 32) )
      v29 = v28 + 16;
    sub_A1C030(&v63, v60, v26, v29 + v26);
  }
  v30 = v65;
  v31 = v63;
  if ( v68
    || !*(_BYTE *)(sub_8E5480((__int64)&v63) + 51)
    || (v32 = (_QWORD *)(v30 + (unsigned int)v66 + 72), (unsigned int)v66 != v31) )
  {
    v33 = v31 + 40;
LABEL_46:
    v32 = (_QWORD *)(v30 + v33);
  }
  if ( *v32 == v10 )
    sub_257CF50(v49, v32);
  else
    sub_25768A0(v49, v32);
  sub_A1C0C0(&v63);
  if ( v46[0] == v10 )
    sub_257CDE0(v50, v10);
  else
    sub_2579610(v50);
  if ( v46[0] == v10 )
    sub_257CDE0(v51, v10);
  else
    sub_2579610(v51);
  if ( v49[0] == v10 )
    sub_257CF50(&v63, v49);
  else
    sub_25768A0(&v63, v49);
  if ( v48[0] == v10 )
    sub_257CF50(v54, v48);
  else
    sub_25768A0(v54, v48);
  if ( v47[0] == v10 )
    sub_257CF50(v53, v47);
  else
    sub_25768A0(v53, v47);
  if ( v46[0] == v10 )
    sub_257CF50(v52, v46);
  else
    sub_25768A0(v52, v46);
  sub_8464C0(v52, v53, v54, &v63, v50, (__int64)v51);
  sub_5FF3B0(v52);
  sub_5FF3B0(v53);
  sub_5FF3B0(v54);
  sub_5FF3B0(&v63);
  if ( v50[0] == v10 )
    sub_257CF50(v54, v50);
  else
    sub_25768A0(v54, v50);
  sub_9C3F30((__int64)&v63, v5);
  v34 = v65;
  v35 = v63;
  if ( v68
    || (v45 = v63, v43 = v65, v36 = sub_8E5480((__int64)&v63), v34 = v43, v35 = v45, !*(_BYTE *)(v36 + 51))
    || (v37 = (__int64 *)(v43 + (unsigned int)v66 + 72), (unsigned int)v66 != v45) )
  {
    v37 = (__int64 *)(v34 + v35 + 40);
  }
  sub_9BD190(v37, v54, v35);
  sub_A1C0C0(&v63);
  sub_5FF3B0(v54);
  sub_9C3F30((__int64)&v63, v5);
  sub_A1DB00(&v63);
  sub_A1C0C0(&v63);
  if ( v51[0] == v10 )
    sub_257CF50(v54, v51);
  else
    sub_25768A0(v54, v51);
  sub_9C3DD0((__int64)&v63, v5);
  v38 = v65;
  v39 = v63;
  if ( v68
    || (v44 = v65, v40 = sub_8E5480((__int64)&v63), v38 = v44, !*(_BYTE *)(v40 + 51))
    || (v41 = (__int64 *)(v44 + v39 + 72), v39 != (unsigned int)v66) )
  {
    v41 = (__int64 *)(v38 + v39 + 40);
  }
  sub_9BD190(v41, v54, v38);
  sub_A1C0C0(&v63);
  sub_5FF3B0(v54);
  sub_9C3DD0((__int64)&v63, v5);
  sub_A1DB00(&v63);
  sub_A1C0C0(&v63);
  sub_A1DB00(v5);
  sub_5FF3B0(v51);
  sub_5FF3B0(v50);
  sub_5FF3B0(v49);
  sub_5FF3B0(v48);
  sub_5FF3B0(v47);
  sub_5FF3B0(v46);
  sub_A1C0C0(v55);
  return sub_A1C0C0(v59);
}

