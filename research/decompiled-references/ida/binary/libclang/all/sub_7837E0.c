__int64 __fastcall sub_7837E0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r12
  __int64 v4; // rdi
  __int64 v6; // rax
  _BYTE *v7; // rax
  __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rax

  v2 = *(_BYTE **)(a2 + 2160);
  if ( (v2[1] & 8) == 0 && (v2[47] & 0x20) == 0 && (*v2 & 8) == 0
    || (*(_BYTE *)(a1 + 28) & 0x7F) == 0x29
    || (unsigned __int8)sub_783680(a1) )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 48);
  if ( (v2[1] & 0x10) != 0
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 42 <= 1 )
  {
    return 1;
  }
  if ( !(unsigned __int8)sub_B05C30(v4, a2) )
    return 0;
  v6 = *(_QWORD *)(a1 + 48);
  if ( (v6 & 4) != 0 )
    return 0;
  v7 = (_BYTE *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v7[8] & 4) != 0 )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  switch ( v9 )
  {
    case 13:
      if ( (((*(_WORD *)(v8 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        goto LABEL_15;
      break;
    case 46:
      v10 = sub_B14A40(v8);
      if ( (*(_BYTE *)(v10 + 74) & 1) == 0 && *(_QWORD *)(v10 + 128) <= 7u )
        goto LABEL_15;
      break;
    case 10:
      break;
    default:
      goto LABEL_15;
  }
  if ( (*v2 & 8) == 0 )
    return 1;
LABEL_15:
  if ( (*(_WORD *)v2 & 0x1008) == 0 || (*(_BYTE *)(a1 + 28) & 0x7F) == 0x29 )
    return 0;
  return *(_BYTE *)(a1 + 97) >> 7;
}

