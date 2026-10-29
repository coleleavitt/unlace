unsigned __int64 __fastcall lsl::EphemeralAllocator::allocate_buffer(
        lsl::MemoryManager **this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  lsl::MemoryManager **v7; // x19
  __int64 *v8; // x23
  lsl::MemoryManager *v9; // x10
  __int64 v10; // x8
  unsigned __int64 v11; // x9
  bool v12; // cf
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  unsigned __int64 v15; // x1
  lsl::MemoryManager *v16; // x8
  unsigned __int64 v17; // x9
  __int64 v18; // x10

  if ( (a4 & 0xFFFFFFFFFFFFFFEFLL) != 0 )
    lsl::EphemeralAllocator::allocate_buffer((lsl::EphemeralAllocator *)this, a2, a3, a4);
  v7 = this;
  v8 = (__int64 *)(this + 2);
  v9 = (lsl::MemoryManager *)((char *)*(this + 2) + a4);
  v10 = (__int64)*(this + 3);
  v11 = v10 - a4;
  *(this + 2) = v9;
  *(this + 3) = (lsl::MemoryManager *)(v10 - a4);
  if ( v10 )
    v12 = v11 >= a2;
  else
    v12 = 0;
  if ( v12 && (v13 = ((unsigned __int64)v9 + a3 - 1) & -(__int64)a3, v14 = v13 - (_QWORD)v9, v14 <= v11 - a2) )
  {
    *v8 = v13;
    v17 = v11 - v14;
  }
  else
  {
    if ( 4 * a2 <= 0x400000 )
      v15 = 0x400000;
    else
      v15 = 4 * a2;
    this = (lsl::MemoryManager **)lsl::MemoryManager::vm_allocate_bytes(*(this + 1), v15);
    v7[2] = (lsl::MemoryManager *)this;
    v7[3] = (lsl::MemoryManager *)a2;
    v16 = v7[4];
    *(_OWORD *)this = *(_OWORD *)v8;
    *(this + 2) = v16;
    v13 = (__int64)v7[2] + a4 + 32;
    v17 = (unsigned __int64)v7[3] - a4 - 32;
    v7[2] = (lsl::MemoryManager *)v13;
    v7[3] = (lsl::MemoryManager *)v17;
    v7[4] = (lsl::MemoryManager *)this;
    if ( v17 < a2 )
      goto LABEL_16;
    v18 = (a3 + v13 - 1) & -(__int64)a3;
    if ( v18 - v13 > v17 - a2 )
      goto LABEL_16;
    *v8 = v18;
    v17 -= v18 - v13;
    v13 = (a3 + v13 - 1) & -(__int64)a3;
  }
  v7[3] = (lsl::MemoryManager *)v17;
LABEL_16:
  if ( (v13 & 0xF) != 0 )
    lsl::EphemeralAllocator::allocate_buffer((lsl::EphemeralAllocator *)this, a2, a3, a4);
  v7[2] = (lsl::MemoryManager *)(v13 + a2);
  v7[3] = (lsl::MemoryManager *)(v17 - a2);
  v7[5] = (lsl::MemoryManager *)((char *)v7[5] + a4 + a2);
  return v13 - a4;
}
