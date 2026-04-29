lsl::EphemeralAllocator *__fastcall lsl::EphemeralAllocator::EphemeralAllocator(
        lsl::EphemeralAllocator *this,
        void *a2,
        __int64 a3)
{
  __int64 v4; // x0
  __int128 v6; // [xsp+0h] [xbp-40h] BYREF
  __int128 v7; // [xsp+10h] [xbp-30h]
  __int16 v8; // [xsp+20h] [xbp-20h]

  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  v8 = 0;
  v6 = 0u;
  v7 = 0u;
  *(_QWORD *)this = &off_94090;
  *((_QWORD *)this + 1) = &v6;
  v4 = lsl::Allocator::aligned_alloc(this, 8u, 0x28u);
  *(_WORD *)(v4 + 32) = 0;
  *(_OWORD *)v4 = 0u;
  *(_OWORD *)(v4 + 16) = 0u;
  *(_OWORD *)v4 = v6;
  *(_OWORD *)(v4 + 16) = v7;
  *(_WORD *)(v4 + 32) = v8;
  *((_QWORD *)this + 1) = v4;
  *((_QWORD *)this + 5) = 0;
  return this;
}
