__int64 __fastcall sub_4ED5E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  _DWORD *v5; // rdx

  v2 = sub_1673B10(a1 + 48, a2);
  if ( (_BYTE)v2 )
    return v2;
  v4 = sub_1625010(a1 + 72);
  v5 = *(_DWORD **)(a2 + 24);
  if ( !v5 || v4 != *v5 )
    return v2;
  LOBYTE(v2) = v5[1] == 1;
  return v2;
}

