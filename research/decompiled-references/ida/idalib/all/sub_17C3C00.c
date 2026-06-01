void __fastcall sub_17C3C00(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  bool v5; // al
  bool v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v22[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v24[11]; // [rsp+30h] [rbp-98h] BYREF
  char v25; // [rsp+88h] [rbp-40h]
  unsigned int v26; // [rsp+90h] [rbp-38h]
  char v27; // [rsp+94h] [rbp-34h]

  sub_168B9F0((__int64)v22, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = sub_F582C0(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  v6 = v5;
  if ( v25 )
  {
    sub_AE9DF0(v24, v5, 2u);
    if ( v25 )
      goto LABEL_7;
  }
  else
  {
    if ( !v27 )
      goto LABEL_3;
    v11 = sub_168B9E0(v22);
    v12 = v23;
    if ( v23 )
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
    v21 = v12;
    v13 = sub_1587BC0(v11, &v21, v7, v8, v9, v10);
    sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * v26 + 8), v6, 2u);
    if ( v25 )
    {
LABEL_7:
      sub_AE9DF0(v24, a4, 8u);
      goto LABEL_3;
    }
  }
  if ( v27 )
  {
    v16 = sub_168B9E0(v22);
    v19 = v23;
    if ( v23 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
    v21 = v19;
    v20 = sub_1587BC0(v16, &v21, v14, v15, v17, v18);
    sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v26 + 8), a4, 8u);
  }
LABEL_3:
  sub_15F7200(v22);
}
