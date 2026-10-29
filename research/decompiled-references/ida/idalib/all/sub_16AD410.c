void __fastcall sub_16AD410(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v15; // [rsp+30h] [rbp-88h] BYREF
  char v16; // [rsp+88h] [rbp-30h]
  unsigned int v17; // [rsp+90h] [rbp-28h]
  char v18; // [rsp+94h] [rbp-24h]

  sub_168B9F0((__int64)v13, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  if ( v16 )
  {
    sub_AE9DF0(&v15, a4, 8u);
  }
  else if ( v18 )
  {
    v9 = sub_168B9E0(v13);
    v10 = v14;
    if ( v14 )
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
    v12 = v10;
    v11 = sub_1587BC0(v9, &v12, v5, v6, v7, v8);
    sub_AE9DF0((unsigned __int8 **)(*v11 + 32LL * v17 + 8), a4, 8u);
  }
  sub_15F7200(v13);
}
