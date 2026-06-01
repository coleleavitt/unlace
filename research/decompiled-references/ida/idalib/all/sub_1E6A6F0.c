void __fastcall sub_1E6A6F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v23[11]; // [rsp+30h] [rbp-98h] BYREF
  char v24; // [rsp+88h] [rbp-40h]
  unsigned int v25; // [rsp+90h] [rbp-38h]
  char v26; // [rsp+94h] [rbp-34h]

  sub_168B9F0((__int64)v21, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = **(_DWORD **)(a1 + 16);
  if ( v24 )
  {
    sub_1E5E160(v23, v5);
    if ( v24 )
      goto LABEL_7;
  }
  else
  {
    if ( !v26 )
      goto LABEL_3;
    v10 = sub_168B9E0(v21);
    v11 = v22;
    if ( v22 )
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
    v20 = v11;
    v12 = sub_1587BC0(v10, &v20, v6, v7, v8, v9);
    sub_1E5E160((unsigned __int8 **)(*v12 + 32LL * v25 + 8), v5);
    if ( v24 )
    {
LABEL_7:
      sub_AE9DF0(v23, a4, 8u);
      goto LABEL_3;
    }
  }
  if ( v26 )
  {
    v15 = sub_168B9E0(v21);
    v18 = v22;
    if ( v22 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
    v20 = v18;
    v19 = sub_1587BC0(v15, &v20, v13, v14, v16, v17);
    sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v25 + 8), a4, 8u);
  }
LABEL_3:
  sub_15F7200(v21);
}
