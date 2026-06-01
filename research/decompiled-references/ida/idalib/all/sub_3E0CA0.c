__int64 __fastcall sub_3E0CA0(__int64 a1, __int64 tinfo_property4, _QWORD *a3, __int64 a4, __int64 a5)
{
  if ( a5 != -1 )
    tinfo_property4 = get_tinfo_property4(*a3, 297, a5, 0, 0, 0);
  add_dref(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), tinfo_property4, *(unsigned int *)(a1 + 16));
  return 0;
}
