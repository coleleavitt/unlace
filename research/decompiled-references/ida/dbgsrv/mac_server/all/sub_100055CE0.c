/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055CE0
// Address: 0x0000000100055CE0

//----- (0000000100055CE0) ----------------------------------------------------
__int64 __fastcall sub_100055CE0(unsigned __int64 *a1, unsigned __int64 a2)
{
  _BYTE v3[8]; // [rsp+0h] [rbp-1D0h] BYREF
  void *v4; // [rsp+8h] [rbp-1C8h]
  __int64 v5; // [rsp+10h] [rbp-1C0h]
  void *v6; // [rsp+28h] [rbp-1A8h]
  __int64 v7; // [rsp+30h] [rbp-1A0h]
  __int64 v8; // [rsp+38h] [rbp-198h]
  __int128 v9; // [rsp+40h] [rbp-190h]
  __int64 v10; // [rsp+50h] [rbp-180h]
  __int64 v11; // [rsp+58h] [rbp-178h]
  int v12; // [rsp+60h] [rbp-170h]
  __int128 v13; // [rsp+68h] [rbp-168h]
  __int128 v14; // [rsp+78h] [rbp-158h]
  int v15; // [rsp+88h] [rbp-148h]
  __int128 v16; // [rsp+90h] [rbp-140h]
  __int128 v17; // [rsp+A0h] [rbp-130h]
  int v18; // [rsp+B0h] [rbp-120h]
  __int128 v19; // [rsp+B8h] [rbp-118h]
  __int128 v20; // [rsp+C8h] [rbp-108h]
  int v21; // [rsp+D8h] [rbp-F8h]
  __int128 v22; // [rsp+E0h] [rbp-F0h]
  __int128 v23; // [rsp+F0h] [rbp-E0h]
  int v24; // [rsp+100h] [rbp-D0h]
  __int128 v25; // [rsp+108h] [rbp-C8h]
  __int128 v26; // [rsp+118h] [rbp-B8h]
  int v27; // [rsp+128h] [rbp-A8h]
  __int128 v28; // [rsp+130h] [rbp-A0h]
  __int128 v29; // [rsp+140h] [rbp-90h]
  int v30; // [rsp+150h] [rbp-80h]
  __int128 v31; // [rsp+158h] [rbp-78h]
  __int128 v32; // [rsp+168h] [rbp-68h]
  int v33; // [rsp+178h] [rbp-58h]
  __int128 v34; // [rsp+180h] [rbp-50h]
  __int128 v35; // [rsp+190h] [rbp-40h]
  int v36; // [rsp+1A0h] [rbp-30h]

  if ( a1[1] != a2 )
  {
    __bzero(v3, 432);
    v9 = -1;
    v10 = -1;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v29 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v34 = 0;
    v36 = 0;
    v12 = 0;
    v11 = 0;
    sub_10005F2B0(a1, a2, (unsigned __int64)v3);
    if ( v6 )
    {
      v7 = 0;
      qfree(v6);
      v6 = nullptr;
      v8 = 0;
    }
    if ( v4 )
    {
      v5 = 0;
      qfree(v4);
    }
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
