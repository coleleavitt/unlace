__int64 __usercall dyld4::FileManager::fileRecordForFileID@<X0>(
        dyld4::FileManager *a1@<X0>,
        unsigned __int64 *a2@<X1>,
        dyld4::FileRecord *a3@<X8>)
{
  return dyld4::FileRecord::FileRecord(a3, a1, *a2, a2[1], a2[2]);
}
