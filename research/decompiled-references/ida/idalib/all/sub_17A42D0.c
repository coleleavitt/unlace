__int64 __fastcall sub_17A42D0(unsigned __int64 *a1)
{
  unsigned __int8 v1; // cl
  __int64 v3; // rdi
  char v4; // al
  __int64 result; // rax
  __int64 v6; // rdi
  char v7; // al

  v1 = *(_BYTE *)(*a1 + 8) & 0x7F;
  if ( v1 > 0x12u )
  {
    result = 0;
    if ( ((v1 + 94) & 0x7Fu) > 5 )
      return result;
  }
  else if ( ((1LL << v1) & 0x40182) == 0 )
  {
    return 0;
  }
  if ( !(unsigned __int8)sub_B8E180(*a1) )
  {
    v3 = *a1;
    v4 = *(_BYTE *)(*a1 + 8) & 0x7F;
    if ( v4 != 0 && v4 != 24 )
    {
      do
      {
        if ( v4 == 4 )
          break;
        v6 = *(_QWORD *)(sub_B8C1B0(v3) + 16);
        v3 = (v6 & 4) != 0 ? *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL) : v6 & 0xFFFFFFFFFFFFFFF8LL;
        v7 = *(_BYTE *)(v3 + 8);
        *a1 = v3;
        v4 = v7 & 0x7F;
      }
      while ( v4 != 24 && v4 != 0 );
    }
  }
  return 1;
}
