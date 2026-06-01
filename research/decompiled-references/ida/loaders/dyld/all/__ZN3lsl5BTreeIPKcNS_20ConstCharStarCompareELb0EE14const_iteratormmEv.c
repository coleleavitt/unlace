__int64 **__fastcall lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator--(
        __int64 **result)
{
  __int64 v1; // x10
  __int64 *v2; // x8
  __int64 v3; // x8
  _BYTE *v4; // x8
  unsigned __int8 v5; // w9
  unsigned __int8 v6; // t1
  __int64 v7; // x8
  int v8; // t1
  __int64 v9; // x9
  unsigned int v10; // w11
  __int64 *v11; // x9
  __int64 v12; // x9
  __int64 v13; // x10
  __int64 *v14; // x11
  __int64 v15; // x8
  __int64 v16; // x8
  unsigned __int8 v17; // t1

  v1 = *((unsigned __int8 *)result + 98);
  v2 = *result;
  if ( !*((_BYTE *)result + 98) )
  {
    v9 = *v2;
    *((_BYTE *)result + 98) = 0;
    if ( !*((_BYTE *)v2 + 32) )
    {
      v15 = -1;
      goto LABEL_17;
    }
    LOBYTE(v1) = 0;
    do
    {
      result[(unsigned __int8)v1 + 1] = (__int64 *)v9;
      *((_BYTE *)result + (unsigned __int8)v1 + 88) = *(_BYTE *)(v9 + 248) & 0x7F;
      v1 = *((unsigned __int8 *)result + 98);
      v10 = *((unsigned __int8 *)v2 + 32);
      if ( (_DWORD)v1 + 1 != v10 )
      {
        v11 = result[v1 + 1];
        if ( (char)v11[31] < 0 )
          lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator--();
        v9 = v11[*((unsigned __int8 *)v11 + 248) + 15];
      }
      LOBYTE(v1) = v1 + 1;
      *((_BYTE *)result + 98) = v1;
    }
    while ( v10 > (unsigned __int8)v1 );
LABEL_15:
    v15 = (unsigned __int8)v1 - 1LL;
LABEL_17:
    v16 = (__int64)result + v15;
    v17 = *(_BYTE *)(v16 + 88);
    v4 = (_BYTE *)(v16 + 88);
    v5 = v17;
    goto LABEL_18;
  }
  if ( (_DWORD)v1 != *((unsigned __int8 *)v2 + 32) )
  {
    do
    {
      v12 = (unsigned __int8)v1;
      v13 = (unsigned __int8)v1 - 1LL;
      v14 = result[v13 + 1];
      if ( (char)v14[31] < 0 )
        lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator--();
      v1 = v14[*((unsigned __int8 *)result + v13 + 88) + 15];
      result[v12 + 1] = (__int64 *)v1;
      *((_BYTE *)result + v12 + 88) = *(_BYTE *)(v1 + 248) & 0x7F;
      LOBYTE(v1) = *((_BYTE *)result + 98) + 1;
      *((_BYTE *)result + 98) = v1;
    }
    while ( *((unsigned __int8 *)v2 + 32) != (unsigned __int8)v1 );
    goto LABEL_15;
  }
  v3 = (__int64)result + v1 + 88;
  v6 = *(_BYTE *)(v3 - 1);
  v4 = (_BYTE *)(v3 - 1);
  v5 = v6;
  if ( !(*((_BYTE *)result + (unsigned int)(v1 - 1) + 88) | v6) )
  {
    do
    {
      LODWORD(v1) = v1 - 1;
      *((_BYTE *)result + 98) = v1;
      v7 = (__int64)result + (unsigned __int8)v1;
      v8 = *(unsigned __int8 *)(v7 + 87);
      v4 = (_BYTE *)(v7 + 87);
      v5 = v8;
    }
    while ( !v8 );
  }
LABEL_18:
  *v4 = v5 - 1;
  return result;
}
