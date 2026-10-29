__int64 __fastcall sub_67DC50(__int64 a1)
{
  if ( (a1 & 0xF00000) == 0xC00000 || (a1 & 0xF000000) == 0xC000000 )
    return 1;
  else
    return is_off(a1, 15);
}
