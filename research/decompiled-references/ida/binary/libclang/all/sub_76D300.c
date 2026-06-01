__int64 __fastcall sub_76D300(__int64 a1)
{
  _QWORD **v1; // rsi
  unsigned int v2; // r8d
  __int64 v3; // r9
  char v4; // cl

  v1 = (_QWORD **)(a1 + 24);
  v2 = 0;
  v3 = a1 + 24 + 8LL * *(unsigned int *)(a1 + 4);
  if ( v3 != a1 + 24 )
  {
    do
    {
      v4 = *(_BYTE *)(*(_QWORD *)(**v1++ & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
      v2 |= (2 * ((v4 & 2) != 0)) & 0x1B | (16 * ((v4 & 0x1Fu) > 0xF)) & 0x1B | v4 & 1 | ((v4 & 4) != 0 ? 8 : 0);
    }
    while ( (_QWORD **)v3 != v1 );
  }
  return v2;
}

