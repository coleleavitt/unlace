bool __fastcall sub_C16530(__int64 *a1)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  unsigned int v3; // ebx
  bool result; // al

  v1 = *((_DWORD *)a1 + 2);
  v2 = *a1;
  v3 = v1 - 1;
  if ( v1 <= 0x40 )
    return 1LL << v3 == v2;
  result = 0;
  if ( ((1LL << v3) & *(_QWORD *)(v2 + 8LL * (v3 >> 6))) != 0 )
    return (unsigned int)sub_22068B0() == v3;
  return result;
}
