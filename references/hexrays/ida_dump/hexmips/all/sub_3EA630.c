unsigned __int8 __fastcall sub_3EA630(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 result; // al
  __int64 v3; // rax

  if ( (unsigned __int16)a1 > 0x25Cu )
  {
    if ( (unsigned __int16)a1 > 0x6E5u )
      return 0;
    if ( (unsigned __int16)a1 > 0x6A9u )
    {
      v3 = 0xC00000000C1807FLL;
      LOWORD(a1) = a1 - 1706;
      return _bittest64(&v3, a1);
    }
    else if ( (unsigned __int16)a1 > 0x3F5u )
    {
      return (unsigned __int16)(a1 - 1129) <= 2u;
    }
    else
    {
      result = 1;
      if ( (unsigned __int16)a1 <= 0x3F1u && (_WORD)a1 != 815 )
        return (unsigned __int16)(a1 - 822) <= 7u;
    }
  }
  else
  {
    if ( (unsigned __int16)a1 > 0x258u )
      return 1;
    if ( (unsigned __int16)a1 <= 0x96u )
    {
      if ( (unsigned __int16)a1 > 0x77u )
      {
        v1 = 2080210431;
        return _bittest64(&v1, (unsigned int)(a1 - 120));
      }
      return 0;
    }
    if ( (_WORD)a1 == 519 )
      return 1;
    if ( (unsigned __int16)a1 > 0x207u )
      return (_WORD)a1 == 538;
    else
      return (unsigned __int16)(a1 - 207) <= 3u;
  }
  return result;
}
