_BOOL8 __fastcall sub_5A84B6(__int64 a1, int a2, const char *a3, size_t a4)
{
  __int64 v4; // rbx
  int v5; // r13d
  int v6; // eax

  if ( *(_DWORD *)(a1 + 32) != 3 )
    __assert_fail(
      "allocation_state_ == SINGLE_OBJECT_WITH_ARRAY",
      "./src/client/minidump_file_writer-inl.h",
      0x52u,
      "bool google_breakpad::TypedMDRVA<MDType>::CopyIndexAfterObject(unsigned int, const void*, size_t) [with MDType = M"
      "DString; size_t = long unsigned int]");
  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = sub_5A8498();
  return sub_5A8230(v4, v5 + v6 + a2 * (int)a4, a3, a4);
}
