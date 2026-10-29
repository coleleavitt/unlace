__int64 __fastcall sub_18D80C0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int8 v7; // [rsp+Fh] [rbp-B9h]
  __int64 v8; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v10[32]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int8 *v11[11]; // [rsp+40h] [rbp-88h] BYREF
  char v12; // [rsp+98h] [rbp-30h]
  char v13; // [rsp+A4h] [rbp-24h]

  v9 = a2;
  v8 = a4;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1
    || sub_F582D0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    return 0;
  }
  sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), a3, 0xD23u, 0);
  if ( v12 )
  {
    sub_AE9DF0(v11, (__int64)&byte_22F0C30, 1u);
    goto LABEL_8;
  }
  if ( v13 )
  {
    sub_18D7E40((__int64)v10, (__int64)&byte_22F0C30);
LABEL_8:
    if ( v12 )
    {
      sub_AE9DF0(v11, (__int64)"__builtin_vectorelements", 1u);
    }
    else if ( v13 )
    {
      sub_18D7E40((__int64)v10, (__int64)"__builtin_vectorelements");
    }
  }
  v6 = sub_1605D30((__int64)v10, &v9);
  v7 = *(_BYTE *)(sub_15884C0(v6, &v8) + 120);
  sub_15F7200(v10);
  return v7;
}
