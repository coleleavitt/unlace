__int64 __fastcall sub_1A117C0(_QWORD **a1)
{
  __int64 v1; // r8
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v18; // [rsp+30h] [rbp-88h] BYREF
  char v19; // [rsp+88h] [rbp-30h]
  unsigned int v20; // [rsp+90h] [rbp-28h]
  char v21; // [rsp+94h] [rbp-24h]

  sub_168B9F0((__int64)v16, *a1 + 1, *(_DWORD *)(*a1[1] + 24LL), 0x13A5u, 0);
  v2 = *(_QWORD *)(*a1[2] + 8LL);
  v3 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(_QWORD *)(v3 + 8) & 7LL;
  v5 = v4 | (*(__int64 *)(v3 + 8) >> 3) & 1;
  if ( !v5 )
  {
    v6 = v3 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v19 )
      goto LABEL_3;
LABEL_6:
    sub_AE9DF0(&v18, v6, 8u);
    goto LABEL_4;
  }
  v6 = sub_F64F00(v2, v3, v4, v5, v1) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v19 )
    goto LABEL_6;
LABEL_3:
  if ( v21 )
  {
    v12 = sub_168B9E0(v16);
    v13 = v17;
    if ( v17 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
    v15 = v13;
    v14 = sub_1587BC0(v12, &v15, v8, v9, v10, v11);
    sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * v20 + 8), v6, 8u);
  }
LABEL_4:
  sub_15F7200(v16);
  return 1;
}
