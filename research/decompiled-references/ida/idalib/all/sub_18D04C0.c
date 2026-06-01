void __fastcall sub_18D04C0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rax
  size_t v11; // rax
  __int64 v12; // [rsp+0h] [rbp-148h] BYREF
  char v13; // [rsp+8h] [rbp-140h]
  __int64 v14; // [rsp+Ch] [rbp-13Ch]
  char v15; // [rsp+14h] [rbp-134h]
  void *v16; // [rsp+18h] [rbp-130h]
  __int64 v17; // [rsp+20h] [rbp-128h]
  _BYTE v18[24]; // [rsp+28h] [rbp-120h] BYREF
  __int64 v19; // [rsp+40h] [rbp-108h] BYREF
  char v20; // [rsp+48h] [rbp-100h]
  __int64 v21; // [rsp+4Ch] [rbp-FCh]
  char v22; // [rsp+54h] [rbp-F4h]
  void *v23; // [rsp+58h] [rbp-F0h]
  __int64 v24; // [rsp+60h] [rbp-E8h]
  _BYTE v25[24]; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v26[200]; // [rsp+80h] [rbp-C8h] BYREF

  v3 = sub_BFB9F0(a2);
  v4 = v3;
  if ( ((*(_DWORD *)a2 & 0x80000) == 0 || v3 != *(_QWORD *)(a2 + 24))
    && ((*(_WORD *)v3 + 394) & 0x1FFu) <= 1
    && ((*(_WORD *)(v3 + 2) >> 3) & 0x3F) == 0xE )
  {
    v5 = sub_BFBAE0(*(_QWORD *)(v3 + 16));
    if ( !(unsigned int)sub_C0EF10(v5, *(_QWORD *)(a1 + 248), nullptr, v6, v7) )
    {
      v8 = *(_DWORD *)(v4 + 4);
      sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), v8, 0x1ADAu, 0);
      v19 = sub_EEC8C0(v4, a1 + 8, a3);
      sub_1587DB0((__int64)v26, &v19);
      sub_15F7200(v26);
      v9 = sub_EEC8C0(a2, (__int64)&v19, a3);
      sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), v8, 0x1731u, 0);
      LODWORD(v19) = v9;
      HIDWORD(v19) = v9;
      v21 = 0;
      v22 = 0;
      v23 = v25;
      v24 = 0;
      v25[0] = 0;
      v25[16] = 0;
      v20 = 1;
      v10 = sub_1589170((__int64)v26, &v19);
      v15 = 0;
      LODWORD(v12) = HIDWORD(v9);
      v14 = 0;
      v16 = v18;
      v17 = 0;
      v18[0] = 0;
      v18[16] = 0;
      HIDWORD(v12) = HIDWORD(v9);
      v13 = 1;
      sub_1589170(v10, &v12);
      if ( v16 != v18 )
        operator delete(v16);
      if ( v23 != v25 )
        operator delete(v23);
      sub_15F7200(v26);
      sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), v8, 0x1732u, 0);
      v11 = j__strlen("=");
      LODWORD(v12) = v8;
      HIDWORD(v12) = v8;
      v13 = 1;
      sub_18BE5B0((__int64)&v19, v12, 1, "=", v11);
      sub_1589170((__int64)v26, &v19);
      if ( v23 != v25 )
        operator delete(v23);
      sub_15F7200(v26);
    }
  }
}
