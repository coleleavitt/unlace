/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F27C
// Address: 0x000000010004F27C

//----- (000000010004F27C) ----------------------------------------------------
void __fastcall sub_10004F27C(unsigned __int64 *a1, unsigned __int64 a2)
{
  void *v2[2]; // [xsp+0h] [xbp-1D0h] BYREF
  __int128 v3; // [xsp+10h] [xbp-1C0h]
  void *v4[2]; // [xsp+20h] [xbp-1B0h]
  __int128 v5; // [xsp+30h] [xbp-1A0h]
  __int64 v6; // [xsp+40h] [xbp-190h]
  __int64 v7; // [xsp+48h] [xbp-188h]
  __int64 v8; // [xsp+50h] [xbp-180h]
  __int64 v9; // [xsp+58h] [xbp-178h]
  _BYTE v10[24]; // [xsp+60h] [xbp-170h] BYREF
  __int128 v11; // [xsp+78h] [xbp-158h]
  __int64 v12; // [xsp+88h] [xbp-148h]
  __int128 v13; // [xsp+90h] [xbp-140h]
  __int128 v14; // [xsp+A0h] [xbp-130h]
  __int64 v15; // [xsp+B0h] [xbp-120h]
  __int128 v16; // [xsp+B8h] [xbp-118h]
  _QWORD v17[3]; // [xsp+C8h] [xbp-108h] BYREF
  __int128 v18; // [xsp+E0h] [xbp-F0h]
  __int128 v19; // [xsp+F0h] [xbp-E0h]
  int v20; // [xsp+100h] [xbp-D0h]
  int v21; // [xsp+104h] [xbp-CCh]
  __int128 v22; // [xsp+108h] [xbp-C8h]
  _DWORD v23[6]; // [xsp+118h] [xbp-B8h] BYREF
  __int128 v24; // [xsp+130h] [xbp-A0h]
  __int128 v25; // [xsp+140h] [xbp-90h]
  _OWORD v26[5]; // [xsp+150h] [xbp-80h] BYREF
  __int128 v27; // [xsp+1A0h] [xbp-30h]

  if ( a1[1] != a2 )
  {
    v27 = 0u;
    v21 = 0;
    *(_OWORD *)v4 = 0u;
    v5 = 0u;
    *(_OWORD *)v2 = 0u;
    v3 = 0u;
    v22 = 0u;
    memset(v23, 0, sizeof(v23));
    v6 = -1;
    v7 = -1;
    v11 = 0u;
    v12 = 0;
    v13 = 0u;
    v14 = 0u;
    v15 = 0;
    v16 = 0u;
    memset(v17, 0, sizeof(v17));
    v18 = 0u;
    v19 = 0u;
    v20 = 0;
    memset(v26, 0, sizeof(v26));
    v24 = 0u;
    v25 = 0u;
    LODWORD(v27) = 0;
    memset(v10, 0, sizeof(v10));
    v8 = -1;
    v9 = 0;
    sub_100057ABC(a1, a2, (unsigned __int64)v2);
    if ( v4[1] )
    {
      *(_QWORD *)&v5 = 0;
      qfree(v4[1]);
      v4[1] = nullptr;
      *((_QWORD *)&v5 + 1) = 0;
    }
    if ( v2[1] )
    {
      *(_QWORD *)&v3 = 0;
      qfree(v2[1]);
    }
  }
}
