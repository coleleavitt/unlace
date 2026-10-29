_BYTE *__fastcall sub_18A8680(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r13
  unsigned __int8 v14; // al
  unsigned __int8 v15; // r13
  _BYTE *result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
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
  __int64 v37; // r13
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v48[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v50[11]; // [rsp+30h] [rbp-98h] BYREF
  char v51; // [rsp+88h] [rbp-40h]
  unsigned int v52; // [rsp+90h] [rbp-38h]
  char v53; // [rsp+94h] [rbp-34h]

  v3 = *(_QWORD *)(a1 + 16) + 8LL;
  sub_168B9F0((__int64)v48, (__int64 *)v3, *(_DWORD *)(**(_QWORD **)(a1 + 8) + 24LL), 0x10FEu, 0);
  v8 = sub_BA7E40(**(_QWORD **)(a1 + 8), v3, v4, v5, v6, v7);
  v13 = v8;
  if ( v51 )
  {
    v3 = v8;
    sub_AE9DF0(v50, v8, 2u);
    if ( v51 )
    {
LABEL_14:
      v3 = 0;
      sub_AE9DF0(v50, 0, 2u);
      goto LABEL_3;
    }
  }
  else
  {
    if ( !v53 )
      goto LABEL_3;
    v30 = sub_168B9E0(v48);
    v31 = v49;
    if ( v49 )
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
    v47 = v31;
    v32 = sub_1587BC0(v30, &v47, v26, v27, v28, v29);
    v3 = v13;
    sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v52 + 8), v13, 2u);
    if ( v51 )
      goto LABEL_14;
  }
  if ( v53 )
  {
    v37 = sub_168B9E0(v48);
    v38 = v49;
    if ( v49 )
      v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
    v47 = v38;
    v39 = sub_1587BC0(v37, &v47, v33, v34, v35, v36);
    v3 = 0;
    sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * v52 + 8), 0, 2u);
  }
LABEL_3:
  v14 = sub_BA7E40(a2, v3, v9, v10, v11, v12);
  v15 = v14;
  if ( v51 )
  {
    sub_AE9DF0(v50, v14, 2u);
  }
  else
  {
    if ( !v53 )
      goto LABEL_5;
    v21 = sub_168B9E0(v48);
    v22 = v49;
    if ( v49 )
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
    v47 = v22;
    v23 = sub_1587BC0(v21, &v47, v17, v18, v19, v20);
    sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * v52 + 8), v15, 2u);
  }
  v24 = **(_QWORD **)(a1 + 8);
  v25 = *(_QWORD *)(v24 + 40);
  if ( v51 )
  {
    sub_AE9DF0(v50, *(_QWORD *)(v24 + 40), 9u);
  }
  else if ( v53 )
  {
    v44 = sub_168B9E0(v48);
    v45 = v49;
    if ( v49 )
      v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
    v47 = v45;
    v46 = sub_1587BC0(v44, &v47, v40, v41, v42, v43);
    sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * v52 + 8), v25, 9u);
  }
LABEL_5:
  sub_15F7200(v48);
  sub_168B9F0((__int64)v48, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a2 + 24), 0x70u, 0);
  sub_15F7200(v48);
  result = *(_BYTE **)a1;
  **(_BYTE **)a1 = 1;
  return result;
}
