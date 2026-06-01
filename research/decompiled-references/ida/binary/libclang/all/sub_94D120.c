__int64 __fastcall sub_94D120(__int64 a1, __int64 a2)
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
  unsigned __int64 *v22; // r15
  unsigned int v23; // r13d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 *v30; // r13
  __int64 v31; // r13
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned int v34; // ebx
  unsigned __int64 v36; // rdx
  bool v37; // of
  __int64 v38; // rax
  _QWORD *v39; // rbp
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  signed __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  signed __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-128h]
  __int64 v47; // [rsp+8h] [rbp-120h]
  unsigned __int64 *v48; // [rsp+10h] [rbp-118h]
  unsigned __int64 *v49; // [rsp+18h] [rbp-110h]
  __int64 v50; // [rsp+20h] [rbp-108h]
  __int64 v51; // [rsp+20h] [rbp-108h]
  _QWORD *v52; // [rsp+20h] [rbp-108h]
  __int64 v53; // [rsp+28h] [rbp-100h]
  _BYTE v54[24]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v55; // [rsp+48h] [rbp-E0h]
  __int64 v56; // [rsp+50h] [rbp-D8h]
  int v57; // [rsp+60h] [rbp-C8h]
  _BYTE v58[24]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+88h] [rbp-A0h]
  __int64 v60; // [rsp+90h] [rbp-98h]
  int v61; // [rsp+A0h] [rbp-88h]
  __int64 v62; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v63; // [rsp+B8h] [rbp-70h]
  __int64 v64; // [rsp+C8h] [rbp-60h]
  __int64 v65; // [rsp+D0h] [rbp-58h]
  char v66; // [rsp+D8h] [rbp-50h]
  int v67; // [rsp+E0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v54, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v58, v5);
  sub_A1A5E0(v4, 56);
  v47 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( v61 == 1 )
  {
    v9 = v59;
    v62 = 0;
    v67 = 1;
    v65 = v60;
    v64 = v59;
    v63 = 0;
    goto LABEL_12;
  }
  if ( v61 == 2 )
  {
    v9 = v59;
    v62 = 0;
    v67 = 2;
    v64 = v59;
    v65 = 0;
    v66 = 1;
    v63 = 0;
LABEL_12:
    v11 = 40;
    goto LABEL_13;
  }
  v6 = v60;
  if ( (_DWORD)v60 == -1 )
  {
    if ( v61 == 3 )
      goto LABEL_72;
    sub_A1C030(&v62, v59, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v59 + 32) + 12LL));
  }
  else
  {
    v7 = sub_8E5480((__int64)v58);
    v8 = 32;
    if ( *(_QWORD *)(v7 + 32) )
      v8 = 16;
    sub_A1C030(&v62, v59, v6, v8 + v6);
  }
  v9 = v64;
  v10 = v62;
  if ( v67
    || !*(_BYTE *)(sub_8E5480((__int64)&v62) + 51)
    || (v49 = (unsigned __int64 *)(v9 + (unsigned int)v65 + 72), (unsigned int)v65 != v10) )
  {
    v11 = v10 + 40;
LABEL_13:
    v49 = (unsigned __int64 *)(v9 + v11);
  }
  sub_A1C0C0(&v62);
  if ( v61 == 1 )
  {
    v16 = v59;
    v62 = 1;
    v67 = 1;
    v65 = v60;
    v64 = v59;
    v63 = 0;
LABEL_56:
    v18 = 41;
    goto LABEL_24;
  }
  if ( v61 == 2 )
  {
    v16 = v59;
    v62 = 1;
    v67 = 2;
    v64 = v59;
    v65 = 0;
    v66 = 1;
    v63 = 0;
    goto LABEL_56;
  }
  v12 = v60;
  if ( (_DWORD)v60 == -1 )
  {
    if ( v61 == 3 )
      goto LABEL_72;
    sub_A1C030(&v62, v59, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v59 + 32) + 12LL));
  }
  else
  {
    v13 = sub_8E5480((__int64)v58);
    v14 = *(unsigned int *)(v13 + 8);
    v15 = v14 + 32;
    if ( *(_QWORD *)(v13 + 32) )
      v15 = v14 + 16;
    sub_A1C030(&v62, v59, v12, v15 + v12);
  }
  v16 = v64;
  v17 = v62;
  if ( v67
    || !*(_BYTE *)(sub_8E5480((__int64)&v62) + 51)
    || (v48 = (unsigned __int64 *)(v16 + (unsigned int)v65 + 72), (unsigned int)v65 != v17) )
  {
    v18 = v17 + 40;
LABEL_24:
    v48 = (unsigned __int64 *)(v16 + v18);
  }
  sub_A1C0C0(&v62);
  sub_8E6410((__int64)&v62, (__int64)v54);
  v19 = v64;
  v20 = v62;
  if ( v67
    || (v50 = v64, v21 = sub_8E5480((__int64)&v62), v19 = v50, !*(_BYTE *)(v21 + 51))
    || (v22 = (unsigned __int64 *)(v50 + (unsigned int)v65 + 72), (unsigned int)v65 != v20) )
  {
    v22 = (unsigned __int64 *)(v19 + v20 + 40);
  }
  sub_A1C0C0(&v62);
  if ( v57 == 1 )
  {
    v27 = v55;
    v62 = 1;
    v67 = 1;
    v65 = v56;
    v64 = v55;
    v63 = 0;
LABEL_59:
    v31 = 41;
    goto LABEL_39;
  }
  if ( v57 == 2 )
  {
    v27 = v55;
    v62 = 1;
    v67 = 2;
    v64 = v55;
    v65 = 0;
    v66 = 1;
    v63 = 0;
    goto LABEL_59;
  }
  v23 = v56;
  if ( (_DWORD)v56 == -1 )
  {
    if ( v57 != 3 )
    {
      sub_A1C030(&v62, v55, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v55 + 32) + 12LL));
      goto LABEL_35;
    }
