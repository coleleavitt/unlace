__int64 __fastcall dyld4::RuntimeState::TLV_TerminatorList::reverseWalkChain(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 (__fastcall *v5)(__int64, __int64 *); // x3
  __int64 _18; // [xsp+18h] [xbp+8h]

  v4 = *a1;
  if ( v4 )
    dyld4::RuntimeState::TLV_TerminatorList::reverseWalkChain(v4, a2);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(a2 + 16);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v5(a2, a1);
}
