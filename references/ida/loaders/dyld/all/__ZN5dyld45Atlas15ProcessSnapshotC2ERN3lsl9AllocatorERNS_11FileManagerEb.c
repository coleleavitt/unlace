dyld4::Atlas::ProcessSnapshot *__fastcall dyld4::Atlas::ProcessSnapshot::ProcessSnapshot(
        dyld4::Atlas::ProcessSnapshot *this,
        lsl::Allocator *a2,
        dyld4::FileManager *a3,
        char a4)
{
  int v7; // w22
  __int64 v8; // x0

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  v7 = (_DWORD)this + 72;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  v8 = lsl::Allocator::aligned_alloc(a2, 8u, 0x30u);
  *(_QWORD *)v8 = a2;
  *(_OWORD *)(v8 + 8) = 0u;
  *(_OWORD *)(v8 + 24) = 0u;
  *(_QWORD *)(v8 + 40) = a2;
  lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr(v7, (lsl::AllocationMetadata *)v8);
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_BYTE *)this + 104) = a4;
  *((_BYTE *)this + 105) = 1;
  return this;
}
