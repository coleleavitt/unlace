__int64 __fastcall sub_B67D0(const void *a1, __int64 a2, double a3, __m128i a4)
{
  const char *v4; // rsi
  unsigned int v5; // r12d
  void *v6; // rdi
  void **v7; // rbx
  unsigned __int64 v8; // rbp
  void *v9; // rdi
  _QWORD **v10; // rbx
  void *v11; // rdi
  const char *v13; // [rsp+0h] [rbp-2A8h] BYREF
  __int128 v14; // [rsp+8h] [rbp-2A0h]
  _OWORD v15[2]; // [rsp+20h] [rbp-288h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-268h] BYREF
  _QWORD v17[3]; // [rsp+60h] [rbp-248h] BYREF
  __int64 v18; // [rsp+78h] [rbp-230h]
  __int128 v19; // [rsp+80h] [rbp-228h]
  __int64 v20; // [rsp+90h] [rbp-218h]
  __int128 v21; // [rsp+98h] [rbp-210h]
  __int64 v22; // [rsp+A8h] [rbp-200h]
  __int128 v23; // [rsp+B0h] [rbp-1F8h]
  __int64 v24; // [rsp+C0h] [rbp-1E8h]
  __int128 v25; // [rsp+C8h] [rbp-1E0h]
  __int64 eah; // [rsp+D8h] [rbp-1D0h]
  int v27; // [rsp+E0h] [rbp-1C8h]
  _BYTE v28[8]; // [rsp+F0h] [rbp-1B8h] BYREF
  int v29; // [rsp+F8h] [rbp-1B0h] BYREF
  void *v30; // [rsp+100h] [rbp-1A8h]
  int *v31; // [rsp+108h] [rbp-1A0h]
  int *v32; // [rsp+110h] [rbp-198h]
  __int64 v33; // [rsp+118h] [rbp-190h]
  __m128i v34; // [rsp+120h] [rbp-188h] BYREF
  __m128i v35; // [rsp+130h] [rbp-178h] BYREF
  __m128i v36; // [rsp+140h] [rbp-168h] BYREF
  __m128i v37; // [rsp+150h] [rbp-158h] BYREF
  __m128i v38; // [rsp+160h] [rbp-148h] BYREF
  int v39; // [rsp+178h] [rbp-130h]
  _QWORD v40[2]; // [rsp+180h] [rbp-128h] BYREF
  __m128i si128; // [rsp+190h] [rbp-118h]
  int v42; // [rsp+1A8h] [rbp-100h] BYREF
  void *v43; // [rsp+1B0h] [rbp-F8h]
  int *v44; // [rsp+1B8h] [rbp-F0h]
  int *v45; // [rsp+1C0h] [rbp-E8h]
  __int64 v46; // [rsp+1C8h] [rbp-E0h]
  __int64 v47; // [rsp+1D0h] [rbp-D8h]
  __int64 v48; // [rsp+1D8h] [rbp-D0h]
  __int64 v49; // [rsp+1E0h] [rbp-C8h]
  __int128 v50; // [rsp+1E8h] [rbp-C0h]
  __int64 v51; // [rsp+1F8h] [rbp-B0h]
  __int128 v52; // [rsp+200h] [rbp-A8h]
  __int64 v53; // [rsp+210h] [rbp-98h]
  char v54; // [rsp+218h] [rbp-90h]
  __int64 v55; // [rsp+220h] [rbp-88h]
  __int128 v56; // [rsp+228h] [rbp-80h]
  __int64 v57; // [rsp+238h] [rbp-70h]
  __int128 v58; // [rsp+240h] [rbp-68h]
  __int16 v59; // [rsp+258h] [rbp-50h]
  __int64 v60; // [rsp+260h] [rbp-48h]
  __int128 v61; // [rsp+268h] [rbp-40h]
  unsigned __int64 v62; // [rsp+278h] [rbp-30h]

  v62 = __readfsqword(0x28u);
  v13 = nullptr;
  v29 = 0;
  v30 = nullptr;
  v31 = &v29;
  v32 = &v29;
  v33 = 0;
  v34 = 0u;
  v14 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  sub_AC420(&v34, 0);
  v39 = -1;
  v40[1] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
  v40[0] = get_nsec_stamp();
  v42 = 0;
  v43 = nullptr;
  v44 = &v42;
  v45 = &v42;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v51 = 0;
  v53 = -1;
  v54 = 0;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v60 = 0;
  v50 = 0;
  v52 = 0;
  v56 = 0;
  v58 = 0;
  v61 = 0;
  sub_B47A0((__int64)v28, 0, 0.0, a4);
  LOBYTE(v17[0]) = 11;
  v17[1] = v28;
  v17[2] = -1;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  eah = get_eah();
  v27 = 0;
  if ( !(unsigned __int8)sub_B0330((__int64)v17, a1, 0, (__int64 *)&v13)
    || (v5 = sub_A5A20(v17, (__int64)a1, a2, 1, (__int64)&v13), !(_BYTE)v5) )
  {
    v4 = s1;
    if ( (_QWORD)v14 )
      v4 = v13;
    sub_8F740((__int64)"%s\n", v4);
    v5 = 0;
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
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  sub_9C4E0(v43);
  sub_9EFB0((__int64)v40);
  v15[0] = _mm_load_si128(&v37);
  v15[1] = _mm_load_si128(&v38);
  v16[0] = _mm_load_si128(&v35);
  v16[1] = _mm_load_si128(&v36);
  sub_9F130((__int64 *)v16, (__int64 *)v15);
  v6 = (void *)v34.m128i_i64[0];
  if ( v34.m128i_i64[0] )
  {
    v7 = (void **)v36.m128i_i64[1];
    v8 = v38.m128i_i64[1] + 8;
    if ( v36.m128i_i64[1] < (unsigned __int64)(v38.m128i_i64[1] + 8) )
    {
      do
      {
        v9 = *v7++;
        operator delete(v9, 0x200u);
      }
      while ( (unsigned __int64)v7 < v8 );
      v6 = (void *)v34.m128i_i64[0];
    }
    operator delete(v6, 8 * v34.m128i_i64[1]);
  }
  v10 = (_QWORD **)v30;
  if ( v30 )
  {
    do
    {
      sub_9CE80(v10[3]);
      v11 = v10;
      v10 = (_QWORD **)v10[2];
      operator delete(v11, 0x30u);
    }
    while ( v10 );
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v5;
}

