bool __fastcall sub_9C3E70(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  bool result; // al
  __int64 v4; // rax
  __int64 v5; // r13
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rdx

  v2 = sub_C9AC10(a2);
  if ( (*(_BYTE *)(a2 + 26) & 0xFD) == 1 )
    return *a1 == v2;
  v4 = sub_C9AC70(a2);
  if ( !v4 )
    return 0;
  v5 = a1[1];
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v4 + 40) & 7) != 0 )
      v6 = 0;
    if ( v5 == v6 )
      break;
    v4 = sub_BAB630(v4);
    if ( !v4 )
      return 0;
  }
  v7 = a1 + 2;
  if ( v2 == *v7 )
    return a1 + 4 != v7;
  v7 = a1 + 3;
  result = 0;
  if ( v2 == *v7 )
    return a1 + 4 != v7;
  return result;
}
