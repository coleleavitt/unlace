__int64 __fastcall sub_37A650(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = get_merge_state(a1);
  if ( (result & 3) == 0 )
    return reg_update_strlist("History64", a1, dword_8BCE24, a2, 0);
  return result;
}
