__int64 __fastcall sub_2031EC0(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdi

  v2 = *(_BYTE *)(a1 - 16);
  if ( (v2 & 2) != 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 - 32) + 8LL * a2);
    if ( v3 )
      return sub_20A0B40(v3);
  }
  else
  {
    v3 = *(_QWORD *)(a1 - 8LL * ((v2 >> 2) & 0xF) - 16 + 8LL * a2);
    if ( v3 )
      return sub_20A0B40(v3);
  }
  return 0;
}
