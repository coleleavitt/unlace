__int64 __fastcall sub_19D4020(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // r12
  const char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v12[2]; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE v13[168]; // [rsp+20h] [rbp-A8h] BYREF

  v11 = a4;
  if ( a5 )
  {
    v12[0] = *(_QWORD *)(a5 + 80);
    result = 1;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 34 )
    {
      sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), a2, 0x110Du, 0);
      sub_19D3F70((__int64)v13, &v11);
      sub_15F7200(v13);
      sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), *(_DWORD *)(a5 + 24), 0x180Au, 0);
      sub_1605D30((__int64)v13, v12);
      sub_15F7200(v13);
      return 0;
    }
  }
  else
  {
    sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), a2, 0x14DEu, 0);
    v8 = sub_19D3F70((__int64)v13, &v11);
    v9 = sub_995750(a3);
    v12[1] = v10;
    v12[0] = (__int64)v9;
    sub_166BAF0(v8, (__int64)v12);
    sub_15F7200(v13);
    return 0;
  }
  return result;
}
