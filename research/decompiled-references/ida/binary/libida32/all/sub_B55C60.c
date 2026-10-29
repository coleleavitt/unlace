char __fastcall sub_B55C60(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x2F )
    return *(_BYTE *)(a1 + 80);
  result = 0;
  if ( (*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v2 )
      return *(_BYTE *)(v2 + 16) == 38;
  }
  return result;
}

