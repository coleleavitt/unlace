__int64 __fastcall sub_1AA8E70(__int64 a1, char a2, unsigned int a3, char *a4, __int64 a5, __m128 a6)
{
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char v17[15]; // [rsp+Ch] [rbp-DCh] BYREF
  char v18; // [rsp+1Bh] [rbp-CDh] BYREF
  int v19; // [rsp+1Ch] [rbp-CCh] BYREF
  void *v20; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-C0h]
  char v22; // [rsp+2Ch] [rbp-BCh]

  v17[0] = a2;
  if ( a2 == 13 || a2 == 19 )
    return sub_1AA8D90((__int64 *)a1, a2, a3, a4, a5, a6);
  sub_18C3E40(*(_QWORD *)a1);
  sub_190D5E0(*(_QWORD *)a1, a6);
  if ( *(_BYTE *)(a1 + 64) )
  {
    v21 = 64;
    v22 = 0;
    v20 = nullptr;
    v10 = sub_98E2D0((__int64 *)(a1 + 48), (__int64 *)&v20);
    if ( v21 > 0x40 && v20 )
      operator delete[](v20);
    if ( v10 > 0 )
    {
      sub_168B9F0((__int64)&v20, (__int64 *)a1, a3, 0xB5Du, 0);
      v19 = 0;
      v11 = sub_1587D10((__int64)&v20, &v19);
      v12 = sub_1AA3B30(v11, (char *)(a1 + 73));
      v18 = 4;
      v13 = sub_1AA5620(v12, &v18);
      sub_1AA3B30(v13, v17);
      sub_15F7200(&v20);
      sub_168B9F0((__int64)&v20, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 12LL), 0x1666u, 0);
      LOBYTE(v19) = 4;
      sub_1AA5620((__int64)&v20, (char *)&v19);
      sub_15F7200(&v20);
    }
  }
  if ( *(_DWORD *)(a1 + 88) > 1u )
  {
    sub_168B9F0((__int64)&v20, (__int64 *)a1, a3, 0xB5Du, 0);
    v19 = 0;
    v14 = sub_1587D10((__int64)&v20, &v19);
    v15 = sub_1AA3B30(v14, (char *)(a1 + 93));
    v18 = 44;
    v16 = sub_1AA5620(v15, &v18);
    sub_1AA3B30(v16, v17);
    sub_15F7200(&v20);
    sub_168B9F0((__int64)&v20, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 80) + 12LL), 0x1666u, 0);
    LOBYTE(v19) = 44;
    sub_1AA5620((__int64)&v20, (char *)&v19);
    sub_15F7200(&v20);
  }
  return sub_1AD5040(a1, (unsigned __int8)v17[0], a3, a4, a5);
}
