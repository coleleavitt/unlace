__int64 __fastcall sub_15F1490(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // al
  int v9; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    return 0;
  v3 = sub_B81B70(a2);
  if ( v3 != 3 && v3 != 6 )
    return 0;
  v8 = sub_F64090(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v4, v5, v6, v7);
  if ( v8 == 3 || v8 == 6 )
    return 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 > 5 )
    v9 = sub_B82160(a2);
  else
    v9 = sub_B82220(a2);
  return v9 ^ 1u;
}
