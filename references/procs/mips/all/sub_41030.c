__int64 __fastcall sub_41030(__int64 a1, _BYTE *a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // rdx

  if ( (_WORD)a4 == 0xFFEB )
    return 148;
  if ( (unsigned __int16)a4 <= 0xFFEBu )
  {
    if ( (_WORD)a4 == 21 )
    {
      result = 21;
      if ( (a3 & 0x3FF0000) == 0 )
      {
        v5 = (unsigned __int16)a3 >> 11;
        if ( (unsigned int)v5 <= 5 )
        {
          result = word_5AB08[v5];
          if ( a2 )
          {
            if ( (_WORD)result != 21 )
            {
              a2[41] = 0;
              a2[81] = 0;
              a2[121] = 0;
            }
          }
        }
      }
    }
    else
    {
      result = 31;
      if ( (unsigned __int16)(a4 + 26) >= 5u )
        return a4;
    }
  }
  else
  {
    result = 131;
    if ( (unsigned __int16)a4 > 0xFFEDu )
    {
      if ( (_WORD)a4 == 0xFFF1 )
        return word_5DE60[(a3 >> 6) & 0xF];
      else
        return a4;
    }
  }
  return result;
}
