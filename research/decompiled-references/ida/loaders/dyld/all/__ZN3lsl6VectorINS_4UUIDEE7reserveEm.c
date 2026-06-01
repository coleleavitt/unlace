__int64 __fastcall lsl::Vector<lsl::UUID>::reserve(__int64 result, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(result + 24) >> 4 )
    return lsl::Vector<lsl::UUID>::reserveExact();
  return result;
}
