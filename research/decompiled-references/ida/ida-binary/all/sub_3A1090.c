__int64 __fastcall sub_3A1090(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &tchooser_persistence_helper_t___vtable;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 536LL))(a2, a1 + 8);
}
