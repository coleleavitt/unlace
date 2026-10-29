__int64 __fastcall sub_134510(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx

  if ( a2 >= a1[27] || a1[23] && !(unsigned __int8)sub_13BCE0() )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(a1[26] + 8 * a2);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 128LL))(v2);
  if ( (get_flags_ex() & 0x600) == 0x200 )
    return prev_not_tail();
  else
    return v3;
}

