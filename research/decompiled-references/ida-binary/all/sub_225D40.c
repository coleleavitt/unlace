__int64 __fastcall sub_225D40(
        const void *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v11; // xmm0_8
  __int64 v12; // rdx
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // rsi
  unsigned int v22; // r12d
  const char *v23; // rsi
  void *v24; // rdi
  void **v25; // rbx
  unsigned __int64 v26; // rbp
  void *v27; // rdi
  _QWORD **v28; // rbx
  void *v29; // rdi
  const char *v31; // [rsp+0h] [rbp-2A8h] BYREF
  __int128 v32; // [rsp+8h] [rbp-2A0h]
  _OWORD v33[2]; // [rsp+20h] [rbp-288h] BYREF
  _OWORD v34[2]; // [rsp+40h] [rbp-268h] BYREF
  _QWORD v35[3]; // [rsp+60h] [rbp-248h] BYREF
  __int64 v36; // [rsp+78h] [rbp-230h]
  __int128 v37; // [rsp+80h] [rbp-228h]
  __int64 v38; // [rsp+90h] [rbp-218h]
  __int128 v39; // [rsp+98h] [rbp-210h]
  __int64 v40; // [rsp+A8h] [rbp-200h]
  __int128 v41; // [rsp+B0h] [rbp-1F8h]
  __int64 v42; // [rsp+C0h] [rbp-1E8h]
  __int128 v43; // [rsp+C8h] [rbp-1E0h]
  __int64 eah; // [rsp+D8h] [rbp-1D0h]
  int v45; // [rsp+E0h] [rbp-1C8h]
  _BYTE v46[8]; // [rsp+F0h] [rbp-1B8h] BYREF
  int v47; // [rsp+F8h] [rbp-1B0h] BYREF
  void *v48; // [rsp+100h] [rbp-1A8h]
  int *v49; // [rsp+108h] [rbp-1A0h]
  int *v50; // [rsp+110h] [rbp-198h]
  __int64 v51; // [rsp+118h] [rbp-190h]
  __m128i v52; // [rsp+120h] [rbp-188h] BYREF
  __m128i v53; // [rsp+130h] [rbp-178h] BYREF
  __m128i v54; // [rsp+140h] [rbp-168h] BYREF
  __m128i v55; // [rsp+150h] [rbp-158h] BYREF
  __m128i v56; // [rsp+160h] [rbp-148h] BYREF
  int v57; // [rsp+178h] [rbp-130h]
  _QWORD v58[2]; // [rsp+180h] [rbp-128h] BYREF
  __m128i si128; // [rsp+190h] [rbp-118h]
  int v60; // [rsp+1A8h] [rbp-100h] BYREF
  void *v61; // [rsp+1B0h] [rbp-F8h]
  int *v62; // [rsp+1B8h] [rbp-F0h]
  int *v63; // [rsp+1C0h] [rbp-E8h]
  __int64 v64; // [rsp+1C8h] [rbp-E0h]
  __int64 v65; // [rsp+1D0h] [rbp-D8h]
  __int64 v66; // [rsp+1D8h] [rbp-D0h]
  __int64 v67; // [rsp+1E0h] [rbp-C8h]
  __int128 v68; // [rsp+1E8h] [rbp-C0h]
  __int64 v69; // [rsp+1F8h] [rbp-B0h]
  __int128 v70; // [rsp+200h] [rbp-A8h]
  __int64 v71; // [rsp+210h] [rbp-98h]
  char v72; // [rsp+218h] [rbp-90h]
  __int64 v73; // [rsp+220h] [rbp-88h]
  __int128 v74; // [rsp+228h] [rbp-80h]
  __int64 v75; // [rsp+238h] [rbp-70h]
  __int128 v76; // [rsp+240h] [rbp-68h]
  __int16 v77; // [rsp+258h] [rbp-50h]
  __int64 v78; // [rsp+260h] [rbp-48h]
  __int128 v79; // [rsp+268h] [rbp-40h]
  unsigned __int64 v80; // [rsp+278h] [rbp-30h]

  v80 = __readfsqword(0x28u);
  v31 = nullptr;
  v47 = 0;
  v48 = nullptr;
  v49 = &v47;
  v50 = &v47;
  v51 = 0;
  v52 = 0u;
  v32 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  sub_2191A0(&v52, 0);
  v57 = -1;
  v58[1] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  v58[0] = get_nsec_stamp();
  v60 = 0;
  v61 = nullptr;
  v62 = &v60;
  v63 = &v60;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v69 = 0;
  v71 = -1;
  v72 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  v78 = 0;
  v68 = 0;
  v70 = 0;
  v74 = 0;
  v76 = 0;
  v79 = 0;
  sub_223CE0((__int64)v46, 0, 0.0, (__m128i)a4);
  v11 = 0.0;
  LOBYTE(v35[0]) = 11;
  v35[1] = v46;
  v35[2] = -1;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  eah = get_eah(v46, 0, v12);
  v45 = 0;
  if ( !(unsigned __int8)sub_21F920((__int64)v35, a1, 0, (__int64 *)&v31, (__m128)0LL, a4, a5, a6, v13, v14, a9, a10)
    || (v21 = (const char *)a1,
        v22 = sub_214320(
                v35,
                (__int64)a1,
                a2,
                1,
                (__int64 *)&v31,
                0.0,
                a4,
                a5,
                a6,
                *(double *)v19.m128_u64,
                *(double *)v20.m128_u64,
                a9,
                a10),
        !(_BYTE)v22) )
  {
    v21 = &s1;
    if ( (_QWORD)v32 )
      v21 = v31;
    sub_169700((int)"%s\n", (__int64)v21, v15, v16, v17, v18, (__m128)0LL, a4, a5, a6, v19, v20, a9, a10, (char)v31);
    v22 = 0;
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    v11 = qfree(v42, v21);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    v11 = qfree(v40, v21, v11);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    v11 = qfree(v38, v21, v11);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    v11 = qfree(v36, v21, v11);
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    v11 = qfree(v78, v21, v11);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    v11 = qfree(v75, v21, v11);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    v11 = qfree(v73, v21, v11);
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    v11 = qfree(v69, v21, v11);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67, v21, v11);
  }
  sub_20B4A0(v61, v21);
  sub_20DAF0((__int64)v58, v21);
  v23 = (const char *)v33;
  v33[0] = _mm_load_si128(&v55);
  v33[1] = _mm_load_si128(&v56);
  v34[0] = _mm_load_si128(&v53);
  v34[1] = _mm_load_si128(&v54);
  sub_20DC70((__int64 *)v34, (const char *)v33);
  v24 = (void *)v52.m128i_i64[0];
  if ( v52.m128i_i64[0] )
  {
    v25 = (void **)v54.m128i_i64[1];
    v26 = v56.m128i_i64[1] + 8;
    if ( v54.m128i_i64[1] < (unsigned __int64)(v56.m128i_i64[1] + 8) )
    {
      do
      {
        v27 = *v25++;
        operator delete(v27, 0x200u);
      }
      while ( (unsigned __int64)v25 < v26 );
      v24 = (void *)v52.m128i_i64[0];
    }
    v23 = (const char *)(8 * v52.m128i_i64[1]);
    operator delete(v24, 8 * v52.m128i_i64[1]);
  }
  v28 = (_QWORD **)v48;
  if ( v48 )
  {
    do
    {
      sub_20BCB0(v28[3]);
      v29 = v28;
      v28 = (_QWORD **)v28[2];
      v23 = (const char *)&dword_30;
      operator delete(v29, 0x30u);
    }
    while ( v28 );
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, v23);
  }
  return v22;
}
