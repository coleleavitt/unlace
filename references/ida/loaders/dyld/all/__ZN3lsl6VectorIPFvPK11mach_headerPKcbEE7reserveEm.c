__int64 __fastcall lsl::Vector<void (*)(mach_header const*,char const*,bool)>::reserve(
        __int64 result,
        unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(result + 24) >> 3 )
    return lsl::Vector<void (*)(mach_header const*,char const*,bool)>::reserveExact();
  return result;
}
