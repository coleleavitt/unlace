__int64 __fastcall lsl::Vector<dyld4::InterposeTupleSpecific>::reserve(__int64 result, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(result + 24) / 0x18uLL )
    return lsl::Vector<dyld4::InterposeTupleSpecific>::reserveExact();
  return result;
}
