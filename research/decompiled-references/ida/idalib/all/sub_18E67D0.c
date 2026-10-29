void __fastcall sub_18E67D0(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4, double a5)
{
  __int64 v6; // rsi
  bool v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v19; // [rsp+30h] [rbp-98h] BYREF
  char v20; // [rsp+88h] [rbp-40h]
  unsigned int v21; // [rsp+90h] [rbp-38h]
  char v22; // [rsp+94h] [rbp-34h]

  v6 = a1 + 8;
  if ( a4 )
  {
    sub_168B9F0((__int64)v17, (__int64 *)v6, a2, 0x1B32u, 0);
    v16 = sub_EEC8C0(a3, v6, a5);
    sub_1587DB0((__int64)v17, &v16);
    sub_15F7200(v17);
  }
  else
  {
    sub_168B9F0((__int64)v17, (__int64 *)v6, a2, 0x1C51u, 0);
    v8 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0;
    if ( v20 )
    {
      v6 = v8;
      sub_AE9DF0(&v19, v8, 3u);
    }
    else if ( v22 )
    {
      v13 = sub_168B9E0(v17);
      v14 = v18;
      if ( v18 )
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
      v16 = v14;
      v15 = sub_1587BC0(v13, &v16, v9, v10, v11, v12);
      v6 = v8;
      sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * v21 + 8), v8, 3u);
    }
    v16 = sub_EEC8C0(a3, v6, a5);
    sub_1587DB0((__int64)v17, &v16);
    sub_15F7200(v17);
  }
}
