/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000517F8
// Address: 0x00000001000517F8

//----- (00000001000517F8) ----------------------------------------------------
__int64 __fastcall sub_1000517F8(__int64 *a1)
{
  __int64 v1; // x8
  const char *v3; // x20
  void *v5; // x0
  _QWORD *v6; // x1
  __int64 v7; // x8
  _QWORD *v8; // x8
  int v9; // w8
  bool v10; // w8
  int v11; // w9
  __int64 v12; // x19
  void *v13; // [xsp+10h] [xbp-2D0h] BYREF
  __int64 v14; // [xsp+18h] [xbp-2C8h]
  __int64 v15; // [xsp+20h] [xbp-2C0h]
  void **v16; // [xsp+28h] [xbp-2B8h]
  void *v17; // [xsp+30h] [xbp-2B0h] BYREF
  _QWORD v18[3]; // [xsp+38h] [xbp-2A8h] BYREF
  unsigned __int8 v19; // [xsp+50h] [xbp-290h]
  __int64 (__fastcall **v20)(); // [xsp+58h] [xbp-288h] BYREF
  void *v21; // [xsp+60h] [xbp-280h]
  __int64 v22; // [xsp+68h] [xbp-278h]
  __int64 v23; // [xsp+70h] [xbp-270h]
  int v24; // [xsp+A0h] [xbp-240h]
  unsigned __int16 v25; // [xsp+A4h] [xbp-23Ch]
  unsigned __int16 v26; // [xsp+A6h] [xbp-23Ah]
  unsigned int v27; // [xsp+ACh] [xbp-234h]
  int v28; // [xsp+B0h] [xbp-230h]
  unsigned __int16 v29; // [xsp+B4h] [xbp-22Ch]
  unsigned __int16 v30; // [xsp+B6h] [xbp-22Ah]
  int v31; // [xsp+2A8h] [xbp-38h]

  v1 = *a1;
  if ( *a1
    && *(_DWORD *)(v1 + 8) == 1
    && (!*(_QWORD *)(v1 + 24) ? (v3 = &byte_100075A30) : (v3 = *(const char **)(v1 + 16)),
        v5 = (void *)open_linput(v3, 0),
        (v17 = v5) != nullptr) )
  {
    v16 = &v17;
    v20 = off_10009AE90;
    v21 = nullptr;
    v22 = 0;
    v23 = 0;
    if ( (sub_100049D1C((__int64)&v20, (__int64)v5, 1, 1) & 1) != 0 )
    {
      v6 = (_QWORD *)a1[13];
      v7 = a1[14];
      if ( a1[15] < (unsigned __int64)(v7 + 1) )
      {
        v6 = qvector_reserve(a1 + 13, v6, v7 + 1, 0x78u);
        a1[13] = (__int64)v6;
        v7 = a1[14];
      }
      v8 = &v6[15 * v7];
      v8[14] = 0;
      *((_OWORD *)v8 + 5) = 0u;
      *((_OWORD *)v8 + 6) = 0u;
      *((_OWORD *)v8 + 3) = 0u;
      *((_OWORD *)v8 + 4) = 0u;
      *((_OWORD *)v8 + 1) = 0u;
      *((_OWORD *)v8 + 2) = 0u;
      *(_OWORD *)v8 = 0u;
      ++a1[14];
      v13 = nullptr;
      v14 = 0;
      v15 = 0;
      if ( v27 )
        sub_100052AE0((__int64)&v13, (__int64)v17, (unsigned int)(18 * v28) + (unsigned __int64)v27, 0);
      v18[0] = off_10009AE10;
      v18[1] = a1;
      v18[2] = &v13;
      v19 = 0;
      if ( v24 == 23126 )
        v9 = v31 + 40;
      else
        v9 = v31 + v29 + 24;
      sub_100052F28((__int64)&v20, (__int64)v17, v9, v26, (__int64)v18);
      v10 = 1;
      if ( v25 != 512 && v25 != 34404 )
        v10 = v25 == 43620;
      v11 = v30 >> 15;
      *((_BYTE *)a1 + 168) = v10;
      *((_BYTE *)a1 + 169) = v11;
      v12 = v19;
      if ( v13 )
      {
        v14 = 0;
        qfree(v13);
      }
    }
    else
    {
      sub_100000AA0();
      v12 = 0;
    }
    v20 = off_10009AE90;
    if ( v21 )
    {
      v22 = 0;
      qfree(v21);
    }
    close_linput(v17);
    return v12;
  }
  else
  {
    sub_100000AA0();
    return 0;
  }
}
// 100075A30: using guessed type char byte_100075A30;
// 10009AE10: using guessed type __int64 (__fastcall *off_10009AE10[3])();
// 10009AE90: using guessed type __int64 (__fastcall *off_10009AE90[3])();
