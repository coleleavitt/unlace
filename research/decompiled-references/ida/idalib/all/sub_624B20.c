__int64 __fastcall sub_624B20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 i; // rbx

  result = sub_7BE710(a1, a2, -1, 65);
  if ( (int)result > 0 )
  {
    v5 = (unsigned int)(result - 1);
    for ( i = 0; ; i = result )
    {
      if ( sub_7BEA80(a1, a2, 0, i, 83) )
      {
        result = i + 1;
        if ( i == v5 )
          return result;
      }
      else
      {
        sub_7BE7C0(a1, a2, i, a3, 0, 83);
        result = i + 1;
        if ( i == v5 )
          return result;
      }
    }
  }
  return result;
}
