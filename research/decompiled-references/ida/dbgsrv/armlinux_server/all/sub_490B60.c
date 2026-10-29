/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490B60
// Address: 0x0000000000490B60

//----- (0000000000490B60) ----------------------------------------------------
__int64 __fastcall sub_490B60(FILE *a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // x4
  __int64 i; // x3
  char v6; // t1
  __int64 j; // x3
  _BYTE ptr[32]; // [xsp+28h] [xbp-28h] BYREF

  if ( (unsigned __int64)a3 > 0x20 )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    v4 = a2 + a3;
    for ( i = 0; a3 > (int)i; ++i )
    {
      v6 = *(_BYTE *)--v4;
      ptr[i] = v6;
    }
  }
  else
  {
    for ( j = 0; a3 > (int)j; ++j )
      ptr[j] = *(_BYTE *)(a2 + j);
  }
  if ( a3 == sub_490560(a1, ptr, a3) )
    return 0;
  else
    return 0xFFFFFFFFLL;
}
