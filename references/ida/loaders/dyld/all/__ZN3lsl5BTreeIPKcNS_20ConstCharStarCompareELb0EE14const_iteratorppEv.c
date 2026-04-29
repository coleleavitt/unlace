__int64 ***__fastcall lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator++(
        __int64 ***result)
{
  int v1; // w9
  __int64 **v2; // x8
  int v3; // w10
  __int64 v4; // x8
  __int64 i; // x9
  __int64 *v6; // x9
  unsigned __int8 v7; // w10
  __int64 v8; // x10
  unsigned int v9; // w11
  __int64 *v10; // x9
  int v11; // w9
  __int64 *v12; // x11

  v1 = *((unsigned __int8 *)result + 98);
  v2 = *result;
  if ( *((_BYTE *)result + 98) )
  {
    v3 = *((unsigned __int8 *)v2 + 32);
    ++*((_BYTE *)result + (unsigned int)(v1 - 1) + 88);
    if ( v1 == v3 )
    {
      v4 = *((unsigned __int8 *)v2 + 32);
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          if ( *((_BYTE *)result + (unsigned __int8)(v4 + ~(_BYTE)i) + 88) != ((_BYTE)result[(unsigned __int8)(v4 + ~(_BYTE)i)
                                                                                           + 1][31]
                                                                             & 0x7F) )
            break;
          *((_BYTE *)result + 98) = v4 + ~(_BYTE)i;
        }
      }
    }
    else
    {
      v11 = *((unsigned __int8 *)result + 98);
      if ( v11 != *((unsigned __int8 *)v2 + 32) )
      {
        do
        {
          v12 = (__int64 *)result[(unsigned __int8)v11];
          if ( (char)v12[31] < 0 )
            lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator++();
          result[(unsigned __int8)v11 + 1] = (__int64 **)v12[*((unsigned __int8 *)result + (unsigned __int8)v11 + 87)
                                                           + 15];
          *((_BYTE *)result + (unsigned __int8)v11 + 88) = 0;
          LOBYTE(v11) = *((_BYTE *)result + 98) + 1;
          *((_BYTE *)result + 98) = v11;
        }
        while ( *((unsigned __int8 *)v2 + 32) != (unsigned __int8)v11 );
      }
    }
  }
  else
  {
    v6 = *v2;
    *((_BYTE *)result + 98) = 0;
    if ( *((_BYTE *)v2 + 32) )
    {
      v7 = 0;
      do
      {
        result[v7 + 1] = (__int64 **)v6;
        *((_BYTE *)result + v7 + 88) = 0;
        v8 = *((unsigned __int8 *)result + 98);
        v9 = *((unsigned __int8 *)v2 + 32);
        if ( (_DWORD)v8 + 1 != v9 )
        {
          v10 = (__int64 *)result[v8 + 1];
          if ( (char)v10[31] < 0 )
            lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator++();
          v6 = (__int64 *)v10[15];
        }
        v7 = v8 + 1;
        *((_BYTE *)result + 98) = v7;
      }
      while ( v9 > v7 );
    }
  }
  return result;
}
