unsigned __int64 __fastcall sub_1AC72E0(
        __int64 *a1,
        __int64 a2,
        char a3,
        char a4,
        _WORD *a5,
        int a6,
        double a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  unsigned __int64 result; // rax
  unsigned int v13; // eax

  if ( a4 == 1 )
  {
    result = 1;
    if ( a5 )
      return sub_1AC5100(a1, (unsigned __int64)a5, a7);
  }
  else if ( a4 )
  {
    if ( a4 == 2 )
    {
      if ( (*a5 & 0x1FF) == 0x19 )
      {
        return (unsigned __int64)a5;
      }
      else
      {
        v13 = sub_EEB7E0((unsigned __int64)a5, a2, a7);
        return sub_1AA2500(a1, 20, 29, v13, (__int64)a5);
      }
    }
    else
    {
      return sub_1AC7380((_DWORD)a1, a2, a3, a4, (_DWORD)a5, a6, a8, a9, a10, a11);
    }
  }
  else
  {
    return sub_1AC6E80(a1, (unsigned __int64)a5, 0, 29, a2, a3, a7);
  }
  return result;
}
