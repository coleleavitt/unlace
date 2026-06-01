__int64 __fastcall sub_19FE930(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int8 v13; // [rsp+Bh] [rbp-BDh]
  int v14; // [rsp+Ch] [rbp-BCh] BYREF
  int v15; // [rsp+14h] [rbp-B4h] BYREF
  int v16; // [rsp+18h] [rbp-B0h] BYREF
  int v17; // [rsp+1Ch] [rbp-ACh] BYREF
  _BYTE v18[168]; // [rsp+20h] [rbp-A8h] BYREF

  v14 = a3;
  v12 = a4;
  v4 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = (unsigned int)*(unsigned __int8 *)(v4 + 16) - 57;
  if ( (unsigned int)v5 > 1 )
  {
    v4 = sub_19F5590(v4, a2, v5, a4);
    if ( !v4 )
      return 0;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 13 || ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) != 0x1E2 )
    return 0;
  sub_168B9F0((__int64)v18, (__int64 *)(a1 + 8), a2, 0xD17u, 0);
  v8 = sub_16CF4F0((__int64)v18, &v14);
  v15 = 1;
  v9 = sub_1587D10(v8, &v15);
  v16 = 0;
  v10 = sub_1587D10(v9, &v16);
  v17 = 1;
  v11 = sub_1587D10(v10, &v17);
  v13 = *(_BYTE *)(sub_1605D30(v11, &v12) + 120);
  sub_15F7200(v18);
  return v13;
}
