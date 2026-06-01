__int64 __fastcall lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::deallocate(
        unsigned __int8 *a1,
        lsl::Allocator *a2)
{
  __int64 *v4; // x21
  __int64 v5; // x22
  __int64 v6; // t1
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( ((char)a1[248] & 0x80000000) == 0 )
  {
    v4 = (__int64 *)(a1 + 120);
    v5 = 8LL * a1[248] + 8;
    do
    {
      v6 = *v4++;
      lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::deallocate(v6, a2);
      v5 -= 8;
    }
    while ( v5 );
  }
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::Allocator::deallocate_buffer(a2, a1, 0x100u, 0x100u);
}
