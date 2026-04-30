__int64 __fastcall sub_377710(__int64 a1, __int64 a2)
{
  __int64 not_tail; // rbx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 func; // rax

  not_tail = a2;
  if ( (get_flags_ex(a2, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(a2);
  v3 = get_flags_ex(not_tail, 4) & 0x600;
  if ( v3 == 1536 )
  {
    func = get_func(not_tail);
    if ( func )
      return *(_QWORD *)func;
    return -1;
  }
  result = not_tail;
  if ( v3 != 1024 )
    return -1;
  return result;
}
