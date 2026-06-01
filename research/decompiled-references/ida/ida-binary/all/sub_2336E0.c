bool __fastcall sub_2336E0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( !a4 )
    return 0;
  if ( a3 == -1 || (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) != 0 || !dbg )
    return 0;
  return sub_1E73C0(0x3EFu, a1, a2, a3, (unsigned int)dword_8CC428, sub_23F5C0, a4) == 1;
}
