__int64 __fastcall _os_alloc(__int64 a1)
{
  unsigned __int64 v1; // x1
  __int64 v4; // x0
  unsigned __int64 add_explicit; // x9
  __int64 result; // x0
  __int64 (*v7)(void); // x1
  __int64 _18; // [xsp+18h] [xbp+8h]

  v1 = (*(_DWORD *)(a1 + 8) + 15) & 0xFFFFFFF0;
  if ( ((*(_DWORD *)(a1 + 8) + 15) & 0xFFFFFFF0) == 0 || 2 * vm_page_size - 16 < v1 )
    _os_alloc_cold_1((*(_DWORD *)(a1 + 8) + 15) & 0xFFFFFFF0);
  v4 = _os_alloc_heap;
  if ( _os_alloc_heap
    && (add_explicit = atomic_fetch_add_explicit((atomic_ullong *volatile)_os_alloc_heap, v1, memory_order_relaxed),
        add_explicit + v1 <= 2 * vm_page_size - 16) )
  {
    result = v4 + add_explicit + 16;
  }
  else
  {
    result = _os_alloc_slow();
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = result;
  v7 = *(__int64 (**)(void))(a1 + 16);
  if ( v7 )
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v7();
  }
  return result;
}
