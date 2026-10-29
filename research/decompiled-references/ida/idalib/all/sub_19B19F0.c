void __fastcall sub_19B19F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rax
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v30[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v32[11]; // [rsp+30h] [rbp-98h] BYREF
  char v33; // [rsp+88h] [rbp-40h]
  unsigned int v34; // [rsp+90h] [rbp-38h]
  char v35; // [rsp+94h] [rbp-34h]

  sub_168B9F0((__int64)v30, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = *(__int64 **)(a1 + 24);
  v6 = *v5;
  if ( v33 )
  {
    sub_AE9DF0(v32, *v5, 1u);
    v14 = **(_DWORD **)(a1 + 16);
    if ( v33 )
      goto LABEL_7;
LABEL_10:
    if ( !v35 )
      goto LABEL_3;
    v19 = sub_168B9E0(v30);
    v20 = v31;
    if ( v31 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
    v29 = v20;
    v21 = sub_1587BC0(v19, &v29, v15, v16, v17, v18);
    sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v34 + 8), v14, 2u);
    if ( v33 )
      goto LABEL_8;
    goto LABEL_14;
  }
  if ( !v35 )
    goto LABEL_3;
  v11 = sub_168B9E0(v30);
  v12 = v31;
  if ( v31 )
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
  v29 = v12;
  v13 = sub_1587BC0(v11, &v29, v7, v8, v9, v10);
  sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * v34 + 8), v6, 1u);
  v14 = **(_DWORD **)(a1 + 16);
  if ( !v33 )
    goto LABEL_10;
LABEL_7:
  sub_AE9DF0(v32, v14, 2u);
  if ( v33 )
  {
LABEL_8:
    sub_AE9DF0(v32, a4, 8u);
    goto LABEL_3;
  }
LABEL_14:
  if ( v35 )
  {
    v24 = sub_168B9E0(v30);
    v27 = v31;
    if ( v31 )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
    v29 = v27;
    v28 = sub_1587BC0(v24, &v29, v22, v23, v25, v26);
    sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v34 + 8), a4, 8u);
  }
LABEL_3:
  sub_15F7200(v30);
}
