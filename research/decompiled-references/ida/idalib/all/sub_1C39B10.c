void __fastcall sub_1C39B10(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-C0h]
  char v8; // [rsp+10h] [rbp-B8h]
  _BYTE v9[32]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int8 *v10[11]; // [rsp+40h] [rbp-88h] BYREF
  char v11; // [rsp+98h] [rbp-30h]
  char v12; // [rsp+A4h] [rbp-24h]

  v2 = a1[31];
  v8 = 0;
  v6 = v2;
  v7 = 0;
  sub_1C302A0((__int64)&v6, a2);
  v3 = a1[76];
  v4 = *(_QWORD *)(v3 + 40);
  if ( v4 && (_DWORD)v7 )
  {
    v5 = a1 + 1;
    if ( (*(_BYTE *)(v4 + 9) & 0x10) != 0 )
    {
      sub_168B9F0((__int64)v9, v5, v7, 0x19E7u, 0);
      sub_15F7200(v9);
      return;
    }
    sub_168B9F0((__int64)v9, v5, v7, 0x1BA6u, 0);
    if ( v11 )
    {
      sub_AE9DF0(v10, (__int64)"break", 1u);
    }
    else if ( v12 )
    {
      sub_1C39890((__int64)v9, (__int64)"break");
    }
    goto LABEL_7;
  }
  if ( HIDWORD(v7) && *(_QWORD *)(v3 + 48) )
  {
    sub_168B9F0((__int64)v9, a1 + 1, HIDWORD(v7), 0x1BA6u, 0);
    if ( v11 )
    {
      sub_AE9DF0(v10, (__int64)"continue", 1u);
    }
    else if ( v12 )
    {
      sub_1C39890((__int64)v9, (__int64)"continue");
    }
LABEL_7:
    sub_15F7200(v9);
  }
}
