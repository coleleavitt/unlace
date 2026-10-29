__int64 __fastcall sub_19258C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int8 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rcx

  if ( (_WORD)a4 == 38 )
  {
    v8 = 3;
    return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
  }
  if ( (unsigned __int16)a4 > 0x26u )
  {
    if ( (_WORD)a4 == 201 )
    {
      v8 = 12;
      return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
    }
    if ( (unsigned __int16)a4 > 0xC9u )
    {
      if ( (_WORD)a4 == 204 )
      {
        v8 = 11;
        return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
      }
      if ( (_WORD)a4 == 207 )
      {
        v8 = 10;
        return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
      }
    }
    else
    {
      if ( (_WORD)a4 == 40 )
      {
        v8 = 8;
        return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
      }
      if ( (_WORD)a4 == 41 )
      {
        v8 = 9;
        return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
      }
    }
  }
  else
  {
    if ( (_WORD)a4 == 33 )
    {
      v8 = 6;
      return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
    }
    if ( (unsigned __int16)a4 > 0x21u )
    {
      if ( (_WORD)a4 == 34 )
      {
        v8 = 2;
        return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
      }
      if ( (_WORD)a4 == 36 )
      {
        v8 = 7;
        return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
      }
    }
    else
    {
      if ( (_WORD)a4 == 28 )
      {
        v8 = 4;
        return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
      }
      if ( (_WORD)a4 == 31 )
      {
        v8 = 5;
        return sub_1925670(a1, a2, a3, v8, a5, a6, a7, a8);
      }
    }
  }
  return sub_19259C0(a1, a2, a3, a4, a5, a6);
}
