__int64 __fastcall lsl::Vector<dyld4::Atlas::Mapper::Mapping>::reserve(__int64 result, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(result + 24) >> 5 )
    return lsl::Vector<dyld4::Atlas::Mapper::Mapping>::reserveExact();
  return result;
}
