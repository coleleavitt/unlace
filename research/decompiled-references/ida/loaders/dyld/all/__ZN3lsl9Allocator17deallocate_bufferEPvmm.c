__int64 __fastcall lsl::Allocator::deallocate_buffer(
        lsl::Allocator *this,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // x8
  __int64 v5; // x9

  v4 = 16;
  if ( a4 <= 0x10 )
    v5 = 16;
  else
    v5 = a4;
  if ( a3 > 0x10 )
    v4 = a3;
  return (*(__int64 (__fastcall **)(lsl::Allocator *, void *, __int64))(*(_QWORD *)this + 64LL))(
           this,
           a2,
           (v4 + v5 - 1) & -v5);
}
