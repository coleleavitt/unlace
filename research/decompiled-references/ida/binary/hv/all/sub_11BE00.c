unsigned __int64 __fastcall sub_11BE00(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        __int64 *a7,
        char a8)
{
  unsigned __int64 v10; // rsi
  unsigned __int64 result; // rax

  v10 = a3 - (_QWORD)a2;
  if ( a6 )
    result = sub_11BC70((__int64)a2, v10, a4, a5, a7, a8);
  else
    result = sub_11A9F0(a2, v10, a4, a5, a7, a8);
  if ( result <= 0xFFFFFFFFFFFFFF88LL && result )
  {
    result = (unsigned __int64)a2 + result - a1;
    if ( result >= a5 - 1 )
      return 0;
  }
  return result;
}

