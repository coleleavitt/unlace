void __fastcall sub_166C2B0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  bool v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // [rsp+8h] [rbp-E0h]
  __int64 v11; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v12[16]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v14; // [rsp+40h] [rbp-A8h] BYREF
  char v15; // [rsp+98h] [rbp-50h]
  unsigned int v16; // [rsp+A0h] [rbp-48h]
  char v17; // [rsp+A4h] [rbp-44h]

  v1 = *(_QWORD *)(a1 + 9840);
  v2 = *(_QWORD *)(a1 + 9848);
  while ( v2 != v1 )
  {
    sub_168B9F0(v12, a1 + 8, *(unsigned int *)(a1 + 9864), 6876, 0);
    v3 = *(_DWORD *)(v1 + 8) != 0;
    if ( v15 )
    {
      sub_AE9DF0(&v14, v3, 2u);
    }
    else if ( v17 )
    {
      v5 = sub_168B9E0(v12);
      v8 = v13;
      if ( v13 )
      {
        v10 = v5;
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
        v5 = v10;
      }
      v11 = v8;
      v9 = sub_1587BC0(v5, &v11, v4, v5, v6, v7);
      sub_AE9DF0((unsigned __int8 **)(*v9 + 32LL * v16 + 8), v3, 2u);
    }
    v1 += 16;
    sub_15F7200(v12);
  }
}
