/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017F28
// Address: 0x0000000100017F28

//----- (0000000100017F28) ----------------------------------------------------
__int64 __fastcall sub_100017F28(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v8; // x0
  _QWORD *generic_linput; // x0
  _QWORD *v10; // x24
  int v11; // w0
  int v12; // w8
  int v13; // w20
  __int64 v14; // x9
  int v15; // w8
  __int64 v16; // x19
  unsigned __int64 v17; // x23
  __int64 *v18; // x8
  __int64 **v19; // x25
  __int64 **v20; // x24
  unsigned __int64 v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x8
  __int64 *v24; // x1
  _QWORD *v25; // x0
  _QWORD v27[2]; // [xsp+8h] [xbp-2C8h] BYREF
  __int64 v28; // [xsp+18h] [xbp-2B8h]
  void *v29[2]; // [xsp+20h] [xbp-2B0h] BYREF
  __int128 v30; // [xsp+30h] [xbp-2A0h]
  char v31; // [xsp+40h] [xbp-290h]
  _QWORD v32[5]; // [xsp+48h] [xbp-288h] BYREF
  int v33; // [xsp+70h] [xbp-260h]
  char v34; // [xsp+74h] [xbp-25Ch]
  _QWORD *v35; // [xsp+78h] [xbp-258h]
  char v36; // [xsp+80h] [xbp-250h]
  __int128 v37; // [xsp+90h] [xbp-240h]
  __int128 v38; // [xsp+A0h] [xbp-230h]
  __int64 v39; // [xsp+B0h] [xbp-220h]
  char v40; // [xsp+B8h] [xbp-218h]
  __int64 v41; // [xsp+C0h] [xbp-210h]
  __int128 v42; // [xsp+C8h] [xbp-208h]
  __int128 v43; // [xsp+D8h] [xbp-1F8h]
  __int16 v44; // [xsp+E8h] [xbp-1E8h]
  __int128 v45; // [xsp+110h] [xbp-1C0h]
  __int128 v46; // [xsp+120h] [xbp-1B0h]
  __int128 v47; // [xsp+130h] [xbp-1A0h]
  __int128 v48; // [xsp+140h] [xbp-190h]
  __int128 v49; // [xsp+150h] [xbp-180h]
  __int128 v50; // [xsp+160h] [xbp-170h]
  __int128 v51; // [xsp+170h] [xbp-160h]
  __int128 v52; // [xsp+180h] [xbp-150h]
  __int128 v53; // [xsp+190h] [xbp-140h]
  __int128 v54; // [xsp+1A0h] [xbp-130h]
  __int128 v55; // [xsp+1B0h] [xbp-120h]
  __int128 v56; // [xsp+1C0h] [xbp-110h]
  __int128 v57; // [xsp+1D0h] [xbp-100h]
  __int128 v58; // [xsp+1E0h] [xbp-F0h]
  _BYTE v59[19]; // [xsp+1F0h] [xbp-E0h] BYREF
  int v60; // [xsp+204h] [xbp-CCh]
  __int64 v61; // [xsp+208h] [xbp-C8h]
  __int64 v62; // [xsp+210h] [xbp-C0h]
  __int64 v63; // [xsp+218h] [xbp-B8h]
  __int64 v64; // [xsp+220h] [xbp-B0h]
  int v65; // [xsp+228h] [xbp-A8h]
  __int128 v66; // [xsp+230h] [xbp-A0h]
  __int128 v67; // [xsp+240h] [xbp-90h]
  __int128 v68; // [xsp+250h] [xbp-80h] BYREF
  __int64 v69; // [xsp+260h] [xbp-70h]
  int v70; // [xsp+268h] [xbp-68h]
  char v71; // [xsp+26Ch] [xbp-64h]

  v8 = operator new(0x28u);
  v8[3] = a2;
  v8[4] = a1;
  *v8 = off_10009D838;
  v8[1] = 0xFFFFFFFFLL;
  *((_DWORD *)v8 + 4) = 0;
  generic_linput = create_generic_linput(v8);
  if ( generic_linput )
  {
    v10 = generic_linput;
    v68 = xmmword_10007ABD0;
    v71 = 1;
    v11 = sub_10005D100();
    if ( v11 == 8 )
      v12 = 8;
    else
      v12 = 4;
    v13 = -1;
    if ( v11 == 8 )
      v14 = -1;
    else
      v14 = 0xFFFFFFFFLL;
    v69 = v14;
    v70 = v12;
    v32[0] = off_10009D6B0;
    v32[1] = &v68;
    v32[2] = 0xFFFFFFFFLL;
    v32[3] = -1;
    v32[4] = -1;
    v33 = 8;
    v34 = 1;
    v35 = v10;
    v36 = 1;
    v37 = 0u;
    v38 = 0u;
    v39 = -1;
    v40 = 0;
    v41 = -1;
    v60 = 0;
    v42 = 0u;
    v43 = 0u;
    v44 = 0;
    v58 = 0u;
    memset(v59, 0, sizeof(v59));
    v56 = 0u;
    v57 = 0u;
    v54 = 0u;
    v55 = 0u;
    v52 = 0u;
    v53 = 0u;
    v50 = 0u;
    v51 = 0u;
    v49 = 0u;
    v48 = 0u;
    v47 = 0u;
    v46 = 0u;
    v45 = 0u;
    v62 = -1;
    v61 = -1;
    v63 = 0;
    v64 = 0;
    v65 = a4 | 1;
    v66 = 0u;
    v67 = 0u;
    v15 = *(_DWORD *)(a1 + 16);
    if ( v15 == 13 )
    {
      if ( *(_BYTE *)(a1 + 24) )
        v13 = 16777228;
      else
        v13 = 12;
    }
    else if ( !v15 )
    {
      if ( *(_BYTE *)(a1 + 24) )
        v13 = 16777223;
      else
        v13 = 7;
    }
    if ( (sub_1000173A0((__int64)v32, a3, a2, v13) & 1) != 0 )
    {
      if ( (*(_BYTE *)(a3 + 8) & 4) == 0 )
        goto LABEL_19;
      v27[0] = 0;
      v27[1] = 0;
      v28 = 0;
      v29[0] = off_10009D408;
      v29[1] = v27;
      if ( sub_1000100B4((__int64)v32, (__int64)v29) )
      {
        v17 = sub_100011B0C((__int64)v32, v28) + a2;
        v19 = (__int64 **)(a1 + 40);
        v18 = *(__int64 **)(a1 + 40);
        if ( v18 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v20 = (__int64 **)v18;
              v21 = v18[4];
              if ( v17 >= v21 )
                break;
              v18 = *v20;
              v19 = v20;
              if ( !*v20 )
                goto LABEL_28;
            }
            if ( v21 >= v17 )
              break;
            v18 = v20[1];
            if ( !v18 )
            {
              v19 = v20 + 1;
              goto LABEL_28;
            }
          }
          v22 = (__int64 *)v20;
          if ( !v20[5] )
            goto LABEL_19;
        }
        else
        {
          v20 = (__int64 **)(a1 + 40);
LABEL_28:
          v22 = (__int64 *)operator new(0x30u);
          v22[4] = v17;
          v22[5] = 0;
          *v22 = 0;
          v22[1] = 0;
          v22[2] = (__int64)v20;
          *v19 = v22;
          v23 = **(_QWORD **)(a1 + 32);
          v24 = v22;
          if ( v23 )
          {
            *(_QWORD *)(a1 + 32) = v23;
            v24 = *v19;
          }
          sub_10000BD00(*(__int64 **)(a1 + 40), v24);
          ++*(_QWORD *)(a1 + 48);
          v25 = sub_10001289C((__int64)v32, (__int64)v27, 1);
          v22[5] = (__int64)v25;
          if ( v25 )
          {
            *((_BYTE *)v25 + 48) = 1;
            v36 = 0;
          }
          if ( !v22[5] )
            goto LABEL_19;
        }
        v31 = 0;
        *(_OWORD *)v29 = 0u;
        v30 = 0u;
        sub_100011D98((__int64)v32, (__int64)v27, (__int64 *)v29);
        *((_QWORD *)&v30 + 1) = v22[5];
        v31 = 0;
        sub_100017D9C((__int64 *)v29, (_QWORD *)a3, v13);
        if ( v31 == 1 && *((_QWORD *)&v30 + 1) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
        if ( v29[0] )
        {
          v29[1] = nullptr;
          qfree(v29[0]);
        }
LABEL_19:
        v16 = 1;
LABEL_39:
        sub_10001B4B4((__int64)v32);
        return v16;
      }
    }
    v16 = 0;
    goto LABEL_39;
  }
  return 0;
}
// 10007ABD0: using guessed type __int128 xmmword_10007ABD0;
// 10009D408: using guessed type __int64 (__fastcall *off_10009D408[37])();
// 10009D6B0: using guessed type __int64 (__fastcall *off_10009D6B0[2])();
// 10009D838: using guessed type __int64 (__fastcall *off_10009D838[2])();
