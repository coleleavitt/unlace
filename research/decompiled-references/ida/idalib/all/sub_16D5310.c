__int64 __fastcall sub_16D5310(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, double a5)
{
  char v5; // al
  _DWORD *v6; // r13
  unsigned int v7; // ebp
  unsigned int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rbp
  unsigned int v15[3]; // [rsp+Ch] [rbp-DCh] BYREF
  __int64 v16; // [rsp+18h] [rbp-D0h] BYREF
  void *v17; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-C0h]
  char v19; // [rsp+2Ch] [rbp-BCh]
  _BYTE v20[184]; // [rsp+30h] [rbp-B8h] BYREF

  v5 = *(_BYTE *)(a2 + 2);
  v15[0] = a4;
  v18 = 1;
  v19 = 0;
  v17 = nullptr;
  v6 = *(_DWORD **)(a2 + 8 * (((v5 & 8) != 0) + (unsigned __int64)a3 + 1) + 32);
  if ( ((*v6 >> 14) & 0xC) != 0 )
    return 0;
  v10 = sub_16D4840(a1, a2, a3, (__int64)&v17);
  v11 = v18;
  v7 = v10;
  if ( !(_BYTE)v10 )
  {
    if ( v18 <= 0x40 )
    {
      if ( !v18 )
        return 0;
      v12 = (__int64)((_QWORD)v17 << (64 - (unsigned __int8)v18)) >> (64 - (unsigned __int8)v18);
    }
    else
    {
      v12 = *(_QWORD *)v17;
    }
    if ( v12 % v15[0] )
    {
      v13 = sub_BF6D70(a2);
      sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), v13, 0xBF0u, 0);
      v14 = sub_1588370((__int64)v20, v15);
      v16 = sub_EEC8C0((unsigned __int64)v6, (__int64)v15, a5);
      v7 = *(unsigned __int8 *)(sub_1587DB0(v14, &v16) + 120);
      sub_15F7200(v20);
      v11 = v18;
    }
  }
  if ( v11 <= 0x40 || !v17 )
    return v7;
  operator delete[](v17);
  return v7;
}
