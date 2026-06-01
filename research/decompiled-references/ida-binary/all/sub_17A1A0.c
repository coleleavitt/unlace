__int64 __fastcall sub_17A1A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  char tinfo_property; // al

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 != 25 && v2 != 58 )
    return 3;
  tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 208) + 8LL), 2);
  v3 = 7;
  if ( (tinfo_property & 0x3F) == 0xD
    && ((*(_BYTE *)(a2 + 80) & 1) != 0 || *(_QWORD *)(*(_QWORD *)(a2 + 208) + 16LL) <= 0xFFFFFFFFFFFFFFFDLL) )
  {
    return 3;
  }
  return v3;
}
