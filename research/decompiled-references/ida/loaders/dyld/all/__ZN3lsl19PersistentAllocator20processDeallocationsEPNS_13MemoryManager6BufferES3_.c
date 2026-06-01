__int64 __fastcall lsl::PersistentAllocator::processDeallocations(__int64 result, __int64 *a2, __int64 *a3)
{
  __int64 v3; // x19
  __int64 *v5; // x21
  __int64 v6; // x2
  __int64 v7; // x8
  __int64 v8; // x1
  __int64 v9; // x9
  __int64 _28; // [xsp+28h] [xbp+8h]

  v3 = result;
  if ( a2 == a3 )
  {
    v8 = 0;
    v6 = 0;
    goto LABEL_16;
  }
  v5 = a2;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = *v5;
    if ( v7 || v6 )
    {
      v9 = v5[1];
      if ( v9 + v8 == v7 || v6 + v7 == v8 )
      {
        v6 += v9;
        v8 = v7;
        goto LABEL_12;
      }
      result = lsl::PersistentAllocator::addToFreeBlockTrees(v3, v7);
      v8 = *v5;
    }
    v6 = v5[1];
LABEL_12:
    v5 += 2;
    v7 = v8;
  }
  while ( v5 != a3 );
  if ( v8 )
  {
LABEL_17:
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return lsl::PersistentAllocator::addToFreeBlockTrees(v3, v8);
  }
LABEL_16:
  if ( v6 )
    goto LABEL_17;
  return result;
}
