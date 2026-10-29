/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DDB0
// Address: 0x000000000049DDB0

//----- (000000000049DDB0) ----------------------------------------------------
__int64 __fastcall sub_49DDB0(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // x3
  void (__fastcall *v4)(__int64 *, __int64, __int64, __int64 *); // x4
  __int64 v6; // x2
  __int64 v8; // [xsp+28h] [xbp+28h] BYREF
  int v9; // [xsp+30h] [xbp+30h]
  int v10; // [xsp+34h] [xbp+34h]
  __int64 v11; // [xsp+38h] [xbp+38h]

  v3 = *a1;
  v8 = 0;
  v4 = *(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v3 + 48);
  v10 = 16;
  v9 = 0;
  v6 = *a3;
  v11 = 0;
  v4(a1, a2, v6, &v8);
  if ( (v9 & 6) != 6 )
    return 0;
  *a3 = v8;
  return 1;
}
