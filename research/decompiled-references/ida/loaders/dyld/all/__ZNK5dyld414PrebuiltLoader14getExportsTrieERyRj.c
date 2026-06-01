bool __fastcall dyld4::PrebuiltLoader::getExportsTrie(
        dyld4::PrebuiltLoader *this,
        unsigned __int64 *a2,
        unsigned int *a3)
{
  unsigned int v3; // w8

  *a2 = *((_QWORD *)this + 5);
  v3 = *((_DWORD *)this + 12);
  *a3 = v3;
  return v3 != 0;
}
