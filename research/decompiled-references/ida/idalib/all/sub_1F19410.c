__int64 *__fastcall sub_1F19410(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int *v3; // rsi
  int v4; // eax

  v2 = a2 & 7;
  if ( v2 == 7 )
  {
    v3 = (int *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
    v4 = 3;
    if ( (unsigned int)*v3 <= 3 )
      v4 = *v3;
    v2 = v4 + 8;
  }
  if ( v2 == 6 )
    return (__int64 *)sub_1EEDED0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), (_QWORD *)(a1 + 32), (_DWORD *)(a1 + 24));
  if ( v2 > 6 )
  {
    if ( v2 == 9 )
      return (__int64 *)(unsigned int)sub_1EE7490(a1);
  }
  else if ( v2 >= 3 )
  {
    return sub_1F19370(a1);
  }
  return nullptr;
}
