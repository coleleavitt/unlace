__int64 __fastcall sub_16D4F00(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, double a5)
{
  unsigned int v5; // ebx
  char v6; // al
  _DWORD *v7; // r13
  char v10; // al
  char v11; // r12
  unsigned int v12; // eax
  __int64 v13; // [rsp+18h] [rbp-E0h] BYREF
  void *v14; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-D0h]
  char v16; // [rsp+2Ch] [rbp-CCh]
  void *v17; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-C0h]
  char v19; // [rsp+3Ch] [rbp-BCh]

  v5 = 0;
  v6 = *(_BYTE *)(a2 + 2);
  v15 = 1;
  v16 = 0;
  v14 = nullptr;
  v7 = *(_DWORD **)(a2 + 8 * (((v6 & 8) != 0) + (unsigned __int64)a3 + 1) + 32);
  if ( ((*v7 >> 14) & 0xC) == 0 )
  {
    v5 = sub_16D4840(a1, a2, a3, (__int64)&v14);
    if ( !(_BYTE)v5 )
    {
      sub_2206590(&v17, &v14, a4);
      if ( v15 > 0x40 && v14 )
        operator delete[](v14);
      v16 = 1;
      v14 = v17;
      v15 = v18;
      if ( v18 > 0x40 )
      {
        sub_2205510(&v17);
        v10 = v16;
      }
      else
      {
        v10 = 1;
      }
      v19 = v10;
      v11 = sub_16BE0F0((__int64)&v17);
      if ( v18 > 0x40 && v17 )
        operator delete[](v17);
      if ( !v11 )
      {
        v12 = sub_BF6D70(a2);
        sub_168B9F0((__int64)&v17, (__int64 *)(a1 + 8), v12, 0xBF2u, 0);
        v13 = sub_EEC8C0((unsigned __int64)v7, a1 + 8, a5);
        v5 = *(unsigned __int8 *)(sub_1587DB0((__int64)&v17, &v13) + 120);
        sub_15F7200(&v17);
      }
    }
    if ( v15 > 0x40 && v14 )
      operator delete[](v14);
  }
  return v5;
}
