__int64 __fastcall sub_212CE20(__int64 a1, __int64 a2, __int64 a3, const char *a4, __int64 a5)
{
  _QWORD *v5; // r12
  __int64 v6; // rbp
  int v7; // edx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  char *v11; // rax
  char *v12; // r13
  __m128i v13; // xmm0
  _QWORD *v14; // rbx
  __int64 v15; // r12
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rdx
  void **v21; // rax
  void **v22; // r13
  __m128i v23; // xmm0
  __int64 v24; // rbp
  void **v25; // rbx
  void **v26; // rax
  void **v27; // rdi
  void **v28; // r14
  bool v29; // bp
  void **v30; // r14
  void **v31; // r13
  void **v33; // r14
  void **v34; // r13
  bool v35; // bp
  void **v36; // r14
  void **v37; // r13
  __int64 v38; // rdi
  __int64 v39; // r15
  __int64 v40; // rbx
  __int64 *v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rsi
  char v44; // cl
  __m128i v45; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v46; // [rsp+10h] [rbp-198h]
  __int64 v47; // [rsp+18h] [rbp-190h]
  const char *v48; // [rsp+20h] [rbp-188h]
  __int64 v49; // [rsp+28h] [rbp-180h]
  _QWORD v50[2]; // [rsp+40h] [rbp-168h] BYREF
  const char *v51; // [rsp+50h] [rbp-158h] BYREF
  __int64 v52; // [rsp+58h] [rbp-150h]
  __int64 v53; // [rsp+60h] [rbp-148h]
  __int64 v54; // [rsp+68h] [rbp-140h]
  void *v55; // [rsp+70h] [rbp-138h] BYREF
  _BYTE v56[16]; // [rsp+80h] [rbp-128h] BYREF
  void *v57; // [rsp+90h] [rbp-118h] BYREF
  _BYTE v58[16]; // [rsp+A0h] [rbp-108h] BYREF
  void *v59; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v60[16]; // [rsp+C0h] [rbp-E8h] BYREF
  void *v61; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v62[16]; // [rsp+E0h] [rbp-C8h] BYREF
  void *v63; // [rsp+F0h] [rbp-B8h] BYREF
  _BYTE v64[16]; // [rsp+100h] [rbp-A8h] BYREF
  void *v65; // [rsp+110h] [rbp-98h] BYREF
  _BYTE v66[16]; // [rsp+120h] [rbp-88h] BYREF
  void *v67[2]; // [rsp+130h] [rbp-78h]
  char *v68; // [rsp+140h] [rbp-68h]
  void *v69[2]; // [rsp+148h] [rbp-60h]
  char *v70; // [rsp+158h] [rbp-50h]
  char v71; // [rsp+160h] [rbp-48h]

  v5 = (_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 8);
  v47 = a3;
  v7 = *(_DWORD *)(v6 + 88);
  v46 = a2;
  v48 = a4;
  BYTE1(v7) &= 0x3Fu;
  v49 = a5;
  LODWORD(v51) = v7 | (unsigned __int16)v51 & 0xC000;
  WORD2(v51) = *(_WORD *)(v6 + 92);
  v52 = *(_QWORD *)(v6 + 96);
  v53 = *(_QWORD *)(v6 + 104);
  v54 = *(_QWORD *)(v6 + 112);
  v55 = v56;
  sub_2129B70(&v55, *(_BYTE **)(v6 + 120), *(_QWORD *)(v6 + 120) + *(_QWORD *)(v6 + 128));
  v57 = v58;
  sub_2129B70(&v57, *(_BYTE **)(v6 + 152), *(_QWORD *)(v6 + 152) + *(_QWORD *)(v6 + 160));
  v59 = v60;
  sub_2129B70(&v59, *(_BYTE **)(v6 + 184), *(_QWORD *)(v6 + 184) + *(_QWORD *)(v6 + 192));
  v61 = v62;
  sub_2129B70(&v61, *(_BYTE **)(v6 + 216), *(_QWORD *)(v6 + 216) + *(_QWORD *)(v6 + 224));
  v63 = v64;
  sub_2129B70(&v63, *(_BYTE **)(v6 + 248), *(_QWORD *)(v6 + 248) + *(_QWORD *)(v6 + 256));
  v65 = v66;
  sub_2129B70(&v65, *(_BYTE **)(v6 + 280), *(_QWORD *)(v6 + 280) + *(_QWORD *)(v6 + 288));
  v8 = *(_QWORD *)(v6 + 320);
  v9 = *(_QWORD *)(v6 + 312);
  *(_OWORD *)v67 = 0;
  v68 = nullptr;
  v10 = v8 - v9;
  if ( (v8 - v9) >> 5 )
  {
    if ( (unsigned __int64)((v8 - v9) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_81;
    v45.m128i_i64[0] = v8 - v9;
    v11 = (char *)operator new(v8 - v9);
    v8 = *(_QWORD *)(v6 + 320);
    v9 = *(_QWORD *)(v6 + 312);
    v10 = v45.m128i_i64[0];
    v12 = v11;
  }
  else
  {
    v12 = nullptr;
  }
  v45.m128i_i64[0] = (__int64)v12;
  v13 = _mm_loadl_epi64(&v45);
  v68 = &v12[v10];
  *(__m128i *)v67 = _mm_unpacklo_epi64(v13, v13);
  if ( v8 != v9 )
  {
    v45.m128i_i64[0] = v6;
    v14 = v12;
    v45.m128i_i64[1] = a1;
    v15 = v9;
    do
    {
      v16 = v14 + 2;
      v17 = v14;
      v15 += 32;
      v14 += 4;
      *(v14 - 4) = v16;
      sub_2129B70(v17, *(_BYTE **)(v15 - 32), *(_QWORD *)(v15 - 32) + *(_QWORD *)(v15 - 24));
    }
    while ( v8 != v15 );
    v5 = (_QWORD *)v45.m128i_i64[1];
    v6 = v45.m128i_i64[0];
    v12 += ((v8 - 32 - v9) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  v67[1] = v12;
  v18 = *(_QWORD *)(v6 + 344);
  v19 = *(_QWORD *)(v6 + 336);
  *(_OWORD *)v69 = 0;
  v70 = nullptr;
  v20 = v18 - v19;
  if ( (v18 - v19) >> 5 )
  {
    if ( (unsigned __int64)((v18 - v19) >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v45.m128i_i64[0] = v18 - v19;
      v21 = (void **)operator new(v18 - v19);
      v18 = *(_QWORD *)(v6 + 344);
      v19 = *(_QWORD *)(v6 + 336);
      v20 = v45.m128i_i64[0];
      v22 = v21;
      goto LABEL_11;
    }
LABEL_81:
    std::__throw_bad_alloc();
  }
  v22 = nullptr;
LABEL_11:
  v45.m128i_i64[0] = (__int64)v22;
  v23 = _mm_loadl_epi64(&v45);
  v70 = (char *)v22 + v20;
  *(__m128i *)v69 = _mm_unpacklo_epi64(v23, v23);
  if ( v19 == v18 )
  {
    v69[1] = v22;
    v44 = *(_BYTE *)(v6 + 360) & 3;
    v29 = ((unsigned __int8)v51 & 8) != 0;
    v71 = v44 | v71 & 0xFC;
  }
  else
  {
    v45.m128i_i64[0] = v6;
    v24 = v19;
    v45.m128i_i64[1] = (__int64)v5;
    v25 = v22;
    do
    {
      v26 = v25 + 2;
      v27 = v25;
      v24 += 32;
      v25 += 4;
      *(v25 - 4) = v26;
      sub_2129B70(v27, *(_BYTE **)(v24 - 32), *(_QWORD *)(v24 - 32) + *(_QWORD *)(v24 - 24));
    }
    while ( v18 != v24 );
    v5 = (_QWORD *)v45.m128i_i64[1];
    v28 = (void **)((char *)v22 + ((v18 - 32 - v19) & 0xFFFFFFFFFFFFFFE0LL) + 32);
    v22 = (void **)v69[0];
    v69[1] = v28;
    v71 = *(_BYTE *)(v45.m128i_i64[0] + 360) & 3 | v71 & 0xFC;
    v29 = ((unsigned __int8)v51 & 8) != 0;
    if ( v69[0] != v28 )
    {
      do
      {
        while ( *v22 != v22 + 2 )
        {
          operator delete(*v22);
          v22 += 4;
          if ( v22 == v28 )
            goto LABEL_17;
        }
        v22 += 4;
      }
      while ( v22 != v28 );
LABEL_17:
      v22 = (void **)v69[0];
    }
  }
  if ( v22 )
    operator delete(v22);
  v30 = (void **)v67[1];
  v31 = (void **)v67[0];
  if ( v67[1] != v67[0] )
  {
    do
    {
      while ( *v31 != v31 + 2 )
      {
        operator delete(*v31);
        v31 += 4;
        if ( v30 == v31 )
          goto LABEL_23;
      }
      v31 += 4;
    }
    while ( v30 != v31 );
LABEL_23:
    v31 = (void **)v67[0];
  }
  if ( v31 )
    operator delete(v31);
  if ( v65 != v66 )
    operator delete(v65);
  if ( v63 != v64 )
    operator delete(v63);
  if ( v61 != v62 )
    operator delete(v61);
  if ( v59 != v60 )
    operator delete(v59);
  if ( v57 != v58 )
    operator delete(v57);
  if ( v55 != v56 )
    operator delete(v55);
  if ( v29 )
    return 0;
  sub_212C920((__int64)&v51, v5[1] + 88LL);
  v33 = (void **)v69[1];
  v34 = (void **)v69[0];
  v35 = ((unsigned __int8)v51 & 4) != 0;
  if ( v69[1] != v69[0] )
  {
    do
    {
      while ( *v34 != v34 + 2 )
      {
        operator delete(*v34);
        v34 += 4;
        if ( v34 == v33 )
          goto LABEL_47;
      }
      v34 += 4;
    }
    while ( v33 != v34 );
LABEL_47:
    v34 = (void **)v69[0];
  }
  if ( v34 )
    operator delete(v34);
  v36 = (void **)v67[1];
  v37 = (void **)v67[0];
  if ( v67[1] != v67[0] )
  {
    do
    {
      while ( *v37 != v37 + 2 )
      {
        operator delete(*v37);
        v37 += 4;
        if ( v37 == v36 )
          goto LABEL_53;
      }
      v37 += 4;
    }
    while ( v36 != v37 );
LABEL_53:
    v37 = (void **)v67[0];
  }
  if ( v37 )
    operator delete(v37);
  if ( v65 != v66 )
    operator delete(v65);
  if ( v63 != v64 )
    operator delete(v63);
  if ( v61 != v62 )
    operator delete(v61);
  if ( v59 != v60 )
    operator delete(v59);
  if ( v57 != v58 )
    operator delete(v57);
  if ( v55 != v56 )
    operator delete(v55);
  if ( !v35 )
  {
    v38 = v5[4];
    v51 = v48;
    v52 = v49;
    sub_223BFB0(v38, v46, 1, v47, (unsigned int)&v51, 1, 0, 0, 1);
    v39 = v5[46];
    if ( v5[45] != v39 )
    {
      v45.m128i_i64[0] = v5[45];
      v40 = v39;
      v45.m128i_i64[1] = (__int64)v50;
      do
      {
        v41 = *(__int64 **)(v40 - 8);
        v51 = "while in macro instantiation";
        v42 = v5[4];
        LOWORD(v55) = 259;
        v43 = *v41;
        v40 -= 8;
        v50[0] = 0;
        v50[1] = 0;
        sub_223BFB0(v42, v43, 3, (unsigned int)&v51, v45.m128i_i32[2], 1, 0, 0, 1);
      }
      while ( v45.m128i_i64[0] != v40 );
    }
    return 0;
  }
  return sub_2153E90(v5, v46, v47, v48, v49);
}
