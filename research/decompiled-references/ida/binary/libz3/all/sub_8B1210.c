char __fastcall sub_8B1210(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  char v4; // dl
  char result; // al
  __int64 v6; // rbx

  v2 = 232LL * a2;
  v3 = v2 + *(_QWORD *)(a1 + 1592);
  v4 = *(_BYTE *)(v3 + 3);
  if ( (v4 & 0x40) != 0 )
  {
    result = sub_8AEDF0(a1 + 736, v3 + 8, v3 + 72);
    if ( result )
      return result;
    v6 = *(_QWORD *)(a1 + 1592) + v2;
    v4 = *(_BYTE *)(v6 + 3);
    v3 = v6;
  }
  result = 0;
  if ( v4 < 0 )
    return sub_8AEDF0(a1 + 736, v3 + 136, v3 + 8);
  return result;
}

