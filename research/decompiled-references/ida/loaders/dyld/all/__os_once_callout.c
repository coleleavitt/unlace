__int64 __fastcall _os_once_callout(atomic_ullong *a1, __int64 a2, __int64 (__fastcall *a3)(__int64), int a4)
{
  __int64 result; // x0
  unsigned int v7; // w1
  __int64 _18; // [xsp+18h] [xbp+8h]

  result = a3(a2);
  v7 = atomic_exchange_explicit(a1, (4LL * MEMORY[0xFFFFFC180]) | 1, memory_order_release);
  if ( v7 != a4 )
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return _os_once_gate_broadcast((__int64)a1, v7, a4);
  }
  return result;
}
