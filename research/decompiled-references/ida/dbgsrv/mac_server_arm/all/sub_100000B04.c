/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100000B04
// Address: 0x0000000100000B04

//----- (0000000100000B04) ----------------------------------------------------
__int64 __fastcall sub_100000B04(__int64 a1, int a2, const char *a3, __int64 a4)
{
  unsigned int v7; // w8
  unsigned __int8 *v8; // x0
  unsigned __int8 *v9; // x22
  size_t v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+14h] [xbp-3Ch] BYREF
  int v13[2]; // [xsp+18h] [xbp-38h] BYREF
  int v14; // [xsp+20h] [xbp-30h]

  *(_QWORD *)v13 = 0x800000001LL;
  v12 = 0;
  v11 = 4;
  sysctl(v13, 2u, &v12, &v11, nullptr, 0);
  v7 = v12;
  if ( v12 <= 0 )
  {
    v7 = 1024;
    v12 = 1024;
  }
  v8 = (unsigned __int8 *)qalloc((void *)v7);
  if ( !v8 )
    sub_100000C24();
  v9 = v8;
  *(_QWORD *)v13 = 0x3100000001LL;
  v14 = a2;
  v11 = v12;
  *a3 = 0;
  if ( sysctl(v13, 3u, v8, &v11, nullptr, 0) != -1 )
    qstrncpy(a3, v9 + 4, a4);
  qfree(v9);
  return 1;
}
