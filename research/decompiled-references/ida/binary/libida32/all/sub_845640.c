__int64 __fastcall sub_845640(unsigned __int8 *a1)
{
  __int64 v1; // rax
  unsigned __int8 *v2; // rcx
  char v4; // cl

  v1 = *a1;
  if ( (unsigned __int8)v1 > 0x61u )
  {
    if ( (unsigned __int8)v1 <= 0x6Fu )
      return (__int64)&a1[byte_239F9C0[v1]];
    v4 = v1 - 114;
    if ( (unsigned __int8)(v1 - 114) > 0x3Au )
      return 0;
    if ( ((1LL << v4) & 0x6FAABFFFFFFFFBFLL) != 0 )
      return (__int64)&a1[byte_239F9C0[v1]];
    if ( ((1LL << v4) & 0x5540000000000LL) != 0 )
    {
      return (__int64)&a1[a1[1] + 3];
    }
    else
    {
      if ( (_BYTE)v1 != 120 )
        return 0;
      return (__int64)&a1[(unsigned __int16)__ROL2__(*(_WORD *)(a1 + 5), 8)];
    }
  }
  else
  {
    if ( (unsigned __int8)v1 <= 0x54u )
    {
      if ( (unsigned __int8)v1 <= 0xEu )
      {
        v2 = a1 + 1;
        if ( (_BYTE)v1 == 14 )
          return (__int64)v2;
        if ( !(_BYTE)v1 )
          return 0;
      }
      return (__int64)&a1[byte_239F9C0[v1]];
    }
    return (__int64)&a1[byte_239F9C0[v1] - 1];
  }
}

