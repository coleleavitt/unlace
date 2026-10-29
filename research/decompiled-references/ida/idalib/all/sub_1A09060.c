__int64 __fastcall sub_1A09060(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v18[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v20[11]; // [rsp+30h] [rbp-88h] BYREF
  char v21; // [rsp+88h] [rbp-30h]
  unsigned int v22; // [rsp+90h] [rbp-28h]
  char v23; // [rsp+94h] [rbp-24h]

  sub_168B9F0((__int64)v18, a1, *(_DWORD *)(a2 + 24), 0xF2Bu, 0);
  if ( v21 )
  {
    sub_AE9DF0(v20, a2, 0x10u);
    if ( v21 )
      goto LABEL_7;
  }
  else
  {
    if ( !v23 )
      goto LABEL_3;
    v7 = sub_168B9E0(v18);
    v8 = v19;
    if ( v19 )
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
    v17 = v8;
    v9 = sub_1587BC0(v7, &v17, v3, v4, v5, v6);
    sub_AE9DF0((unsigned __int8 **)(*v9 + 32LL * v22 + 8), a2, 0x10u);
    if ( v21 )
    {
LABEL_7:
      sub_AE9DF0(v20, (__int64)"uint/uint2/uint3", 1u);
      goto LABEL_3;
    }
  }
  if ( v23 )
  {
    v12 = sub_168B9E0(v18);
    v15 = v19;
    if ( v19 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
    v17 = v15;
    v16 = sub_1587BC0(v12, &v17, v10, v11, v13, v14);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v22 + 8), (__int64)"uint/uint2/uint3", 1u);
  }
LABEL_3:
  sub_15F7200(v18);
  return 0;
}
