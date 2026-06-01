__int64 __fastcall sub_5A462C(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( !a2 )
    __assert_fail(
      "count",
      "./src/client/minidump_file_writer-inl.h",
      0x39u,
      "bool google_breakpad::TypedMDRVA<MDType>::AllocateArray(size_t) [with MDType = MDRawDirectory; size_t = long unsigned int]");
  *(_DWORD *)(a1 + 36) = 2;
  v2 = sub_5A5785();
  return sub_5A8344(a1, v2 * a2);
}
