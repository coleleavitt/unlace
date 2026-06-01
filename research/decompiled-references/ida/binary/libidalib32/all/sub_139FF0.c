__int64 sub_139FF0()
{
  unsigned int v0; // ebp
  __int64 result; // rax
  __int64 hidden_range; // rdx
  unsigned int *next_hidden_range; // rax
  unsigned int v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161360(0, &v4, &v5) )
  {
    sub_15D870(0);
    v0 = v5;
    if ( v4 < v5 )
    {
      del_hidden_range();
      while ( 1 )
      {
        next_hidden_range = (unsigned int *)get_next_hidden_range();
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

