__int64 __fastcall lsl::Vector<int>::reserve(__int64 result, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(result + 24) >> 2 )
    return lsl::Vector<int>::reserveExact();
  return result;
}
