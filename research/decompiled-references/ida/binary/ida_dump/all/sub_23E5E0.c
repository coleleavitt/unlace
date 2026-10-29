__int64 __fastcall sub_23E5E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  char tinfo_property; // al

  if ( *(_DWORD *)(a2 + 8) == 52 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    tinfo_property = get_tinfo_property();
    if ( tinfo_property )
    {
      if ( (unsigned __int8)((tinfo_property & 0xF) - 11) <= 1u )
      {
        copy_tinfo_t();
        sub_255850(a2, v3);
        *(_QWORD *)(a2 + 48) = 0;
        ++*(_DWORD *)(a1 + 64);
        clear_tinfo_t();
      }
    }
  }
  return 0;
}
