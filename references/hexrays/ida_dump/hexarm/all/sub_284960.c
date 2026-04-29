char __fastcall sub_284960(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // rdx
  char result; // al
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == 57 )
  {
    if ( *(_QWORD *)(a1 + 24) == a2 )
      return 0;
    v5 = sub_284720(a1, a2, nullptr);
    return sub_29D040(v5 + 64);
  }
  if ( v2 > 0x39 )
  {
    if ( v2 - 73 > 3 )
      return v2 == 49 || v2 - 17 <= 1;
    return *(_QWORD *)(a1 + 24) == a2;
  }
  if ( v2 == 16 )
    return *(_QWORD *)(a1 + 24) == a2;
  if ( v2 - 22 > 1 )
    return v2 == 49 || v2 - 17 <= 1;
  v3 = *(_QWORD *)(a1 + 24);
  if ( a2 == v3 )
    v3 = *(_QWORD *)(a1 + 32);
  result = 0;
  if ( *(_DWORD *)(v3 + 8) == 61 )
    return sub_255DF0(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48)) == 0;
  return result;
}
