_BYTE *__fastcall sub_186B360(_QWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v20[2]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v22[11]; // [rsp+28h] [rbp-98h] BYREF
  char v23; // [rsp+80h] [rbp-40h]
  unsigned int v24; // [rsp+88h] [rbp-38h]
  char v25; // [rsp+8Ch] [rbp-34h]

  result = (_BYTE *)*a1;
  if ( !*(_BYTE *)*a1 )
  {
    sub_168B9F0((__int64)v20, (__int64 *)(a2 + 8), *(_DWORD *)(a3 + 24), 0xDE9u, 0);
    if ( v23 )
    {
      sub_AE9DF0(v22, 0, 2u);
      if ( !v23 )
        goto LABEL_10;
    }
    else
    {
      if ( !v25 )
      {
LABEL_4:
        sub_15F7200(v20);
        result = (_BYTE *)*a1;
        *(_BYTE *)*a1 = 1;
        return result;
      }
      v9 = sub_168B9E0(v20);
      v10 = v21;
      if ( v21 )
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
      v19 = v10;
      v11 = sub_1587BC0(v9, &v19, v5, v6, v7, v8);
      sub_AE9DF0((unsigned __int8 **)(*v11 + 32LL * v24 + 8), 0, 2u);
      if ( !v23 )
      {
LABEL_10:
        if ( v25 )
        {
          v16 = sub_168B9E0(v20);
          v17 = v21;
          if ( v21 )
            v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
          v19 = v17;
          v18 = sub_1587BC0(v16, &v19, v12, v13, v14, v15);
          sub_AE9DF0((unsigned __int8 **)(*v18 + 32LL * v24 + 8), a3, 0xAu);
        }
        goto LABEL_4;
      }
    }
    sub_AE9DF0(v22, a3, 0xAu);
    goto LABEL_4;
  }
  return result;
}
