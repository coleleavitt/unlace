/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000537F0
// Address: 0x00000001000537F0

//----- (00000001000537F0) ----------------------------------------------------
__int64 __fastcall sub_1000537F0(const char *a1)
{
  _QWORD *v1; // rax
  unsigned __int8 v2; // bl
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  char v5; // r14
  void *__p; // [rsp+8h] [rbp-288h]
  void *__pa; // [rsp+8h] [rbp-288h]
  __int64 (__fastcall **v9)(); // [rsp+10h] [rbp-280h] BYREF
  __int128 v10; // [rsp+18h] [rbp-278h] BYREF
  __int128 v11; // [rsp+28h] [rbp-268h]
  int v12; // [rsp+38h] [rbp-258h]
  char v13; // [rsp+3Ch] [rbp-254h]
  _QWORD *v14; // [rsp+40h] [rbp-250h]
  char v15; // [rsp+48h] [rbp-248h]
  __int128 v16; // [rsp+58h] [rbp-238h]
  __int128 v17; // [rsp+68h] [rbp-228h]
  __int64 v18; // [rsp+78h] [rbp-218h]
  char v19; // [rsp+80h] [rbp-210h]
  __int64 v20; // [rsp+88h] [rbp-208h]
  __int128 v21; // [rsp+90h] [rbp-200h]
  __int128 v22; // [rsp+A0h] [rbp-1F0h]
  __int16 v23; // [rsp+B0h] [rbp-1E0h]
  __int128 v24; // [rsp+D8h] [rbp-1B8h]
  __int128 v25; // [rsp+E8h] [rbp-1A8h]
  __int128 v26; // [rsp+F8h] [rbp-198h]
  __int128 v27; // [rsp+108h] [rbp-188h]
  __int128 v28; // [rsp+118h] [rbp-178h]
  __int128 v29; // [rsp+128h] [rbp-168h]
  __int128 v30; // [rsp+138h] [rbp-158h]
  __int128 v31; // [rsp+148h] [rbp-148h]
  __int128 v32; // [rsp+158h] [rbp-138h]
  __int128 v33; // [rsp+168h] [rbp-128h]
  __int128 v34; // [rsp+178h] [rbp-118h]
  __int128 v35; // [rsp+188h] [rbp-108h]
  __int128 v36; // [rsp+198h] [rbp-F8h]
  __int128 v37; // [rsp+1A8h] [rbp-E8h]
  _BYTE v38[19]; // [rsp+1B8h] [rbp-D8h] BYREF
  int v39; // [rsp+1CCh] [rbp-C4h]
  __int128 v40; // [rsp+1D0h] [rbp-C0h]
  __int128 v41; // [rsp+1E0h] [rbp-B0h]
  int v42; // [rsp+1F0h] [rbp-A0h]
  __int128 v43; // [rsp+1F8h] [rbp-98h]
  __int128 v44; // [rsp+208h] [rbp-88h]

  v1 = open_linput(a1, 0);
  __p = v1;
  if ( v1 )
  {
    v9 = off_1000A9718;
    v10 = 0;
    *(_QWORD *)&v11 = 0;
    v2 = sub_100052E40((__int64)&v9, (__int64)v1, 0, 1);
    v9 = off_1000A9718;
    if ( (_QWORD)v10 )
    {
      *((_QWORD *)&v10 + 1) = 0;
      qfree((void *)v10);
    }
    close_linput(__p);
    v3 = (v2 - 1) | 0xB;
  }
  else
  {
    v3 = -1;
  }
  v4 = open_linput(a1, 0);
  __pa = v4;
  if ( v4 )
  {
    v9 = &off_1000A7F20;
    *(_QWORD *)&v10 = (char *)&v10 + 8;
    *((_QWORD *)&v10 + 1) = 0xFFFFFFFFLL;
    v11 = -1;
    v12 = 8;
    v13 = 1;
    v14 = v4;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = -1;
    v19 = 0;
    v20 = -1;
    v39 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    memset(v38, 0, sizeof(v38));
    v40 = -1;
    v41 = 0;
    v42 = 0;
    v44 = 0;
    v43 = 0;
    v5 = sub_10000FA10((__int64)&v9);
    sub_10001CA40((__int64)&v9);
    close_linput(__pa);
    if ( v5 )
      return 25;
  }
  return v3;
}
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
// 1000A9718: using guessed type __int64 (__fastcall *off_1000A9718[2])();
