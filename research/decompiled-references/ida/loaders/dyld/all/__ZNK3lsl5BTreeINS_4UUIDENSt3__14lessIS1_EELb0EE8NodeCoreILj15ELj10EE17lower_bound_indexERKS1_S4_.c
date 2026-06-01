__int64 __fastcall lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::lower_bound_index(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // x9
  __int64 v3; // x8
  __int64 v4; // x11
  unsigned __int64 v5; // x10
  __int64 v6; // x12
  unsigned int v7; // w13
  unsigned int v8; // w14

  v2 = *(_BYTE *)(a1 + 248) & 0x7F;
  if ( (*(_BYTE *)(a1 + 248) & 0x7F) != 0 )
  {
    v3 = a1;
    do
    {
      v4 = 0;
      v5 = v2 >> 1;
      v6 = v3 + 16 * (v2 >> 1);
      while ( 1 )
      {
        v7 = *(unsigned __int8 *)(v6 + v4);
        v8 = *(unsigned __int8 *)(a2 + v4);
        if ( v7 < v8 )
          break;
        if ( v8 < v7 || v4++ == 15 )
          goto LABEL_12;
      }
      v3 = v6 + 16;
      v5 = v2 + ~v5;
LABEL_12:
      v2 = v5;
    }
    while ( v5 );
  }
  else
  {
    LODWORD(v3) = a1;
  }
  return (unsigned __int8)((unsigned int)(v3 - a1) >> 4);
}
