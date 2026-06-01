__int64 __fastcall sub_5A50B2(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  int v5; // r12d
  int v6; // eax

  if ( *((_DWORD *)a1 + 12) != 2 )
    __assert_fail(
      "allocation_state_ == ARRAY",
      "./src/client/minidump_file_writer-inl.h",
      0x48u,
      "bool google_breakpad::TypedMDRVA<MDType>::CopyIndex(unsigned int, MDType*) [with MDType = MDRawLinkMap64]");
  v3 = *a1;
  v4 = sub_5A5DB4();
  v5 = *((_DWORD *)a1 + 2);
  v6 = sub_5A5DB4();
  return sub_5A8230(v3, (unsigned int)(v5 + a2 * v6), a3, v4);
}
