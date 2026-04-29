__int64 __fastcall sub_10C5F0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 i; // rbx

  *a2 = -1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (unsigned int)(*(_DWORD *)i - 29) > 0xC )
    {
      if ( *(_DWORD *)i != 4 || !(unsigned __int8)sub_1196C0(i + 32, a2, 0) || *a2 > 1u )
        return 0;
    }
    else if ( (*(_BYTE *)(i + 4) & 0x10) != 0 )
    {
      return 0;
    }
    if ( (unsigned __int8)sub_11F4A0(i + 64, a3, 0) )
      return i;
  }
  return 0;
}
