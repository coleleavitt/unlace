__int64 __fastcall sub_5FA1B0(__int64 a1, __int64 a2, __int64 a3, __m128i a4, double a5)
{
  unsigned int v5; // ebp
  unsigned __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v7[0] = 0;
  if ( (unsigned __int8)sub_5F9490(a1, v7, a3, 0, 0, a4, a5) )
  {
    if ( !(unsigned __int8)tinfo_t__build_anon_type_name(a2, v7) )
    {
      if ( !under_debugger )
        interr(872);
      BUG();
    }
    v5 = 0;
  }
  else
  {
    v5 = -1;
  }
  clear_tinfo_t(v7);
  return v5;
}
