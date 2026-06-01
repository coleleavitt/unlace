__int64 __fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::deallocate(
        unsigned __int8 *a1,
        lsl::Allocator *a2)
{
  __int64 *v4; // x21
  __int64 v5; // x22
  __int64 v6; // t1
  unsigned __int64 v7; // x21
  unsigned __int8 *v8; // x0
  __int64 v9; // x0
  unsigned __int64 v10; // x8
  __int64 _38; // [xsp+38h] [xbp+8h]

  if ( ((char)a1[248] & 0x80000000) == 0 )
  {
    v4 = (__int64 *)(a1 + 120);
    v5 = 8LL * a1[248] + 8;
    do
    {
      v6 = *v4++;
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::deallocate(
        v6,
        a2);
      v5 -= 8;
    }
    while ( v5 );
  }
  v7 = 0;
  v8 = a1;
  do
  {
    v9 = lsl::UniquePtr<dyld4::Atlas::Image>::~UniquePtr(v8);
    ++v7;
    if ( (a1[248] & 0x80u) == 0 )
      v10 = 15;
    else
      v10 = 31;
    v8 = (unsigned __int8 *)(v9 + 8);
  }
  while ( v7 < v10 );
  if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::Allocator::deallocate_buffer(a2, a1, 0x100u, 0x100u);
}
