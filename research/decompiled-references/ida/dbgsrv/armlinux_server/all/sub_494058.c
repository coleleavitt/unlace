/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494058
// Address: 0x0000000000494058

//----- (0000000000494058) ----------------------------------------------------
__int64 __fastcall sub_494058(__int64 a1, int a2, int a3)
{
  _BOOL4 v3; // w25
  __int64 *v4; // x19
  __int64 *v5; // x20
  unsigned int v8; // w23
  __int64 *v9; // x3
  _BOOL4 v10; // w22
  __int64 v11; // x0
  __int64 v13; // x0

  v3 = 1;
  if ( (a3 & 0x7F) != 0 )
    v3 = ((a3 & 0x7F) + 1) << 24 >> 25 > 0;
  v5 = (__int64 *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 24);
  if ( v4 == (__int64 *)(a1 + 24) )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = v4 + 2;
      if ( *((_BYTE *)v4 + 40) )
        goto LABEL_17;
      if ( !v8 )
      {
        v10 = *(_DWORD *)v9 == -1;
        if ( *(_DWORD *)v9 == a2 )
          v10 = 1;
        if ( v10 && (a3 != 0xFFFF || (*((_DWORD *)v4 + 7) & 8) != 0) )
          break;
      }
LABEL_15:
      if ( !v3 || *(_DWORD *)v9 != a2 )
        goto LABEL_17;
      v13 = v9[2];
      *((_BYTE *)v9 + 8) = 1;
      *((_BYTE *)v9 + 24) = 1;
      sub_493F08(v13);
      v4 = (__int64 *)*v4;
      if ( v4 == v5 )
        return v8;
    }
    v11 = v4[4];
    *(_DWORD *)v9 = a2;
    *((_DWORD *)v4 + 5) = a3;
    *((_BYTE *)v4 + 40) = 1;
    sub_493F08(v11);
    v4 = (__int64 *)*v4;
    if ( v4 == v5 )
      return v10;
    v9 = v4 + 2;
    v8 = *((unsigned __int8 *)v4 + 40);
    if ( !*((_BYTE *)v4 + 40) )
    {
      v8 = v10;
      goto LABEL_15;
    }
LABEL_17:
    v4 = (__int64 *)*v4;
    if ( v4 == v5 )
      return v8;
  }
}
