__int64 sub_13A5B0()
{
  unsigned __int64 v0; // rbp
  __int64 result; // rax
  __int64 hidden_range; // rdx
  unsigned __int64 *next_hidden_range; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v5[5]; // [rsp+10h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161C80(0, &v4, v5) )
  {
    sub_15E150(0, &v4);
    v0 = v5[0];
    if ( v4 < v5[0] )
    {
      del_hidden_range();
      while ( 1 )
      {
        next_hidden_range = (unsigned __int64 *)get_next_hidden_range();
        if ( !next_hidden_range || *next_hidden_range >= v0 )
          break;
        if ( !(unsigned __int8)del_hidden_range() )
          return 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    hidden_range = get_hidden_range();
    result = 0;
    if ( hidden_range )
      return (unsigned __int8)del_hidden_range();
  }
  return result;
}

