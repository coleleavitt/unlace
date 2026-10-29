__int64 __fastcall srcview_set_tab_size_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *(_DWORD *)(a2 + 8) != 44 )
    return 6;
  v3 = sub_1F4320(*(_QWORD *)a2);
  if ( !v3 )
    return 6;
  result = 2;
  if ( (*(_BYTE *)(v3 + 216) & 2) != 0 )
    return 6;
  return result;
}
