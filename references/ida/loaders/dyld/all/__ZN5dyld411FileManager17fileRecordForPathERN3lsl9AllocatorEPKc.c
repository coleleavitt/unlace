__int64 *__usercall dyld4::FileManager::fileRecordForPath@<X0>(
        __int64 *__return_ptr a1@<X8>,
        dyld4::FileManager *this@<X0>,
        lsl::Allocator *a3@<X1>,
        const char *__s@<X2>)
{
  lsl::AllocationMetadata *v6; // x0
  __int64 v8; // [xsp+8h] [xbp-28h] BYREF

  v6 = (lsl::AllocationMetadata *)lsl::Allocator::strdup(a3, __s);
  lsl::UniquePtr<char const>::UniquePtr<char>((int)&v8, v6);
  *a1 = (__int64)this;
  a1[5] = 0;
  *(_OWORD *)(a1 + 1) = 0u;
  *(_OWORD *)(a1 + 3) = 0u;
  if ( a1 + 5 != &v8 )
  {
    a1[5] = v8;
    v8 = 0;
  }
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0x1FFFFFFFFLL;
  *((_WORD *)a1 + 36) = 0;
  *((_BYTE *)a1 + 74) = 1;
  return lsl::UniquePtr<char const>::~UniquePtr(&v8);
}
