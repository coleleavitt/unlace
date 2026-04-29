_BOOL8 __fastcall sub_13B6E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r12
  char v14; // al
  __int64 v15; // r15
  int v16; // r8d
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rbp
  __int64 v21; // rdi
  bool v22; // al
  char v23; // al
  int v24; // r8d
  int v25; // r9d
  char v26; // al
  char v27; // al
  __int64 v28; // rdi
  __int64 v29; // rdi
  int v30; // r8d
  int v31; // r9d
  char v32; // al
  char v33; // al
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // r9d
  unsigned __int8 v37; // al
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // r9d
  char v41; // al
  __int64 v42; // rcx
  int v43; // r8d
  int v44; // r9d
  int v45; // r8d
  int v46; // r9d
  __int64 v47; // [rsp+0h] [rbp-C8h]
  bool v48; // [rsp+0h] [rbp-C8h]
  unsigned __int8 v49; // [rsp+0h] [rbp-C8h]
  __int64 *v50; // [rsp+8h] [rbp-C0h]
  __int64 *v51; // [rsp+10h] [rbp-B8h]
  int v52; // [rsp+18h] [rbp-B0h]
  int v53; // [rsp+1Ch] [rbp-ACh]
  __int64 v54; // [rsp+20h] [rbp-A8h]
  __int64 v55[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v56; // [rsp+40h] [rbp-88h] BYREF
  __int64 v57; // [rsp+48h] [rbp-80h]
  __int64 v58; // [rsp+50h] [rbp-78h]
  __int64 v59; // [rsp+60h] [rbp-68h] BYREF
  __int64 v60; // [rsp+68h] [rbp-60h]
  __int64 v61; // [rsp+70h] [rbp-58h] BYREF
  __int128 v62; // [rsp+78h] [rbp-50h]
  unsigned __int64 v63; // [rsp+88h] [rbp-40h]

  v6 = a1[7];
  v63 = __readfsqword(0x28u);
  v8 = sub_13B260(a1, v6, a3, a4, a5, a6);
  if ( !v8 )
    return 0;
  v12 = v8;
  if ( *(_DWORD *)(v8 + 76) == 6 || *(_DWORD *)(v8 + 352) != 1 || *(_BYTE *)(v6 + 48) != 2 )
    return 0;
  v14 = *(_BYTE *)(v6 + 32);
  if ( (unsigned __int8)(v14 - 5) <= 1u || v14 == 1 )
  {
    v15 = 0;
    v47 = v6 + 32;
    v54 = v6 + 48;
    v53 = (unsigned __int8)sub_13B3C0(v12, v6 + 48, v6 + 32, v9, v10, v11);
    sub_127A20((__int64)v55, (__int64)a1, v6, 1, v16, v17);
    goto LABEL_9;
  }
  if ( v14 != 4 )
    return 0;
  v51 = *(__int64 **)(a1[60] + 112LL);
  sub_124680((__int64)v55, (__int64)a1, v6, 1u);
  v15 = *(_QWORD *)(v6 + 16);
  if ( !v15 )
  {
LABEL_46:
    sub_93B40(v55);
    return 0;
  }
  while ( 1 )
  {
    sub_127A20((__int64)&v59, (__int64)a1, v15, 1, v30, v31);
    if ( (unsigned __int8)sub_64780(v55, &v59) )
      goto LABEL_45;
    v50 = &v56;
    if ( (unsigned __int8)sub_318470(&v56, &v61) )
      goto LABEL_45;
    if ( sub_125B90((unsigned __int8 *)v15, (__int64)v51, *(unsigned int **)(v6 + 40), 0) )
      break;
    sub_64280(v55, &v59);
    sub_316CB0(&v56, &v61);
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree(v61);
    }
    qfree(v59);
    v15 = *(_QWORD *)(v15 + 16);
    if ( !v15 )
      goto LABEL_46;
  }
  v47 = v15 + 64;
  v41 = *(_BYTE *)(v15 + 64);
  if ( (unsigned __int8)(v41 - 5) > 1u && v41 != 1 || *(_DWORD *)(v15 + 68) != *(_DWORD *)(v6 + 52) )
  {
LABEL_45:
    sub_93B40(&v59);
    goto LABEL_46;
  }
  sub_93B40(&v59);
  sub_93B40(v55);
  v54 = v6 + 48;
  v53 = (unsigned __int8)sub_13B3C0(v12, v6 + 48, v47, v42, v43, v44);
  sub_127A20((__int64)v55, (__int64)a1, v6, 1, v45, v46);
  if ( v6 == v15 )
    v15 = 0;
