__int64 __fastcall sub_E3DE60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 v9; // al
  int v10; // eax

  LOBYTE(v4) = *(_BYTE *)(a1 + 192) ^ 1 | (a2 == 0);
  if ( (_BYTE)v4 )
    return 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 > 5 )
    return 0;
  v6 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 26
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 || !sub_F63050(v7, a2, a3, a4)) )
  {
    return 0;
  }
  if ( (unsigned __int8)sub_B844D0((_BYTE *)a2) != 2 )
    return 0;
  v9 = sub_B81B70(a2);
  if ( !v9 )
LABEL_16:
    BUG();
  if ( v9 > 3u )
  {
    if ( v9 <= 6u )
      return v4;
    goto LABEL_16;
  }
  v10 = *(_BYTE *)(sub_E3D330(a1, a2) + 8) & 0x7F;
  if ( !v10 || v10 == 24 )
    return (unsigned int)sub_B8D170(a2) ^ 1;
  return 0;
}
