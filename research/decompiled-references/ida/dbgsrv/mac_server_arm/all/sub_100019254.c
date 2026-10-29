/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019254
// Address: 0x0000000100019254

//----- (0000000100019254) ----------------------------------------------------
__int64 __fastcall sub_100019254(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 result; // x0
  __int64 v6; // x8
  const void *v7; // x20
  _BYTE *v10; // x0
  size_t v11; // x21
  __int64 v12; // x22
  void *v13; // x20
  const char *v14; // x0
  _QWORD *v15; // x0
  __int64 v16; // x9
  __int64 v17; // x10
  __int64 v18; // x9
  __int64 v19; // x19
  void *v20; // [xsp+10h] [xbp-280h]
  _BYTE *v21; // [xsp+18h] [xbp-278h] BYREF
  __int64 v22; // [xsp+20h] [xbp-270h]
  __int64 v23; // [xsp+28h] [xbp-268h]
  _QWORD v24[5]; // [xsp+30h] [xbp-260h] BYREF
  int v25; // [xsp+58h] [xbp-238h]
  char v26; // [xsp+5Ch] [xbp-234h]
  _QWORD *v27; // [xsp+60h] [xbp-230h]
  char v28; // [xsp+68h] [xbp-228h]
  __int64 v29; // [xsp+78h] [xbp-218h]
  __int64 v30; // [xsp+80h] [xbp-210h]
  __int64 v31; // [xsp+88h] [xbp-208h]
  __int64 v32; // [xsp+90h] [xbp-200h]
  __int64 v33; // [xsp+98h] [xbp-1F8h]
  char v34; // [xsp+A0h] [xbp-1F0h]
  __int64 v35; // [xsp+A8h] [xbp-1E8h]
  __int128 v36; // [xsp+B0h] [xbp-1E0h]
  __int128 v37; // [xsp+C0h] [xbp-1D0h]
  __int16 v38; // [xsp+D0h] [xbp-1C0h]
  __int128 v39; // [xsp+F8h] [xbp-198h]
  __int128 v40; // [xsp+108h] [xbp-188h]
  __int128 v41; // [xsp+118h] [xbp-178h]
  __int128 v42; // [xsp+128h] [xbp-168h]
  __int128 v43; // [xsp+138h] [xbp-158h]
  __int128 v44; // [xsp+148h] [xbp-148h]
  __int128 v45; // [xsp+158h] [xbp-138h]
  __int128 v46; // [xsp+168h] [xbp-128h]
  __int128 v47; // [xsp+178h] [xbp-118h]
  __int128 v48; // [xsp+188h] [xbp-108h]
  __int128 v49; // [xsp+198h] [xbp-F8h]
  __int128 v50; // [xsp+1A8h] [xbp-E8h]
  __int128 v51; // [xsp+1B8h] [xbp-D8h]
  __int128 v52; // [xsp+1C8h] [xbp-C8h]
  _BYTE v53[19]; // [xsp+1D8h] [xbp-B8h] BYREF
  int v54; // [xsp+1ECh] [xbp-A4h]
  __int64 v55; // [xsp+1F0h] [xbp-A0h]
  __int64 v56; // [xsp+1F8h] [xbp-98h]
  __int64 v57; // [xsp+200h] [xbp-90h]
  __int64 v58; // [xsp+208h] [xbp-88h]
  int v59; // [xsp+210h] [xbp-80h]
  __int128 v60; // [xsp+218h] [xbp-78h]
  __int128 v61; // [xsp+228h] [xbp-68h]
  _QWORD v62[3]; // [xsp+238h] [xbp-58h] BYREF
  __int16 v63; // [xsp+250h] [xbp-40h]

  if ( *(_BYTE *)(a1 + 25) != 1 )
    return 0;
  result = 0;
  v6 = *(unsigned int *)(a2 + 24);
  v7 = (const void *)(a3 + v6);
  if ( a3 + v6 < a4 && (unsigned int)v6 >= 0x20 && (unsigned __int64)v7 >= a3 )
  {
    v10 = nullptr;
    v11 = a4 - (_QWORD)v7;
    v21 = nullptr;
    v22 = 0;
    v23 = 0;
    v12 = a4 - (_QWORD)v7 + 1;
    if ( a4 - (_QWORD)v7 != -1 )
    {
      v10 = qvector_reserve(&v21, nullptr, a4 - (_QWORD)v7 + 1, 1u);
      v21 = v10;
    }
    v22 = v12;
    memmove(v10, v7, v11);
    v21[v11] = 0;
    v13 = v21;
    if ( v22 )
      v14 = v21;
    else
      v14 = &byte_100075A30;
    if ( !strcmp(v14, "com.apple.kernel") )
    {
      v15 = sub_100014C40(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 16));
      v20 = v15;
      if ( v15 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        v17 = *(_QWORD *)(a2 + 16);
        v24[0] = off_100099670;
        v24[1] = v16;
        v24[2] = 0xFFFFFFFFLL;
        v24[3] = -1;
        v24[4] = -1;
        v25 = 8;
        v26 = 1;
        v27 = v15;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v32 = v17;
        v33 = -1;
        v34 = 0;
        v35 = -1;
        v54 = 0;
        v38 = 0;
        v36 = 0u;
        v37 = 0u;
        v43 = 0u;
        v44 = 0u;
        v45 = 0u;
        v46 = 0u;
        v47 = 0u;
        v48 = 0u;
        v49 = 0u;
        v50 = 0u;
        v51 = 0u;
        v52 = 0u;
        memset(v53, 0, sizeof(v53));
        v39 = 0u;
        v40 = 0u;
        v41 = 0u;
        v42 = 0u;
        v55 = -1;
        v56 = -1;
        v58 = 0;
        v57 = 0;
        v59 = 0;
        v60 = 0u;
        v61 = 0u;
        if ( (unsigned int)sub_10000E3F0((__int64)v24)
          && ((unsigned __int8)sub_10000EB00((__int64)v24, 0, 0, 0) & 1) != 0 )
        {
          v18 = *(_QWORD *)(a1 + 16);
          v62[0] = off_100099288;
          v62[1] = v24;
          v62[2] = v18;
          v63 = 0;
          sub_10000F5AC((__int64)v24, (__int64)v62);
          *(_BYTE *)(a1 + 24) |= v63;
        }
        else
        {
          sub_100000AA0();
        }
        sub_100019A48((__int64)v24);
        close_linput(v20);
      }
      else
      {
        sub_100000AA0();
      }
      result = 1;
      v13 = v21;
      if ( !v21 )
        return result;
    }
    else
    {
      result = 0;
      if ( !v13 )
        return result;
    }
    v22 = 0;
    v19 = result;
    qfree(v13);
    return v19;
  }
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
// 100099288: using guessed type __int64 (__fastcall *off_100099288[37])();
// 100099670: using guessed type __int64 (__fastcall *off_100099670[2])();
