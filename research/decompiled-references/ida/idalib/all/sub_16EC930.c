__int64 __fastcall sub_16EC930(__int64 a1, unsigned __int64 a2, unsigned int a3, double a4)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // r12
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int8 v12; // [rsp+Bh] [rbp-DDh]
  unsigned int v13[4]; // [rsp+Ch] [rbp-DCh] BYREF
  unsigned int v14; // [rsp+1Ch] [rbp-CCh] BYREF
  int v15; // [rsp+20h] [rbp-C8h] BYREF
  int v16; // [rsp+24h] [rbp-C4h] BYREF
  __int64 v17; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v18[184]; // [rsp+30h] [rbp-B8h] BYREF

  result = 0;
  v5 = *(_DWORD *)(a2 + 16);
  v13[0] = a3;
  v14 = v5;
  if ( a3 != v5 )
  {
    result = sub_16EC5F0(a1, a2, a3, a4);
    if ( !(_BYTE)result )
    {
      v6 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
      v7 = sub_EEC140(*(_QWORD *)(a2 + 8LL * (v14 - 1) + v6));
      LODWORD(v17) = sub_EEB7E0(*(_QWORD *)(a2 + 8LL * v13[0] + v6), a2, a4);
      HIDWORD(v17) = v7;
      sub_168B9F0((__int64)v18, (__int64 *)(a1 + 8), v17, 0x146Eu, 0);
      v15 = 0;
      v8 = sub_1587D10((__int64)v18, &v15);
      v9 = sub_1588370(v8, v13);
      v10 = sub_1588370(v9, &v14);
      v16 = 0;
      v11 = sub_1587D10(v10, &v16);
      v12 = *(_BYTE *)(sub_15884C0(v11, &v17) + 120);
      sub_15F7200(v18);
      return v12;
    }
  }
  return result;
}
