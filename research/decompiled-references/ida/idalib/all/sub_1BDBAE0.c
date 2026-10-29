__int64 __fastcall sub_1BDBAE0(_QWORD **a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  __int64 v6; // rax
  unsigned __int8 v7; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v24[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v26[11]; // [rsp+30h] [rbp-98h] BYREF
  char v27; // [rsp+88h] [rbp-40h]
  unsigned int v28; // [rsp+90h] [rbp-38h]
  char v29; // [rsp+94h] [rbp-34h]

  v1 = *a1 + 1;
  sub_168B9F0((__int64)v24, v1, *(_DWORD *)(*a1[3] + 24LL), 0x133Au, 0);
  v4 = *(_QWORD *)(*(_QWORD *)(*a1[3] + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) != 26 )
    v4 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*a1[3] + 48LL) & 0xFFFFFFFFFFFFFFF0LL), v1, v2, v3);
  v5 = (*(_BYTE *)(v4 + 18) >> 3) & 3;
  if ( v27 )
  {
    v1 = (__int64 *)v5;
    sub_AE9DF0(v26, v5, 2u);
  }
  else if ( v29 )
  {
    v20 = sub_168B9E0(v24);
    v21 = v25;
    if ( v25 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
    v23 = v21;
    v22 = sub_1587BC0(v20, &v23, v16, v17, v18, v19);
    v1 = (__int64 *)v5;
    sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v28 + 8), v5, 2u);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(*a1[2] + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 26 )
    v6 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*a1[2] + 48LL) & 0xFFFFFFFFFFFFFFF0LL), v1, v2, v3);
  v7 = (*(_BYTE *)(v6 + 18) >> 3) & 3;
  if ( v27 )
  {
    sub_AE9DF0(v26, v7, 2u);
  }
  else if ( v29 )
  {
    v13 = sub_168B9E0(v24);
    v14 = v25;
    if ( v25 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
    v23 = v14;
    v15 = sub_1587BC0(v13, &v23, v9, v10, v11, v12);
    sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * v28 + 8), v7, 2u);
  }
  sub_15F7200(v24);
  sub_168B9F0((__int64)v24, *a1 + 1, *(_DWORD *)(*a1[2] + 24LL), 0x70u, 0);
  sub_15F7200(v24);
  return 1;
}
