/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028510
// Address: 0x0000000100028510

//----- (0000000100028510) ----------------------------------------------------
__int64 __fastcall sub_100028510(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // x21
  _QWORD *v7; // x20
  void *v8; // x0
  _QWORD v10[4]; // [xsp+0h] [xbp-200h] BYREF
  char v11; // [xsp+20h] [xbp-1E0h]
  _QWORD v12[3]; // [xsp+28h] [xbp-1D8h] BYREF
  __int16 v13; // [xsp+40h] [xbp-1C0h]
  __int64 v14; // [xsp+48h] [xbp-1B8h]
  char v15; // [xsp+50h] [xbp-1B0h]
  __int64 v16; // [xsp+58h] [xbp-1A8h]
  __int64 v17; // [xsp+60h] [xbp-1A0h]
  __int64 v18; // [xsp+68h] [xbp-198h]
  __int128 v19; // [xsp+70h] [xbp-190h]
  __int128 v20; // [xsp+80h] [xbp-180h]
  __int128 v21; // [xsp+90h] [xbp-170h]
  __int128 v22; // [xsp+A0h] [xbp-160h]
  __int128 v23; // [xsp+B0h] [xbp-150h]
  __int128 v24; // [xsp+C0h] [xbp-140h]
  int v25; // [xsp+D0h] [xbp-130h]
  char v26; // [xsp+D4h] [xbp-12Ch]
  int v27; // [xsp+D8h] [xbp-128h]
  char v28; // [xsp+DCh] [xbp-124h]
  __int128 v29; // [xsp+E0h] [xbp-120h]
  __int128 v30; // [xsp+F0h] [xbp-110h]
  __int128 v31; // [xsp+100h] [xbp-100h]
  __int128 v32; // [xsp+110h] [xbp-F0h]
  __int128 v33; // [xsp+120h] [xbp-E0h]
  __int128 v34; // [xsp+130h] [xbp-D0h]
  __int128 v35; // [xsp+140h] [xbp-C0h]
  __int128 v36; // [xsp+150h] [xbp-B0h]
  __int128 v37; // [xsp+160h] [xbp-A0h]
  __int128 v38; // [xsp+170h] [xbp-90h]
  __int128 v39; // [xsp+180h] [xbp-80h]
  __int128 v40; // [xsp+190h] [xbp-70h]
  __int64 v41; // [xsp+1A0h] [xbp-60h]
  __int64 v42; // [xsp+1A8h] [xbp-58h]
  __int64 v43; // [xsp+1B0h] [xbp-50h]
  __int64 v44; // [xsp+1B8h] [xbp-48h]
  int v45; // [xsp+1C0h] [xbp-40h]
  char v46; // [xsp+1C4h] [xbp-3Ch]

  v10[0] = sub_1000284F8;
  v10[1] = 0;
  v10[2] = &off_100099BB8;
  v10[3] = &off_100099D18;
  v11 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  v18 = a1;
  v19 = 0u;
  v20 = 0u;
  v21 = 0u;
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  v25 = 0;
  v26 = -90;
  v27 = 0;
  v28 = 0;
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
  v39 = 0u;
  v40 = 0u;
  v41 = a2;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = -1;
  v46 = a4;
  sub_1000446EC(*(_QWORD *)(a1 + 32), (__int64)v10);
  set_qerrno();
  v6 = sub_100046B4C((__int64)v10, 0);
  if ( (v6 & 1) == 0 )
  {
    sub_100028698(*(const char **)(a1 + 32), (__int64)v12, a3);
    v7 = *((_QWORD **)&v24 + 1);
    if ( *((_QWORD *)&v24 + 1) )
    {
      v8 = **((void ***)&v24 + 1);
      if ( **((_QWORD **)&v24 + 1) )
      {
        *(_QWORD *)(*((_QWORD *)&v24 + 1) + 8LL) = 0;
        qfree(v8);
        *v7 = 0;
        v7[2] = 0;
      }
    }
    sub_100021658((__int64)v10);
  }
  sub_1000446EC(*(_QWORD *)(a1 + 32), 0);
  sub_100028D48(v10);
  return v6;
}
// 100099BB8: using guessed type _UNKNOWN *off_100099BB8;
// 100099D18: using guessed type __int64 (__fastcall *off_100099D18)();
