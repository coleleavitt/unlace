unsigned __int64 __fastcall sub_1AA5AA0(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        double a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8)
{
  unsigned __int64 result; // rax
  __int16 v9; // ax
  unsigned int v10; // eax
  char v11[19]; // [rsp+Ch] [rbp-CCh] BYREF
  char v12; // [rsp+1Fh] [rbp-B9h] BYREF
  _BYTE v13[184]; // [rsp+20h] [rbp-B8h] BYREF

  v11[0] = a3;
  if ( ((1LL << a3) & 0xE80) != 0 )
  {
    if ( a8 > 1 )
    {
      v9 = *(_WORD *)(a8 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF;
      if ( v9 == 252 || v9 == 243 )
      {
        if ( *(_BYTE *)(a1 + 72) )
        {
          result = a8 & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_BYTE *)(a1 + 92) )
            return result;
        }
        else
        {
          sub_168B9F0((__int64)v13, (__int64 *)a1, a2, 0xB54u, 0);
          v12 = 4;
          sub_1AA5620((__int64)v13, &v12);
          sub_15F7200(v13);
          sub_168B9F0((__int64)v13, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 12LL), 0x1666u, 0);
          v12 = 4;
          sub_1AA5620((__int64)v13, &v12);
          sub_15F7200(v13);
          if ( *(_BYTE *)(a1 + 92) )
            return 1;
        }
        sub_168B9F0((__int64)v13, (__int64 *)a1, a2, 0xB54u, 0);
        v12 = 44;
        sub_1AA5620((__int64)v13, &v12);
        sub_15F7200(v13);
        sub_168B9F0((__int64)v13, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 80) + 12LL), 0x1666u, 0);
        v12 = 44;
        sub_1AA5620((__int64)v13, &v12);
        sub_15F7200(v13);
        return 1;
      }
      v10 = sub_EEB7E0(a8 & 0xFFFFFFFFFFFFFFFELL, a4, a5);
      sub_168B9F0((__int64)v13, (__int64 *)a1, v10, 0xB60u, 0);
      sub_1AA3B30((__int64)v13, v11);
      sub_15F7200(v13);
      sub_168B9F0((__int64)v13, (__int64 *)a1, a2, 0x1672u, 0);
      sub_1AA3B30((__int64)v13, v11);
      sub_15F7200(v13);
    }
    return 1;
  }
  result = a8;
  if ( ((1LL << a3) & 0x4F) == 0 )
    return sub_1ABD3D0(a1, a2, a4, a8);
  return result;
}
