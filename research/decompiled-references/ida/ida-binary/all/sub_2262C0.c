__int64 __fastcall sub_2262C0(
        __int64 *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm0_8
  __int64 v11; // rdx
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // r12d
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // rsi
  void *v22; // rdi
  void **v23; // rbx
  unsigned __int64 v24; // rbp
  void *v25; // rdi
  _QWORD **v26; // rbx
  void *v27; // rdi
  const char *v29; // [rsp+0h] [rbp-2A8h] BYREF
  __int128 v30; // [rsp+8h] [rbp-2A0h]
  _OWORD v31[2]; // [rsp+20h] [rbp-288h] BYREF
  _OWORD v32[2]; // [rsp+40h] [rbp-268h] BYREF
  char v33[8]; // [rsp+60h] [rbp-248h] BYREF
  _BYTE *v34; // [rsp+68h] [rbp-240h]
  __int64 v35; // [rsp+70h] [rbp-238h]
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
  const char *v73; // [rsp+220h] [rbp-88h]
  __int128 v74; // [rsp+228h] [rbp-80h]
  __int64 v75; // [rsp+238h] [rbp-70h]
  __int128 v76; // [rsp+240h] [rbp-68h]
  __int16 v77; // [rsp+258h] [rbp-50h]
  __int64 v78; // [rsp+260h] [rbp-48h]
  __int128 v79; // [rsp+268h] [rbp-40h]
  unsigned __int64 v80; // [rsp+278h] [rbp-30h]

  v80 = __readfsqword(0x28u);
  v29 = nullptr;
  v47 = 0;
  v48 = nullptr;
  v49 = &v47;
  v50 = &v47;
  v51 = 0;
  v52 = 0u;
  v30 = 0;
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
  v73 = nullptr;
  v75 = 0;
  v77 = 0;
  v78 = 0;
  v68 = 0;
  v70 = 0;
  v74 = 0;
  v76 = 0;
  v79 = 0;
  sub_223CE0((__int64)v46, 0, 0.0, (__m128i)a4);
  v10 = 0.0;
  v33[0] = 11;
  v34 = v46;
  v35 = -1;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  eah = get_eah(v46, 0, v11);
  v45 = 0;
  v18 = sub_21F920((__int64)v33, a2, 0, (__int64 *)&v29, (__m128)0LL, a4, a5, a6, v12, v13, a9, a10);
  if ( (_BYTE)v18 )
  {
    if ( a1 )
    {
      a2 = &s1;
      if ( (_QWORD)v74 )
      {
        a2 = v73;
        sub_20B400(a1, v73);
      }
      else
      {
        sub_20B400(a1, &s1);
      }
    }
  }
  else
  {
    a2 = &s1;
    if ( (_QWORD)v30 )
      a2 = v29;
    sub_169700((int)"%s\n", (__int64)a2, v14, v15, v16, v17, (__m128)0LL, a4, a5, a6, v19, v20, a9, a10, (char)v29);
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    v10 = qfree(v42, a2);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    v10 = qfree(v40, a2, v10);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    v10 = qfree(v38, a2, v10);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    v10 = qfree(v36, a2, v10);
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    v10 = qfree(v78, a2, v10);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    v10 = qfree(v75, a2, v10);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    v10 = qfree(v73, a2, v10);
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    v10 = qfree(v69, a2, v10);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67, a2, v10);
  }
  sub_20B4A0(v61, a2);
  sub_20DAF0((__int64)v58, a2);
  v21 = (const char *)v31;
  v31[0] = _mm_load_si128(&v55);
  v31[1] = _mm_load_si128(&v56);
  v32[0] = _mm_load_si128(&v53);
  v32[1] = _mm_load_si128(&v54);
  sub_20DC70((__int64 *)v32, (const char *)v31);
  v22 = (void *)v52.m128i_i64[0];
  if ( v52.m128i_i64[0] )
  {
    v23 = (void **)v54.m128i_i64[1];
    v24 = v56.m128i_i64[1] + 8;
    if ( v54.m128i_i64[1] < (unsigned __int64)(v56.m128i_i64[1] + 8) )
    {
      do
      {
        v25 = *v23++;
        operator delete(v25, 0x200u);
      }
      while ( (unsigned __int64)v23 < v24 );
      v22 = (void *)v52.m128i_i64[0];
    }
    v21 = (const char *)(8 * v52.m128i_i64[1]);
    operator delete(v22, 8 * v52.m128i_i64[1]);
  }
  v26 = (_QWORD **)v48;
  if ( v48 )
  {
    do
    {
      sub_20BCB0(v26[3]);
      v27 = v26;
      v26 = (_QWORD **)v26[2];
      v21 = (const char *)&dword_30;
      operator delete(v27, 0x30u);
    }
    while ( v26 );
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, v21);
  }
  return v18;
}
