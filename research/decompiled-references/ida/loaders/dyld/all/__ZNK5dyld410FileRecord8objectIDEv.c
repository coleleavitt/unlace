__int64 __fastcall dyld4::FileRecord::objectID(dyld4::FileRecord *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 1);
  if ( !result )
  {
    dyld4::FileRecord::stat((__int64)this);
    return *((_QWORD *)this + 1);
  }
  return result;
}
