__int64 __fastcall sub_B5B90(int a1, double a2, __m128i a3)
{
  __int64 result; // rax

  result = 0;
  if ( a1 >= 0 )
  {
    dword_250A54 = a1;
    if ( dbg )
    {
      if ( (unsigned int)sub_9E0A0() )
        sub_9E0A0();
    }
    sub_B4120((__int64)xmmword_250E60, (unsigned int)a1, a2, a3);
    mark_builtin_widgets();
    return 1;
  }
  return result;
}

