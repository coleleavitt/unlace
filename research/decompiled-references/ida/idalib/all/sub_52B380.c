__int64 __fastcall sub_52B380(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 name_ea; // rbx

  name_ea = get_name_ea(-1, a3);
  if ( !sub_4E15C0(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 1672LL), name_ea) )
    return -1;
  return name_ea;
}
