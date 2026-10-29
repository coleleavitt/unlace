__int64 __fastcall lsl::Vector<dyld4::RuntimeState::RegisteredDOF>::reserve(__int64 result, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(result + 24) >> 4 )
    return lsl::Vector<dyld4::RuntimeState::RegisteredDOF>::reserveExact();
  return result;
}
