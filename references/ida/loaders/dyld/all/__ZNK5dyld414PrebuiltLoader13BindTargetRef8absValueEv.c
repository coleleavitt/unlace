unsigned __int64 __fastcall dyld4::PrebuiltLoader::BindTargetRef::absValue(dyld4::PrebuiltLoader::BindTargetRef *this)
{
  return *(_QWORD *)this & 0x7FFFFFFFFFFFFFFFLL | ((*(_QWORD *)this & 0x7FFFFFFFFFFFFFFFuLL) >> 62 << 63);
}
