/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100016ECC
// Address: 0x0000000100016ECC

//----- (0000000100016ECC) ----------------------------------------------------
bool __fastcall sub_100016ECC(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // w8
  int v6; // w21
  unsigned __int64 v7; // x8
  unsigned __int8 v8; // w0
  unsigned __int8 v9; // w8
  _BOOL8 v11; // x19
  __int64 v12; // x22
  unsigned __int64 v13; // x20
  unsigned __int8 v14; // w0
  unsigned __int8 v15; // w8
  _QWORD v17[2]; // [xsp+8h] [xbp-268h] BYREF
  _QWORD v18[3]; // [xsp+18h] [xbp-258h] BYREF
  int v19; // [xsp+30h] [xbp-240h]
  char v20; // [xsp+34h] [xbp-23Ch]
  __int64 v21; // [xsp+38h] [xbp-238h]
  char v22; // [xsp+40h] [xbp-230h]
  __int128 v23; // [xsp+50h] [xbp-220h]
  __int128 v24; // [xsp+60h] [xbp-210h]
  __int64 v25; // [xsp+70h] [xbp-200h]
  char v26; // [xsp+78h] [xbp-1F8h]
  __int64 v27; // [xsp+80h] [xbp-1F0h]
  __int128 v28; // [xsp+88h] [xbp-1E8h]
  __int128 v29; // [xsp+98h] [xbp-1D8h]
  __int16 v30; // [xsp+A8h] [xbp-1C8h]
  int v31; // [xsp+B0h] [xbp-1C0h]
  __int128 v32; // [xsp+D0h] [xbp-1A0h]
  __int128 v33; // [xsp+E0h] [xbp-190h]
  __int128 v34; // [xsp+F0h] [xbp-180h]
  __int128 v35; // [xsp+100h] [xbp-170h]
  __int128 v36; // [xsp+110h] [xbp-160h]
  __int128 v37; // [xsp+120h] [xbp-150h]
  __int128 v38; // [xsp+130h] [xbp-140h]
  __int128 v39; // [xsp+140h] [xbp-130h]
  __int128 v40; // [xsp+150h] [xbp-120h]
  __int128 v41; // [xsp+160h] [xbp-110h]
  __int128 v42; // [xsp+170h] [xbp-100h]
  __int128 v43; // [xsp+180h] [xbp-F0h]
  __int128 v44; // [xsp+190h] [xbp-E0h]
  __int128 v45; // [xsp+1A0h] [xbp-D0h]
  _BYTE v46[19]; // [xsp+1B0h] [xbp-C0h] BYREF
  int v47; // [xsp+1C4h] [xbp-ACh]
  __int64 v48; // [xsp+1C8h] [xbp-A8h]
  __int64 v49; // [xsp+1D0h] [xbp-A0h]
  __int64 v50; // [xsp+1D8h] [xbp-98h]
  __int64 v51; // [xsp+1E0h] [xbp-90h]
  int v52; // [xsp+1E8h] [xbp-88h]
  __int128 v53; // [xsp+1F0h] [xbp-80h]
  __int128 v54; // [xsp+200h] [xbp-70h]
  _QWORD v55[2]; // [xsp+210h] [xbp-60h] BYREF
  char v56; // [xsp+220h] [xbp-50h]
  _QWORD v57[2]; // [xsp+228h] [xbp-48h] BYREF

  v17[0] = off_10009D6B0;
  v17[1] = v18;
  v18[0] = 0xFFFFFFFFLL;
  v18[1] = -1;
  v18[2] = -1;
  v19 = 8;
  v20 = 1;
  v21 = a2;
  v22 = 0;
  v23 = 0u;
  v24 = 0u;
  v25 = -1;
  v26 = 0;
  v27 = -1;
  v47 = 0;
  v28 = 0u;
  v29 = 0u;
  v30 = 0;
  v45 = 0u;
  memset(v46, 0, sizeof(v46));
  v43 = 0u;
  v44 = 0u;
  v41 = 0u;
  v42 = 0u;
  v39 = 0u;
  v40 = 0u;
  v37 = 0u;
  v38 = 0u;
  v36 = 0u;
  v35 = 0u;
  v34 = 0u;
  v33 = 0u;
  v32 = 0u;
  v48 = -1;
  v49 = -1;
  v52 = 0;
  v50 = 0;
  v51 = 0;
  v53 = 0u;
  v54 = 0u;
  if ( !(unsigned int)sub_10000EE5C((__int64)v17) )
    goto LABEL_36;
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 == 13 )
  {
    if ( *(_BYTE *)(a1 + 24) )
      v6 = 16777228;
    else
      v6 = 12;
    v7 = *((_QWORD *)&v23 + 1);
    if ( *((_QWORD *)&v23 + 1) )
      goto LABEL_28;
  }
  else if ( v5 )
  {
    v6 = -1;
    v7 = *((_QWORD *)&v23 + 1);
    if ( *((_QWORD *)&v23 + 1) )
      goto LABEL_28;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 24) )
      v6 = 16777223;
    else
      v6 = 7;
    v7 = *((_QWORD *)&v23 + 1);
    if ( *((_QWORD *)&v23 + 1) )
      goto LABEL_28;
  }
  v8 = (unsigned __int8)sub_10000F5B0((__int64)v17, 0, 0, 0);
  if ( v31 == v6 )
    v9 = v8;
  else
    v9 = 0;
  if ( (v9 & 1) == 0 )
  {
    v7 = *((_QWORD *)&v23 + 1);
    if ( !*((_QWORD *)&v23 + 1) )
    {
LABEL_36:
      v11 = 0;
      goto LABEL_37;
    }
LABEL_28:
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v23 + v12) == v6 )
      {
        v14 = (unsigned __int8)sub_10000F5B0((__int64)v17, v13, 0, 0);
        if ( v31 == v6 )
          v15 = v14;
        else
          v15 = 0;
        if ( (v15 & 1) != 0 )
          break;
        v7 = *((_QWORD *)&v23 + 1);
      }
      ++v13;
      v12 += 20;
      if ( v13 >= v7 )
        goto LABEL_36;
    }
  }
  if ( a3[1] != 16 )
    goto LABEL_36;
  v55[0] = off_10009D188;
  v55[1] = v57;
  v56 = 0;
  sub_1000100B4((__int64)v17, (__int64)v55);
  if ( v56 != 1 )
    goto LABEL_36;
  v11 = v57[0] == *(_QWORD *)*a3 && v57[1] == *(_QWORD *)(*a3 + 8LL);
LABEL_37:
  sub_10001B4B4((__int64)v17);
  return v11;
}
// 10009D188: using guessed type __int64 (__fastcall *off_10009D188[37])();
// 10009D6B0: using guessed type __int64 (__fastcall *off_10009D6B0[2])();
