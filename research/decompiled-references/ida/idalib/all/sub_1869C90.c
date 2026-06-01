void __fastcall sub_1869C90(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // rax
  char v21; // al
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v23[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v25[11]; // [rsp+30h] [rbp-98h] BYREF
  char v26; // [rsp+88h] [rbp-40h]
  unsigned int v27; // [rsp+90h] [rbp-38h]
  char v28; // [rsp+94h] [rbp-34h]

  sub_168B9F0((__int64)v23, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = *(__int64 **)(a1 + 16);
  v6 = *v5;
  if ( v26 )
  {
    sub_AE9DF0(v25, *v5, 9u);
    v21 = v26;
  }
  else
  {
    if ( !v28 )
      goto LABEL_3;
    v18 = sub_168B9E0(v23);
    v19 = v24;
    if ( v24 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v22 = v19;
    v20 = sub_1587BC0(v18, &v22, v14, v15, v16, v17);
    sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v27 + 8), v6, 9u);
    v21 = v26;
  }
  if ( v21 )
  {
    sub_AE9DF0(v25, a4, 8u);
    goto LABEL_4;
  }
LABEL_3:
  if ( v28 )
  {
    v9 = sub_168B9E0(v23);
    v12 = v24;
    if ( v24 )
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v22 = v12;
    v13 = sub_1587BC0(v9, &v22, v7, v8, v10, v11);
    sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * v27 + 8), a4, 8u);
  }
LABEL_4:
  sub_15F7200(v23);
}
