dyld4::FileRecord *__fastcall dyld4::FileRecord::operator=(dyld4::FileRecord *a1, dyld4::FileRecord *a2)
{
  dyld4::FileRecord::swap(a1, a2);
  return a1;
}
