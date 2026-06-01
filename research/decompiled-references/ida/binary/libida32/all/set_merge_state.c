void __fastcall set_merge_state(int a1)
{
  if ( dword_2CA1938 != a1 )
  {
    if ( (a1 & 0xFFFFFFFB) == 0 )
      sub_443AA0((__int64)&xmmword_2CA1760);
    dword_2CA1938 = a1;
  }
}

