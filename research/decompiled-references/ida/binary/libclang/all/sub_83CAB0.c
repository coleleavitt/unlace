bool __fastcall sub_83CAB0(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // al
  bool result; // al
  __int64 v4; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(_BYTE *)(v1 + 16);
  if ( v2 == 13 )
    return (((*(_WORD *)(v1 + 18) >> 3) + 77) & 0x1FFu) <= 0x13;
  if ( v2 != 46 )
    return v2 == 10;
  v4 = sub_B14A40(v1);
  result = *(_BYTE *)(v4 + 74) & 1;
  if ( !result )
    return *(_QWORD *)(v4 + 128) > 7u;
  return result;
}

