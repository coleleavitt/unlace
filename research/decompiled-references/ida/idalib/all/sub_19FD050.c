__int64 __fastcall sub_19FD050(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v14[168]; // [rsp+20h] [rbp-A8h] BYREF

  v5 = a2;
  v6 = *(_BYTE *)(a2 + 2);
  v12 = a3;
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 8 * (a4 + (unsigned __int64)((v6 & 8) != 0)) + 40) + 8LL);
  v7 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57;
  if ( (unsigned int)v8 <= 1 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
      return 0;
LABEL_6:
    a2 = v12;
    if ( sub_19F5350(*(_QWORD *)(v7 + 32), v12) )
      return 0;
    goto LABEL_7;
  }
  v7 = sub_19F5590(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), a2, v13 & 0xFFFFFFFFFFFFFFF0LL, v8);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    return 0;
  if ( v7 )
    goto LABEL_6;
LABEL_7:
  v10 = sub_EEB7E0(*(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 32), a2, a5);
  sub_168B9F0((__int64)v14, (__int64 *)(a1 + 8), v10, 0x1495u, 0);
  v11 = sub_1605D30((__int64)v14, &v13);
  sub_1605D30(v11, &v12);
  sub_15F7200(v14);
  return 1;
}
