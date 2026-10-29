/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019940
// Address: 0x0000000100019940

//----- (0000000100019940) ----------------------------------------------------
__int64 __fastcall sub_100019940(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  _QWORD *v6; // x0
  _QWORD *generic_linput; // x0
  _QWORD *v8; // x22
  int v9; // w0
  int v10; // w8
  __int64 v11; // x9
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x24
  __int64 v15; // x22
  __int64 v16; // x23
  __int64 v17; // x8
  void *v19; // [xsp+8h] [xbp-3D8h]
  __int128 v20; // [xsp+10h] [xbp-3D0h] BYREF
  __int64 v21; // [xsp+20h] [xbp-3C0h]
  int v22; // [xsp+28h] [xbp-3B8h]
  char v23; // [xsp+2Ch] [xbp-3B4h]
  _QWORD v24[66]; // [xsp+38h] [xbp-3A8h] BYREF
  __int128 v25; // [xsp+248h] [xbp-198h]
  __int128 v26; // [xsp+258h] [xbp-188h]
  __int128 v27; // [xsp+268h] [xbp-178h]
  __int128 v28; // [xsp+278h] [xbp-168h]
  __int128 v29; // [xsp+288h] [xbp-158h]
  __int128 v30; // [xsp+298h] [xbp-148h]
  __int128 v31; // [xsp+2A8h] [xbp-138h]
  __int128 v32; // [xsp+2B8h] [xbp-128h]
  __int128 v33; // [xsp+2C8h] [xbp-118h]
  __int128 v34; // [xsp+2D8h] [xbp-108h]
  __int128 v35; // [xsp+2E8h] [xbp-F8h]
  __int128 v36; // [xsp+2F8h] [xbp-E8h]
  __int128 v37; // [xsp+308h] [xbp-D8h]
  __int128 v38; // [xsp+318h] [xbp-C8h]
  __int64 v39; // [xsp+328h] [xbp-B8h]
  __int64 v40; // [xsp+330h] [xbp-B0h]
  __int128 v41; // [xsp+338h] [xbp-A8h]
  __int128 v42; // [xsp+348h] [xbp-98h]
  __int128 v43; // [xsp+358h] [xbp-88h]
  __int128 v44; // [xsp+368h] [xbp-78h]
  _BYTE v45[29]; // [xsp+378h] [xbp-68h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v6 = operator new(0x28u);
    v6[3] = v3;
    v6[4] = a1;
    *v6 = off_10009D838;
    v6[1] = 0xFFFFFFFFLL;
    *((_DWORD *)v6 + 4) = 0;
    generic_linput = create_generic_linput(v6);
    v19 = generic_linput;
    if ( generic_linput )
    {
      v8 = generic_linput;
      v20 = xmmword_10007ABD0;
      v23 = 1;
      v9 = sub_10005D100();
      if ( v9 == 8 )
        v10 = 8;
      else
        v10 = 4;
      v11 = 0xFFFFFFFFLL;
      if ( v9 == 8 )
        v11 = -1;
      v21 = v11;
      v22 = v10;
      v24[0] = &v20;
      v24[1] = v8;
      v25 = 0u;
      v26 = 0u;
      v27 = 0u;
      v28 = 0u;
      v29 = 0u;
      v30 = 0u;
      v31 = 0u;
      v32 = 0u;
      v33 = 0u;
      v34 = 0u;
      v35 = 0u;
      v36 = 0u;
      v37 = 0u;
      v38 = 0u;
      v39 = 0;
      v40 = -1;
      v41 = 0u;
      v42 = 0u;
      v43 = 0u;
      v44 = 0u;
      memset(v45, 0, sizeof(v45));
      if ( (sub_100013A04((__int64)v24, 65, nullptr) & 1) != 0 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && SDWORD2(v25) >= 1 )
        {
          v12 = 0;
          v13 = *(_QWORD *)(a1 + 128);
          v14 = DWORD2(v25) & 0x7FFFFFFF;
          do
          {
            (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(
              a2,
              *(_QWORD *)(v25 + v12) + v13,
              *(_QWORD *)(v25 + v12) + v13 + *(_QWORD *)(v25 + v12 + 8));
            v12 += 32;
            --v14;
          }
          while ( v14 );
        }
        if ( SDWORD2(v34) < 1 )
        {
LABEL_20:
          v3 = 1;
          goto LABEL_21;
        }
        v15 = DWORD2(v34) & 0x7FFFFFFF;
        v16 = 16;
        while ( 1 )
        {
          v17 = *(_QWORD *)(v34 + v16);
          if ( v17 )
          {
            if ( (sub_100019940(a1, a2, v17 + v3) & 1) == 0 )
              break;
          }
          v16 += 56;
          if ( !--v15 )
            goto LABEL_20;
        }
      }
      v3 = 0;
LABEL_21:
      close_linput(v19);
      sub_10001B224((__int64)v24);
      return v3;
    }
    return 0;
  }
  return v3;
}
// 10007ABD0: using guessed type __int128 xmmword_10007ABD0;
// 10009D838: using guessed type __int64 (__fastcall *off_10009D838[2])();
