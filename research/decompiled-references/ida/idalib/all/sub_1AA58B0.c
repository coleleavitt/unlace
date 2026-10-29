void __fastcall sub_1AA58B0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // cc
  void *v9; // rdi
  char v10; // [rsp+Bh] [rbp-BDh] BYREF
  int v11; // [rsp+Ch] [rbp-BCh] BYREF
  void *v12; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v13; // [rsp+18h] [rbp-B0h]
  char v14; // [rsp+1Ch] [rbp-ACh]

  if ( (*(_BYTE *)(sub_168B6E0(a1) + 97) & 4) != 0 && (*(_BYTE *)(a1 + 32) & 1) != 0 )
  {
    if ( *(_BYTE *)(a1 + 64) )
    {
      v13 = 64;
      v14 = 0;
      v12 = nullptr;
      v5 = sub_98E2D0((__int64 *)(a1 + 48), (__int64 *)&v12);
      if ( v13 > 0x40 && v12 )
        operator delete[](v12);
      if ( v5 > 0 )
      {
        sub_168B9F0((__int64)&v12, (__int64 *)a1, a2, 0xB5Du, 0);
        v11 = 2;
        v6 = sub_1587D10((__int64)&v12, &v11);
        v7 = sub_1AA3B30(v6, (char *)(a1 + 73));
        v10 = 4;
        sub_1AA5620(v7, &v10);
        sub_15F7200(&v12);
        sub_168B9F0((__int64)&v12, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 12LL), 0x1666u, 0);
        LOBYTE(v11) = 4;
        sub_1AA5620((__int64)&v12, (char *)&v11);
        sub_15F7200(&v12);
        if ( *(_BYTE *)(a1 + 64) )
        {
          v8 = *(_DWORD *)(a1 + 56) <= 0x40u;
          *(_BYTE *)(a1 + 64) = 0;
          if ( !v8 )
          {
            v9 = *(void **)(a1 + 48);
            if ( v9 )
              operator delete[](v9);
          }
        }
      }
    }
    if ( *(_DWORD *)(a1 + 88) > 1u )
    {
      sub_168B9F0((__int64)&v12, (__int64 *)a1, a2, 0xB5Du, 0);
      v11 = 2;
      v3 = sub_1587D10((__int64)&v12, &v11);
      v4 = sub_1AA3B30(v3, (char *)(a1 + 93));
      v10 = 44;
      sub_1AA5620(v4, &v10);
      sub_15F7200(&v12);
      sub_168B9F0((__int64)&v12, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 80) + 12LL), 0x1666u, 0);
      LOBYTE(v11) = 44;
      sub_1AA5620((__int64)&v12, (char *)&v11);
      sub_15F7200(&v12);
      *(_DWORD *)(a1 + 88) = 0;
    }
  }
}
