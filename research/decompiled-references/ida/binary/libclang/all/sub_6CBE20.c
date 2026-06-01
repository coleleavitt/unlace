__int64 __fastcall sub_6CBE20(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 17288) + 340LL) != 10 || (*(_BYTE *)(a2 + 28) & 0x7F) == 0x29 )
    return 0;
  v3 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
  {
    if ( ((v3[8] + 72) & 0x7Fu) <= 3 )
      goto LABEL_6;
    return 0;
  }
  if ( ((*(_BYTE *)(*(_QWORD *)v3 + 8LL) + 72) & 0x7Fu) > 3 )
    return 0;
LABEL_6:
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_BYTE *)(v4 + 16);
  switch ( v5 )
  {
    case 13:
      if ( (((*(_WORD *)(v4 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        return 0;
      break;
    case 46:
      v6 = sub_B14A40(v4);
      if ( (*(_BYTE *)(v6 + 74) & 1) == 0 && *(_QWORD *)(v6 + 128) <= 7u )
        return 0;
      break;
    case 10:
      break;
    default:
      return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 24LL))(*(_QWORD *)(a2 + 80)) )
    return 0;
  return sub_77B630(*(_QWORD *)(a2 + 80));
}

