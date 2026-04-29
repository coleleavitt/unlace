__int64 __fastcall dyld4::RuntimeState::withNotifiersReadLock(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 (*v5)(void); // x2
  __int64 (__fastcall *v7)(__int64); // x2
  __int64 _18; // [xsp+18h] [xbp+8h]

  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 104LL))(v4, *(_QWORD *)(a1 + 104) + 8LL, 0);
    (*(void (__fastcall **)(__int64))(a2 + 16))(a2);
    v5 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 120) + 112LL);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v5();
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(__int64))(a2 + 16);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v7(a2);
  }
}
