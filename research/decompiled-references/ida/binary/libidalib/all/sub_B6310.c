__int64 __fastcall sub_B6310(const void *a1, double a2, __m128i a3)
{
  unsigned int v3; // r12d
  void *v4; // rdi
  void **v5; // rbx
  unsigned __int64 v6; // rbp
  void *v7; // rdi
  _QWORD **v8; // rbx
  void *v9; // rdi
  _OWORD v11[2]; // [rsp+0h] [rbp-278h] BYREF
  _OWORD v12[2]; // [rsp+20h] [rbp-258h] BYREF
  char v13[8]; // [rsp+40h] [rbp-238h] BYREF
  _BYTE *v14; // [rsp+48h] [rbp-230h]
  __int64 v15; // [rsp+50h] [rbp-228h]
  __int64 v16; // [rsp+58h] [rbp-220h]
  __int128 v17; // [rsp+60h] [rbp-218h]
  __int64 v18; // [rsp+70h] [rbp-208h]
  __int128 v19; // [rsp+78h] [rbp-200h]
  __int64 v20; // [rsp+88h] [rbp-1F0h]
  __int128 v21; // [rsp+90h] [rbp-1E8h]
  __int64 v22; // [rsp+A0h] [rbp-1D8h]
  __int128 v23; // [rsp+A8h] [rbp-1D0h]
  __int64 eah; // [rsp+B8h] [rbp-1C0h]
  int v25; // [rsp+C0h] [rbp-1B8h]
  _BYTE v26[8]; // [rsp+D0h] [rbp-1A8h] BYREF
  int v27; // [rsp+D8h] [rbp-1A0h] BYREF
  void *v28; // [rsp+E0h] [rbp-198h]
  int *v29; // [rsp+E8h] [rbp-190h]
  int *v30; // [rsp+F0h] [rbp-188h]
  __int64 v31; // [rsp+F8h] [rbp-180h]
  __m128i v32; // [rsp+100h] [rbp-178h] BYREF
  __m128i v33; // [rsp+110h] [rbp-168h] BYREF
  __m128i v34; // [rsp+120h] [rbp-158h] BYREF
  __m128i v35; // [rsp+130h] [rbp-148h] BYREF
  __m128i v36; // [rsp+140h] [rbp-138h] BYREF
  int v37; // [rsp+158h] [rbp-120h]
  _QWORD v38[2]; // [rsp+160h] [rbp-118h] BYREF
  __m128i si128; // [rsp+170h] [rbp-108h]
  int v40; // [rsp+188h] [rbp-F0h] BYREF
  void *v41; // [rsp+190h] [rbp-E8h]
  int *v42; // [rsp+198h] [rbp-E0h]
  int *v43; // [rsp+1A0h] [rbp-D8h]
  __int64 v44; // [rsp+1A8h] [rbp-D0h]
  __int64 v45; // [rsp+1B0h] [rbp-C8h]
  __int64 v46; // [rsp+1B8h] [rbp-C0h]
  __int64 v47; // [rsp+1C0h] [rbp-B8h]
  __int128 v48; // [rsp+1C8h] [rbp-B0h]
  __int64 v49; // [rsp+1D8h] [rbp-A0h]
  __int128 v50; // [rsp+1E0h] [rbp-98h]
  __int64 v51; // [rsp+1F0h] [rbp-88h]
  char v52; // [rsp+1F8h] [rbp-80h]
  __int64 v53; // [rsp+200h] [rbp-78h]
  __int128 v54; // [rsp+208h] [rbp-70h]
  __int64 v55; // [rsp+218h] [rbp-60h]
  __int128 v56; // [rsp+220h] [rbp-58h]
  __int16 v57; // [rsp+238h] [rbp-40h]
  __int64 v58; // [rsp+240h] [rbp-38h]
  __int128 v59; // [rsp+248h] [rbp-30h]
  unsigned __int64 v60; // [rsp+258h] [rbp-20h]

  v60 = __readfsqword(0x28u);
  v27 = 0;
  v28 = nullptr;
  v29 = &v27;
  v30 = &v27;
  v31 = 0;
  v32 = 0u;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  sub_AC420(&v32, 0);
  v37 = -1;
  v38[1] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
  v38[0] = get_nsec_stamp();
  v40 = 0;
  v42 = &v40;
  v43 = &v40;
  v41 = nullptr;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v51 = -1;
  v52 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v48 = 0;
  v50 = 0;
  v54 = 0;
  v56 = 0;
  v59 = 0;
  sub_B47A0((__int64)v26, 0, 0.0, a3);
  v13[0] = 11;
  v14 = v26;
  v15 = -1;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  eah = get_eah();
  v25 = 0;
  v3 = sub_B0330((__int64)v13, a1, 0, nullptr);
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
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  sub_9C4E0(v41);
  sub_9EFB0((__int64)v38);
  v11[0] = _mm_load_si128(&v35);
  v11[1] = _mm_load_si128(&v36);
  v12[0] = _mm_load_si128(&v33);
  v12[1] = _mm_load_si128(&v34);
  sub_9F130((__int64 *)v12, (__int64 *)v11);
  v4 = (void *)v32.m128i_i64[0];
  if ( v32.m128i_i64[0] )
  {
    v5 = (void **)v34.m128i_i64[1];
    v6 = v36.m128i_i64[1] + 8;
    if ( v34.m128i_i64[1] < (unsigned __int64)(v36.m128i_i64[1] + 8) )
    {
      do
      {
        v7 = *v5++;
        operator delete(v7, 0x200u);
      }
      while ( (unsigned __int64)v5 < v6 );
      v4 = (void *)v32.m128i_i64[0];
    }
    operator delete(v4, 8 * v32.m128i_i64[1]);
  }
  v8 = (_QWORD **)v28;
  if ( v28 )
  {
    do
    {
      sub_9CE80(v8[3]);
      v9 = v8;
      v8 = (_QWORD **)v8[2];
      operator delete(v9, 0x30u);
    }
    while ( v8 );
  }
  return v3;
}

