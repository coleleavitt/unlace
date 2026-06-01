__int64 __fastcall sub_19FE640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // [rsp+0h] [rbp-D8h] BYREF
  int v13; // [rsp+Ch] [rbp-CCh] BYREF
  int v14; // [rsp+14h] [rbp-C4h] BYREF
  int v15; // [rsp+18h] [rbp-C0h] BYREF
  int v16; // [rsp+1Ch] [rbp-BCh] BYREF
  _BYTE v17[184]; // [rsp+20h] [rbp-B8h] BYREF

  v13 = a3;
  v12 = a4;
  if ( sub_F65540(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6) )
    return 0;
  sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), a2, 0xD17u, 0);
  v7 = sub_16CF4F0((__int64)v17, &v13);
  v14 = 5;
  v8 = sub_1587D10(v7, &v14);
  v15 = 3;
  v9 = sub_1587D10(v8, &v15);
  v16 = 0;
  v10 = sub_1587D10(v9, &v16);
  v11 = *(unsigned __int8 *)(sub_1605D30(v10, &v12) + 120);
  sub_15F7200(v17);
  return v11;
}
