bool __fastcall sub_1A7C010(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  __int64 v3; // rdx
  unsigned int v4; // ecx

  v1 = *(unsigned int *)(a1 + 10152);
  result = 0;
  if ( (_DWORD)v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v1 - 40);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 36);
      if ( v4 <= 8 )
        return ((1LL << v4) & 0x1BC) != 0;
    }
  }
  return result;
}
