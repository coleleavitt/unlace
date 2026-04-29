__int64 __fastcall sub_203060(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __m128i *a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v12; // rdi

  v12 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v12 + 2) & 4) != 0 )
  {
    if ( !(unsigned __int8)sub_1EEE20((unsigned __int8 *)v12) )
    {
      if ( !under_debugger )
        sub_3835A0(50340);
      BUG();
    }
    v12 = *(_QWORD *)(a1 + 56);
  }
  ++*(_DWORD *)(v12 + 912);
  return sub_108680(a4, a5, a6, *(_QWORD *)(a1 + 56), a2, a3, a7, *(_QWORD *)(a1 + 56) + 496LL, nullptr);
}
