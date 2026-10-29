__int64 __fastcall sub_5A480C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  if ( !a2 || !a3 )
    __assert_fail(
      "count && length",
      "./src/client/minidump_file_writer-inl.h",
      0x41u,
      "bool google_breakpad::TypedMDRVA<MDType>::AllocateObjectAndArray(size_t, size_t) [with MDType = unsigned int; size"
      "_t = long unsigned int]");
  *(_DWORD *)(a1 + 28) = 3;
  v3 = sub_5A5A86();
  return sub_5A8344(a1, v3 + a3 * a2);
}
