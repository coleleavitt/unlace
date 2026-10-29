char __fastcall sub_F610C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  char v7; // al
  char result; // al
  char *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 == 13 )
    return (((*(_WORD *)(v6 + 18) >> 3) + 76) & 0x1FFu) <= 0x33;
  if ( v7 != 47 )
    return (v7 & 0xFB) == 10;
  v9 = (char *)sub_F60E90(*(_QWORD **)(v6 + 24), a2, a3, a4, a5, a6);
  result = 0;
  if ( v9[76] >= 0 )
  {
    v13 = sub_F60E90(*(_QWORD **)(v6 + 24), a2, (__int64)v9, v10, v11, v12);
    result = 1;
    if ( (*((_BYTE *)v13 + 74) & 1) == 0 )
      return (v13[16] & 0xFFFFFFFFFFFFFFF8LL) != 0;
  }
  return result;
}
