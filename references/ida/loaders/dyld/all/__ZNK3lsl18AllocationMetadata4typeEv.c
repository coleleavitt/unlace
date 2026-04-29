__int64 __fastcall lsl::AllocationMetadata::type(lsl::AllocationMetadata *this)
{
  return *(_QWORD *)this >> 62;
}
