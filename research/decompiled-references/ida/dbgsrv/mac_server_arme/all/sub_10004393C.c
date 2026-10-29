/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004393C
// Address: 0x000000010004393C

//----- (000000010004393C) ----------------------------------------------------
__int64 __fastcall sub_10004393C(char *a1)
{
  int v2; // w8
  int v3; // w22
  unsigned __int8 *v4; // x9
  __int64 v5; // x8
  int v6; // w8
  int v7; // w9
  __int64 v9; // x8
  unsigned int v10; // w8

  v2 = 0;
  while ( 1 )
  {
    v3 = v2;
    v4 = (unsigned __int8 *)(a1 + 1);
    do
    {
      a1 = (char *)v4;
      v5 = (char)*(v4 - 1);
      if ( v5 < 0 )
        goto LABEL_9;
      ++v4;
    }
    while ( (_DefaultRuneLocale.__runetype[v5] & 0x400) != 0 );
    if ( (_DWORD)v5 == 46 )
    {
      v2 = 1;
      if ( !v3 )
        continue;
      return 0xFFFFFFFFLL;
    }
LABEL_9:
    v6 = __toupper((unsigned __int8)v5) << 24;
    if ( v6 != 1157627904 )
      break;
    if ( (v3 & 2) != 0 )
      return 0xFFFFFFFFLL;
    v2 = v3 | 2;
    v7 = (unsigned __int8)*a1;
    if ( v7 == 43 || v7 == 45 )
      ++a1;
  }
  if ( !v3 )
    return 0;
  if ( v6 == 1275068416 || v6 == 1174405120 )
  {
    v9 = *a1;
    if ( (v9 & 0x8000000000000000LL) == 0 && (_DefaultRuneLocale.__runetype[v9] & 0x500) != 0 )
      return 0xFFFFFFFFLL;
    v10 = (unsigned __int8)*a1 - 36;
    if ( v10 <= 0x3B && ((1LL << v10) & 0x800000000000401LL) != 0 )
      return 0xFFFFFFFFLL;
  }
  return 1;
}
