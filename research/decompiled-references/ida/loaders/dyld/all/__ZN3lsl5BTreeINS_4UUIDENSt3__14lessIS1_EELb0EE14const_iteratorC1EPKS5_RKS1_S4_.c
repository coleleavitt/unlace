__int64 __fastcall lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::const_iterator(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v6; // x23
  __int64 v7; // x22
  __int64 v8; // x24
  unsigned int v9; // w0
  __int64 v10; // x8
  int v11; // w9
  __int64 v12; // x11
  unsigned int v13; // w12
  unsigned int v14; // w13
  unsigned __int64 v16; // x10

  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = 0u;
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_OWORD *)(a1 + 101) = 0u;
  if ( *((_BYTE *)a2 + 32) )
  {
    v6 = 0;
    v7 = *a2;
    while ( 1 )
    {
      v8 = a1 + 8 * v6;
      *(_QWORD *)(v8 + 8) = v7;
      v9 = lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::lower_bound_index(v7, a3);
      *(_BYTE *)(a1 + v6 + 104) = v9;
      v10 = *(_QWORD *)(v8 + 8);
      v11 = *(char *)(v10 + 248);
      if ( v9 != (v11 & 0x7F) )
        break;
LABEL_11:
      v16 = *((unsigned __int8 *)a2 + 32);
      if ( (_DWORD)v6 + 1 != (_DWORD)v16 )
      {
        if ( v11 < 0 )
          lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::const_iterator();
        v7 = *(_QWORD *)(v10 + 8LL * v9 + 160);
      }
      if ( ++v6 >= v16 )
      {
        for ( *(_BYTE *)(a1 + 116) = v16; (_BYTE)v16; *(_BYTE *)(a1 + 116) = v16 )
        {
          if ( *(_BYTE *)(a1 + (unsigned int)(unsigned __int8)v16 - 1 + 104) != (*(_BYTE *)(*(_QWORD *)(a1 + 8LL * (unsigned __int8)v16)
                                                                                          + 248LL)
                                                                               & 0x7F) )
            break;
          LOBYTE(v16) = v16 - 1;
        }
        return a1;
      }
    }
    v12 = 0;
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)(v10 + 16LL * v9 + v12);
      v14 = *(unsigned __int8 *)(a3 + v12);
      if ( v13 < v14 )
        break;
      if ( v14 < v13 || v12++ == 15 )
        goto LABEL_11;
    }
    *(_BYTE *)(a1 + 116) = v6 + 1;
  }
  return a1;
}
