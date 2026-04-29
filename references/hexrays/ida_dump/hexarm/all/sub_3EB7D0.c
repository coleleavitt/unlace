char __fastcall sub_3EB7D0(__int64 a1, int a2)
{
  char result; // al
  unsigned int v3; // esi

  result = *(_BYTE *)(a1 + 145);
  if ( result )
  {
    v3 = a2 - 8;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) == 8 )
      return v3 <= 0x107;
    else
      return v3 <= 0x3F;
  }
  return result;
}
