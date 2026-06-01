bool __fastcall sub_C32C0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  if ( !a4 )
    return 0;
  if ( a3 == -1 || (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 || !dbg )
    return 0;
  return sub_9E220() == 1;
}

