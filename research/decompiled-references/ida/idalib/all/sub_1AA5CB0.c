void __fastcall sub_1AA5CB0(__int64 a1, void **a2, unsigned __int64 a3, double a4)
{
  unsigned int v5; // edx
  unsigned int v6; // ebp
  int v7; // r13d
  bool v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // [rsp+Fh] [rbp-B9h] BYREF
  void *v13; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-B0h]
  char v15; // [rsp+1Ch] [rbp-ACh]

  if ( (*(_BYTE *)(sub_168B6E0(a1) + 97) & 4) != 0 )
  {
    *(_BYTE *)(a1 + 32) |= 2u;
    if ( a3 > 1 )
    {
      if ( *(_BYTE *)(a1 + 64) )
      {
        v14 = 64;
        a2 = &v13;
        v15 = 0;
        v13 = nullptr;
        v7 = sub_98E2D0((__int64 *)(a1 + 48), (__int64 *)&v13);
        if ( v14 > 0x40 && v13 )
          operator delete[](v13);
        v5 = *(_DWORD *)(a1 + 88);
        if ( v7 > 0 && !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 48LL) )
        {
          v8 = v5 > 1;
          v9 = sub_1AA08F0(a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v13, a4);
          v6 = v9;
          if ( !v9 )
            return;
          sub_168B9F0((__int64)&v13, (__int64 *)a1, v9, 0xB5Au, 0);
          v12 = 4;
          v10 = sub_1AA5620((__int64)&v13, &v12);
          sub_1AA3B30(v10, (char *)(a1 + 73));
          sub_15F7200(&v13);
          sub_168B9F0((__int64)&v13, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 12LL), 0x1666u, 0);
          v12 = 4;
          sub_1AA5620((__int64)&v13, &v12);
          sub_15F7200(&v13);
          if ( !v8 )
            return;
LABEL_16:
          sub_168B9F0((__int64)&v13, (__int64 *)a1, v6, 0xB5Au, 0);
          v12 = 44;
          v11 = sub_1AA5620((__int64)&v13, &v12);
          sub_1AA3B30(v11, (char *)(a1 + 93));
          sub_15F7200(&v13);
          sub_168B9F0((__int64)&v13, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 80) + 12LL), 0x1666u, 0);
          v12 = 44;
          sub_1AA5620((__int64)&v13, &v12);
          sub_15F7200(&v13);
          return;
        }
      }
      else
      {
        v5 = *(_DWORD *)(a1 + 88);
      }
      if ( v5 <= 1 )
        return;
      v6 = sub_1AA08F0(a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)a2, a4);
      if ( !v6 )
        return;
      goto LABEL_16;
    }
  }
}
