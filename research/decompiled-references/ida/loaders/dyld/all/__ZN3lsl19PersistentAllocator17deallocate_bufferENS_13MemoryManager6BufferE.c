const os_unfair_lock *__fastcall lsl::PersistentAllocator::deallocate_buffer(atomic_ullong *a1, __int64 a2, __int64 a3)
{
  lsl::Lock *v6; // x19
  _QWORD *v7; // x25
  __int64 v8; // x26
  __int64 *v9; // x24
  __int64 v10; // x0
  _OWORD *v11; // x23
  __int128 v13; // [xsp+0h] [xbp-1B0h] BYREF
  __int64 v14[40]; // [xsp+10h] [xbp-1A0h] BYREF
  __int64 v15; // [xsp+150h] [xbp-60h] BYREF
  _BYTE v16[8]; // [xsp+158h] [xbp-58h] BYREF

  v6 = (lsl::Lock *)a1[30];
  lsl::Lock::lock(v6);
  v14[0] = a2;
  v14[1] = a3;
  v7 = (_QWORD *)a1[28];
  if ( v7 )
  {
    v8 = 1;
    do
    {
      v13 = (unsigned __int64)v7;
      *((_QWORD *)&v13 + 1) = *v7;
      v9 = &v14[2 * v8];
      LOBYTE(v15) = 0;
      v10 = std::__lower_bound_impl[abi:v15006]<std::_ClassicAlgPolicy,lsl::MemoryManager::Buffer *,lsl::MemoryManager::Buffer *,lsl::MemoryManager::Buffer,std::__identity,std::__less<lsl::MemoryManager::Buffer,lsl::MemoryManager::Buffer>>(
              v14,
              v9,
              &v13,
              v16,
              &v15);
      v11 = (_OWORD *)v10;
      if ( v9 != (__int64 *)v10 )
        _platform_memmove((void *)(v10 + 16), (const void *)v10, (size_t)v9 - v10);
      *v11 = v13;
      if ( ++v8 == 20 )
      {
        lsl::PersistentAllocator::processDeallocations((__int64)a1, v14, &v15);
        v8 = 0;
      }
      v7 = (_QWORD *)v7[1];
    }
    while ( v7 );
    a1[28] = 0;
  }
  else
  {
    v8 = 1;
  }
  lsl::PersistentAllocator::processDeallocations((__int64)a1, v14, &v14[2 * v8]);
  atomic_fetch_add(a1 + 27, -a3);
  (*(void (__fastcall **)(atomic_ullong *))(*a1 + 40))(a1);
  return lsl::Lock::unlock(v6);
}
