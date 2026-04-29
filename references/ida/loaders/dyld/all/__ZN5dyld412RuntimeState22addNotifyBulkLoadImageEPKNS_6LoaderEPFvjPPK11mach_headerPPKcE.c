__int64 __fastcall dyld4::RuntimeState::addNotifyBulkLoadImage(
        dyld4::RuntimeState *this,
        const dyld4::Loader *a2,
        void (__fastcall *a3)(unsigned int, const mach_header **, const char **))
{
  __int64 result; // x0
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x9

  result = lsl::Vector<void (*)(unsigned int,mach_header const**,char const**)>::reserve(
             (char *)this + 496,
             *((_QWORD *)this + 64) + 1LL);
  v7 = *((_QWORD *)this + 63);
  v8 = *((_QWORD *)this + 64);
  *((_QWORD *)this + 64) = v8 + 1;
  *(_QWORD *)(v7 + 8 * v8) = a3;
  if ( a2 )
  {
    if ( (*((_WORD *)a2 + 2) & 0x20) == 0 )
    {
      result = lsl::Vector<dyld4::Loader const*>::reserve((char *)this + 760, *((_QWORD *)this + 97) + 1LL);
      v9 = *((_QWORD *)this + 96);
      v10 = *((_QWORD *)this + 97);
      *((_QWORD *)this + 97) = v10 + 1;
      *(_QWORD *)(v9 + 8 * v10) = a2;
    }
  }
  return result;
}
