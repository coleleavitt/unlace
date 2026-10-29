__int64 __fastcall sub_3DADE0(__int64 a1, __int64 tinfo_property4, _QWORD *a3, __int64 a4, __int64 a5)
{
  if ( a5 != -1 )
    tinfo_property4 = (unsigned int)get_tinfo_property4(*a3, 297, a5, 0, 0, 0);
  add_dref(*(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL), tinfo_property4, *(unsigned int *)(a1 + 16));
  return 0;
}

