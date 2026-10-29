__int64 __fastcall sub_5A4954(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // r13d
  int v6; // eax

  if ( *((_DWORD *)a1 + 7) != 3 )
    __assert_fail(
      "allocation_state_ == SINGLE_OBJECT_WITH_ARRAY",
      "./src/client/minidump_file_writer-inl.h",
      0x52u,
      "bool google_breakpad::TypedMDRVA<MDType>::CopyIndexAfterObject(unsigned int, const void*, size_t) [with MDType = u"
      "nsigned int; size_t = long unsigned int]");
  v4 = *a1;
  v5 = *((_DWORD *)a1 + 2);
  v6 = sub_5A5A86();
  return sub_5A8230(v4, (unsigned int)(v5 + v6 + a2 * a4), a3, a4);
}
