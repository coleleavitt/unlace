/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000082E0
// Address: 0x00000001000082E0

//----- (00000001000082E0) ----------------------------------------------------
__int64 __fastcall sub_1000082E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // x0
  __int64 v7; // x19
  __int64 (__fastcall **v8)(); // [xsp+8h] [xbp-88h] BYREF
  int v9; // [xsp+10h] [xbp-80h]
  __int64 v10; // [xsp+14h] [xbp-7Ch]
  __int64 v11; // [xsp+1Ch] [xbp-74h]
  __int64 v12; // [xsp+24h] [xbp-6Ch]
  void *v13[2]; // [xsp+30h] [xbp-60h]
  __int128 v14; // [xsp+40h] [xbp-50h]
  __int128 v15; // [xsp+50h] [xbp-40h]
  __int64 v16; // [xsp+60h] [xbp-30h]

  if ( !*(_QWORD *)(a1 + 1712) || !rangeset_t_find_range(a1 + 1704, a3) )
    return 0xFFFFFFFFLL;
  v9 = 16;
  v10 = 0;
  v12 = 0;
  v11 = 0;
  *(_OWORD *)v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v8 = off_100098C88;
  v16 = a2;
  if ( (unsigned int)sub_1000182B4(a1 + 1560, a3, (__int64)&v8, 0) )
    result = 1;
  else
    result = 0xFFFFFFFFLL;
  v8 = off_100098B90;
  if ( v13[1] )
  {
    *(_QWORD *)&v14 = 0;
    v7 = result;
    qfree(v13[1]);
    return v7;
  }
  return result;
}
// 100098B90: using guessed type __int64 (__fastcall *off_100098B90[8])();
// 100098C88: using guessed type __int64 (__fastcall *off_100098C88[8])();
