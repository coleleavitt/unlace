/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050898
// Address: 0x0000000100050898

//----- (0000000100050898) ----------------------------------------------------
void __fastcall sub_100050898(__int64 a1, unsigned __int64 a2)
{
  int v2; // [xsp+8h] [xbp-38h] BYREF
  void *v3; // [xsp+10h] [xbp-30h]
  __int64 v4; // [xsp+18h] [xbp-28h]
  __int64 v5; // [xsp+20h] [xbp-20h]

  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v2 = -2;
    v4 = 0;
    v5 = 0;
    v3 = (void *)-1LL;
    sub_100054D84((void **)a1, a2, (unsigned __int64)&v2);
    if ( v2 >= -1 )
    {
      if ( v3 )
      {
        v4 = 0;
        qfree(v3);
      }
    }
  }
}
