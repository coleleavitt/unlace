char __fastcall sub_AF31B0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r13d
  unsigned __int64 v6; // rsi
  char result; // al
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi

  v5 = sub_E90000(a2);
  if ( v5 != (unsigned int)sub_E90000(a3) )
    return 0;
  v6 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( ((*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0) != ((*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0)
    || v6 && !(unsigned __int8)sub_AF31B0(a1, v6, *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL) )
  {
    return 0;
  }
  switch ( sub_E90000(a2) )
  {
    case 0LL:
      if ( (*(_BYTE *)(a3 + 8) & 6) != 0 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 6) != 0 )
          return 1;
        v13 = *(_QWORD *)(a2 + 16);
        v12 = 0;
      }
      else
      {
        v12 = *(_QWORD *)(a3 + 16);
        result = v12 == 0;
        if ( (*(_BYTE *)(a2 + 8) & 6) != 0 )
          return result;
        v13 = *(_QWORD *)(a2 + 16);
        if ( v13 && v12 )
          return sub_AEB2F0(v13, v12);
      }
      result = v13 == v12;
      break;
    case 1LL:
      v10 = sub_E90060(a3);
      v11 = sub_E90060(a2);
      return sub_AEDD20(a1, v11, v10);
    case 2LL:
      v10 = sub_E90090(a3);
      v11 = sub_E90090(a2);
      return sub_AEDD20(a1, v11, v10);
    case 3LL:
      v8 = 0;
      if ( ((*(__int64 *)(a3 + 8) >> 1) & 3) == 2 )
        v8 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      v9 = 0;
      if ( ((*(__int64 *)(a2 + 8) >> 1) & 3) == 2 )
        v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      return sub_AF1C90(a1, v9, v8);
    case 4LL:
      return 1;
    case 5LL:
      v10 = sub_E900C0(a3);
      v11 = sub_E900C0(a2);
      return sub_AEDD20(a1, v11, v10);
    default:
      return 0;
  }
  return result;
}
