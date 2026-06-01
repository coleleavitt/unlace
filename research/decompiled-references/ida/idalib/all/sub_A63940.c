__int64 __fastcall sub_A63940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v6; // rax
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 17448) + 340LL) != 10 || (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
    return 0;
  v6 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
  {
    if ( ((v6[8] + 70) & 0x7Fu) <= 3 )
      goto LABEL_6;
    return 0;
  }
  if ( ((*(_BYTE *)(*(_QWORD *)v6 + 8LL) + 70) & 0x7Fu) > 3 )
    return 0;
LABEL_6:
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  switch ( v8 )
  {
    case 13:
      if ( (((*(_WORD *)(v7 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        return 0;
      break;
    case 47:
      v9 = sub_F60F10(v7, a2, *(_QWORD *)(a2 + 16) & 4LL, a4, a5);
      if ( (*(_BYTE *)(v9 + 74) & 1) == 0 && (*(_QWORD *)(v9 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return 0;
      break;
    case 10:
      break;
    default:
      return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 24LL))(*(_QWORD *)(a2 + 80)) )
    return 0;
  return sub_B735C0(*(_QWORD *)(a2 + 80));
}
