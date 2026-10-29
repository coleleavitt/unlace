__int64 __fastcall sub_106EDB0(__int64 a1, unsigned __int8 a2)
{
  if ( a2 == 3 )
    return 3;
  if ( a2 <= 3u )
  {
    if ( a2 != 1 )
      return sub_102BBF0(a1, a2);
  }
  else if ( (unsigned __int8)(a2 - 5) > 1u )
  {
    return sub_102BBF0(a1, a2);
  }
  return 1;
}
