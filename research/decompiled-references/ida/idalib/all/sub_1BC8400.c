char __fastcall sub_1BC8400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // bl
  __int64 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdi
  char v10; // al
  _QWORD *v12; // rax

  v6 = *(_BYTE *)(a1 + 10);
  v7 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v7;
  if ( !v6 )
    return sub_F61920(v8, (__int64)v7, a3, a4, a5, a6);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  if ( v10 == 13 )
    return (((*(_WORD *)(v9 + 18) >> 3) + 76) & 0x1FFu) <= 0x13;
  if ( v10 != 47 )
    return v10 == 10;
  v12 = sub_F60F10(v9, (__int64)v7, a3, a4, a5, a6);
  if ( (*((_BYTE *)v12 + 74) & 1) == 0 )
    return (v12[16] & 0xFFFFFFFFFFFFFFF8LL) != 0;
  return v6;
}
