lsl::EphemeralAllocator *__fastcall lsl::EphemeralAllocator::EphemeralAllocator(lsl::EphemeralAllocator *this)
{
  __int64 v2; // x0
  __int128 v4; // [xsp+0h] [xbp-40h] BYREF
  __int128 v5; // [xsp+10h] [xbp-30h]
  __int16 v6; // [xsp+20h] [xbp-20h]

  *((_OWORD *)this + 1) = 0u;
  *((_OWORD *)this + 2) = 0u;
  v6 = 0;
  v4 = 0u;
  v5 = 0u;
  *(_QWORD *)this = &off_94090;
  *((_QWORD *)this + 1) = &v4;
  v2 = lsl::Allocator::aligned_alloc(this, 8u, 0x28u);
  *(_WORD *)(v2 + 32) = 0;
  *(_OWORD *)v2 = 0u;
  *(_OWORD *)(v2 + 16) = 0u;
  *(_OWORD *)v2 = v4;
  *(_OWORD *)(v2 + 16) = v5;
  *(_WORD *)(v2 + 32) = v6;
  *((_QWORD *)this + 1) = v2;
  *((_QWORD *)this + 5) = 0;
  return this;
}
