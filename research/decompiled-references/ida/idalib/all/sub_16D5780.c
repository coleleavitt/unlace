__int64 __fastcall sub_16D5780(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  int i; // r8d
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int8 v11; // [rsp+Fh] [rbp-C9h]
  unsigned int v12; // [rsp+18h] [rbp-C0h] BYREF
  int v13; // [rsp+1Ch] [rbp-BCh] BYREF
  int v14; // [rsp+20h] [rbp-B8h] BYREF
  int v15; // [rsp+24h] [rbp-B4h] BYREF
  __int64 v16; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v17[168]; // [rsp+30h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  v12 = v3;
  if ( v3 > 3 )
  {
    sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 20), 0x146Fu, 0);
    v13 = 0;
    v7 = sub_1587D10((__int64)v17, &v13);
    v14 = 3;
    v8 = sub_1587D10(v7, &v14);
    v9 = sub_1588370(v8, &v12);
    v15 = 0;
    v10 = sub_1587D10(v9, &v15);
    v16 = sub_EEC8C0(a2, (__int64)&v15, a3);
    v11 = *(_BYTE *)(sub_1587DB0(v10, &v16) + 120);
    sub_15F7200(v17);
    return v11;
  }
  else if ( v3 == 1 )
  {
    return 0;
  }
  else
  {
    v4 = 1;
    for ( i = 1; ; i = 2 * (v4 != 1) + 1 )
    {
      result = sub_16D5460(a1, a2, v4, 0, i, 1u, a3);
      if ( (_BYTE)result )
        break;
      if ( v12 == ++v4 )
        return 0;
    }
  }
  return result;
}
