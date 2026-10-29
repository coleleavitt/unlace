__int64 __fastcall lsl::Vector<unsigned int>::reserve(__int64 result, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(result + 24) >> 2 )
    return lsl::Vector<unsigned int>::reserveExact();
  return result;
}
