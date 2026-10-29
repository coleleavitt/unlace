__int64 __fastcall sub_1AC6E80(__int64 *a1, unsigned __int64 a2, char a3, char a4, char a5, char a6, double a7)
{
  unsigned int v11; // eax
  unsigned __int8 **v13; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // rax
  _QWORD *v21; // rax
  bool v22; // r12
  bool v23; // bp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r15
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // [rsp+8h] [rbp-E0h]
  __int64 v59; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v60[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v62[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v63; // [rsp+98h] [rbp-50h]
  unsigned int v64; // [rsp+A0h] [rbp-48h]
  char v65; // [rsp+A4h] [rbp-44h]

  v11 = sub_EEB7E0(a2, a2, a7);
  v13 = (unsigned __int8 **)v60;
  sub_168B9F0((__int64)v60, a1, v11, 0xB55u, 0);
  if ( v63 )
  {
    if ( a3 == 1 )
    {
      sub_AE9DF0(v62, (__int64)"dim", 1u);
    }
    else if ( a3 )
    {
      if ( a3 != 2 )
        return sub_1AC72E0(v13);
      sub_AE9DF0(v62, (__int64)"static", 1u);
    }
    else
    {
      sub_AE9DF0(v62, (__int64)"num", 1u);
    }
LABEL_10:
    v22 = a5 == 7 && a6 == 20;
    v23 = a5 == 7 && a6 != 20;
    if ( v63 )
    {
      sub_1573010(v62, a4);
    }
    else
    {
      if ( !v65 )
        goto LABEL_3;
      v52 = sub_168B9E0(v60);
      v56 = v61;
      if ( v61 )
      {
        v58 = v52;
        v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
        v52 = v58;
      }
      v59 = v56;
      v57 = sub_1587BC0(v52, &v59, v52, v53, v54, v55);
      sub_1573010((unsigned __int8 **)(*v57 + 32LL * v64 + 8), a4);
    }
    if ( v63 )
    {
      sub_AE9DF0(v62, v22, 2u);
    }
    else
    {
      if ( !v65 )
        goto LABEL_3;
      v49 = sub_168B9E0(v60);
      v50 = v61;
      if ( v61 )
        v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
      v59 = v50;
      v51 = sub_1587BC0(v49, &v59, v45, v46, v47, v48);
      sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v64 + 8), v22, 2u);
    }
    if ( v63 )
    {
      sub_1AA2FB0(v62, a5);
    }
    else
    {
      if ( !v65 )
        goto LABEL_3;
      v42 = sub_168B9E0(v60);
      v43 = v61;
      if ( v61 )
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
      v59 = v43;
      v44 = sub_1587BC0(v42, &v59, v38, v39, v40, v41);
      sub_1AA2FB0((unsigned __int8 **)(*v44 + 32LL * v64 + 8), a5);
    }
    if ( v63 )
    {
      sub_AE9DF0(v62, v23, 2u);
    }
    else
    {
      if ( !v65 )
        goto LABEL_3;
      v35 = sub_168B9E0(v60);
      v36 = v61;
      if ( v61 )
        v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
      v59 = v36;
      v37 = sub_1587BC0(v35, &v59, v31, v32, v33, v34);
      sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v64 + 8), v23, 2u);
    }
    if ( v63 )
    {
      sub_1AA2FB0(v62, a6);
    }
    else if ( v65 )
    {
      v26 = sub_168B9E0(v60);
      v29 = v61;
      if ( v61 )
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
      v59 = v29;
      v30 = sub_1587BC0(v26, &v59, v24, v25, v27, v28);
      sub_1AA2FB0((unsigned __int8 **)(*v30 + 32LL * v64 + 8), a6);
    }
    goto LABEL_3;
  }
  if ( !v65 )
  {
LABEL_3:
    sub_15F7200(v60);
    return 1;
  }
  v19 = sub_168B9E0(v60);
  v20 = v61;
  if ( v61 )
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
  v59 = v20;
  v21 = sub_1587BC0(v19, &v59, v15, v16, v17, v18);
  v13 = (unsigned __int8 **)(*v21 + 32LL * v64 + 8);
  switch ( a3 )
  {
    case 1:
      sub_AE9DF0(v13, (__int64)"dim", 1u);
      goto LABEL_10;
    case 0:
      sub_AE9DF0(v13, (__int64)"num", 1u);
      goto LABEL_10;
    case 2:
      sub_AE9DF0(v13, (__int64)"static", 1u);
      goto LABEL_10;
  }
  return sub_1AC72E0(v13);
}
