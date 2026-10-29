char __fastcall sub_1713700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int16 v14; // dx
  char result; // al

  v6 = a2;
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( ((v7 + 52) & 0x7Fu) <= 1 || (v8 = v7, v9 = (unsigned int)v7 - 53, (unsigned int)v9 <= 1) )
  {
    v6 = sub_B72ED0(a2);
    v7 = *(_BYTE *)(v6 + 28) & 0x7F;
    v8 = v7;
  }
  v10 = (unsigned int)(v8 - 58);
  if ( (unsigned int)v10 <= 9 )
    return 0;
  if ( v7 == 20 )
  {
    v11 = *(_QWORD *)(v6 + 120);
    if ( !v11 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(v6 + 96) + 88LL), *(_QWORD *)(v6 + 96), v10, v9, a5, a6);
      v11 = *(_QWORD *)(v6 + 120);
    }
    v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v12 || !*v12 )
      return 0;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 232LL);
  if ( (*(_BYTE *)(v13 + 1) & 8) != 0 )
  {
    v14 = 2106;
    return (unsigned __int16)(*(_WORD *)(v6 + 30) & v14) != 0;
  }
  if ( (*(_BYTE *)(v13 + 2) & 4) == 0 || (result = 1, (*(_BYTE *)(v6 + 28) & 0x7F) != 0x32) )
  {
    v14 = 2080;
    return (unsigned __int16)(*(_WORD *)(v6 + 30) & v14) != 0;
  }
  return result;
}
