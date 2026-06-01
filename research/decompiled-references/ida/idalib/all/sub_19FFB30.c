__int64 __fastcall sub_19FFB30(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  _WORD *v5; // rbp
  _WORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned int v17; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v18; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v21; // [rsp+30h] [rbp-98h] BYREF
  char v22; // [rsp+88h] [rbp-40h]
  unsigned int v23; // [rsp+90h] [rbp-38h]
  char v24; // [rsp+94h] [rbp-34h]

  v5 = *(_WORD **)(a2 + 8 * (a3 + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40);
  v17 = sub_C00A40((unsigned __int64)v5, a2, a3, a4, a5);
  v6 = sub_BFB880(v5);
  if ( !(unsigned int)sub_C0EF10((__int64)v6, *(_QWORD *)(a1 + 248), (int *)&v17, v7, v8) )
    return 0;
  sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), v17, 0x156Eu, 0);
  if ( v22 )
  {
    sub_AE9DF0(&v21, (__int64)v5, 0xFu);
  }
  else if ( v24 )
  {
    v14 = sub_168B9E0(v19);
    v15 = v20;
    if ( v20 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
    v18 = v15;
    v16 = sub_1587BC0(v14, &v18, v10, v11, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v23 + 8), (__int64)v5, 0xFu);
  }
  LODWORD(v18) = 0;
  sub_1587D10((__int64)v19, (int *)&v18);
  sub_15F7200(v19);
  return 1;
}
