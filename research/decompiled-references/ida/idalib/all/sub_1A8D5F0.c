__int64 __fastcall sub_1A8D5F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // al
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v17[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v6 == 50 )
  {
    v7 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v8 = *(_QWORD *)v7;
    if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) != 34
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 || !sub_F63050(
                                                                                                 v8,
                                                                                                 a2,
                                                                                                 a3,
                                                                                                 a4)) )
    {
      sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x1B41u, 0);
      v10 = sub_15DD120((__int64)v17, a3);
      v16 = *(_QWORD *)(a2 + 48);
      v11 = sub_162B6D0(v10, &v16);
      v15 = 0;
LABEL_7:
      sub_1587D10(v11, &v15);
      sub_15F7200(v17);
      return 0;
    }
    return 1;
  }
  if ( v6 == 75 )
  {
    v12 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF0LL;
    v13 = *(_QWORD *)v12;
    if ( *(_BYTE *)(*(_QWORD *)v12 + 16LL) != 34
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34
       || !sub_F63050(v13, a2, a3, a4)) )
    {
      sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x1B41u, 0);
      v14 = sub_15DD120((__int64)v17, a3);
      v16 = *(_QWORD *)(a2 + 56);
      v11 = sub_162B6D0(v14, &v16);
      v15 = 1;
      goto LABEL_7;
    }
    return 1;
  }
  sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x19A8u, 0);
  sub_15DD120((__int64)v17, a3);
  sub_15F7200(v17);
  return 0;
}
