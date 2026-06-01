void __fastcall sub_186D8F0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v20[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v22; // [rsp+30h] [rbp-98h] BYREF
  char v23; // [rsp+88h] [rbp-40h]
  unsigned int v24; // [rsp+90h] [rbp-38h]
  char v25; // [rsp+94h] [rbp-34h]

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD *)(**(_QWORD **)(a1 + 16) + 24LL);
  if ( **(_BYTE **)a1
    && (unsigned __int8)sub_FD3830(*(_QWORD *)(*(_QWORD *)(v7 + 264) + 32LL), a2, v8, *(_QWORD *)(v7 + 264), a5, a6) != 1 )
  {
    a3 = a2;
  }
  sub_168B9F0((__int64)v20, (__int64 *)(v7 + 8), v8, a3, 0);
  v9 = **(_QWORD **)(a1 + 16);
  v10 = *(_QWORD *)(v9 + 40);
  if ( v23 )
  {
    sub_AE9DF0(&v22, *(_QWORD *)(v9 + 40), 9u);
  }
  else if ( v25 )
  {
    v16 = sub_168B9E0(v20);
    v17 = v21;
    if ( v21 )
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
    v19 = v17;
    v18 = sub_1587BC0(v16, &v19, v12, v13, v14, v15);
    sub_AE9DF0((unsigned __int8 **)(*v18 + 32LL * v24 + 8), v10, 9u);
  }
  sub_15F7200(v20);
  v11 = sub_B984B0(**(_QWORD **)(a1 + 16));
  sub_168B9F0((__int64)v20, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), *(_DWORD *)(*(_QWORD *)v11 + 24LL), 0x183Cu, 0);
  sub_15F7200(v20);
}
