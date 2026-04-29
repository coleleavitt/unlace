__int64 __fastcall lsl::EphemeralAllocator::deallocate_buffer(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD *)(result + 40) -= a3;
  return result;
}
