__int64 __fastcall sub_1869DF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v14; // [rsp+30h] [rbp-88h] BYREF
  char v15; // [rsp+88h] [rbp-30h]
  unsigned int v16; // [rsp+90h] [rbp-28h]
  char v17; // [rsp+94h] [rbp-24h]

  sub_168B9F0((__int64)v12, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a2 + 4), 0x1434u, 0);
  v2 = (*(_QWORD *)a2 >> 19) & 1LL;
  if ( v15 )
  {
    sub_AE9DF0(&v14, (unsigned __int8)v2, 2u);
  }
  else if ( v17 )
  {
    v8 = sub_168B9E0(v12);
    v9 = v13;
    if ( v13 )
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
    v11 = v9;
    v10 = sub_1587BC0(v8, &v11, v4, v5, v6, v7);
    sub_AE9DF0((unsigned __int8 **)(*v10 + 32LL * v16 + 8), (unsigned __int8)v2, 2u);
  }
  sub_15F7200(v12);
  return 0;
}
