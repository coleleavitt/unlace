char __fastcall sub_F60F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  char result; // al
  __int64 v9; // rcx
  _QWORD *v10; // rdx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  if ( (_BYTE)v7 == 13 )
    return (((*(_WORD *)(v6 + 18) >> 3) + 76) & 0x1FFu) <= 0x13;
  v9 = *(_QWORD *)(a2 + 2320);
  if ( (*(_BYTE *)(v9 + 1) & 8) != 0 || (_BYTE)v7 != 47 )
    return (_BYTE)v7 == 10;
  v10 = sub_F60E90(*(_QWORD **)(v6 + 24), a2, v7, v9, a5, a6);
  result = 1;
  if ( (*((_BYTE *)v10 + 74) & 1) == 0 )
    return (v10[16] & 0xFFFFFFFFFFFFFFF8LL) != 0;
  return result;
}
