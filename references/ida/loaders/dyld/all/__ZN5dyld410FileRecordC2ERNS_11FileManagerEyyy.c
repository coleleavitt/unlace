dyld4::FileRecord *__fastcall dyld4::FileRecord::FileRecord(
        dyld4::FileRecord *this,
        dyld4::FileManager *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // x1

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = a4;
  *((_QWORD *)this + 3) = dyld4::FileManager::uuidForFileSystem(a2, a4);
  *((_QWORD *)this + 4) = v7;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = a5;
  *((_QWORD *)this + 8) = 0x1FFFFFFFFLL;
  *((_WORD *)this + 36) = 0;
  *((_BYTE *)this + 74) = 1;
  if ( *((_QWORD *)this + 1) && a5 && *((_QWORD *)this + 2) )
    *((_DWORD *)this + 17) = 0;
  return this;
}
