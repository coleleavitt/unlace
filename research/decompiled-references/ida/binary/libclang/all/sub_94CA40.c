__int64 __fastcall sub_94CA40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rax
  _DWORD *v22; // r15
  unsigned int v23; // r13d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  _DWORD *v30; // r13
  __int64 v31; // r13
  unsigned int v32; // ebx
  int v34; // edx
  int v35; // eax
  _DWORD *v36; // rbp
  unsigned int v37; // [rsp+0h] [rbp-128h]
  __int64 v38; // [rsp+8h] [rbp-120h]
  _DWORD *v39; // [rsp+10h] [rbp-118h]
  _DWORD *v40; // [rsp+18h] [rbp-110h]
  __int64 v41; // [rsp+20h] [rbp-108h]
  __int64 v42; // [rsp+20h] [rbp-108h]
  _DWORD *v43; // [rsp+20h] [rbp-108h]
  __int64 v44; // [rsp+28h] [rbp-100h]
  _BYTE v45[24]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+48h] [rbp-E0h]
  __int64 v47; // [rsp+50h] [rbp-D8h]
  int v48; // [rsp+60h] [rbp-C8h]
  _BYTE v49[24]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+88h] [rbp-A0h]
  __int64 v51; // [rsp+90h] [rbp-98h]
  int v52; // [rsp+A0h] [rbp-88h]
  __int64 v53; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-70h]
  __int64 v55; // [rsp+C8h] [rbp-60h]
  __int64 v56; // [rsp+D0h] [rbp-58h]
  char v57; // [rsp+D8h] [rbp-50h]
  int v58; // [rsp+E0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v45, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v49, v5);
  sub_A1A5E0(v4, 56);
  v38 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( v52 == 1 )
  {
    v9 = v50;
    v53 = 0;
    v58 = 1;
    v56 = v51;
    v55 = v50;
    v54 = 0;
    goto LABEL_12;
  }
  if ( v52 == 2 )
  {
    v9 = v50;
    v53 = 0;
    v58 = 2;
    v55 = v50;
    v56 = 0;
    v57 = 1;
    v54 = 0;
LABEL_12:
    v11 = 40;
    goto LABEL_13;
  }
  v6 = v51;
  if ( (_DWORD)v51 == -1 )
  {
    if ( v52 == 3 )
      goto LABEL_58;
    sub_A1C030(&v53, v50, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v50 + 32) + 12LL));
  }
  else
  {
    v7 = sub_8E5480((__int64)v49);
    v8 = 32;
    if ( *(_QWORD *)(v7 + 32) )
      v8 = 16;
    sub_A1C030(&v53, v50, v6, v8 + v6);
  }
  v9 = v55;
  v10 = v53;
  if ( v58
    || !*(_BYTE *)(sub_8E5480((__int64)&v53) + 51)
    || (v40 = (_DWORD *)(v9 + (unsigned int)v56 + 72), (unsigned int)v56 != v10) )
  {
    v11 = v10 + 40;
LABEL_13:
    v40 = (_DWORD *)(v9 + v11);
  }
  sub_A1C0C0(&v53);
  if ( v52 == 1 )
  {
    v16 = v50;
    v53 = 1;
    v58 = 1;
    v56 = v51;
    v55 = v50;
    v54 = 0;
LABEL_49:
    v18 = 41;
    goto LABEL_24;
  }
  if ( v52 == 2 )
  {
    v16 = v50;
    v53 = 1;
    v58 = 2;
    v55 = v50;
    v56 = 0;
    v57 = 1;
    v54 = 0;
    goto LABEL_49;
  }
  v12 = v51;
  if ( (_DWORD)v51 == -1 )
  {
    if ( v52 == 3 )
      goto LABEL_58;
    sub_A1C030(&v53, v50, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v50 + 32) + 12LL));
  }
  else
  {
    v13 = sub_8E5480((__int64)v49);
    v14 = *(unsigned int *)(v13 + 8);
    v15 = v14 + 32;
    if ( *(_QWORD *)(v13 + 32) )
      v15 = v14 + 16;
    sub_A1C030(&v53, v50, v12, v15 + v12);
  }
  v16 = v55;
  v17 = v53;
  if ( v58
    || !*(_BYTE *)(sub_8E5480((__int64)&v53) + 51)
    || (v39 = (_DWORD *)(v16 + (unsigned int)v56 + 72), (unsigned int)v56 != v17) )
  {
    v18 = v17 + 40;
LABEL_24:
    v39 = (_DWORD *)(v16 + v18);
  }
  sub_A1C0C0(&v53);
  sub_8E6410((__int64)&v53, (__int64)v45);
  v19 = v55;
  v20 = v53;
  if ( v58
    || (v41 = v55, v21 = sub_8E5480((__int64)&v53), v19 = v41, !*(_BYTE *)(v21 + 51))
    || (v22 = (_DWORD *)(v41 + (unsigned int)v56 + 72), (unsigned int)v56 != v20) )
  {
    v22 = (_DWORD *)(v19 + v20 + 40);
  }
  sub_A1C0C0(&v53);
  if ( v48 == 1 )
  {
    v27 = v46;
    v53 = 1;
    v58 = 1;
    v56 = v47;
    v55 = v46;
    v54 = 0;
LABEL_47:
    v31 = 41;
    goto LABEL_39;
  }
  if ( v48 == 2 )
  {
    v27 = v46;
    v53 = 1;
    v58 = 2;
    v55 = v46;
    v56 = 0;
    v57 = 1;
    v54 = 0;
    goto LABEL_47;
  }
  v23 = v47;
  if ( (_DWORD)v47 == -1 )
  {
    if ( v48 != 3 )
    {
      sub_A1C030(&v53, v46, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v46 + 32) + 12LL));
      goto LABEL_35;
    }
