void __fastcall sub_24FBE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi

  if ( a2 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
  v3 = *(_QWORD *)(a1 + 1400);
  if ( v3 && !_InterlockedSub((volatile signed __int32 *)(v3 + 8), 1u) )
  {
    sub_24F730(*(_QWORD *)(v3 + 16), (void (__fastcall ***)(void *, unsigned __int64, __int64, __int64))v3);
    *(_QWORD *)(a1 + 1400) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 1400) = a2;
  }
}

