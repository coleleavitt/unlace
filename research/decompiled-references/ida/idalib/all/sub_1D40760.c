void __fastcall sub_1D40760(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 *v6; // rsi
  char v7; // al
  unsigned int v8; // ecx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rbx
  char v12; // al
  char v13; // al
  unsigned int v14; // ecx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  _QWORD *v29; // rax
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v46[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v48[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v49; // [rsp+88h] [rbp-50h]
  unsigned int v50; // [rsp+90h] [rbp-48h]
  char v51; // [rsp+94h] [rbp-44h]

  v6 = (__int64 *)(a1 + 8);
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (*(_WORD *)a3 & 0x1FF) == 0x35 )
  {
    v14 = 3269;
    if ( v7 != 43 )
      v14 = (*(_BYTE *)(a2 + 98) & 1) == 0 ? 3269 : 3982;
    sub_168B9F0((__int64)v46, v6, *(_DWORD *)(a2 + 24), v14, 0);
    v15 = *(_QWORD *)(a2 + 40);
    if ( v49 )
    {
      v6 = *(__int64 **)(a2 + 40);
      sub_AE9DF0(v48, (__int64)v6, 9u);
      v30 = v49;
    }
    else
    {
      if ( !v51 )
        goto LABEL_10;
      v27 = sub_168B9E0(v46);
      v28 = v47;
      if ( v47 )
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
      v45 = v28;
      v29 = sub_1587BC0(v27, &v45, v23, v24, v25, v26);
      v6 = (__int64 *)v15;
      sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v50 + 8), v15, 9u);
      v30 = v49;
    }
    v11 = *(_QWORD *)(a2 + 48);
    if ( !v30 )
      goto LABEL_9;
LABEL_15:
    v6 = (__int64 *)v11;
    sub_AE9DF0(v48, v11, 8u);
    goto LABEL_10;
  }
  v8 = 3268;
  if ( v7 != 43 )
    v8 = (*(_BYTE *)(a2 + 98) & 1) == 0 ? 3268 : 3981;
  sub_168B9F0((__int64)v46, v6, *(_DWORD *)(a2 + 24), v8, 0);
  v9 = *(_QWORD *)(a2 + 40);
  if ( v49 )
  {
    v6 = *(__int64 **)(a2 + 40);
    sub_AE9DF0(v48, (__int64)v6, 9u);
    v12 = v49;
  }
  else
  {
    if ( !v51 )
    {
      v10 = *(_QWORD *)(a2 + 48);
      goto LABEL_7;
    }
    v42 = sub_168B9E0(v46);
    v43 = v47;
    if ( v47 )
      v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
    v45 = v43;
    v44 = sub_1587BC0(v42, &v45, v38, v39, v40, v41);
    v6 = (__int64 *)v9;
    sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v50 + 8), v9, 9u);
    v12 = v49;
  }
  v10 = *(_QWORD *)(a2 + 48);
  if ( v12 )
  {
    v6 = (__int64 *)v10;
    sub_AE9DF0(v48, v10, 8u);
    v13 = v49;
    goto LABEL_14;
  }
LABEL_7:
  if ( !v51 )
  {
    v11 = *(_QWORD *)(a3 + 8);
    goto LABEL_9;
  }
  v35 = sub_168B9E0(v46);
  v36 = v47;
  if ( v47 )
    v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
  v45 = v36;
  v37 = sub_1587BC0(v35, &v45, v31, v32, v33, v34);
  v6 = (__int64 *)v10;
  sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v50 + 8), v10, 8u);
  v13 = v49;
LABEL_14:
  v11 = *(_QWORD *)(a3 + 8);
  if ( v13 )
    goto LABEL_15;
LABEL_9:
  if ( v51 )
  {
    v20 = sub_168B9E0(v46);
    v21 = v47;
    if ( v47 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
    v45 = v21;
    v22 = sub_1587BC0(v20, &v45, v16, v17, v18, v19);
    v6 = (__int64 *)v11;
    sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v50 + 8), v11, 8u);
  }
LABEL_10:
  v45 = sub_EEC8C0(a3, (__int64)v6, a4);
  sub_1587DB0((__int64)v46, &v45);
  sub_15F7200(v46);
}
