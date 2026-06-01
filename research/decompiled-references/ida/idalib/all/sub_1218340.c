__int64 __fastcall sub_1218340(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i a6, __m128i a7)
{
  _BYTE *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // r12
  char v29; // r12
  char v30; // r12
  __m128i *v31; // rbp
  unsigned int v32; // eax
  void **v33; // rbx
  unsigned int v34; // ebp
  __m128i v36; // [rsp+10h] [rbp-338h]
  __int64 v38; // [rsp+40h] [rbp-308h]
  __int64 v39; // [rsp+50h] [rbp-2F8h]
  char v40; // [rsp+58h] [rbp-2F0h]
  _BYTE *v41; // [rsp+60h] [rbp-2E8h]
  __int64 v44; // [rsp+88h] [rbp-2C0h]
  __m128i v45; // [rsp+90h] [rbp-2B8h] BYREF
  _BYTE v46[16]; // [rsp+A0h] [rbp-2A8h] BYREF
  __m128i v47; // [rsp+B0h] [rbp-298h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-288h] BYREF
  __m128i v49[2]; // [rsp+D0h] [rbp-278h] BYREF
  __int16 v50; // [rsp+F0h] [rbp-258h]
  __m128i v51; // [rsp+100h] [rbp-248h] BYREF
  _BYTE v52[16]; // [rsp+110h] [rbp-238h] BYREF
  __int16 v53; // [rsp+120h] [rbp-228h]
  __m128i v54; // [rsp+130h] [rbp-218h] BYREF
  __int64 v55; // [rsp+140h] [rbp-208h] BYREF
  __m128i v56[2]; // [rsp+160h] [rbp-1E8h] BYREF
  __int16 v57; // [rsp+180h] [rbp-1C8h]
  __m128i v58; // [rsp+190h] [rbp-1B8h] BYREF
  _BYTE v59[16]; // [rsp+1A0h] [rbp-1A8h] BYREF
  __int16 v60; // [rsp+1B0h] [rbp-198h]
  __m128i v61; // [rsp+1C0h] [rbp-188h] BYREF
  _WORD v62[16]; // [rsp+1D0h] [rbp-178h] BYREF
  __m128i v63; // [rsp+1F0h] [rbp-158h] BYREF
  __int64 v64; // [rsp+200h] [rbp-148h] BYREF
  __int64 v65; // [rsp+210h] [rbp-138h]
  __m128i v66; // [rsp+220h] [rbp-128h] BYREF
  __int64 v67; // [rsp+230h] [rbp-118h] BYREF
  __int64 v68; // [rsp+240h] [rbp-108h]
  __m128i v69; // [rsp+250h] [rbp-F8h] BYREF
  __int64 v70; // [rsp+260h] [rbp-E8h]
  __m128i v71; // [rsp+280h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+290h] [rbp-B8h]
  __int64 v73; // [rsp+2A0h] [rbp-A8h]
  __m128i v74; // [rsp+2B0h] [rbp-98h] BYREF
  __m128i v75[2]; // [rsp+2D0h] [rbp-78h] BYREF
  __m128i v76[2]; // [rsp+2F0h] [rbp-58h] BYREF
  _BYTE v77[56]; // [rsp+310h] [rbp-38h] BYREF

  v7 = (_BYTE *)a1[311];
  v39 = a1[312];
  v41 = (_BYTE *)a1[307];
  v8 = a1[300];
  v44 = a1[308];
  v9 = a1[299];
  v75[0].m128i_i16[0] = 260;
  v74.m128i_i64[0] = (__int64)(a1 + 323);
  v36.m128i_i64[0] = v9;
  v36.m128i_i64[1] = v8;
  v38 = (__int64)(a1 + 364);
  LOWORD(v73) = 260;
  v71.m128i_i64[0] = (__int64)(a1 + 364);
  v63.m128i_i64[0] = (__int64)"/include/c++/";
  LOWORD(v65) = 259;
  v60 = 261;
  v58.m128i_i64[0] = v9;
  v58.m128i_i64[1] = v8;
  if ( v7 )
  {
    v51.m128i_i64[0] = (__int64)v52;
    sub_1213C40(&v51, v7, (__int64)&v7[v39]);
  }
  else
  {
    v52[0] = 0;
    v51.m128i_i64[0] = (__int64)v52;
    v51.m128i_i64[1] = 0;
  }
  sub_10E1980(&v54, &v51, "/../");
  v57 = 260;
  v56[0].m128i_i64[0] = (__int64)&v54;
  sub_A41580(&v61, v56, &v58, (__int64)v56, v10, v11);
  sub_A41580(&v66, &v61, &v63, (__int64)&v66, v12, v13);
  sub_A41580(&v69, &v66, &v71, v14, v15, v16);
  v40 = sub_1214670(
          (__int64)a1,
          v36.m128i_i64[0],
          v36.m128i_i64[1],
          a2,
          a3,
          0,
          a6,
          v69.m128i_i32[0],
          v69.m128i_i32[2],
          v70,
          a7);
  if ( (__int64 *)v54.m128i_i64[0] != &v55 )
    operator delete((void *)v54.m128i_i64[0]);
  if ( (_BYTE *)v51.m128i_i64[0] != v52 )
    operator delete((void *)v51.m128i_i64[0]);
  if ( v40 )
    return 1;
  v66.m128i_i64[0] = (__int64)"/include/c++/";
  v62[8] = 260;
  v74.m128i_i64[0] = (__int64)(a1 + 323);
  v75[0].m128i_i16[0] = 260;
  v61.m128i_i64[0] = (__int64)(a1 + 364);
  v56[0].m128i_i64[0] = (__int64)"/";
  v57 = 259;
  v53 = 261;
  LOWORD(v68) = 259;
  v51 = v36;
  v45.m128i_i64[0] = (__int64)v46;
  if ( v7 )
  {
    sub_1213C40(&v45, v7, (__int64)&v7[v39]);
  }
  else
  {
    v45.m128i_i64[1] = 0;
    v46[0] = 0;
  }
  sub_10E1980(&v47, &v45, (char *)"/gcc/");
  v50 = 260;
  v49[0].m128i_i64[0] = (__int64)&v47;
  sub_A41580(&v54, v49, &v51, v17, v18, 260);
  sub_A41580(&v58, &v54, v56, v19, v20, v21);
  sub_A41580(&v63, &v58, &v61, v22, v23, v24);
  sub_A41580(&v71, &v63, &v66, v25, v26, v27);
  v28 = sub_1214670(
          (__int64)a1,
          v36.m128i_i64[0],
          v36.m128i_i64[1],
          a2,
          a3,
          0,
          a6,
          v71.m128i_i32[0],
          v71.m128i_i32[2],
          v72,
          a7);
  if ( (__int64 *)v47.m128i_i64[0] != &v48 )
    operator delete((void *)v47.m128i_i64[0]);
  if ( (_BYTE *)v45.m128i_i64[0] != v46 )
    operator delete((void *)v45.m128i_i64[0]);
  if ( v28 )
    return 1;
  v75[0].m128i_i16[0] = 260;
  v74.m128i_i64[0] = (__int64)(a1 + 323);
  v58.m128i_i64[0] = (__int64)v59;
  if ( v7 )
  {
    sub_1213C40(&v58, v7, (__int64)&v7[v39]);
  }
  else
  {
    v58.m128i_i64[1] = 0;
    v59[0] = 0;
  }
  sub_10E1980(&v61, &v58, "/../include/c++/");
  sub_12182E0(&v63, &v61, v38);
  v66.m128i_i64[0] = (__int64)&v63;
  LOWORD(v68) = 260;
  v29 = sub_1214670((__int64)a1, a4, a5, a2, a3, 1, a6, (int)&v63, v66.m128i_i32[2], v67, a7);
  if ( (__int64 *)v63.m128i_i64[0] != &v64 )
    operator delete((void *)v63.m128i_i64[0]);
  if ( (_WORD *)v61.m128i_i64[0] != v62 )
    operator delete((void *)v61.m128i_i64[0]);
  if ( (_BYTE *)v58.m128i_i64[0] != v59 )
    operator delete((void *)v58.m128i_i64[0]);
  if ( v29 )
    return 1;
  v75[0].m128i_i16[0] = 260;
  v74.m128i_i64[0] = (__int64)(a1 + 323);
  v58.m128i_i64[0] = (__int64)v59;
  if ( v7 )
  {
    sub_1213C40(&v58, v7, (__int64)&v7[v39]);
  }
  else
  {
    v58.m128i_i64[1] = 0;
    v59[0] = 0;
  }
  sub_10E1980(&v61, &v58, "/../include/c++/");
  sub_12182E0(&v63, &v61, v38);
  LOWORD(v68) = 260;
  v66.m128i_i64[0] = (__int64)&v63;
  v30 = sub_1214670(
          (__int64)a1,
          v36.m128i_i64[0],
          v36.m128i_i64[1],
          a2,
          a3,
          0,
          a6,
          (int)&v63,
          v66.m128i_i32[2],
          v67,
          a7);
  if ( (__int64 *)v63.m128i_i64[0] != &v64 )
    operator delete((void *)v63.m128i_i64[0]);
  if ( (_WORD *)v61.m128i_i64[0] != v62 )
    operator delete((void *)v61.m128i_i64[0]);
  if ( (_BYTE *)v58.m128i_i64[0] != v59 )
    operator delete((void *)v58.m128i_i64[0]);
  if ( v30 )
    return 1;
  v63.m128i_i64[0] = (__int64)&v64;
  if ( v41 )
  {
    sub_1213C40(&v63, v41, (__int64)&v41[v44]);
  }
  else
  {
    v63.m128i_i64[1] = 0;
    LOBYTE(v64) = 0;
  }
  sub_10E1980(&v66, &v63, "/include/g++-v");
  sub_12182E0(&v74, &v66, v38);
  if ( (__int64 *)v66.m128i_i64[0] != &v67 )
    operator delete((void *)v66.m128i_i64[0]);
  if ( (__int64 *)v63.m128i_i64[0] != &v64 )
    operator delete((void *)v63.m128i_i64[0]);
  v58.m128i_i64[0] = (__int64)v59;
  if ( v41 )
  {
    sub_1213C40(&v58, v41, (__int64)&v41[v44]);
  }
  else
  {
    v58.m128i_i64[1] = 0;
    v59[0] = 0;
  }
  sub_10E1980(&v61, &v58, "/include/g++-v");
  sub_12182E0(&v63, &v61, (__int64)(a1 + 370));
  sub_10E1980(&v66, &v63, ".");
  sub_12182E0(v75, &v66, (__int64)(a1 + 374));
  if ( (__int64 *)v66.m128i_i64[0] != &v67 )
    operator delete((void *)v66.m128i_i64[0]);
  if ( (__int64 *)v63.m128i_i64[0] != &v64 )
    operator delete((void *)v63.m128i_i64[0]);
  if ( (_WORD *)v61.m128i_i64[0] != v62 )
    operator delete((void *)v61.m128i_i64[0]);
  if ( (_BYTE *)v58.m128i_i64[0] != v59 )
    operator delete((void *)v58.m128i_i64[0]);
  v63.m128i_i64[0] = (__int64)&v64;
  if ( v41 )
  {
    sub_1213C40(&v63, v41, (__int64)&v41[v44]);
  }
  else
  {
    v63.m128i_i64[1] = 0;
    LOBYTE(v64) = 0;
  }
  sub_10E1980(&v66, &v63, "/include/g++-v");
  sub_12182E0(v76, &v66, (__int64)(a1 + 370));
  if ( (__int64 *)v66.m128i_i64[0] != &v67 )
    operator delete((void *)v66.m128i_i64[0]);
  if ( (__int64 *)v63.m128i_i64[0] != &v64 )
    operator delete((void *)v63.m128i_i64[0]);
  v31 = &v74;
  do
  {
    LOWORD(v65) = 260;
    LOWORD(v68) = 260;
    v66.m128i_i64[0] = (__int64)(a1 + 323);
    v63.m128i_i64[0] = (__int64)v31;
    v32 = sub_1214670(
            (__int64)a1,
            v36.m128i_i64[0],
            v36.m128i_i64[1],
            a2,
            a3,
            0,
            a6,
            (int)v31,
            v63.m128i_i32[2],
            v64,
            a7);
    if ( (_BYTE)v32 )
      break;
    v31 += 2;
  }
  while ( v77 != (_BYTE *)v31 );
  v33 = (void **)v77;
  v34 = v32;
  do
  {
    while ( 1 )
    {
      v33 -= 4;
      if ( *v33 == v33 + 2 )
        break;
      operator delete(*v33);
      if ( v33 == (void **)&v74 )
        return v34;
    }
  }
  while ( v33 != (void **)&v74 );
  return v34;
}
