/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017170
// Address: 0x0000000100017170

//----- (0000000100017170) ----------------------------------------------------
__int64 __fastcall sub_100017170(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // w20
  int v6; // w8
  __int64 v7; // x21
  void *v9[2]; // [xsp+0h] [xbp-260h] BYREF
  __int128 v10; // [xsp+10h] [xbp-250h]
  char v11; // [xsp+20h] [xbp-240h]
  _QWORD v12[2]; // [xsp+30h] [xbp-230h] BYREF
  _QWORD v13[3]; // [xsp+40h] [xbp-220h] BYREF
  int v14; // [xsp+58h] [xbp-208h]
  char v15; // [xsp+5Ch] [xbp-204h]
  __int64 v16; // [xsp+60h] [xbp-200h]
  char v17; // [xsp+68h] [xbp-1F8h]
  __int128 v18; // [xsp+78h] [xbp-1E8h]
  __int128 v19; // [xsp+88h] [xbp-1D8h]
  __int64 v20; // [xsp+98h] [xbp-1C8h]
  char v21; // [xsp+A0h] [xbp-1C0h]
  __int64 v22; // [xsp+A8h] [xbp-1B8h]
  __int128 v23; // [xsp+B0h] [xbp-1B0h]
  __int128 v24; // [xsp+C0h] [xbp-1A0h]
  __int16 v25; // [xsp+D0h] [xbp-190h]
  __int128 v26; // [xsp+F8h] [xbp-168h]
  __int128 v27; // [xsp+108h] [xbp-158h]
  __int128 v28; // [xsp+118h] [xbp-148h]
  __int128 v29; // [xsp+128h] [xbp-138h]
  __int128 v30; // [xsp+138h] [xbp-128h]
  __int128 v31; // [xsp+148h] [xbp-118h]
  __int128 v32; // [xsp+158h] [xbp-108h]
  __int128 v33; // [xsp+168h] [xbp-F8h]
  __int128 v34; // [xsp+178h] [xbp-E8h]
  __int128 v35; // [xsp+188h] [xbp-D8h]
  __int128 v36; // [xsp+198h] [xbp-C8h]
  __int128 v37; // [xsp+1A8h] [xbp-B8h]
  __int128 v38; // [xsp+1B8h] [xbp-A8h]
  __int128 v39; // [xsp+1C8h] [xbp-98h]
  _BYTE v40[19]; // [xsp+1D8h] [xbp-88h] BYREF
  int v41; // [xsp+1ECh] [xbp-74h]
  __int64 v42; // [xsp+1F0h] [xbp-70h]
  __int64 v43; // [xsp+1F8h] [xbp-68h]
  __int64 v44; // [xsp+200h] [xbp-60h]
  __int64 v45; // [xsp+208h] [xbp-58h]
  int v46; // [xsp+210h] [xbp-50h]
  __int128 v47; // [xsp+218h] [xbp-48h]
  __int128 v48; // [xsp+228h] [xbp-38h]

  v12[0] = off_10009D6B0;
  v12[1] = v13;
  v5 = -1;
  v13[0] = 0xFFFFFFFFLL;
  v13[1] = -1;
  v13[2] = -1;
  v14 = 8;
  v15 = 1;
  v16 = a2;
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
  v6 = *(_DWORD *)(a1 + 16);
  if ( v6 == 13 )
  {
    if ( *(_BYTE *)(a1 + 24) )
      v5 = 16777228;
    else
      v5 = 12;
  }
  else if ( !v6 )
  {
    if ( *(_BYTE *)(a1 + 24) )
      v5 = 16777223;
    else
      v5 = 7;
  }
  v7 = sub_1000173A0((__int64)v12, a4, a3, v5);
  if ( (v7 & 1) != 0 && (*(_BYTE *)(a4 + 8) & 4) != 0 )
  {
    v11 = 0;
    *(_OWORD *)v9 = 0u;
    v10 = 0u;
    sub_100012B68((__int64)v12, (__int64)v9, 1);
    sub_100017D9C((__int64 *)v9, (_QWORD *)a4, v5);
    if ( v11 == 1 && *((_QWORD *)&v10 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    if ( v9[0] )
    {
      v9[1] = nullptr;
      qfree(v9[0]);
    }
  }
  sub_10001B4B4((__int64)v12);
  return v7;
}
// 10009D6B0: using guessed type __int64 (__fastcall *off_10009D6B0[2])();
