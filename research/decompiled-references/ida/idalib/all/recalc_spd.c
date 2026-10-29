__int64 __fastcall recalc_spd(unsigned __int64 a1)
{
  unsigned __int64 *func; // rax

  func = (unsigned __int64 *)get_func(a1);
  if ( func )
    return sub_5BA9E0(*(__m128i **)(qword_2CCB598 + 1672), func, a1);
  else
    return 0;
}
