__int64 __fastcall sub_B6220(int a1, double a2, __m128i a3)
{
  __int64 result; // rax

  result = 0;
  if ( a1 >= 0 )
  {
    qword_251AD8 = a1;
    if ( dbg )
    {
      if ( (unsigned int)sub_9E1E0() )
        sub_9E1E0();
    }
    sub_B47A0((__int64)xmmword_251F20, (unsigned int)a1, a2, a3);
    mark_builtin_widgets();
    return 1;
  }
  return result;
}

