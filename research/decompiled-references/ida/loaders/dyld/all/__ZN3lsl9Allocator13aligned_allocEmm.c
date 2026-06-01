__int64 __fastcall lsl::Allocator::aligned_alloc(lsl::Allocator *this, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // x9
  __int64 v6; // x2
  unsigned __int64 v7; // x8
  lsl::AllocationMetadata *v8; // x0
  __int64 v9; // x1

  v5 = 0;
  if ( a2 <= 0x10 )
    v6 = 16;
  else
    v6 = a2;
  if ( a3 <= 0x10 )
    a3 = 16;
  v7 = (v6 + a3 - 1) & -v6;
  while ( 2048LL << lsl::AllocationMetadata::granules[v5] < v7 )
  {
    if ( ++v5 == 4 )
    {
      v5 = 0;
      break;
    }
  }
  v8 = (lsl::AllocationMetadata *)(*(__int64 (__fastcall **)(lsl::Allocator *, unsigned __int64))(*(_QWORD *)this + 56LL))(
                                    this,
                                    (v7 + (1LL << lsl::AllocationMetadata::granules[v5]) - 1)
                                  & -(1LL << lsl::AllocationMetadata::granules[v5]));
  return lsl::AllocationMetadata::AllocationMetadata(v8, this, v9 - 16) + 16LL;
}
