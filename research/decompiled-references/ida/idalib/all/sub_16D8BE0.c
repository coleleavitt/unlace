__int64 __fastcall sub_16D8BE0(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r12
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v26[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = *(_DWORD **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (*v6 & 0x8000) != 0 )
    return 0;
  v9 = *(_QWORD *)(a1 + 248);
  if ( !(unsigned __int8)sub_C01160((unsigned __int64)v6, v9, 1, a5, a6) )
    return 0;
  v10 = sub_EEB7E0((unsigned __int64)v6, v9, a3);
  sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), v10, 0x1980u, 0);
  v25 = sub_EEC8C0((unsigned __int64)v6, a1 + 8, a3);
  v11 = sub_1587DB0((__int64)v26, &v25);
  v12 = *(_QWORD *)(sub_BFBC70(*(_QWORD *)(a2 + 32)) + 40);
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = (v12 & 7) == 0;
  v15 = 0;
  if ( v14 )
    v15 = v13;
  v16 = v15;
  if ( *(_BYTE *)(v11 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v11 + 32), v15, 5u);
  }
  else if ( *(_BYTE *)(v11 + 132) )
  {
    v21 = sub_168B9E0((_QWORD *)v11);
    v22 = *(_QWORD *)(v11 + 16);
    if ( v22 )
      v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 32LL))(*(_QWORD *)(v11 + 16));
    v24 = v22;
    v23 = sub_1587BC0(v21, &v24, v17, v18, v19, v20);
    sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * *(unsigned int *)(v11 + 128) + 8), v16, 5u);
  }
  sub_15F7200(v26);
  return 0;
}
