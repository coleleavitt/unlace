unsigned __int64 __fastcall sub_77D020(__int64 a1)
{
  _BYTE *v1; // rax
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x29 )
    return 0;
  v1 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
  {
    v2 = 0;
    if ( ((*(_BYTE *)(*(_QWORD *)v1 + 8LL) + 72) & 0x7Fu) > 3 )
      return 0;
  }
  else
  {
    v2 = 0;
    if ( ((v1[8] + 72) & 0x7Fu) > 3 )
      return 0;
  }
  v4 = sub_798D40(a1);
  v5 = sub_6BB950(v4, a1);
  if ( !v5 )
    return 0;
  if ( (v5 & 4) != 0 )
    return v5 & 0xFFFFFFFFFFFFFFF8LL;
  return v2;
}

