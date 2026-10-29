/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004CAD8
// Address: 0x000000010004CAD8

//----- (000000010004CAD8) ----------------------------------------------------
__int64 __fastcall sub_10004CAD8(__int64 a1)
{
  const char *v2; // x0
  __int64 v3; // x0
  int v4; // w8
  __int64 v5; // x19
  void *v7; // [xsp+10h] [xbp-290h]
  __int64 (__fastcall **v8)(); // [xsp+18h] [xbp-288h] BYREF
  void *v9; // [xsp+20h] [xbp-280h]
  __int64 v10; // [xsp+28h] [xbp-278h] BYREF
  __int64 v11; // [xsp+30h] [xbp-270h]
  __int64 v12; // [xsp+38h] [xbp-268h]
  int v13; // [xsp+40h] [xbp-260h]
  char v14; // [xsp+44h] [xbp-25Ch]
  __int64 v15; // [xsp+48h] [xbp-258h]
  char v16; // [xsp+50h] [xbp-250h]
  __int128 v17; // [xsp+60h] [xbp-240h]
  __int128 v18; // [xsp+70h] [xbp-230h]
  __int64 v19; // [xsp+80h] [xbp-220h]
  char v20; // [xsp+88h] [xbp-218h]
  __int64 v21; // [xsp+90h] [xbp-210h]
  __int128 v22; // [xsp+98h] [xbp-208h]
  __int128 v23; // [xsp+A8h] [xbp-1F8h]
  __int16 v24; // [xsp+B8h] [xbp-1E8h]
  __int128 v25; // [xsp+E0h] [xbp-1C0h]
  __int128 v26; // [xsp+F0h] [xbp-1B0h]
  __int128 v27; // [xsp+100h] [xbp-1A0h]
  __int128 v28; // [xsp+110h] [xbp-190h]
  __int128 v29; // [xsp+120h] [xbp-180h]
  __int128 v30; // [xsp+130h] [xbp-170h]
  __int128 v31; // [xsp+140h] [xbp-160h]
  __int128 v32; // [xsp+150h] [xbp-150h]
  __int128 v33; // [xsp+160h] [xbp-140h]
  __int128 v34; // [xsp+170h] [xbp-130h]
  __int128 v35; // [xsp+180h] [xbp-120h]
  __int128 v36; // [xsp+190h] [xbp-110h]
  __int128 v37; // [xsp+1A0h] [xbp-100h]
  __int128 v38; // [xsp+1B0h] [xbp-F0h]
  _BYTE v39[19]; // [xsp+1C0h] [xbp-E0h] BYREF
  int v40; // [xsp+1D4h] [xbp-CCh]
  __int64 v41; // [xsp+1D8h] [xbp-C8h]
  __int64 v42; // [xsp+1E0h] [xbp-C0h]
  __int64 v43; // [xsp+1E8h] [xbp-B8h]
  __int64 v44; // [xsp+1F0h] [xbp-B0h]
  int v45; // [xsp+1F8h] [xbp-A8h]
  __int128 v46; // [xsp+200h] [xbp-A0h]
  __int128 v47; // [xsp+210h] [xbp-90h]
  __int64 v48; // [xsp+260h] [xbp-40h]

  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  else
    v2 = &byte_10007AE40;
  v3 = open_linput(v2, 0);
  v7 = (void *)v3;
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 24);
  if ( v4 == 25 )
  {
    v8 = off_10009D6B0;
    v9 = &v10;
    v10 = 0xFFFFFFFFLL;
    v11 = -1;
    v12 = -1;
    v13 = 8;
    v14 = 1;
    v15 = v3;
    v16 = 0;
    v17 = 0u;
    v18 = 0u;
    v19 = -1;
    v20 = 0;
    v21 = -1;
    v40 = 0;
    v22 = 0u;
    v23 = 0u;
    v24 = 0;
    v38 = 0u;
    memset(v39, 0, sizeof(v39));
    v36 = 0u;
    v37 = 0u;
    v34 = 0u;
    v35 = 0u;
    v32 = 0u;
    v33 = 0u;
    v30 = 0u;
    v31 = 0u;
    v29 = 0u;
    v28 = 0u;
    v27 = 0u;
    v26 = 0u;
    v25 = 0u;
    v41 = -1;
    v42 = -1;
    v45 = 0;
    v43 = 0;
    v44 = 0;
    v46 = 0u;
    v47 = 0u;
    if ( (unsigned int)sub_10000EE5C((__int64)&v8) && (unsigned int)sub_10000F5B0((__int64)&v8, 0, 0, 0) )
    {
      sub_100011A54((__int64)&v8);
      if ( (v39[16] & 1) == 0 )
        sub_100011848((__int64)&v8);
      if ( v41 == -1 )
        v5 = 0;
      else
        v5 = v41;
    }
    else
    {
      v5 = 0;
    }
    sub_10001B4B4((__int64)&v8);
  }
  else if ( v4 == 11 )
  {
    v8 = off_10009EED0;
    v9 = nullptr;
    v10 = 0;
    v11 = 0;
    if ( (unsigned int)sub_10004C46C((__int64)&v8, v3, 1, 1) )
      v5 = v48;
    else
      v5 = 0;
    v8 = off_10009EED0;
    if ( v9 )
    {
      v10 = 0;
      qfree(v9);
    }
  }
  else
  {
    v5 = 0;
  }
  close_linput(v7);
  return v5;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 10009D6B0: using guessed type __int64 (__fastcall *off_10009D6B0[2])();
// 10009EED0: using guessed type __int64 (__fastcall *off_10009EED0[3])();
