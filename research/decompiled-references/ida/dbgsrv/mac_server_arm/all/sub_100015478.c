/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100015478
// Address: 0x0000000100015478

//----- (0000000100015478) ----------------------------------------------------
__int64 __fastcall sub_100015478(
        const char *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(_QWORD *, __int64, const char *, _QWORD *),
        __int64 a4)
{
  _BOOL4 v8; // w23
  __int64 v9; // x0
  __int64 v10; // x6
  __int64 v11; // x7
  __int64 v12; // x6
  __int64 v13; // x7
  __int64 v14; // x28
  _QWORD *v15; // x23
  __int64 v17; // x26
  void *v19; // [xsp+88h] [xbp-298h] BYREF
  __int64 v20; // [xsp+90h] [xbp-290h]
  __int64 v21; // [xsp+98h] [xbp-288h]
  void *v22; // [xsp+A0h] [xbp-280h] BYREF
  __int64 v23; // [xsp+A8h] [xbp-278h]
  __int64 v24; // [xsp+B0h] [xbp-270h]
  _QWORD v25[2]; // [xsp+B8h] [xbp-268h] BYREF
  _QWORD v26[3]; // [xsp+C8h] [xbp-258h] BYREF
  int v27; // [xsp+E0h] [xbp-240h]
  char v28; // [xsp+E4h] [xbp-23Ch]
  __int64 v29; // [xsp+E8h] [xbp-238h]
  char v30; // [xsp+F0h] [xbp-230h]
  __int128 v31; // [xsp+100h] [xbp-220h]
  __int128 v32; // [xsp+110h] [xbp-210h]
  __int64 v33; // [xsp+120h] [xbp-200h]
  char v34; // [xsp+128h] [xbp-1F8h]
  __int64 v35; // [xsp+130h] [xbp-1F0h]
  __int128 v36; // [xsp+138h] [xbp-1E8h]
  __int128 v37; // [xsp+148h] [xbp-1D8h]
  __int16 v38; // [xsp+158h] [xbp-1C8h]
  __int128 v39; // [xsp+180h] [xbp-1A0h]
  __int128 v40; // [xsp+190h] [xbp-190h]
  __int128 v41; // [xsp+1A0h] [xbp-180h]
  __int128 v42; // [xsp+1B0h] [xbp-170h]
  __int128 v43; // [xsp+1C0h] [xbp-160h]
  __int128 v44; // [xsp+1D0h] [xbp-150h]
  __int128 v45; // [xsp+1E0h] [xbp-140h]
  __int128 v46; // [xsp+1F0h] [xbp-130h]
  __int128 v47; // [xsp+200h] [xbp-120h]
  __int128 v48; // [xsp+210h] [xbp-110h]
  __int128 v49; // [xsp+220h] [xbp-100h]
  __int128 v50; // [xsp+230h] [xbp-F0h]
  __int128 v51; // [xsp+240h] [xbp-E0h]
  __int128 v52; // [xsp+250h] [xbp-D0h]
  _BYTE v53[19]; // [xsp+260h] [xbp-C0h] BYREF
  int v54; // [xsp+274h] [xbp-ACh]
  __int64 v55; // [xsp+278h] [xbp-A8h]
  __int64 v56; // [xsp+280h] [xbp-A0h]
  __int64 v57; // [xsp+288h] [xbp-98h]
  __int64 v58; // [xsp+290h] [xbp-90h]
  int v59; // [xsp+298h] [xbp-88h]
  __int128 v60; // [xsp+2A0h] [xbp-80h]
  __int128 v61; // [xsp+2B0h] [xbp-70h]

  if ( (debug & 0x10) != 0 )
    sub_100011BD4();
  v8 = qfileexist(a1);
  if ( (debug & 0x10) != 0 )
    sub_100011BD4();
  if ( v8 )
  {
    v9 = open_linput(a1, 0);
    if ( v9 )
    {
      v25[0] = off_100099670;
      v25[1] = v26;
      v26[0] = 0xFFFFFFFFLL;
      v26[1] = -1;
      v26[2] = -1;
      v27 = 8;
      v28 = 1;
      v29 = v9;
      v30 = 1;
      v31 = 0u;
      v32 = 0u;
      v33 = -1;
      v34 = 0;
      v35 = -1;
      v54 = 0;
      v36 = 0u;
      v37 = 0u;
      v38 = 0;
      v52 = 0u;
      memset(v53, 0, sizeof(v53));
      v50 = 0u;
      v51 = 0u;
      v48 = 0u;
      v49 = 0u;
      v46 = 0u;
      v47 = 0u;
      v44 = 0u;
      v45 = 0u;
      v43 = 0u;
      v42 = 0u;
      v41 = 0u;
      v40 = 0u;
      v39 = 0u;
      v56 = -1;
      v55 = -1;
      v59 = 0;
      v57 = 0;
      v58 = 0;
      v60 = 0u;
      v61 = 0u;
      if ( !(unsigned int)sub_10000E3F0((__int64)v25) )
        goto LABEL_41;
      if ( (debug & 0x10) != 0 )
      {
        v22 = nullptr;
        v23 = 0;
        v24 = 0;
        sub_10000273C(
          (char **)&v22,
          "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *(unsigned __int8 *)(a2 + 20),
          *(unsigned __int8 *)(a2 + 21),
          *(unsigned __int8 *)(a2 + 22),
          *(unsigned __int8 *)(a2 + 23),
          v10,
          v11,
          *(_BYTE *)(a2 + 8));
        if ( (debug & 0x10) != 0 )
          sub_100011BD4();
        if ( v22 )
        {
          v23 = 0;
          qfree(v22);
        }
      }
      v22 = nullptr;
      v23 = 0;
      v24 = 0;
      if ( (sub_100014DE8(&v22, (__int64)v25) & 1) != 0 )
      {
        v14 = 28 * v23;
        if ( 28 * v23 )
        {
          v15 = v22;
          do
          {
            if ( (debug & 0x10) != 0 )
            {
              v19 = nullptr;
              v20 = 0;
              v21 = 0;
              sub_10000273C(
                (char **)&v19,
                "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
                *(unsigned __int8 *)(a2 + 20),
                *(unsigned __int8 *)(a2 + 21),
                *(unsigned __int8 *)(a2 + 22),
                *(unsigned __int8 *)(a2 + 23),
                v12,
                v13,
                *(_BYTE *)(a2 + 8));
              if ( (debug & 0x10) != 0 )
                sub_100011BD4();
              if ( v19 )
              {
                v20 = 0;
                qfree(v19);
              }
            }
            if ( *(_DWORD *)a2 == *(_DWORD *)v15 && *(_QWORD *)(a2 + 8) == v15[1] && *(_QWORD *)(a2 + 16) == v15[2] )
            {
              v17 = a3(v25, a4, a1, v15);
              if ( (v17 & 0x80000000) == 0 )
                goto LABEL_34;
            }
            v15 = (_QWORD *)((char *)v15 + 28);
            v14 -= 28;
          }
          while ( v14 );
        }
      }
      else if ( (debug & 0x10) != 0 )
      {
        sub_100011BD4();
      }
      v17 = 0xFFFFFFFFLL;
LABEL_34:
      if ( v22 )
      {
        v23 = 0;
        qfree(v22);
      }
      if ( (v17 & 0x80000000) == 0 )
      {
        if ( (debug & 0x10) != 0 )
          sub_100011BD4();
        goto LABEL_42;
      }
      if ( (debug & 0x10) != 0 )
        sub_100011BD4();
LABEL_41:
      v17 = 0xFFFFFFFFLL;
LABEL_42:
      sub_100019A48((__int64)v25);
      return v17;
    }
  }
  return 0xFFFFFFFFLL;
}
// 100015670: variable 'v10' is possibly undefined
// 100015670: variable 'v11' is possibly undefined
// 10001576C: variable 'v12' is possibly undefined
// 10001576C: variable 'v13' is possibly undefined
// 100099670: using guessed type __int64 (__fastcall *off_100099670[2])();
// 10009D908: using guessed type int debug;
