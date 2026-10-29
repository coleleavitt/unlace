__int64 __fastcall sub_17BD080(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v24[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v25; // [rsp+88h] [rbp-50h]
  unsigned int v26; // [rsp+90h] [rbp-48h]
  char v27; // [rsp+94h] [rbp-44h]

  sub_168B9F0((__int64)v22, (__int64 *)(a2 + 8), *(_DWORD *)(*(_QWORD *)a1 + 24LL), 0x1086u, 0);
  v4 = *(_DWORD *)(a1 + 16);
  if ( v25 )
  {
    sub_AE9DF0(v24, v4, 3u);
    if ( v25 )
    {
LABEL_9:
      sub_AE9DF0(v24, a3, 0xEu);
      goto LABEL_3;
    }
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
    sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * v26 + 8), v4, 3u);
    if ( v25 )
      goto LABEL_9;
  }
  if ( v27 )
  {
    v18 = sub_168B9E0(v22);
    v19 = v23;
    if ( v23 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
    v21 = v19;
    v20 = sub_1587BC0(v18, &v21, v14, v15, v16, v17);
    sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v26 + 8), a3, 0xEu);
  }
LABEL_3:
  sub_15F7200(v22);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    sub_168B9F0((__int64)v22, (__int64 *)(a2 + 8), *(_DWORD *)(v5 + 24), 0x17D0u, 0);
    sub_15F7200(v22);
  }
  return 1;
}
