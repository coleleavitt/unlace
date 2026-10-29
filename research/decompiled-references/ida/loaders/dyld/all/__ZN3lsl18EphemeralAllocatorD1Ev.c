void __fastcall lsl::EphemeralAllocator::~EphemeralAllocator(lsl::EphemeralAllocator *this)
{
  *(_QWORD *)this = &off_94090;
  lsl::EphemeralAllocator::reset(this);
}
