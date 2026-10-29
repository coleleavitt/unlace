__int64 __fastcall sub_1A913B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // [rsp+0h] [rbp-B0h] BYREF
  _QWORD v29[2]; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-98h]
  unsigned __int8 *v31[11]; // [rsp+28h] [rbp-88h] BYREF
  char v32; // [rsp+80h] [rbp-30h]
  unsigned int v33; // [rsp+88h] [rbp-28h]
  char v34; // [rsp+8Ch] [rbp-24h]

  v5 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*v5 + 17) & 4) != 0 )
    return 0;
  if ( !(unsigned __int8)sub_F6AE00(*v5, a2, (__int64)v5, a4, a5) )
  {
    sub_168B9F0((__int64)v29, a1, a2, 0x1BF6u, 0);
    if ( v32 )
    {
      sub_AE9DF0(v31, (__int64)"'ns_returns_retained'", 1u);
      if ( !v32 )
        goto LABEL_14;
    }
    else
    {
      if ( !v34 )
      {
LABEL_6:
        sub_15F7200(v29);
        return 1;
      }
      v9 = sub_168B9E0(v29);
      v12 = v30;
      if ( v30 )
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      v28 = v12;
      v13 = sub_1587BC0(v9, &v28, v7, v8, v10, v11);
      sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * v33 + 8), (__int64)"'ns_returns_retained'", 1u);
      if ( !v32 )
      {
LABEL_14:
        if ( !v34 )
          goto LABEL_6;
        v16 = sub_168B9E0(v29);
        v19 = v30;
        if ( v30 )
          v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
        v28 = v19;
        v20 = sub_1587BC0(v16, &v28, v14, v15, v17, v18);
        sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v33 + 8), 0, 2u);
        if ( !v32 )
        {
LABEL_18:
          if ( v34 )
          {
            v23 = sub_168B9E0(v29);
            v26 = v30;
            if ( v30 )
              v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
            v28 = v26;
            v27 = sub_1587BC0(v23, &v28, v21, v22, v24, v25);
            sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v33 + 8), 0, 2u);
          }
          goto LABEL_6;
        }
LABEL_10:
        sub_AE9DF0(v31, 0, 2u);
        goto LABEL_6;
      }
    }
    sub_AE9DF0(v31, 0, 2u);
    if ( !v32 )
      goto LABEL_18;
    goto LABEL_10;
  }
  return 0;
}
