_BOOL8 __fastcall sub_F65CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  char v7; // al
  _BOOL8 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rdx

  if ( *(_BYTE *)(a1 + 16) != 14 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 14 )
      return 0;
    a1 = sub_F62E70(a1);
    if ( !a1 )
      return 0;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 == 13 )
  {
    result = 1;
    if ( (((*(_WORD *)(v6 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
      return result;
    return 0;
  }
  if ( v7 != 47 )
    return v7 == 10;
  v9 = sub_F60E90(*(_QWORD **)(v6 + 24), a2, a3, a4, a5, a6);
  if ( (*((_BYTE *)v9 + 74) & 1) == 0 && (v9[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  v14 = (char *)sub_F60E90(*(_QWORD **)(v6 + 24), a2, v10, v11, v12, v13);
  result = 1;
  if ( v14[76] < 0 )
    return 0;
  return result;
}
