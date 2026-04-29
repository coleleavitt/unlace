__int64 __fastcall sub_25FAB0(__int64 *a1, unsigned __int64 a2, __int64 a3, double a4)
{
  __int16 flags; // r13
  unsigned int v6; // ebp
  const char *v8; // rdx

  flags = get_flags_ex(a2, 4);
  v6 = (unsigned __int8)is_spec_ea(a2) == 0 ? 8 : 34;
  if ( (flags & 0xC000) == 0 && (flags & 0x600) != 0x200 )
    set_dummy_name(-1, a2);
  if ( get_ea_name(a1, a2, 0, 0) <= 0 )
  {
    v8 = "0x";
    if ( a2 <= 9 )
      v8 = (const char *)&unk_405793;
    sub_67E30(a1, (__int64)"MEMORY[%s%a]", v8, a4);
    return 18;
  }
  else
  {
    calc_c_cpp_name(a1, *a1, a3, 1);
    return v6;
  }
}
