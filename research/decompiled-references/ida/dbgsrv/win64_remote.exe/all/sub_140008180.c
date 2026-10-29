/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008180
// Address: 0x0000000140008180

//----- (0000000140008180) ----------------------------------------------------
bool __fastcall sub_140008180(__int64 a1, LARGE_INTEGER a2, void *a3, DWORD a4, DWORD *lpNumberOfBytesRead)
{
  void *v7; // rcx

  v7 = *(void **)(a1 + 16);
  return v7 != (void *)-1LL
      && SetFilePointerEx(v7, a2, nullptr, 0)
      && ReadFile(*(HANDLE *)(a1 + 16), a3, a4, lpNumberOfBytesRead, nullptr);
}
