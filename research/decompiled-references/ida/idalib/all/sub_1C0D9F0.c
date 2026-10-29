__int64 __fastcall sub_1C0D9F0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r8
  _QWORD *v5; // r13
  char v6; // al
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _BYTE v11[184]; // [rsp+0h] [rbp-B8h] BYREF

  v5 = (_QWORD *)sub_168B6C0((__int64)a1);
  v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v6 == 42 || (unsigned __int8)(v6 - 2) <= 4u )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(v8 + 8) & 7LL;
  if ( v9 | (*(__int64 *)(v8 + 8) >> 3) & 1 )
    v8 = sub_F64F00(
           *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
         | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7,
           a2,
           v9,
           v9 | (*(__int64 *)(v8 + 8) >> 3) & 1,
           v4);
  v10 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v10 != v5[2510] && v10 != v5[2511] && v10 != v5[2512] )
    return 0;
  sub_168B9F0((__int64)v11, a1, a3, 0x12CBu, 0);
  sub_15F7200(v11);
  return 1;
}
