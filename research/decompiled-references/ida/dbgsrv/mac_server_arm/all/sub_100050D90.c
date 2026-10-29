/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050D90
// Address: 0x0000000100050D90

//----- (0000000100050D90) ----------------------------------------------------
void __fastcall sub_100050D90(__int64 *a1, unsigned __int64 a2)
{
  void *v2[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v3; // [xsp+10h] [xbp-60h]
  __int128 v4; // [xsp+20h] [xbp-50h]
  __int128 v5; // [xsp+30h] [xbp-40h]
  __int64 v6; // [xsp+40h] [xbp-30h]
  int v7; // [xsp+48h] [xbp-28h]

  if ( a1[1] != a2 )
  {
    v6 = 0;
    v4 = 0u;
    v5 = 0u;
    *(_OWORD *)v2 = 0u;
    v3 = 0u;
    v7 = -1;
    sub_1000550CC(a1, a2, (unsigned __int64)v2);
    if ( (_QWORD)v5 )
    {
      *((_QWORD *)&v5 + 1) = 0;
      qfree((void *)v5);
      *(_QWORD *)&v5 = 0;
      v6 = 0;
    }
    if ( *((_QWORD *)&v3 + 1) )
    {
      *(_QWORD *)&v4 = 0;
      qfree(*((void **)&v3 + 1));
      *((_QWORD *)&v3 + 1) = 0;
      *((_QWORD *)&v4 + 1) = 0;
    }
    if ( v2[0] )
    {
      v2[1] = nullptr;
      qfree(v2[0]);
    }
  }
}