LABEL_58:
    BUG();
  }
  v24 = sub_8E5480((__int64)v45);
  v25 = *(unsigned int *)(v24 + 8);
  v26 = v25 + 32;
  if ( *(_QWORD *)(v24 + 32) )
    v26 = v25 + 16;
  sub_A1C030(&v53, v46, v23, v26 + v23);
LABEL_35:
  v27 = v55;
  v28 = v53;
  if ( v58
    || (v44 = v53, v42 = v55, v29 = sub_8E5480((__int64)&v53), v27 = v42, v28 = v44, !*(_BYTE *)(v29 + 51))
    || (v30 = (_DWORD *)(v42 + (unsigned int)v56 + 72), (unsigned int)v56 != v44) )
  {
    v31 = v28 + 40;
LABEL_39:
    v30 = (_DWORD *)(v27 + v31);
  }
  sub_A1C0C0(&v53);
  if ( *v30 | *v22 && (v34 = *v30 * *v30, v35 = *v22 * *v22, v35 + v34) )
  {
    v37 = v35 + v34;
    sub_8E6410((__int64)&v53, v38);
    v43 = (_DWORD *)sub_8F7C70(&v53);
    sub_A1C0C0(&v53);
    sub_8E6310((__int64)&v53, v38);
    v36 = (_DWORD *)sub_8F7C70(&v53);
    sub_A1C0C0(&v53);
    *v43 = (*v39 * *v30 + *v40 * *v22) / v37;
    sub_8E6410((__int64)&v53, v38);
    sub_A1DB00(&v53);
    sub_A1C0C0(&v53);
    *v36 = (*v39 * *v22 - *v40 * *v30) / v37;
    sub_8E6310((__int64)&v53, v38);
    sub_A1DB00(&v53);
    v32 = 1;
    sub_A1C0C0(&v53);
    sub_A1DB00(v38);
  }
  else
  {
    v53 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v32 = 0;
    sub_A2E0C0(a1, &v53, 2306, 0);
  }
  sub_A1C0C0(v49);
  sub_A1C0C0(v45);
  return v32;
}

