__int64 __fastcall sub_1A130(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int dword; // eax
  __int64 v5; // rbx
  __int64 v6; // rbx

  dword = get_dword(a2);
  v5 = dword;
  if ( dword <= 1 && !(unsigned __int8)get_fixups(0, a2, 4) )
    return -1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a3 + v5);
  if ( !(unsigned __int8)is_loaded(v6) )
    return -1;
  return v6;
}
