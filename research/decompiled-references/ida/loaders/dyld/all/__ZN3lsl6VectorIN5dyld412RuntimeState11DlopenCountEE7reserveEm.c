__int64 __fastcall lsl::Vector<dyld4::RuntimeState::DlopenCount>::reserve(__int64 result, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(result + 24) >> 4 )
    return lsl::Vector<dyld4::RuntimeState::DlopenCount>::reserveExact();
  return result;
}
