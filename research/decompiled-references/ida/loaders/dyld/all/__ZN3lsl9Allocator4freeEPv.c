void __fastcall lsl::Allocator::free(lsl::Allocator *this, _QWORD *a2)
{
  char *v2; // x1
  unsigned __int64 v3; // t1
  __int64 v4; // x0
  __int64 v5; // x8

  if ( a2 )
  {
    v3 = *(a2 - 2);
    v2 = (char *)(a2 - 2);
    v4 = 8 * (v3 & 0x1FFFFFFFFFFFFLL);
    v5 = (((v3 >> 49) & 0x7FF) << lsl::AllocationMetadata::granules[(v3 >> 60) & 3]) + 16;
    if ( v5 == 16 || ((v3 >> 49) & 0x7FF) << lsl::AllocationMetadata::granules[(v3 >> 60) & 3] >= 0xFFFFFFFFFFFFFFF0LL )
      v5 = 16;
    (*(void (__fastcall **)(__int64, char *, unsigned __int64))(*(_QWORD *)v4 + 64LL))(
      v4,
      v2,
      (v5 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  }
}
