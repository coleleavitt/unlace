__int64 __fastcall dwarf_decode_leb128(unsigned __int8 *a1, _QWORD *a2, __int64 *a3, unsigned __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int8 *v7; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r10d
  int v11; // edi
  unsigned __int64 v12; // rcx
  __int64 v13; // r9

  if ( (unsigned __int64)a1 >= a4 )
    return 1;
  v5 = *a1;
  if ( (v5 & 0x80u) == 0LL )
  {
    if ( a2 )
      *a2 = 1;
    if ( a3 )
    {
      *a3 = v5;
      return 0;
    }
    return 0;
  }
  v7 = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) >= a4 )
    return 1;
  v9 = a1[1];
  if ( (v9 & 0x80u) == 0LL )
  {
    if ( a2 )
      *a2 = 2;
    if ( a3 )
    {
      *a3 = v5 & 0x7F | (v9 << 7);
      return 0;
    }
    return 0;
  }
  v10 = 1;
  v11 = 2;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v12 <= 0x3F )
    {
      v13 |= (v5 & 0x7F) << v12;
      if ( (v5 & 0x80) == 0 )
        goto LABEL_11;
      if ( v11 == 25 )
        break;
      if ( (unsigned __int64)v7 >= a4 )
        return 1;
      goto LABEL_8;
    }
    if ( (v5 & 0x7F) != 0 )
      return 1;
    if ( v10 == 24 )
      break;
    if ( (unsigned __int64)v7 >= a4 )
    {
      if ( (unsigned __int8 *)a4 != v7 || v5 )
        return 1;
LABEL_11:
      if ( a2 )
        *a2 = v10;
      if ( a3 )
        *a3 = v13;
      return 0;
    }
LABEL_8:
    v5 = *v7;
    v12 += 7LL;
    ++v7;
    ++v11;
    ++v10;
  }
  if ( a2 )
    *a2 = 24;
  return 1;
}

