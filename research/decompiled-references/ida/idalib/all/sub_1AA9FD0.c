void __fastcall sub_1AA9FD0(__int64 a1, void **a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned int v6; // r13d
  __int64 *v8; // r14
  int v9; // r15d
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // r12d
  char v15; // [rsp+Fh] [rbp-C9h] BYREF
  void *v16; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-C0h]
  char v18; // [rsp+1Ch] [rbp-BCh]

  v6 = (unsigned int)a2;
  *(_BYTE *)(a1 + 32) |= 1u;
  if ( *(_BYTE *)(a1 + 64) )
  {
    v8 = (__int64 *)(a1 + 48);
    v17 = 64;
    a2 = &v16;
    v18 = 0;
    v16 = nullptr;
    v9 = sub_98E2D0((__int64 *)(a1 + 48), (__int64 *)&v16);
    if ( v17 > 0x40 && v16 )
      operator delete[](v16);
    if ( v9 > 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)a3 + 288LL) != 20 && !*(_BYTE *)(a3 + 72) )
      {
        v10 = *(_BYTE *)(a3 + 64) == 0;
        *(_BYTE *)(a3 + 72) = 1;
        if ( v10 )
          sub_1AA3BD0((__int64 **)a3, (__int64)&v16, a3, a4, a5);
        else
          sub_1AA9DF0(a3, a6);
      }
      if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
      {
        sub_168B9F0((__int64)&v16, (__int64 *)a1, v6, 0xB3Fu, 0);
        v11 = sub_1AA3B30((__int64)&v16, (char *)(a1 + 73));
        v15 = 4;
        sub_1AA5620(v11, &v15);
        sub_15F7200(&v16);
        sub_168B9F0((__int64)&v16, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 12LL), 0x1666u, 0);
        a2 = (void **)&v15;
        v15 = 4;
        sub_1AA5620((__int64)&v16, &v15);
        sub_15F7200(&v16);
      }
      else
      {
        sub_2205950(v8);
        a2 = &v16;
        v18 = 0;
        v17 = 64;
        v16 = nullptr;
        v14 = sub_98E2D0(v8, (__int64 *)&v16);
        if ( v17 > 0x40 && v16 )
          operator delete[](v16);
        if ( !v14 )
          *(_BYTE *)(a1 + 72) = 1;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 88) > 1u )
  {
    if ( *(_BYTE *)(*(_QWORD *)a3 + 288LL) != 20 && !*(_BYTE *)(a3 + 72) )
    {
      v10 = *(_BYTE *)(a3 + 64) == 0;
      *(_BYTE *)(a3 + 72) = 1;
      if ( v10 )
        sub_1AA3BD0((__int64 **)a3, (__int64)a2, a3, a4, a5);
      else
        sub_1AA9DF0(a3, a6);
    }
    if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
    {
      sub_168B9F0((__int64)&v16, (__int64 *)a1, v6, 0xB3Fu, 0);
      v13 = sub_1AA3B30((__int64)&v16, (char *)(a1 + 93));
      v15 = 44;
      sub_1AA5620(v13, &v15);
      sub_15F7200(&v16);
      sub_168B9F0((__int64)&v16, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 80) + 12LL), 0x1666u, 0);
      v15 = 44;
      sub_1AA5620((__int64)&v16, &v15);
      sub_15F7200(&v16);
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 88) - 1;
      *(_DWORD *)(a1 + 88) = v12;
      if ( v12 == 1 )
        *(_BYTE *)(a1 + 92) = 1;
    }
  }
  *(_BYTE *)(a1 + 32) &= ~2u;
}
