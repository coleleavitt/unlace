char __fastcall sub_2050DD0(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned int v3; // edx

  result = 0;
  if ( *(_BYTE *)(a1 + 4) == *(_BYTE *)(a2 + 4) )
  {
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 == *(_DWORD *)(a2 + 16) )
    {
      if ( v3 <= 0x40 )
        return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
      else
        return sub_2205D70(a1 + 8, a2 + 8);
    }
  }
  return result;
}
