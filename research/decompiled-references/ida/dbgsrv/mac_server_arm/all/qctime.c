/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime
// Address: 0x000000010006FEE4

//----- (000000010006FEE4) ----------------------------------------------------
__int64 __fastcall qctime(__int64 a1, unsigned __int64 a2, int a3)
{
  time_t v6; // [xsp+0h] [xbp-40h] BYREF
  char v7[30]; // [xsp+Ah] [xbp-36h] BYREF

  v6 = a3;
  if ( a3 < 0 || !ctime_r(&v6, v7) )
  {
    qstrncpy((const char *)a1, "[wrong timestamp]\n", a2);
    return 0;
  }
  else
  {
    qstrncpy((const char *)a1, (unsigned __int8 *)v7, a2);
    if ( a2 >= 9 && *(_BYTE *)(a1 + 8) == 32 )
      *(_BYTE *)(a1 + 8) = 48;
    return 1;
  }
}
