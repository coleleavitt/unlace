/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100049480
// Address: 0x0000000100049480

//----- (0000000100049480) ----------------------------------------------------
__int64 __fastcall sub_100049480(char *a1)
{
  int i; // r15d
  unsigned __int8 *v3; // rcx
  __int64 v4; // rax
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx

  for ( i = 0; ; i |= 2u )
  {
    while ( 2 )
    {
      v3 = (unsigned __int8 *)(a1 + 1);
      do
      {
        a1 = (char *)v3;
        v4 = (char)*(v3 - 1);
        if ( v4 < 0 )
          goto LABEL_9;
        ++v3;
      }
      while ( (_DefaultRuneLocale.__runetype[v4] & 0x400) != 0 );
      if ( (_BYTE)v4 == 46 )
      {
        v5 = i == 0;
        i = 1;
        if ( v5 )
          continue;
        return 0xFFFFFFFFLL;
      }
      break;
    }
LABEL_9:
    v6 = __toupper((unsigned __int8)v4) << 24;
    if ( v6 != 1157627904 )
      break;
    if ( (i & 2) != 0 )
      return 0xFFFFFFFFLL;
    v7 = (unsigned __int8)*a1;
    if ( v7 == 43 || v7 == 45 )
      ++a1;
  }
  if ( !i )
    return 0;
  if ( v6 != 1275068416 && v6 != 1174405120 )
    return 1;
  v9 = *a1;
  if ( v9 < 0 || (result = 0xFFFFFFFFLL, (_DefaultRuneLocale.__runetype[v9] & 0x500) == 0) )
  {
    v10 = (unsigned int)(unsigned __int8)v9 - 36;
    if ( (unsigned int)v10 > 0x3B )
      return 1;
    result = 0xFFFFFFFFLL;
    v11 = 0x800000000000401LL;
    if ( !_bittest64(&v11, v10) )
      return 1;
  }
  return result;
}
