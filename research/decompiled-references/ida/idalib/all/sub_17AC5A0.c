bool __fastcall sub_17AC5A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  bool result; // al
  __int64 v8; // rax
  __int64 v9; // rdx

  v2 = *(_QWORD *)(a1 + 104);
  if ( (((unsigned __int8)v2 | (unsigned __int8)(v2 >> 1)) & 1) != 0 )
    return 0;
  v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCLL);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = v3[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3[2] & 4) != 0 )
      v4 = *(_QWORD *)(v4 + 8);
    v5 = *(_BYTE *)(v4 + 8) & 0x7F;
    if ( (unsigned __int8)v5 > 0x12u )
      break;
    if ( ((1LL << v5) & 0x40182) == 0 )
      goto LABEL_7;
LABEL_10:
    v8 = v3[13];
    if ( (v8 & 3) == 0 )
    {
      v3 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v3 )
        continue;
    }
    return 0;
  }
  v5 = ((_BYTE)v5 + 94) & 0x7F;
  if ( (unsigned __int8)v5 <= 5u )
    goto LABEL_10;
LABEL_7:
  *a2 = v3;
  v6 = *(_QWORD *)(v3[6] & 0xFFFFFFFFFFFFFFF0LL);
  result = 1;
  if ( *(_BYTE *)(v6 + 16) != 26 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    result = 0;
    if ( *(_BYTE *)(v9 + 16) == 26 )
      return sub_F63050(v6, a2, v9, v5) != 0;
  }
  return result;
}
