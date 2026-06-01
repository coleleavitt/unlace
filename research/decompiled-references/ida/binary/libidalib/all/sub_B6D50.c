__int64 __fastcall sub_B6D50(__int64 a1, const void *a2, double a3, __m128i a4)
{
  unsigned int v4; // r12d
  void *v5; // rdi
  void **v6; // rbx
  unsigned __int64 v7; // rbp
  void *v8; // rdi
  _QWORD **v9; // rbx
  void *v10; // rdi
  const char *v12; // rsi
  const char *v13; // [rsp+0h] [rbp-2A8h] BYREF
  __int128 v14; // [rsp+8h] [rbp-2A0h]
  _OWORD v15[2]; // [rsp+20h] [rbp-288h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-268h] BYREF
  char v17[8]; // [rsp+60h] [rbp-248h] BYREF
  _BYTE *v18; // [rsp+68h] [rbp-240h]
  __int64 v19; // [rsp+70h] [rbp-238h]
  __int64 v20; // [rsp+78h] [rbp-230h]
  __int128 v21; // [rsp+80h] [rbp-228h]
  __int64 v22; // [rsp+90h] [rbp-218h]
  __int128 v23; // [rsp+98h] [rbp-210h]
  __int64 v24; // [rsp+A8h] [rbp-200h]
  __int128 v25; // [rsp+B0h] [rbp-1F8h]
  __int64 v26; // [rsp+C0h] [rbp-1E8h]
  __int128 v27; // [rsp+C8h] [rbp-1E0h]
  __int64 eah; // [rsp+D8h] [rbp-1D0h]
  int v29; // [rsp+E0h] [rbp-1C8h]
  _BYTE v30[8]; // [rsp+F0h] [rbp-1B8h] BYREF
  int v31; // [rsp+F8h] [rbp-1B0h] BYREF
  void *v32; // [rsp+100h] [rbp-1A8h]
  int *v33; // [rsp+108h] [rbp-1A0h]
  int *v34; // [rsp+110h] [rbp-198h]
  __int64 v35; // [rsp+118h] [rbp-190h]
  __m128i v36; // [rsp+120h] [rbp-188h] BYREF
  __m128i v37; // [rsp+130h] [rbp-178h] BYREF
  __m128i v38; // [rsp+140h] [rbp-168h] BYREF
  __m128i v39; // [rsp+150h] [rbp-158h] BYREF
  __m128i v40; // [rsp+160h] [rbp-148h] BYREF
  int v41; // [rsp+178h] [rbp-130h]
  _QWORD v42[2]; // [rsp+180h] [rbp-128h] BYREF
  __m128i si128; // [rsp+190h] [rbp-118h]
  int v44; // [rsp+1A8h] [rbp-100h] BYREF
  void *v45; // [rsp+1B0h] [rbp-F8h]
  int *v46; // [rsp+1B8h] [rbp-F0h]
  int *v47; // [rsp+1C0h] [rbp-E8h]
  __int64 v48; // [rsp+1C8h] [rbp-E0h]
  __int64 v49; // [rsp+1D0h] [rbp-D8h]
  __int64 v50; // [rsp+1D8h] [rbp-D0h]
  __int64 v51; // [rsp+1E0h] [rbp-C8h]
  __int128 v52; // [rsp+1E8h] [rbp-C0h]
  __int64 v53; // [rsp+1F8h] [rbp-B0h]
  __int128 v54; // [rsp+200h] [rbp-A8h]
  __int64 v55; // [rsp+210h] [rbp-98h]
  char v56; // [rsp+218h] [rbp-90h]
  const void *v57; // [rsp+220h] [rbp-88h]
  __int128 v58; // [rsp+228h] [rbp-80h]
  __int64 v59; // [rsp+238h] [rbp-70h]
  __int128 v60; // [rsp+240h] [rbp-68h]
  __int16 v61; // [rsp+258h] [rbp-50h]
  __int64 v62; // [rsp+260h] [rbp-48h]
  __int128 v63; // [rsp+268h] [rbp-40h]
  unsigned __int64 v64; // [rsp+278h] [rbp-30h]

  v64 = __readfsqword(0x28u);
  v13 = nullptr;
  v31 = 0;
  v32 = nullptr;
  v33 = &v31;
  v34 = &v31;
  v35 = 0;
  v36 = 0u;
  v14 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  sub_AC420(&v36, 0);
  v41 = -1;
  v42[1] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
  v42[0] = get_nsec_stamp();
  v44 = 0;
  v45 = nullptr;
  v46 = &v44;
  v47 = &v44;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v55 = -1;
  v56 = 0;
  v57 = nullptr;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v52 = 0;
  v54 = 0;
  v58 = 0;
  v60 = 0;
  v63 = 0;
  sub_B47A0((__int64)v30, 0, 0.0, a4);
  v17[0] = 11;
  v18 = v30;
  v19 = -1;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  eah = get_eah();
  v29 = 0;
  v4 = sub_B0330((__int64)v17, a2, 0, (__int64 *)&v13);
  if ( (_BYTE)v4 )
  {
    if ( a1 )
    {
      if ( (_QWORD)v58 )
        sub_9C440(a1, v57);
      else
        sub_9C440(a1, s1);
    }
  }
  else
  {
    v12 = s1;
    if ( (_QWORD)v14 )
      v12 = v13;
    sub_8F740((__int64)"%s\n", v12);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree();
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree();
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  sub_9C4E0(v45);
  sub_9EFB0((__int64)v42);
  v15[0] = _mm_load_si128(&v39);
  v15[1] = _mm_load_si128(&v40);
  v16[0] = _mm_load_si128(&v37);
  v16[1] = _mm_load_si128(&v38);
  sub_9F130((__int64 *)v16, (__int64 *)v15);
  v5 = (void *)v36.m128i_i64[0];
  if ( v36.m128i_i64[0] )
  {
    v6 = (void **)v38.m128i_i64[1];
    v7 = v40.m128i_i64[1] + 8;
    if ( v38.m128i_i64[1] < (unsigned __int64)(v40.m128i_i64[1] + 8) )
    {
      do
      {
        v8 = *v6++;
        operator delete(v8, 0x200u);
      }
      while ( (unsigned __int64)v6 < v7 );
      v5 = (void *)v36.m128i_i64[0];
    }
    operator delete(v5, 8 * v36.m128i_i64[1]);
  }
  v9 = (_QWORD **)v32;
  if ( v32 )
  {
    do
    {
      sub_9CE80(v9[3]);
      v10 = v9;
      v9 = (_QWORD **)v9[2];
      operator delete(v10, 0x30u);
    }
    while ( v9 );
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v4;
}

