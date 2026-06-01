/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490328
// Address: 0x0000000000490328

//----- (0000000000490328) ----------------------------------------------------
__int64 __fastcall sub_490328(int a1, __int64 a2)
{
  unsigned int v3; // w6
  bool v4; // zf
  _BYTE v6[136]; // [xsp+28h] [xbp-88h] BYREF

  v3 = __fxstat64(0, a1, (struct stat64 *)v6);
  if ( v3 )
    v4 = 1;
  else
    v4 = a2 == 0;
  if ( !v4 )
    sub_48FC68(a2, (__int64)v6);
  return v3;
}
// 49037C: variable 'v3' is possibly undefined
