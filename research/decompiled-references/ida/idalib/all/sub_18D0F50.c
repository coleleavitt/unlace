__int64 __fastcall sub_18D0F50(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, int a5, double a6)
{
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int8 v14; // al
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v21[184]; // [rsp+20h] [rbp-B8h] BYREF

  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD **)(a1 + 248);
  v18 = a3;
  v19 = v9;
  if ( (*(_BYTE *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    v11 = sub_A97D20((__int64)v10, *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v11 != sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a4, 0xFABu, 0);
      v16 = sub_1605D30((__int64)v21, &v18);
      v17 = sub_1605D30(v16, &v19);
      v13 = 1;
      v20 = sub_EEC8C0(a2, (__int64)&v19, a6);
      sub_1587DB0(v17, &v20);
      sub_15F7200(v21);
      return v13;
    }
    v10 = *(_QWORD **)(a1 + 248);
  }
  v12 = v18;
  v13 = sub_EEE9A0(32, v10, 8u);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x79;
  if ( unk_2CD7484 )
    sub_EE9B50(121);
  *(_WORD *)(v13 + 1) &= 0xF801u;
  *(_QWORD *)(v13 + 8) = v12;
  *(_QWORD *)(v13 + 16) = a2;
  *(_DWORD *)(v13 + 24) = a4;
  *(_DWORD *)(v13 + 28) = a5;
  v14 = sub_B63270(v13);
  *(_BYTE *)(v13 + 1) = (v14 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v14 >> 2) & 7;
  return v13;
}
