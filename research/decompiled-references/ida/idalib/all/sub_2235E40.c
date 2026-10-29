__int64 __fastcall sub_2235E40(__int64 a1, unsigned int *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned int *v5; // r13
  unsigned __int64 v6; // r14
  unsigned int *v7; // r12
  unsigned __int8 v8; // cl
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned int *v11; // rbp
  unsigned int v12; // eax
  unsigned int *v13; // r13
  unsigned __int8 v14; // dl

  result = *(unsigned __int8 *)(a1 + 88);
  *(_DWORD *)(a1 + 84) += a3;
  if ( (_BYTE)result )
  {
    v5 = a2;
    v6 = 64 - (unsigned __int8)result;
    if ( v6 > a3 )
      v6 = a3;
    v7 = (unsigned int *)((char *)a2 + v6);
    if ( v6 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = result;
          result = (unsigned int)(result + 1);
          *(_BYTE *)(a1 + (v8 ^ 3u)) = *(_BYTE *)v5;
          *(_BYTE *)(a1 + 88) = result;
          if ( (_BYTE)result == 64 )
            break;
          v5 = (unsigned int *)((char *)v5 + 1);
          if ( v5 == v7 )
            goto LABEL_7;
        }
        v5 = (unsigned int *)((char *)v5 + 1);
        result = sub_2234D20((_DWORD *)a1);
        *(_BYTE *)(a1 + 88) = 0;
        if ( v5 == v7 )
          break;
        LODWORD(result) = 0;
      }
    }
    else
    {
      v7 = a2;
    }
LABEL_7:
    v9 = a3 - v6;
  }
  else
  {
    v7 = a2;
    v9 = a3;
  }
  if ( v9 > 0x3F )
  {
    v10 = v9 - 64;
    v11 = v7;
    do
    {
      v12 = *v11;
      v11 += 16;
      *(_DWORD *)a1 = _byteswap_ulong(v12);
      *(_DWORD *)(a1 + 4) = _byteswap_ulong(*(v11 - 15));
      *(_DWORD *)(a1 + 8) = _byteswap_ulong(*(v11 - 14));
      *(_DWORD *)(a1 + 12) = _byteswap_ulong(*(v11 - 13));
      *(_DWORD *)(a1 + 16) = _byteswap_ulong(*(v11 - 12));
      *(_DWORD *)(a1 + 20) = _byteswap_ulong(*(v11 - 11));
      *(_DWORD *)(a1 + 24) = _byteswap_ulong(*(v11 - 10));
      *(_DWORD *)(a1 + 28) = _byteswap_ulong(*(v11 - 9));
      *(_DWORD *)(a1 + 32) = _byteswap_ulong(*(v11 - 8));
      *(_DWORD *)(a1 + 36) = _byteswap_ulong(*(v11 - 7));
      *(_DWORD *)(a1 + 40) = _byteswap_ulong(*(v11 - 6));
      *(_DWORD *)(a1 + 44) = _byteswap_ulong(*(v11 - 5));
      *(_DWORD *)(a1 + 48) = _byteswap_ulong(*(v11 - 4));
      *(_DWORD *)(a1 + 52) = _byteswap_ulong(*(v11 - 3));
      *(_DWORD *)(a1 + 56) = _byteswap_ulong(*(v11 - 2));
      *(_DWORD *)(a1 + 60) = _byteswap_ulong(*(v11 - 1));
      result = sub_2234D20((_DWORD *)a1);
    }
    while ( v11 != (unsigned int *)((char *)v7 + ((v9 - 64) & 0xFFFFFFFFFFFFFFC0LL) + 64) );
    v9 &= 0x3Fu;
    v7 = (unsigned int *)((char *)v7 + (v10 & 0xFFFFFFFFFFFFFFC0LL) + 64);
  }
  v13 = (unsigned int *)((char *)v7 + v9);
  if ( v13 != v7 )
  {
    for ( LODWORD(result) = *(unsigned __int8 *)(a1 + 88); ; LODWORD(result) = 0 )
    {
      while ( 1 )
      {
        v14 = result;
        result = (unsigned int)(result + 1);
        *(_BYTE *)(a1 + (v14 ^ 3u)) = *(_BYTE *)v7;
        *(_BYTE *)(a1 + 88) = result;
        if ( (_BYTE)result == 64 )
          break;
        v7 = (unsigned int *)((char *)v7 + 1);
        if ( v7 == v13 )
          return result;
      }
      v7 = (unsigned int *)((char *)v7 + 1);
      result = sub_2234D20((_DWORD *)a1);
      *(_BYTE *)(a1 + 88) = 0;
      if ( v7 == v13 )
        break;
    }
  }
  return result;
}
