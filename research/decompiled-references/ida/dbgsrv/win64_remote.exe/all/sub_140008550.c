/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008550
// Address: 0x0000000140008550

//----- (0000000140008550) ----------------------------------------------------
bool __fastcall sub_140008550(__int64 a1)
{
  char *FileW; // rax

  FileW = (char *)CreateFileW(*(LPCWSTR *)(a1 + 8), 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  *(_QWORD *)(a1 + 16) = FileW;
  return FileW + 1 != nullptr;
}
