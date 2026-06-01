void __fastcall sub_1AA9080(__int64 ***a1, __int64 a2, double a3)
{
  __int64 *v3; // r12
  unsigned int v4; // eax
  __int64 *v5; // r12
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v22[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v24[11]; // [rsp+30h] [rbp-98h] BYREF
  char v25; // [rsp+88h] [rbp-40h]
  unsigned int v26; // [rsp+90h] [rbp-38h]
  char v27; // [rsp+94h] [rbp-34h]

  v3 = **a1;
  v4 = sub_EEB7E0((unsigned __int64)a1[2], a2, a3);
  sub_168B9F0((__int64)v22, v3, v4, 0xB63u, 0);
  v5 = **a1;
  if ( v25 )
  {
    sub_1AA2FB0(v24, *((_BYTE *)v5 + 288));
  }
  else if ( v27 )
  {
    v18 = sub_168B9E0(v22);
    v19 = v23;
    if ( v23 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
    v21 = v19;
    v20 = sub_1587BC0(v18, &v21, v14, v15, v16, v17);
    sub_1AA2FB0((unsigned __int8 **)(*v20 + 32LL * v26 + 8), *((_BYTE *)v5 + 288));
  }
  sub_15F7200(v22);
  sub_168B9F0((__int64)v22, **a1, *((_DWORD *)**a1 + 73), 0x1672u, 0);
  v6 = **a1;
  if ( v25 )
  {
    sub_1AA2FB0(v24, *((_BYTE *)v6 + 288));
  }
  else if ( v27 )
  {
    v11 = sub_168B9E0(v22);
    v12 = v23;
    if ( v23 )
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
    v21 = v12;
    v13 = sub_1587BC0(v11, &v21, v7, v8, v9, v10);
    sub_1AA2FB0((unsigned __int8 **)(*v13 + 32LL * v26 + 8), *((_BYTE *)v6 + 288));
  }
  sub_15F7200(v22);
}
