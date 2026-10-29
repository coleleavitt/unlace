__int64 __fastcall sub_1CBF760(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v12[2]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v14; // [rsp+28h] [rbp-98h] BYREF
  char v15; // [rsp+80h] [rbp-40h]
  unsigned int v16; // [rsp+88h] [rbp-38h]
  char v17; // [rsp+8Ch] [rbp-34h]

  result = 0;
  if ( *(char *)(a2 + 28) >= 0 && !*(_QWORD *)(a2 + 64) )
  {
    sub_168B9F0((__int64)v12, (__int64 *)(a1 + 8), a3, 0x1321u, 0);
    if ( v15 )
    {
      sub_AE9DF0(&v14, a2, 0xAu);
    }
    else if ( v17 )
    {
      v8 = sub_168B9E0(v12);
      v9 = v13;
      if ( v13 )
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
      v11 = v9;
      v10 = sub_1587BC0(v8, &v11, v4, v5, v6, v7);
      sub_AE9DF0((unsigned __int8 **)(*v10 + 32LL * v16 + 8), a2, 0xAu);
    }
    sub_15F7200(v12);
    sub_168B9F0((__int64)v12, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x67u, 0);
    sub_15F7200(v12);
    return 1;
  }
  return result;
}
