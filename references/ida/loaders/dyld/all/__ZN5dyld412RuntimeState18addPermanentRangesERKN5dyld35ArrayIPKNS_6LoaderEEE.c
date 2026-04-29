unsigned __int64 *__fastcall dyld4::RuntimeState::addPermanentRanges(__int64 a1)
{
  unsigned __int64 *result; // x0
  atomic_ullong *v3; // x8
  atomic_ullong *i; // x9

  result = dyld4::RuntimeState::PermanentRanges::make((lsl::Allocator **)a1);
  v3 = *(atomic_ullong **)(a1 + 712);
  if ( v3 )
  {
    for ( i = (atomic_ullong *)atomic_load_explicit(v3, memory_order_acquire);
          i;
          i = (atomic_ullong *)atomic_load_explicit(i, memory_order_acquire) )
    {
      v3 = i;
    }
    atomic_store((unsigned __int64)result, (unsigned __int64 *)v3);
  }
  else
  {
    *(_QWORD *)(a1 + 712) = result;
  }
  return result;
}
