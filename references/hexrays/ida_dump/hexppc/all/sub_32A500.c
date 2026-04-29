__int64 __fastcall sub_32A500(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 that; // rbx
  __int64 result; // rax

  if ( a4 >= a5 )
    return 0;
  v7 = a4;
  that = a5;
  if ( a6 )
  {
    do
    {
      that = prev_that(that, v7, sub_1B4790, 0);
      if ( that == -1 )
        return 0;
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64))(*(_QWORD *)a2 + 240LL))(a2, a3, that);
    }
    while ( !(_BYTE)result );
    *a1 = that;
  }
  else
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64))(*(_QWORD *)a2 + 240LL))(a2, a3, v7);
      if ( (_BYTE)result )
        break;
      v7 = next_that(v7, that, sub_1B4790, 0);
      if ( v7 >= that )
        return 0;
    }
    *a1 = v7;
  }
  return result;
}
