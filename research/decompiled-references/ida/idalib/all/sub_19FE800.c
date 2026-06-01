__int64 __fastcall sub_19FE800(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-D8h] BYREF
  int v17; // [rsp+Ch] [rbp-CCh] BYREF
  int v18; // [rsp+14h] [rbp-C4h] BYREF
  int v19; // [rsp+18h] [rbp-C0h] BYREF
  int v20; // [rsp+1Ch] [rbp-BCh] BYREF
  _BYTE v21[184]; // [rsp+20h] [rbp-B8h] BYREF

  v17 = a3;
  v16 = a4;
  v5 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  if ( (unsigned int)(v7 - 57) <= 1 )
  {
    v8 = (unsigned int)*(unsigned __int8 *)(v5 + 16) - 57;
    if ( (unsigned int)v8 > 1 )
      v5 = sub_F63050(v5, v7, v8, v6);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v6 = *(_QWORD *)v9;
    LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)v9 + 16LL);
  }
  if ( (_BYTE)v7 != 13 || (v10 = 0, (((*(_WORD *)(v6 + 18) >> 3) + 32) & 0x1FFu) > 1) )
  {
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a2, 0xD17u, 0);
    v11 = sub_16CF4F0((__int64)v21, &v17);
    v18 = 5;
    v12 = sub_1587D10(v11, &v18);
    v19 = 0;
    v13 = sub_1587D10(v12, &v19);
    v20 = 2;
    v14 = sub_1587D10(v13, &v20);
    v10 = *(unsigned __int8 *)(sub_1605D30(v14, &v16) + 120);
    sub_15F7200(v21);
  }
  return v10;
}