LABEL_72:
    BUG();
  }
  v24 = sub_8E5480((__int64)v54);
  v25 = *(unsigned int *)(v24 + 8);
  v26 = v25 + 32;
  if ( *(_QWORD *)(v24 + 32) )
    v26 = v25 + 16;
  sub_A1C030(&v62, v55, v23, v26 + v23);
LABEL_35:
  v27 = v64;
  v28 = v62;
  if ( v67
    || (v53 = v62, v51 = v64, v29 = sub_8E5480((__int64)&v62), v27 = v51, v28 = v53, !*(_BYTE *)(v29 + 51))
    || (v30 = (unsigned __int64 *)(v51 + (unsigned int)v65 + 72), (unsigned int)v65 != v53) )
  {
    v31 = v28 + 40;
LABEL_39:
    v30 = (unsigned __int64 *)(v27 + v31);
  }
  sub_A1C0C0(&v62);
  v32 = *v22;
  if ( *v22 )
  {
    v32 *= v32;
    v36 = 0;
    if ( !is_mul_ok(*v22, *v22) )
      goto LABEL_46;
    v33 = *v30;
  }
  else
  {
    v33 = *v30;
    if ( !*v30 )
    {
LABEL_42:
      v62 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      sub_A2E0C0(a1, &v62, 2306, 0);
      goto LABEL_43;
    }
  }
  v36 = v33 * v33;
LABEL_46:
  v37 = __OFADD__(v36, v32);
  v38 = v36 + v32;
  if ( v37 )
    goto LABEL_43;
  if ( !v38 )
    goto LABEL_42;
  v46 = v38;
  sub_8E6410((__int64)&v62, v47);
  v39 = (_QWORD *)sub_8F7CC0(&v62);
  sub_A1C0C0(&v62);
  sub_8E6310((__int64)&v62, v47);
  v52 = (_QWORD *)sub_8F7CC0(&v62);
  sub_A1C0C0(&v62);
  v40 = *v49 * *v22;
  if ( is_mul_ok(*v49, *v22) )
  {
    v41 = *v48 * *v30;
    if ( is_mul_ok(*v48, *v30) )
    {
      v37 = __OFADD__(v41, v40);
      v42 = v41 + v40;
      if ( v37 )
      {
        *v39 = v42;
      }
      else
      {
        *v39 = v42 / v46;
        sub_8E6410((__int64)&v62, v47);
        sub_A1DB00(&v62);
        sub_A1C0C0(&v62);
        v43 = *v48 * *v22;
        if ( is_mul_ok(*v48, *v22) )
        {
          v44 = *v49 * *v30;
          if ( is_mul_ok(*v49, *v30) )
          {
            v37 = __OFSUB__(v43, v44);
            v45 = v43 - v44;
            if ( !v37 )
            {
              *v52 = v45 / v46;
              sub_8E6310((__int64)&v62, v47);
              sub_A1DB00(&v62);
              v34 = 1;
              sub_A1C0C0(&v62);
              sub_A1DB00(v47);
              goto LABEL_44;
            }
            *v52 = v45;
          }
        }
      }
    }
  }
LABEL_43:
  v34 = 0;
LABEL_44:
  sub_A1C0C0(v58);
  sub_A1C0C0(v54);
  return v34;
}

