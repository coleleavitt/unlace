void __fastcall sub_1A140A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v18[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v20; // [rsp+30h] [rbp-88h] BYREF
  char v21; // [rsp+88h] [rbp-30h]
  unsigned int v22; // [rsp+90h] [rbp-28h]
  char v23; // [rsp+94h] [rbp-24h]

  v2 = a1;
  v4 = *(_DWORD *)a2;
  if ( (unsigned int)(*(_DWORD *)a2 - 1) <= 1 || v4 == 19 )
  {
    v5 = sub_1A0B620(a2);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 24);
      if ( !v6 )
        return;
      v7 = (__int64 *)(v2 + 8);
      if ( !*(_QWORD *)(v5 + 40) )
      {
        sub_168B9F0((__int64)v18, v7, v6, 0x1872u, 0);
        sub_15F7200(v18);
        return;
      }
      sub_168B9F0((__int64)v18, v7, v6, 0x1874u, 0);
      v8 = *(_QWORD *)(sub_1A0B620(a2) + 40);
      if ( !v21 )
        goto LABEL_7;
LABEL_13:
      sub_AE9DF0(&v20, v8, 9u);
      sub_15F7200(v18);
      return;
    }
  }
  if ( v4 != 18 )
    return;
  v9 = *(_QWORD *)(a2 + 32);
  if ( !v9 )
    return;
  sub_168B9F0((__int64)v18, (__int64 *)(v2 + 8), *(_DWORD *)(v9 + 24), 0x17CBu, 0);
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 40LL);
  if ( v21 )
    goto LABEL_13;
LABEL_7:
  if ( v23 )
  {
    v14 = sub_168B9E0(v18);
    v15 = v19;
    if ( v19 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
    v17 = v15;
    v16 = sub_1587BC0(v14, &v17, v10, v11, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v22 + 8), v8, 9u);
  }
  sub_15F7200(v18);
}
