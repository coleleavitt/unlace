__int64 __fastcall sub_1AA8560(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // rax
  char v16; // al
  __int64 v17; // rdx
  unsigned __int8 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+10h] [rbp-C8h] BYREF
  int v42; // [rsp+18h] [rbp-C0h]
  int v43; // [rsp+1Ch] [rbp-BCh]
  __int64 v44; // [rsp+20h] [rbp-B8h]
  char v45; // [rsp+28h] [rbp-B0h]
  unsigned __int8 *v46[10]; // [rsp+30h] [rbp-A8h] BYREF
  int v47; // [rsp+80h] [rbp-58h]
  char v48; // [rsp+88h] [rbp-50h]
  __int64 v49; // [rsp+90h] [rbp-48h]

  v5 = 0;
  sub_168B9F0((__int64)&v41, (__int64 *)(a3 + 8), a4, 0xB59u, 0);
  if ( *(_BYTE *)(a2 + 12) == 51 )
    v5 = (*(_BYTE *)(a2 + 11) == 20) + 1LL;
  if ( v48 )
  {
    sub_AE9DF0(v46, v5, 3u);
    if ( v48 )
      goto LABEL_10;
  }
  else
  {
    if ( !BYTE4(v49) )
    {
LABEL_5:
      v7 = v41;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = v42;
      *(_DWORD *)(a1 + 12) = v43;
      *(_QWORD *)(a1 + 16) = v44;
      *(_BYTE *)(a1 + 24) = v45;
      goto LABEL_6;
    }
    v13 = sub_168B9E0(&v41);
    v14 = v44;
    if ( v44 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
    v40 = v14;
    v15 = sub_1587BC0(v13, &v40, v9, v10, v11, v12);
    sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * (unsigned int)v49 + 8), v5, 3u);
    if ( v48 )
    {
LABEL_10:
      sub_1573010(v46, *(_BYTE *)(a2 + 12));
      if ( v48 )
        goto LABEL_11;
LABEL_20:
      if ( !BYTE4(v49) )
        goto LABEL_5;
      v30 = sub_168B9E0(&v41);
      v31 = v44;
      if ( v44 )
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
      v40 = v31;
      v32 = sub_1587BC0(v30, &v40, v26, v27, v28, v29);
      sub_1AA2FB0((unsigned __int8 **)(*v32 + 32LL * (unsigned int)v49 + 8), *(_BYTE *)(a2 + 11));
      if ( v48 )
        goto LABEL_12;
      goto LABEL_24;
    }
  }
  if ( !BYTE4(v49) )
    goto LABEL_5;
  v23 = sub_168B9E0(&v41);
  v24 = v44;
  if ( v44 )
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
  v40 = v24;
  v25 = sub_1587BC0(v23, &v40, v19, v20, v21, v22);
  sub_1573010((unsigned __int8 **)(*v25 + 32LL * (unsigned int)v49 + 8), *(_BYTE *)(a2 + 12));
  if ( !v48 )
    goto LABEL_20;
LABEL_11:
  sub_1AA2FB0(v46, *(_BYTE *)(a2 + 11));
  if ( v48 )
  {
LABEL_12:
    sub_AE9DF0(v46, a5, 8u);
    v16 = v48;
    goto LABEL_13;
  }
LABEL_24:
  if ( !BYTE4(v49) )
    goto LABEL_5;
  v37 = sub_168B9E0(&v41);
  v38 = v44;
  if ( v44 )
    v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
  v40 = v38;
  v39 = sub_1587BC0(v37, &v40, v33, v34, v35, v36);
  sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * (unsigned int)v49 + 8), a5, 8u);
  v16 = v48;
LABEL_13:
  v17 = v41;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v17;
  *(_DWORD *)(a1 + 8) = v42;
  *(_DWORD *)(a1 + 12) = v43;
  *(_QWORD *)(a1 + 16) = v44;
  *(_BYTE *)(a1 + 24) = v45;
  if ( v16 )
  {
    sub_FC70F0(a1 + 32, (__int64)v46);
    v18 = v46[9];
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v18;
    *(_DWORD *)(a1 + 112) = v47;
  }
LABEL_6:
  *(_QWORD *)(a1 + 128) = v49;
  sub_15F7200(&v41);
  return a1;
}
