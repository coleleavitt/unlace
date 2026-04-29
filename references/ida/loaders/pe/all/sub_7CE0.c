__int64 __fastcall sub_7CE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = create_strlit();
  if ( !(_BYTE)result )
  {
    if ( !a2 )
      get_max_strlit_length();
    del_items();
    return create_strlit();
  }
  return result;
}
