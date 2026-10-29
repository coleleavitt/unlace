bool __fastcall sub_BAE8D0(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = (*(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) >> 3) & 3;
  if ( v2 == 1 )
    return 1;
  if ( v2 )
    return 0;
  return sub_BAE5D0(a1, a2);
}
