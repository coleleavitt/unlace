__int64 __fastcall sub_B86640(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // [rsp+Eh] [rbp-2Ah] BYREF
  bool v25; // [rsp+Fh] [rbp-29h] BYREF

  v6 = sub_B846C0(a1, a2, a3, &v24, &v25, a6);
  v7 = sub_6D2E30(a2[2188], "self", 4u);
  v8 = sub_B55C90((__int64)a2, a1 + 48, 0, v7, v6, 0);
  v9 = !v25;
  v10 = v8;
  *(_QWORD *)(a1 + 120) = v8;
  if ( !v9 )
  {
    v19 = sub_B0F5C0((__int64)a2, 0, 0);
    sub_B68F20(v10, v19, v20, v21, v22, v23);
  }
  if ( v24 )
    *(_BYTE *)(v10 + 96) |= 0x80u;
  v11 = sub_A664B0(a2);
  v15 = *(_QWORD *)(v11 + 48);
  if ( v15 )
    v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v16 = sub_A56D30((__int64)a2, v11, v12, v13, 0, v14);
  v17 = sub_6D2E30(a2[2188], "_cmd", 4u);
  result = sub_B55C90((__int64)a2, a1 + 48, 0, v17, v16, 1);
  *(_QWORD *)(a1 + 128) = result;
  return result;
}

