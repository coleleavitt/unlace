__int64 __fastcall strings_chooser_t__::vfunc_4(__int64 a1)
{
  __int64 strlist_api; // rax

  strlist_api = get_strlist_api();
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)strlist_api + 64LL))(strlist_api, a1 + 208);
  return 1;
}
