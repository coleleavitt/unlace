__int64 __fastcall lsl::Vector<char const*>::reserve(__int64 result, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(result + 24) >> 3 )
    return lsl::Vector<char const*>::reserveExact();
  return result;
}
