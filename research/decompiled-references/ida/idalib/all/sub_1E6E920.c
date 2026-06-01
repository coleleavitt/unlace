__int64 __fastcall sub_1E6E920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  void *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-E0h] BYREF
  void *v24; // [rsp+10h] [rbp-D8h] BYREF
  signed __int64 v25; // [rsp+18h] [rbp-D0h]
  __int64 v26; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-B8h] BYREF
  void *v28; // [rsp+40h] [rbp-A8h]
  unsigned __int8 *v29[11]; // [rsp+50h] [rbp-98h] BYREF
  char v30; // [rsp+A8h] [rbp-40h]
  unsigned int v31; // [rsp+B0h] [rbp-38h]
  char v32; // [rsp+B4h] [rbp-34h]

  v5 = a3;
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      return 0;
    v6 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
    if ( !v6 )
      return 0;
  }
  if ( !sub_A5DBE0(v6, a2, a3, a4, a5) && (*(_BYTE *)(v6 + 18) & 0x18) == 0 )
    return 0;
  sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), v5, 0x1316u, 0);
  if ( v30 )
  {
    sub_AE9DF0(v29, a2, 8u);
  }
  else if ( v32 )
  {
    v20 = sub_168B9E0(v27);
    v21 = v28;
    if ( v28 )
      v21 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v28 + 32LL))(v28);
    v24 = v21;
    v22 = sub_1587BC0(v20, (__int64 *)&v24, v16, v17, v18, v19);
    sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v31 + 8), a2, 8u);
  }
  sub_1E601F0(&v24, v6, v7);
  if ( v30 )
  {
    sub_AEC220(v29, v24, v25);
  }
  else if ( v32 )
  {
    v11 = sub_168B9E0(v27);
    v14 = (__int64)v28;
    if ( v28 )
      v14 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v28 + 32LL))(v28);
    v23 = v14;
    v15 = sub_1587BC0(v11, &v23, v9, v10, v12, v13);
    sub_AEC220((unsigned __int8 **)(*v15 + 32LL * v31 + 8), v24, v25);
  }
  if ( v24 != &v26 )
    operator delete(v24);
  sub_15F7200(v27);
  return 1;
}
