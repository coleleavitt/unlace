/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B540
// Address: 0x000000000043B540

//----- (000000000043B540) ----------------------------------------------------
__int64 __fastcall sub_43B540(__int64 *a1, __int64 a2)
{
  void *v2; // x0
  void *v4; // [xsp+10h] [xbp-20h] BYREF
  unsigned __int64 v5; // [xsp+18h] [xbp-18h]
  __int64 v6; // [xsp+20h] [xbp-10h]

  v4 = nullptr;
  v5 = 0;
  v6 = 0;
  sub_43AAE8((__int64 (__fastcall *)(__int64))sub_43A9E8, (__int64)&v4, a1, a2);
  v2 = v4;
  if ( v5 > 1 )
  {
    sub_40A690((int)"%s", v4);
    v2 = v4;
  }
  if ( v2 )
  {
    v5 = 0;
    j__free(v2);
  }
  return 0;
}
