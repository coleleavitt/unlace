__int64 sub_144CD0()
{
  __int64 result; // rax

  result = get_merge_state();
  if ( (result & 3) == 0 )
    return reg_update_strlist();
  return result;
}

