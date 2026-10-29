/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407980
// Address: 0x00407980

//----- (00407980) --------------------------------------------------------
bool __thiscall sub_407980(int this)
{
  char *FileW; // eax

  FileW = (char *)CreateFileW(*(LPCWSTR *)(this + 4), 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  *(_DWORD *)(this + 8) = FileW;
  return FileW + 1 != nullptr;
}
