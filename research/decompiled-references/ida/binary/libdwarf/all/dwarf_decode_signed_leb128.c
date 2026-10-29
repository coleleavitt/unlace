__int64 __fastcall dwarf_decode_signed_leb128(unsigned __int8 *a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // esi
  unsigned __int8 *v11; // rdx
  int v12; // edi

  if ( !a3 || (unsigned __int64)a1 >= a4 )
    return 1;
  v6 = 7;
  v7 = 0;
  v8 = 0;
  v9 = *a1;
  v11 = a1 + 1;
  v12 = 2;
  while ( v7 <= 0x3F )
  {
    v8 |= (unsigned __int64)(v9 & 0x7F) << v7;
    if ( (v9 & 0x80) == 0 )
    {
      if ( (v9 & 0x40) == 0 )
        goto LABEL_12;
      if ( v6 <= 0x3E )
      {
        v8 |= -1LL << v6;
        goto LABEL_12;
      }
      goto LABEL_20;
    }
    if ( (unsigned __int64)v11 >= a4 )
      return 1;
    v9 = *v11;
    if ( v12 == 25 )
      goto LABEL_15;
LABEL_6:
    v7 += 7LL;
    ++v11;
    v6 += 7LL;
    ++v12;
  }
  if ( (v9 & 0xBF) != 0 )
  {
    if ( (v9 & 0x7F) != 0 )
      return 1;
    if ( v12 == 25 )
    {
LABEL_15:
      if ( a2 )
        *a2 = 24;
      return 1;
    }
    if ( (unsigned __int64)v11 >= a4 )
      return 1;
    v9 = *v11;
    goto LABEL_6;
  }
  if ( !v9 )
    goto LABEL_12;
LABEL_20:
  v8 |= 0x8000000000000000LL;
LABEL_12:
  if ( a2 )
    *a2 = (unsigned int)(v12 - 1);
  *a3 = v8;
  return 0;
}

