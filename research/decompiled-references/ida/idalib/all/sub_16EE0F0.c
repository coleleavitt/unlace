__int64 __fastcall sub_16EE0F0(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+8h] [rbp-D0h] BYREF
  int v21; // [rsp+Ch] [rbp-CCh] BYREF
  int v22; // [rsp+10h] [rbp-C8h] BYREF
  int v23; // [rsp+14h] [rbp-C4h] BYREF
  __int64 v24; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v25[184]; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)sub_16EC930(a1, a2, 1u, a4) )
    return 1;
  v7 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v8 = sub_19146F0(a1, v7);
  if ( v8 == 1 )
    return 1;
  v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v11 = *(_QWORD *)(*(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) != 31 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) != 31 || (v11 = sub_F63050(v11, v7, v14, v9)) == 0 )
    {
      v15 = sub_EEB7E0(v10, v7, a4);
      sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), v15, 0xD17u, 0);
      v20 = 1;
      v16 = sub_1587D10((__int64)v25, &v20);
      v21 = 3;
      v17 = sub_1587D10(v16, &v21);
      v22 = 0;
      v18 = sub_1587D10(v17, &v22);
      v23 = 0;
      v19 = sub_1587D10(v18, &v23);
      v24 = *(_QWORD *)(v10 + 8);
      sub_162B6D0(v19, &v24);
      sub_15F7200(v25);
      return 1;
    }
  }
  v12 = sub_A76DD0(*(_QWORD *)(a1 + 248), *(_QWORD *)(v11 + 32), *(_DWORD *)(v11 + 44), *(_DWORD *)(v11 + 40));
  v13 = *(_BYTE *)(a2 + 2);
  *(_QWORD *)(a2 + 8) = v12;
  *(_QWORD *)(a2 + 8 * (((v13 & 8) != 0) + 1LL) + 32) = v10;
  return a3;
}
