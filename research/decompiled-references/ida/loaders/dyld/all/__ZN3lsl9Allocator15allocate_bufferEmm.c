__int64 __fastcall lsl::Allocator::allocate_buffer(lsl::Allocator *this, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  unsigned __int64 v5; // x9

  v3 = 0;
  v4 = 16;
  if ( a3 <= 0x10 )
    a3 = 16;
  if ( a2 > 0x10 )
    v4 = a2;
  v5 = (v4 + a3 - 1) & -(__int64)a3;
  while ( 2048LL << lsl::AllocationMetadata::granules[v3] < v5 )
  {
    if ( ++v3 == 4 )
    {
      v3 = 0;
      return (*(__int64 (__fastcall **)(lsl::Allocator *, unsigned __int64))(*(_QWORD *)this + 56LL))(
               this,
               (v5 + (1LL << lsl::AllocationMetadata::granules[v3]) - 1)
             & -(1LL << lsl::AllocationMetadata::granules[v3]));
    }
  }
  return (*(__int64 (__fastcall **)(lsl::Allocator *, unsigned __int64))(*(_QWORD *)this + 56LL))(
           this,
           (v5 + (1LL << lsl::AllocationMetadata::granules[v3]) - 1) & -(1LL << lsl::AllocationMetadata::granules[v3]));
}
