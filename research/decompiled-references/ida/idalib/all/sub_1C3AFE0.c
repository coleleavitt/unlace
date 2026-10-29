__int64 __fastcall sub_1C3AFE0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  char v9; // al
  unsigned int v11; // eax
  _QWORD *v12; // rax
  char *v13; // rax
  __int64 v14; // [rsp+10h] [rbp-C8h]
  __int64 v15; // [rsp+18h] [rbp-C0h]
  __int64 v16; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v17[168]; // [rsp+30h] [rbp-A8h] BYREF

  v16 = *(_QWORD *)(a3 + 8);
  v7 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  if ( v9 == 13 )
  {
    if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 || (*(_BYTE *)(v7 + 17) & 4) != 0 )
      return sub_EEEB40(*(_QWORD **)(a1 + 248), a2, a3, a4, a5, a6);
  }
  else if ( v9 == 47 )
  {
    v15 = a4;
    v14 = a3;
    v12 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
    a2 = (unsigned int)a2;
    a3 = v14;
    a4 = v15;
    if ( (*((_BYTE *)v12 + 74) & 1) != 0 || (v12[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v13 = (char *)sub_F60F10(v8, (unsigned int)a2, v14, v15, a5, a6);
      a2 = (unsigned int)a2;
      a3 = v14;
      a4 = v15;
      if ( v13[76] >= 0 )
        return sub_EEEB40(*(_QWORD **)(a1 + 248), a2, a3, a4, a5, a6);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      return sub_EEEB40(*(_QWORD **)(a1 + 248), a2, a3, a4, a5, a6);
  }
  else if ( v9 == 10 || (*(_BYTE *)(v7 + 17) & 4) != 0 )
  {
    return sub_EEEB40(*(_QWORD **)(a1 + 248), a2, a3, a4, a5, a6);
  }
  v11 = sub_C00A40(a3, a2, a3, a4, a5);
  sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), v11, 0xEE8u, 0);
  sub_1605D30((__int64)v17, &v16);
  sub_15F7200(v17);
  return 1;
}
