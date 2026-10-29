__int64 __fastcall sub_4B7880(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = get_cmt(a1, a2, 0);
  if ( result <= 0 )
  {
    result = get_cmt(a1, a2, 1);
    if ( result <= 0 )
      return get_ea_name(a1, a2, 0, 0);
  }
  return result;
}
