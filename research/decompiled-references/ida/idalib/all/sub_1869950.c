void __fastcall sub_1869950(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v29[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v31[11]; // [rsp+30h] [rbp-98h] BYREF
  char v32; // [rsp+88h] [rbp-40h]
  unsigned int v33; // [rsp+90h] [rbp-38h]
  char v34; // [rsp+94h] [rbp-34h]

  sub_168B9F0((__int64)v29, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = **(_DWORD **)(a1 + 24);
  if ( v32 )
  {
    sub_AE9DF0(v31, v5, 2u);
    v13 = **(_DWORD **)(a1 + 16);
    if ( v32 )
      goto LABEL_7;
LABEL_10:
    if ( !v34 )
      goto LABEL_3;
    v18 = sub_168B9E0(v29);
    v19 = v30;
    if ( v30 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
    v28 = v19;
    v20 = sub_1587BC0(v18, &v28, v14, v15, v16, v17);
    sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v33 + 8), v13, 2u);
    if ( v32 )
      goto LABEL_8;
    goto LABEL_14;
  }
  if ( !v34 )
    goto LABEL_3;
  v10 = sub_168B9E0(v29);
  v11 = v30;
  if ( v30 )
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
  v28 = v11;
  v12 = sub_1587BC0(v10, &v28, v6, v7, v8, v9);
  sub_AE9DF0((unsigned __int8 **)(*v12 + 32LL * v33 + 8), v5, 2u);
  v13 = **(_DWORD **)(a1 + 16);
  if ( !v32 )
    goto LABEL_10;
LABEL_7:
  sub_AE9DF0(v31, v13, 2u);
  if ( v32 )
  {
LABEL_8:
    sub_AE9DF0(v31, a4, 8u);
    goto LABEL_3;
  }
LABEL_14:
  if ( v34 )
  {
    v23 = sub_168B9E0(v29);
    v26 = v30;
    if ( v30 )
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
    v28 = v26;
    v27 = sub_1587BC0(v23, &v28, v21, v22, v24, v25);
    sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v33 + 8), a4, 8u);
  }
LABEL_3:
  sub_15F7200(v29);
}