LABEL_9:
  v20 = *(_QWORD *)(v6 + 16);
  if ( v15 == v20 )
    goto LABEL_14;
  while ( 1 )
  {
    v62 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    sub_127FE0((__int64)a1, (__int64)&v59, v47, 1u, v18, v19, v47, (int)v50, (int)v51, v52, v54);
    if ( (unsigned __int8)sub_64780(v55, &v59) )
    {
      v21 = v61;
      if ( !v61 )
        goto LABEL_13;
      goto LABEL_12;
    }
    v51 = &v61;
    v50 = &v56;
    v23 = sub_318470(&v56, &v61);
    v21 = v61;
    if ( v23 )
      break;
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree(v61);
    }
    qfree(v59);
    if ( *(_DWORD *)v20 != 4 )
      goto LABEL_29;
    v26 = *(_BYTE *)(v20 + 32);
    if ( ((unsigned __int8)(v26 - 5) <= 1u || v26 == 1) && sub_125B60((unsigned __int8 *)(v20 + 64), v47, 0) )
    {
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      sub_127FE0((__int64)a1, (__int64)&v59, v20 + 32, 1u, v24, v25, v47, (int)&v56, (int)&v61, v52, v54);
      if ( (unsigned __int8)sub_64780(v55, &v59) )
      {
        v28 = v61;
        if ( v61 )
          goto LABEL_36;
      }
      else
      {
        v32 = sub_318470(v50, v51);
        v28 = v61;
        if ( !v32 )
        {
          if ( v61 )
          {
            *(_QWORD *)&v62 = 0;
            qfree(v61);
          }
          qfree(v59);
          v37 = sub_13B3C0(v12, v54, v20 + 32, v34, v35, v36);
          v55[1] = 0;
          if ( v56 )
          {
            v49 = v37;
            v57 = 0;
            qfree(v56);
            v56 = 0;
            v37 = v49;
            v58 = 0;
          }
          v53 += v37;
          v47 = v20 + 32;
          goto LABEL_32;
        }
        if ( v61 )
        {
LABEL_36:
          *(_QWORD *)&v62 = 0;
          qfree(v28);
        }
      }
      qfree(v59);
    }
    v27 = *(_BYTE *)(v20 + 64);
    if ( (unsigned __int8)(v27 - 5) > 1u && v27 != 1 || !sub_125B60((unsigned __int8 *)(v20 + 32), v47, 0) )
      goto LABEL_29;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    sub_127FE0((__int64)a1, (__int64)&v59, v20 + 64, 1u, v24, v25, v47, (int)v50, (int)v51, v52, v54);
    if ( !(unsigned __int8)sub_64780(v55, &v59) )
    {
      v33 = sub_318470(v50, v51);
      v29 = v61;
      if ( !v33 )
      {
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          qfree(v61);
        }
        qfree(v59);
        v53 += (unsigned __int8)sub_13B3C0(v12, v54, v20 + 64, v38, v39, v40);
        goto LABEL_32;
      }
      if ( !v61 )
        goto LABEL_41;
LABEL_40:
      *(_QWORD *)&v62 = 0;
      qfree(v29);
      goto LABEL_41;
    }
    v29 = v61;
    if ( v61 )
      goto LABEL_40;
LABEL_41:
    qfree(v59);
LABEL_29:
    sub_127A20((__int64)&v59, (__int64)a1, v20, 1, v24, v25);
    sub_64280(v55, &v59);
    sub_316CB0(v50, v51);
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree(v61);
    }
    qfree(v59);
LABEL_32:
    v20 = *(_QWORD *)(v20 + 16);
    if ( v15 == v20 )
      goto LABEL_14;
  }
  if ( v61 )
  {
LABEL_12:
    *(_QWORD *)&v62 = 0;
    qfree(v21);
  }
LABEL_13:
  qfree(v59);
LABEL_14:
  v22 = v53 != 0;
  if ( v56 )
  {
    v57 = 0;
    qfree(v56);
    v22 = v53 != 0;
  }
  v48 = v22;
  qfree(v55[0]);
  return v48;
}
