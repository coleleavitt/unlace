/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FF28
// Address: 0x000000000047FF28

//----- (000000000047FF28) ----------------------------------------------------
__int64 __fastcall sub_47FF28(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x19
  unsigned int v4; // w21
  size_t v5; // x20
  size_t v6; // x0
  char v8[4096]; // [xsp+48h] [xbp-1008h] BYREF

  sub_48C428(a1, 0, 0);
  v2 = sub_48C400(a1);
  if ( v2 <= 0 )
  {
    return 0;
  }
  else
  {
    v3 = v2;
    v4 = 0;
    while ( 1 )
    {
      v5 = (unsigned __int64)v3 > 0x1000 ? 4096LL : v3;
      v6 = sub_48C160(a1, v8, v5);
      if ( v6 != v5 )
        break;
      v3 -= v6;
      v4 = sub_47FF10(v4, v8, v6);
      if ( v3 <= 0 )
        return v4;
    }
    return (unsigned int)-1;
  }
}
