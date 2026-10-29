__int64 __fastcall sub_7799B0(__int64 a1)
{
  _BYTE *v1; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 *v5; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x29 )
    return 0;
  v1 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
  {
    if ( ((*(_BYTE *)(*(_QWORD *)v1 + 8LL) + 72) & 0x7Fu) > 3 )
      return 0;
  }
  else if ( ((v1[8] + 72) & 0x7Fu) > 3 )
  {
    return 0;
  }
  v3 = sub_798D40(a1);
  v4 = sub_6BB950(v3, a1);
  if ( !v4 )
    return 0;
  if ( (v4 & 4) == 0 )
    return 0;
  v5 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v5 )
    return 0;
  return ((unsigned int)(*v5 >> 1) & 3) + 1;
}

