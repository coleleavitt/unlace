_DWORD *__fastcall sub_1B0A070(
        __int64 *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  if ( a2 == 20 )
    return sub_1B08DE0(a1, a3, a4, a5, a6, a7);
  if ( a2 <= 20 )
  {
    if ( a2 != 11 )
    {
      if ( a2 == 12 )
        return sub_1B09F50(a1, a3, a4, a5, a6, a7);
      return sub_1B09470(a1, a3, a4, a5, a6, a7);
    }
    return sub_1B09320(a1, a3, a4, a5, a6, a7);
  }
  else
  {
    if ( a2 != 83 )
    {
      if ( a2 <= 83 )
      {
        if ( a2 == 33 )
          return sub_1AF8BC0(a1, a3, a4, a5, a6, a7);
      }
      else
      {
        if ( a2 == 93 )
          return sub_1B09620(a1, a3, a4, a5, a6, a7);
        if ( a2 == 108 )
          return (_DWORD *)sub_1B09C50(a1, a3, a4, a5, a6, a7);
      }
      return sub_1B09470(a1, a3, a4, a5, a6, a7);
    }
    return sub_1B09070(a1, a3, a4, a5, a6, a7);
  }
}
