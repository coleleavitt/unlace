__int64 __fastcall sub_13FCE90(__int64 a1, _BYTE *a2, size_t a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax

  if ( a4 )
  {
    result = sub_FF2620(a4, (__int64)a2, a3);
    if ( result )
      return result;
    return sub_13FCD90(a1, a2, a3, a4, a5, a6);
  }
  result = sub_13F8CB0(a1, (__int64)a2, a3);
  if ( !result )
    return sub_13FCD90(a1, a2, a3, a4, a5, a6);
  return result;
}
