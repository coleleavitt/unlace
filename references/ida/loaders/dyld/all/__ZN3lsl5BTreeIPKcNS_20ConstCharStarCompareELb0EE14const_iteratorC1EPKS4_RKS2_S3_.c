__int64 __fastcall lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::const_iterator(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // x23
  __int64 v7; // x22
  __int64 v8; // x24
  __int64 v9; // x1
  __int64 v10; // x0
  unsigned __int64 v11; // x8
  __int64 v12; // x9
  char *v13; // x13
  int v14; // w11
  int v15; // w14
  char *v16; // x12
  char *v17; // x13
  bool v18; // cc
  _BOOL4 v19; // w14
  int v20; // t1
  int v21; // t1
  unsigned __int64 v22; // x11
  _BYTE v24[8]; // [xsp+0h] [xbp-40h] BYREF
  _BYTE v25[8]; // [xsp+8h] [xbp-38h] BYREF

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
    do
    {
      v8 = a1 + 8 * v6;
      *(_QWORD *)(v8 + 8) = v7;
      v9 = v7 + 8LL * (*(_BYTE *)(v7 + 248) & 0x7F);
      v24[0] = 0;
      v10 = std::__lower_bound_impl[abi:v15006]<std::_ClassicAlgPolicy,std::__wrap_iter<char const**>,std::__wrap_iter<char const**>,char const*,std::__identity,lsl::ConstCharStarCompare>(
              v7,
              v9,
              a3,
              v25,
              v24);
      v11 = (unsigned __int64)(v10 - v7) >> 3;
      *(_BYTE *)(a1 + v6 + 88) = v11;
      v12 = *(_QWORD *)(v8 + 8);
      if ( (*(_BYTE *)(v12 + 248) & 0x7F) != (unsigned __int8)v11 )
      {
        v13 = *(char **)(v12 + 8LL * (unsigned __int8)((unsigned __int64)(v10 - v7) >> 3));
        v14 = *v13;
        if ( v14 < *(char *)*a3 )
          goto LABEL_25;
        v15 = *(unsigned __int8 *)*a3;
        v16 = (char *)(*a3 + 1LL);
        v17 = v13 + 1;
        while ( 1 )
        {
          v18 = v15 && (char)v14 <= (char)v15;
          v19 = !v18;
          if ( !(_BYTE)v14 || v19 )
            break;
          v20 = *v17++;
          v14 = v20;
          v21 = *v16++;
          v15 = (unsigned __int8)v21;
          if ( v14 < v21 )
            goto LABEL_25;
        }
        if ( !v19 )
        {
LABEL_25:
          *(_BYTE *)(a1 + 98) = v6 + 1;
          return a1;
        }
      }
      v22 = *((unsigned __int8 *)a2 + 32);
      if ( (_DWORD)v6 + 1 != (_DWORD)v22 )
      {
        if ( (*(_BYTE *)(v12 + 248) & 0x80) != 0 )
          lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::const_iterator();
        v7 = *(_QWORD *)(v12 + 8LL * (unsigned __int8)v11 + 120);
      }
      ++v6;
    }
    while ( v6 < v22 );
    for ( *(_BYTE *)(a1 + 98) = v22; (_BYTE)v22; *(_BYTE *)(a1 + 98) = v22 )
    {
      if ( *(_BYTE *)(a1 + (unsigned int)(unsigned __int8)v22 - 1 + 88) != (*(_BYTE *)(*(_QWORD *)(a1
                                                                                                 + 8LL
                                                                                                 * (unsigned __int8)v22)
                                                                                     + 248LL)
                                                                          & 0x7F) )
        break;
      LOBYTE(v22) = v22 - 1;
    }
  }
  return a1;
}
