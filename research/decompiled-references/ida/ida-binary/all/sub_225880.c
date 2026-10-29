__int64 __fastcall sub_225880(
        const void *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v9; // xmm0_8
  __int64 v10; // rdx
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned int v13; // r12d
  void *v14; // rdi
  void **v15; // rbx
  unsigned __int64 v16; // rbp
  void *v17; // rdi
  _QWORD **v18; // rbx
  void *v19; // rdi
  _OWORD v21[2]; // [rsp+0h] [rbp-278h] BYREF
  _OWORD v22[2]; // [rsp+20h] [rbp-258h] BYREF
  char v23[8]; // [rsp+40h] [rbp-238h] BYREF
  _BYTE *v24; // [rsp+48h] [rbp-230h]
  __int64 v25; // [rsp+50h] [rbp-228h]
  __int64 v26; // [rsp+58h] [rbp-220h]
  __int128 v27; // [rsp+60h] [rbp-218h]
  __int64 v28; // [rsp+70h] [rbp-208h]
  __int128 v29; // [rsp+78h] [rbp-200h]
  __int64 v30; // [rsp+88h] [rbp-1F0h]
  __int128 v31; // [rsp+90h] [rbp-1E8h]
  __int64 v32; // [rsp+A0h] [rbp-1D8h]
  __int128 v33; // [rsp+A8h] [rbp-1D0h]
  __int64 eah; // [rsp+B8h] [rbp-1C0h]
  int v35; // [rsp+C0h] [rbp-1B8h]
  _BYTE v36[8]; // [rsp+D0h] [rbp-1A8h] BYREF
  int v37; // [rsp+D8h] [rbp-1A0h] BYREF
  void *v38; // [rsp+E0h] [rbp-198h]
  int *v39; // [rsp+E8h] [rbp-190h]
  int *v40; // [rsp+F0h] [rbp-188h]
  __int64 v41; // [rsp+F8h] [rbp-180h]
  __m128i v42; // [rsp+100h] [rbp-178h] BYREF
  __m128i v43; // [rsp+110h] [rbp-168h] BYREF
  __m128i v44; // [rsp+120h] [rbp-158h] BYREF
  __m128i v45; // [rsp+130h] [rbp-148h] BYREF
  __m128i v46; // [rsp+140h] [rbp-138h] BYREF
  int v47; // [rsp+158h] [rbp-120h]
  _QWORD v48[2]; // [rsp+160h] [rbp-118h] BYREF
  __m128i si128; // [rsp+170h] [rbp-108h]
  int v50; // [rsp+188h] [rbp-F0h] BYREF
  void *v51; // [rsp+190h] [rbp-E8h]
  int *v52; // [rsp+198h] [rbp-E0h]
  int *v53; // [rsp+1A0h] [rbp-D8h]
  __int64 v54; // [rsp+1A8h] [rbp-D0h]
  __int64 v55; // [rsp+1B0h] [rbp-C8h]
  __int64 v56; // [rsp+1B8h] [rbp-C0h]
  __int64 v57; // [rsp+1C0h] [rbp-B8h]
  __int128 v58; // [rsp+1C8h] [rbp-B0h]
  __int64 v59; // [rsp+1D8h] [rbp-A0h]
  __int128 v60; // [rsp+1E0h] [rbp-98h]
  __int64 v61; // [rsp+1F0h] [rbp-88h]
  char v62; // [rsp+1F8h] [rbp-80h]
  __int64 v63; // [rsp+200h] [rbp-78h]
  __int128 v64; // [rsp+208h] [rbp-70h]
  __int64 v65; // [rsp+218h] [rbp-60h]
  __int128 v66; // [rsp+220h] [rbp-58h]
  __int16 v67; // [rsp+238h] [rbp-40h]
  __int64 v68; // [rsp+240h] [rbp-38h]
  __int128 v69; // [rsp+248h] [rbp-30h]
  unsigned __int64 v70; // [rsp+258h] [rbp-20h]

  v70 = __readfsqword(0x28u);
  v37 = 0;
  v38 = nullptr;
  v39 = &v37;
  v40 = &v37;
  v41 = 0;
  v42 = 0u;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  sub_2191A0(&v42, 0);
  v47 = -1;
  v48[1] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  v48[0] = get_nsec_stamp();
  v50 = 0;
  v52 = &v50;
  v53 = &v50;
  v51 = nullptr;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v59 = 0;
  v61 = -1;
  v62 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v68 = 0;
  v58 = 0;
  v60 = 0;
  v64 = 0;
  v66 = 0;
  v69 = 0;
  sub_223CE0((__int64)v36, 0, 0.0, (__m128i)a3);
  v9 = 0.0;
  v23[0] = 11;
  v24 = v36;
  v25 = -1;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  eah = get_eah(v36, 0, v10);
  v35 = 0;
  v13 = sub_21F920((__int64)v23, a1, 0, nullptr, (__m128)0LL, a3, a4, a5, v11, v12, a8, a9);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    v9 = qfree(v32, (const char *)a1);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    v9 = qfree(v30, (const char *)a1, v9);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    v9 = qfree(v28, (const char *)a1, v9);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    v9 = qfree(v26, (const char *)a1, v9);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    v9 = qfree(v68, (const char *)a1, v9);
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    v9 = qfree(v65, (const char *)a1, v9);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    v9 = qfree(v63, (const char *)a1, v9);
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    v9 = qfree(v59, (const char *)a1, v9);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57, (const char *)a1, v9);
  }
  sub_20B4A0(v51, (const char *)a1);
  sub_20DAF0((__int64)v48, (const char *)a1);
  v21[0] = _mm_load_si128(&v45);
  v21[1] = _mm_load_si128(&v46);
  v22[0] = _mm_load_si128(&v43);
  v22[1] = _mm_load_si128(&v44);
  sub_20DC70((__int64 *)v22, (const char *)v21);
  v14 = (void *)v42.m128i_i64[0];
  if ( v42.m128i_i64[0] )
  {
    v15 = (void **)v44.m128i_i64[1];
    v16 = v46.m128i_i64[1] + 8;
    if ( v44.m128i_i64[1] < (unsigned __int64)(v46.m128i_i64[1] + 8) )
    {
      do
      {
        v17 = *v15++;
        operator delete(v17, 0x200u);
      }
      while ( (unsigned __int64)v15 < v16 );
      v14 = (void *)v42.m128i_i64[0];
    }
    operator delete(v14, 8 * v42.m128i_i64[1]);
  }
  v18 = (_QWORD **)v38;
  if ( v38 )
  {
    do
    {
      sub_20BCB0(v18[3]);
      v19 = v18;
      v18 = (_QWORD **)v18[2];
      operator delete(v19, 0x30u);
    }
    while ( v18 );
  }
  return v13;
}
