__int64 __fastcall sub_22BFB90(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 v2; // rdi

  v1 = *(_BYTE *)(a1 - 16);
  if ( (v1 & 2) != 0 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 - 32) + 8LL);
    if ( v2 )
      return sub_20A0B40(v2);
  }
  else
  {
    v2 = *(_QWORD *)(a1 - 8LL * ((v1 >> 2) & 0xF) - 16 + 8);
    if ( v2 )
      return sub_20A0B40(v2);
  }
  return 0;
}
