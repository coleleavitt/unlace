unsigned __int8 __fastcall sub_7EF60(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int8 result; // al
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax

  v2 = *(unsigned __int16 *)(a1 + 248);
  result = 0;
  v4 = *(unsigned __int16 *)(a1 + 248);
  if ( (_WORD)v2 != 1163 )
  {
    v5 = a1 + 264;
    v6 = a1 + 304;
    result = 1;
    if ( v5 == a2 )
      v5 = v6;
    if ( *(_BYTE *)(v5 + 1) == 1 && (*(_BYTE *)(v5 + 4) & 8) != 0 && *(_WORD *)(v5 + 6) <= 0x1Cu )
    {
      result = *(_BYTE *)(a2 + 5) == 8 || (unsigned __int8)(*(_BYTE *)(a2 + 5) - 16) <= 1u;
      if ( !result )
      {
        if ( (unsigned __int16)(v2 - 152) > 0x31u )
        {
          if ( (unsigned __int16)(v2 - 545) <= 0xEu )
          {
            v8 = 16659;
            return !_bittest64(&v8, (unsigned int)(v2 - 545));
          }
          if ( (unsigned int)(v2 - 351) <= 0x9E || (unsigned int)(v2 - 519) <= 0x66 )
            return 1;
        }
        else
        {
          v7 = 0x3000000003C0FLL;
          result = _bittest64(&v7, (unsigned int)(v2 - 152));
          if ( result )
            return result;
        }
        result = v2 > 767 || (unsigned int)(v2 - 636) <= 0x45;
        if ( result )
          return result;
        if ( (unsigned __int16)v4 <= 0x275u )
        {
          if ( (unsigned __int16)v4 <= 0x273u && (_WORD)v4 != 133 )
          {
            if ( (unsigned __int16)v4 > 0x85u )
              return (_WORD)v4 == 594;
            result = 1;
            if ( (_WORD)v4 != 45 )
              return (unsigned __int16)(v4 - 125) <= 1u;
            return result;
          }
          return 1;
        }
        LOWORD(v4) = v4 - 700;
        if ( (unsigned __int16)v4 <= 0xBu )
        {
          v9 = 2113;
          return _bittest64(&v9, v4);
        }
      }
    }
  }
  return result;
}
