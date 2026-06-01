__int64 __fastcall sub_1349F0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  if ( a2 >= a1[27] || a1[23] && !(unsigned __int8)sub_13C2E0() )
    return -1;
  v2 = *(_QWORD *)(a1[26] + 8 * a2);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 128LL))(v2);
  if ( (get_flags_ex() & 0x600) == 0x200 )
    return prev_not_tail();
  else
    return v3;
}

