/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A5A0
// Address: 0x000000010004A5A0

//----- (000000010004A5A0) ----------------------------------------------------
__int64 __fastcall sub_10004A5A0(const char *a1)
{
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 v4; // x0
  int v5; // w20
  void *v7; // [xsp+10h] [xbp-290h]
  void *v8; // [xsp+10h] [xbp-290h]
  __int64 (__fastcall **v9)(); // [xsp+18h] [xbp-288h] BYREF
  void *v10; // [xsp+20h] [xbp-280h]
  __int64 v11; // [xsp+28h] [xbp-278h] BYREF
  __int64 v12; // [xsp+30h] [xbp-270h]
  __int64 v13; // [xsp+38h] [xbp-268h]
  int v14; // [xsp+40h] [xbp-260h]
  char v15; // [xsp+44h] [xbp-25Ch]
  __int64 v16; // [xsp+48h] [xbp-258h]
  char v17; // [xsp+50h] [xbp-250h]
  __int128 v18; // [xsp+60h] [xbp-240h]
  __int128 v19; // [xsp+70h] [xbp-230h]
  __int64 v20; // [xsp+80h] [xbp-220h]
  char v21; // [xsp+88h] [xbp-218h]
  __int64 v22; // [xsp+90h] [xbp-210h]
  __int128 v23; // [xsp+98h] [xbp-208h]
  __int128 v24; // [xsp+A8h] [xbp-1F8h]
  __int16 v25; // [xsp+B8h] [xbp-1E8h]
  __int128 v26; // [xsp+E0h] [xbp-1C0h]
  __int128 v27; // [xsp+F0h] [xbp-1B0h]
  __int128 v28; // [xsp+100h] [xbp-1A0h]
  __int128 v29; // [xsp+110h] [xbp-190h]
  __int128 v30; // [xsp+120h] [xbp-180h]
  __int128 v31; // [xsp+130h] [xbp-170h]
  __int128 v32; // [xsp+140h] [xbp-160h]
  __int128 v33; // [xsp+150h] [xbp-150h]
  __int128 v34; // [xsp+160h] [xbp-140h]
  __int128 v35; // [xsp+170h] [xbp-130h]
  __int128 v36; // [xsp+180h] [xbp-120h]
  __int128 v37; // [xsp+190h] [xbp-110h]
  __int128 v38; // [xsp+1A0h] [xbp-100h]
  __int128 v39; // [xsp+1B0h] [xbp-F0h]
  _BYTE v40[19]; // [xsp+1C0h] [xbp-E0h] BYREF
  int v41; // [xsp+1D4h] [xbp-CCh]
  __int64 v42; // [xsp+1D8h] [xbp-C8h]
  __int64 v43; // [xsp+1E0h] [xbp-C0h]
  __int64 v44; // [xsp+1E8h] [xbp-B8h]
  __int64 v45; // [xsp+1F0h] [xbp-B0h]
  int v46; // [xsp+1F8h] [xbp-A8h]
  __int128 v47; // [xsp+200h] [xbp-A0h]
  __int128 v48; // [xsp+210h] [xbp-90h]

  v2 = open_linput(a1, 0);
  v7 = (void *)v2;
  if ( v2 )
  {
    v9 = off_10009AE90;
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    if ( (unsigned int)sub_100049D1C((__int64)&v9, v2, 0, 1) )
      v3 = 11;
    else
      v3 = 0xFFFFFFFFLL;
    v9 = off_10009AE90;
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
    }
    close_linput(v7);
  }
  else
  {
    v3 = 0xFFFFFFFFLL;
  }
  v4 = open_linput(a1, 0);
  v8 = (void *)v4;
  if ( v4 )
  {
    v9 = off_100099670;
    v10 = &v11;
    v11 = 0xFFFFFFFFLL;
    v12 = -1;
    v13 = -1;
    v14 = 8;
    v15 = 1;
    v16 = v4;
    v17 = 0;
    v18 = 0u;
    v19 = 0u;
    v20 = -1;
    v21 = 0;
    v22 = -1;
    v41 = 0;
    v23 = 0u;
    v24 = 0u;
    v25 = 0;
    v39 = 0u;
    memset(v40, 0, sizeof(v40));
    v37 = 0u;
    v38 = 0u;
    v35 = 0u;
    v36 = 0u;
    v33 = 0u;
    v34 = 0u;
    v31 = 0u;
    v32 = 0u;
    v30 = 0u;
    v29 = 0u;
    v28 = 0u;
    v27 = 0u;
    v26 = 0u;
    v42 = -1;
    v43 = -1;
    v46 = 0;
    v44 = 0;
    v45 = 0;
    v47 = 0u;
    v48 = 0u;
    v5 = sub_10000E3F0((__int64)&v9);
    sub_100019A48((__int64)&v9);
    close_linput(v8);
    if ( v5 )
      return 25;
    else
      return (unsigned int)v3;
  }
  return v3;
}
// 100099670: using guessed type __int64 (__fastcall *off_100099670[2])();
// 10009AE90: using guessed type __int64 (__fastcall *off_10009AE90[3])();
