__int64 __fastcall sub_5A4B9A(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  if ( !a2 || !a3 )
    __assert_fail(
      "count && length",
      "./src/client/minidump_file_writer-inl.h",
      0x41u,
      "bool google_breakpad::TypedMDRVA<MDType>::AllocateObjectAndArray(size_t, size_t) [with MDType = MDCVInfoPDB70; siz"
      "e_t = long unsigned int]");
  *(_DWORD *)(a1 + 52) = 3;
  v3 = sub_5A41A7();
  return sub_5A8344(a1, v3 + a3 * a2);
}
