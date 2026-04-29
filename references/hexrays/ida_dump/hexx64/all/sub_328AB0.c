__int64 __fastcall sub_328AB0(__int64 a1, _QWORD *a2, __int64 a3)
{
  if ( (unsigned int)lexcompare_tinfo(*a2, **(_QWORD **)(a1 + 8), 0) )
    return 0;
  else
    return func_has_stkframe_hole(*(_QWORD *)(a1 + 16), a3);
}
