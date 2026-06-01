/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100049078
// Address: 0x0000000100049078

//----- (0000000100049078) ----------------------------------------------------
__int64 __fastcall sub_100049078(_OWORD *a1, _BYTE *a2, const char *a3, int a4)
{
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x8
  char *v10; // x9
  __int64 v11; // x19
  char *v13; // [xsp+8h] [xbp-258h] BYREF
  __int64 v14; // [xsp+10h] [xbp-250h]
  __int64 v15; // [xsp+18h] [xbp-248h]
  void **v16; // [xsp+20h] [xbp-240h]
  void *v17; // [xsp+28h] [xbp-238h] BYREF
  _QWORD v18[2]; // [xsp+30h] [xbp-230h] BYREF
  _QWORD v19[3]; // [xsp+40h] [xbp-220h] BYREF
  int v20; // [xsp+58h] [xbp-208h]
  char v21; // [xsp+5Ch] [xbp-204h]
  void *v22; // [xsp+60h] [xbp-200h]
  char v23; // [xsp+68h] [xbp-1F8h]
  __int128 v24; // [xsp+78h] [xbp-1E8h]
  __int128 v25; // [xsp+88h] [xbp-1D8h]
  __int64 v26; // [xsp+98h] [xbp-1C8h]
  char v27; // [xsp+A0h] [xbp-1C0h]
  __int64 v28; // [xsp+A8h] [xbp-1B8h]
  __int128 v29; // [xsp+B0h] [xbp-1B0h]
  __int128 v30; // [xsp+C0h] [xbp-1A0h]
  __int16 v31; // [xsp+D0h] [xbp-190h]
  __int128 v32; // [xsp+F8h] [xbp-168h]
  __int128 v33; // [xsp+108h] [xbp-158h]
  __int128 v34; // [xsp+118h] [xbp-148h]
  __int128 v35; // [xsp+128h] [xbp-138h]
  __int128 v36; // [xsp+138h] [xbp-128h]
  __int128 v37; // [xsp+148h] [xbp-118h]
  __int128 v38; // [xsp+158h] [xbp-108h]
  __int128 v39; // [xsp+168h] [xbp-F8h]
  __int128 v40; // [xsp+178h] [xbp-E8h]
  __int128 v41; // [xsp+188h] [xbp-D8h]
  __int128 v42; // [xsp+198h] [xbp-C8h]
  __int128 v43; // [xsp+1A8h] [xbp-B8h]
  __int128 v44; // [xsp+1B8h] [xbp-A8h]
  __int128 v45; // [xsp+1C8h] [xbp-98h]
  _BYTE v46[19]; // [xsp+1D8h] [xbp-88h] BYREF
  int v47; // [xsp+1ECh] [xbp-74h]
  __int64 v48; // [xsp+1F0h] [xbp-70h]
  __int64 v49; // [xsp+1F8h] [xbp-68h]
  __int64 v50; // [xsp+200h] [xbp-60h]
  __int64 v51; // [xsp+208h] [xbp-58h]
  int v52; // [xsp+210h] [xbp-50h]
  __int128 v53; // [xsp+218h] [xbp-48h]
  __int128 v54; // [xsp+228h] [xbp-38h]

  v7 = (void *)open_linput(a3, 0);
  v17 = v7;
  if ( v7 )
  {
    v16 = &v17;
    v18[0] = off_100099670;
    v18[1] = v19;
    v19[0] = 0xFFFFFFFFLL;
    v19[1] = -1;
    v19[2] = -1;
    v20 = 8;
    v21 = 1;
    v22 = v7;
    v23 = 0;
    v24 = 0u;
    v25 = 0u;
    v26 = -1;
    v27 = 0;
    v28 = -1;
    v47 = 0;
    v29 = 0u;
    v30 = 0u;
    v31 = 0;
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
    if ( (sub_10000E3F0((__int64)v18) & 1) == 0 )
    {
      v11 = 0;
LABEL_18:
      sub_100019A48((__int64)v18);
      close_linput(v17);
      return v11;
    }
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    if ( (sub_100014DE8(&v13, (__int64)v18) & 1) != 0 )
    {
      v8 = v13;
      v9 = v14;
      if ( v14 )
      {
        v10 = v13;
        while ( *(_DWORD *)v10 != a4 )
        {
          v10 += 28;
          if ( !--v9 )
          {
            v11 = 0;
            goto LABEL_17;
          }
        }
        *a1 = *(_OWORD *)(v10 + 8);
        if ( a2 )
          *a2 = v10[24] & 1;
        v11 = 1;
LABEL_17:
        v14 = 0;
        qfree(v8);
        goto LABEL_18;
      }
    }
    else
    {
      v8 = v13;
    }
    v11 = 0;
    if ( !v8 )
      goto LABEL_18;
    goto LABEL_17;
  }
  return 0;
}
// 100099670: using guessed type __int64 (__fastcall *off_100099670[2])();
