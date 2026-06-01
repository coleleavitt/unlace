char __fastcall sub_BF86C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  char v6; // al
  char result; // al
  __int64 v8; // rdx

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_BYTE *)(v5 + 16);
  if ( v6 == 13 )
    return (((*(_WORD *)(v5 + 18) >> 3) + 76) & 0x1FFu) <= 0x13;
  if ( v6 != 47 )
    return v6 == 10;
  v8 = sub_F3D1D0(v5, a2, a3, a4, a5);
  result = 1;
  if ( (*(_BYTE *)(v8 + 74) & 1) == 0 )
    return (*(_QWORD *)(v8 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0;
  return result;
}

