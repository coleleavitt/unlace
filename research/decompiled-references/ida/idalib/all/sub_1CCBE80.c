void __fastcall sub_1CCBE80(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, double a5, double a6)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v21; // [rsp+30h] [rbp-98h] BYREF
  char v22; // [rsp+88h] [rbp-40h]
  unsigned int v23; // [rsp+90h] [rbp-38h]
  char v24; // [rsp+94h] [rbp-34h]

  v7 = sub_1A5B7C0(a1, a2, a4, a3, 0, 1, a5, a6);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_BYTE *)(v7 + 28) & 0x7F;
    if ( ((v9 + 61) & 0x7Fu) <= 1 || v9 == 47 )
    {
      sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), a3, (**(_BYTE **)(a1 + 232) & 0x20) == 0 ? 5148 : 5683, 0);
      v10 = *(_QWORD *)(v8 + 40);
      if ( v22 )
      {
        sub_AE9DF0(&v21, *(_QWORD *)(v8 + 40), 9u);
      }
      else if ( v24 )
      {
        v15 = sub_168B9E0(v19);
        v16 = v20;
        if ( v20 )
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
        v18 = v16;
        v17 = sub_1587BC0(v15, &v18, v11, v12, v13, v14);
        sub_AE9DF0((unsigned __int8 **)(*v17 + 32LL * v23 + 8), v10, 9u);
      }
      sub_15F7200(v19);
      sub_1CC6E20(a1, v8);
    }
  }
}
