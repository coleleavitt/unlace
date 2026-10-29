__int64 __fastcall sub_19A7E30(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v10[168]; // [rsp+10h] [rbp-A8h] BYREF

  v3 = (*(_DWORD *)a2 >> 12) & 0x7F;
  if ( v3 == 69 )
    return 0;
  if ( v3 == 51 )
  {
    sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 192), 0xE01u, 0);
    sub_15F7200(v10);
    return 0;
  }
  else
  {
    v8 = sub_1E5FBF0(a1, *(_QWORD *)(a2 + 8), 1);
    v5 = sub_1E5F010(a3, 0);
    v9 = v5;
    if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (*(_BYTE *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
      || sub_199F900(v8, v5) )
    {
      return v8;
    }
    else
    {
      sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 192), 0xE62u, 0);
      v7 = sub_1605D30((__int64)v10, &v8);
      sub_1605D30(v7, &v9);
      sub_15F7200(v10);
      return 0;
    }
  }
}
