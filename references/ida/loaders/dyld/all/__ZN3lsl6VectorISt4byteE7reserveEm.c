__int64 __fastcall lsl::Vector<std::byte>::reserve(__int64 result, unsigned __int64 a2)
{
  if ( *(_QWORD *)(result + 24) < a2 )
    return lsl::Vector<std::byte>::reserveExact();
  return result;
}
