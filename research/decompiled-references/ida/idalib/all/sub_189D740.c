void __fastcall sub_189D740(__int64 *a1, __int64 a2, int a3, __int64 a4, unsigned int a5, unsigned __int8 a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v20[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v22; // [rsp+40h] [rbp-98h] BYREF
  char v23; // [rsp+98h] [rbp-40h]
  unsigned int v24; // [rsp+A0h] [rbp-38h]
  char v25; // [rsp+A4h] [rbp-34h]

  v18 = a2;
  v17 = a4;
  sub_168B9F0((__int64)v20, a1, a5, 0x112Fu, 0);
  if ( v23 )
  {
    sub_AE9DF0(&v22, a6, 2u);
  }
  else if ( v25 )
  {
    v14 = sub_168B9E0(v20);
    v15 = v21;
    if ( v21 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
    v19 = v15;
    v16 = sub_1587BC0(v14, &v19, v10, v11, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v24 + 8), a6, 2u);
  }
  v8 = sub_169D880((__int64)v20, &v17);
  v9 = sub_169D880(v8, &v18);
  LODWORD(v19) = a3;
  HIDWORD(v19) = a3;
  sub_1587DB0(v9, &v19);
  sub_15F7200(v20);
}
