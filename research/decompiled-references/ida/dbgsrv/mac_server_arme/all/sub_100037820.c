/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100037820
// Address: 0x0000000100037820

//----- (0000000100037820) ----------------------------------------------------
void __fastcall sub_100037820(unsigned __int8 **a1, unsigned __int8 *a2)
{
  unsigned __int8 v2[8]; // [xsp+8h] [xbp-38h] BYREF
  void *v3; // [xsp+10h] [xbp-30h]
  __int64 v4; // [xsp+18h] [xbp-28h]
  __int64 v5; // [xsp+20h] [xbp-20h]

  if ( a1[1] != a2 )
  {
    v2[0] = 2;
    v4 = 0;
    v5 = 0;
    v3 = nullptr;
    sub_10002B940(a1, a2, v2);
    if ( v2[0] == 5 )
    {
      sub_10003307C((__int64)v3, v2);
    }
    else if ( v2[0] == 7 )
    {
      if ( v3 )
      {
        v4 = 0;
        qfree(v3);
      }
    }
  }
}
