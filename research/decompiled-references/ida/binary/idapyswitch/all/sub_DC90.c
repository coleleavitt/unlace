__int64 __fastcall sub_DC90(__int64 *a1, int *a2, int *a3, int *a4, unsigned __int8 (__fastcall *a5)(int *, int *))
{
  if ( a5(a2, a3) )
  {
    if ( !a5(a3, a4) )
    {
      if ( a5(a2, a4) )
        return sub_DA00(a1, a4);
      return sub_DA00(a1, a2);
    }
    return sub_DA00(a1, a3);
  }
  if ( !a5(a2, a4) )
  {
    if ( a5(a3, a4) )
      return sub_DA00(a1, a4);
    return sub_DA00(a1, a3);
  }
  return sub_DA00(a1, a2);
}

