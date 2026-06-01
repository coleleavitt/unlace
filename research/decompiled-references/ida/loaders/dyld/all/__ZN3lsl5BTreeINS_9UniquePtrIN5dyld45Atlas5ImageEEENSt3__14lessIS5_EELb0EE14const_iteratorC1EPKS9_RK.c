__int64 __fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::const_iterator(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  unsigned __int64 v6; // x23
  __int64 v7; // x22
  __int64 v8; // x24
  __int64 v9; // x25
  unsigned int v10; // w0
  __int64 v11; // x8
  int v12; // w10
  unsigned __int64 v13; // x9

  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = 0u;
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_OWORD *)(a1 + 83) = 0u;
  if ( *((_BYTE *)a2 + 32) )
  {
    v6 = 0;
    v7 = *a2;
    v8 = a1 + 88;
    do
    {
      v9 = v8 + 8 * v6;
      *(_QWORD *)(v9 - 80) = v7;
      v10 = lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::lower_bound_index(
              v7,
              a3);
      *(_BYTE *)(v8 + v6) = v10;
      v11 = *(_QWORD *)(v9 - 80);
      v12 = *(char *)(v11 + 248);
      if ( v10 != (v12 & 0x7F) && *(_QWORD *)(*(_QWORD *)(v11 + 8LL * v10) + 160LL) < *(_QWORD *)(*(_QWORD *)a3 + 160LL) )
      {
        *(_BYTE *)(a1 + 98) = v6 + 1;
        return a1;
      }
      v13 = *((unsigned __int8 *)a2 + 32);
      if ( (_DWORD)v6 + 1 != (_DWORD)v13 )
      {
        if ( v12 < 0 )
          lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::const_iterator();
        v7 = *(_QWORD *)(v11 + 8LL * v10 + 120);
      }
      ++v6;
    }
    while ( v6 < v13 );
    for ( *(_BYTE *)(a1 + 98) = v13; (_BYTE)v13; *(_BYTE *)(a1 + 98) = v13 )
    {
      if ( *(_BYTE *)(a1 + (unsigned int)(unsigned __int8)v13 - 1 + 88) != (*(_BYTE *)(*(_QWORD *)(a1
                                                                                                 + 8LL
                                                                                                 * (unsigned __int8)v13)
                                                                                     + 248LL)
                                                                          & 0x7F) )
        break;
      LOBYTE(v13) = v13 - 1;
    }
  }
  return a1;
}
