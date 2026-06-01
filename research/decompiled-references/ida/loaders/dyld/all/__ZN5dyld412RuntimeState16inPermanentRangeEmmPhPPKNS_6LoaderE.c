__int64 __fastcall dyld4::RuntimeState::inPermanentRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        _QWORD *a5)
{
  atomic_ullong *explicit; // x8
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x10
  atomic_ullong *v8; // x11
  atomic_ullong *v10; // x8

  explicit = *(atomic_ullong **)(a1 + 712);
  if ( !explicit )
    return 0;
  while ( 1 )
  {
    v6 = explicit[1];
    if ( v6 )
      break;
LABEL_7:
    explicit = (atomic_ullong *)atomic_load_explicit(explicit, memory_order_acquire);
    if ( !explicit )
      return 0;
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = &explicit[4 * v7];
    if ( v8[2] <= a2 && v8[3] > a3 )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( v6 <= v7 )
      goto LABEL_7;
  }
  v10 = &explicit[4 * v7];
  *a4 = v10[5];
  *a5 = v10[4];
  return 1;
}
