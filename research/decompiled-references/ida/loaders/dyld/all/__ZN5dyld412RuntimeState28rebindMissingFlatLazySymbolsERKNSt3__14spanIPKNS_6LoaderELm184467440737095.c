void __fastcall dyld4::RuntimeState::rebindMissingFlatLazySymbols(__int64 a1, __int64 a2)
{
  __int128 *v4; // x20
  __int64 v5; // x8
  __int128 *v6; // x22
  __int64 v7; // x21
  __int128 *v8; // x21
  __int128 v10; // q0
  _QWORD v11[3]; // [xsp+0h] [xbp-50h] BYREF
  vm_address_t v12; // [xsp+18h] [xbp-38h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v12);
  v4 = *(__int128 **)(a1 + 600);
  v5 = *(_QWORD *)(a1 + 608);
  v6 = (__int128 *)((char *)v4 + 24 * v5);
  v11[0] = a2;
  v11[1] = &v12;
  v11[2] = a1;
  if ( v5 )
  {
    v7 = 24 * v5;
    while ( (dyld4::RuntimeState::rebindMissingFlatLazySymbols(std::span<dyld4::Loader const*,18446744073709551615ul> const&)::$_0::operator()(
               v11,
               v4)
           & 1) == 0 )
    {
      v4 = (__int128 *)((char *)v4 + 24);
      v7 -= 24;
      if ( !v7 )
      {
        v4 = v6;
        goto LABEL_13;
      }
    }
  }
  v8 = (__int128 *)((char *)v4 + 24);
  if ( v4 != v6 && v8 != v6 )
  {
    do
    {
      if ( (dyld4::RuntimeState::rebindMissingFlatLazySymbols(std::span<dyld4::Loader const*,18446744073709551615ul> const&)::$_0::operator()(
              v11,
              v8)
          & 1) == 0 )
      {
        v10 = *v8;
        *((_QWORD *)v4 + 2) = *((_QWORD *)v8 + 2);
        *v4 = v10;
        v4 = (__int128 *)((char *)v4 + 24);
      }
      v8 = (__int128 *)((char *)v8 + 24);
    }
    while ( v8 != v6 );
  }
LABEL_13:
  *(_QWORD *)(a1 + 608) += 0x5555555555555555LL
                         * ((*(_QWORD *)(a1 + 600) + 24LL * *(_QWORD *)(a1 + 608) - (__int64)v4) >> 3);
  Diagnostics::~Diagnostics(&v12);
}
