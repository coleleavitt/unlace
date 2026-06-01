void __fastcall sub_24FBC0(__int64 a1)
{
  if ( !_InterlockedSub((volatile signed __int32 *)(a1 + 8), 1u) )
    sub_24F730(*(_QWORD *)(a1 + 16), (void (__fastcall ***)(void *, unsigned __int64, __int64, __int64))a1);
}

