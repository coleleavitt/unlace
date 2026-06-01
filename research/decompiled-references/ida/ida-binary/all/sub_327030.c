__int64 __fastcall sa_chooser_t__::vfunc_7(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rbx

  if ( a2 >= a1[27] )
    return -1;
  v3 = a1[23];
  if ( v3 )
  {
    if ( !(unsigned __int8)sub_331080(v3) )
      return -1;
  }
  v4 = *(_QWORD *)(a1[26] + 8 * a2);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4);
  if ( (get_flags_ex(v5, 4) & 0x600) == 0x200 )
    return prev_not_tail(v5);
  else
    return v5;
}
