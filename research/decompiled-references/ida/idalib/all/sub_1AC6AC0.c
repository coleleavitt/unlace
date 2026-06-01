__int64 __fastcall sub_1AC6AC0(
        __int64 *a1,
        unsigned __int64 a2,
        _BYTE *a3,
        signed __int64 a4,
        char a5,
        char a6,
        double a7)
{
  unsigned int v11; // eax
  bool v12; // bp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbp
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbp
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbp
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  bool v55; // [rsp+7h] [rbp-E1h]
  __int64 v56; // [rsp+8h] [rbp-E0h]
  __int64 v57; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v58[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v60[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v61; // [rsp+98h] [rbp-50h]
  unsigned int v62; // [rsp+A0h] [rbp-48h]
  char v63; // [rsp+A4h] [rbp-44h]

  v11 = sub_EEB7E0(a2, a2, a7);
  sub_168B9F0((__int64)v58, a1, v11, 0xB55u, 0);
  v12 = a5 == 7 && a6 == 20;
  v55 = a5 == 7 && a6 != 20;
  if ( v61 )
  {
    sub_AEC220(v60, a3, a4);
    if ( v61 )
      goto LABEL_7;
  }
  else
  {
    if ( !v63 )
      goto LABEL_3;
    v14 = sub_168B9E0(v58);
    v18 = v59;
    if ( v59 )
    {
      v56 = v14;
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
      v14 = v56;
    }
    v57 = v18;
    v19 = sub_1587BC0(v14, &v57, v14, v15, v16, v17);
    sub_AEC220((unsigned __int8 **)(*v19 + 32LL * v62 + 8), a3, a4);
    if ( v61 )
    {
LABEL_7:
      sub_1573010(v60, 46);
      if ( v61 )
        goto LABEL_8;
      goto LABEL_17;
    }
  }
  if ( !v63 )
    goto LABEL_3;
  v24 = sub_168B9E0(v58);
  v25 = v59;
  if ( v59 )
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
  v57 = v25;
  v26 = sub_1587BC0(v24, &v57, v20, v21, v22, v23);
  sub_1573010((unsigned __int8 **)(*v26 + 32LL * v62 + 8), 46);
  if ( v61 )
  {
LABEL_8:
    sub_AE9DF0(v60, v12, 2u);
    if ( v61 )
      goto LABEL_9;
    goto LABEL_21;
  }
LABEL_17:
  if ( !v63 )
    goto LABEL_3;
  v31 = sub_168B9E0(v58);
  v32 = v59;
  if ( v59 )
    v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
  v57 = v32;
  v33 = sub_1587BC0(v31, &v57, v27, v28, v29, v30);
  sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v62 + 8), v12, 2u);
  if ( v61 )
  {
LABEL_9:
    sub_1AA2FB0(v60, a5);
    if ( v61 )
      goto LABEL_10;
LABEL_25:
    if ( !v63 )
      goto LABEL_3;
    v43 = sub_168B9E0(v58);
    v46 = v59;
    if ( v59 )
      v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
    v57 = v46;
    v47 = sub_1587BC0(v43, &v57, v41, v42, v44, v45);
    sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v62 + 8), v55, 2u);
    if ( v61 )
      goto LABEL_11;
    goto LABEL_29;
  }
LABEL_21:
  if ( !v63 )
    goto LABEL_3;
  v36 = sub_168B9E0(v58);
  v39 = v59;
  if ( v59 )
    v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
  v57 = v39;
  v40 = sub_1587BC0(v36, &v57, v34, v35, v37, v38);
  sub_1AA2FB0((unsigned __int8 **)(*v40 + 32LL * v62 + 8), a5);
  if ( !v61 )
    goto LABEL_25;
LABEL_10:
  sub_AE9DF0(v60, v55, 2u);
  if ( v61 )
  {
LABEL_11:
    sub_1AA2FB0(v60, a6);
    goto LABEL_3;
  }
LABEL_29:
  if ( v63 )
  {
    v50 = sub_168B9E0(v58);
    v53 = v59;
    if ( v59 )
      v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
    v57 = v53;
    v54 = sub_1587BC0(v50, &v57, v48, v49, v51, v52);
    sub_1AA2FB0((unsigned __int8 **)(*v54 + 32LL * v62 + 8), a6);
  }
LABEL_3:
  sub_15F7200(v58);
  return 1;
}
