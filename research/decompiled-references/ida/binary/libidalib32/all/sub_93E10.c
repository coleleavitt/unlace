__int64 __fastcall sub_93E10(unsigned __int64 a1)
{
  __int64 *v1; // rbp
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __int64 v5; // [rsp+0h] [rbp-228h] BYREF
  __int128 v6; // [rsp+8h] [rbp-220h]
  __int64 v7; // [rsp+20h] [rbp-208h] BYREF
  int v8; // [rsp+28h] [rbp-200h]
  __m128i v9; // [rsp+30h] [rbp-1F8h]
  __int128 v10; // [rsp+40h] [rbp-1E8h]
  __int64 v11; // [rsp+50h] [rbp-1D8h]
  __int128 v12; // [rsp+58h] [rbp-1D0h]
  __int64 v13; // [rsp+68h] [rbp-1C0h]
  __int64 v14; // [rsp+70h] [rbp-1B8h] BYREF
  int v15; // [rsp+78h] [rbp-1B0h]
  __m128i v16; // [rsp+80h] [rbp-1A8h]
  __int128 v17; // [rsp+90h] [rbp-198h]
  __int64 v18; // [rsp+A0h] [rbp-188h]
  __int128 v19; // [rsp+A8h] [rbp-180h]
  __int64 v20; // [rsp+B8h] [rbp-170h]
  __int64 v21; // [rsp+C0h] [rbp-168h] BYREF
  int v22; // [rsp+C8h] [rbp-160h]
  const char *v23; // [rsp+D0h] [rbp-158h]
  unsigned __int64 v24; // [rsp+D8h] [rbp-150h]
  __int128 v25; // [rsp+E0h] [rbp-148h]
  __int64 v26; // [rsp+F0h] [rbp-138h]
  __int128 v27; // [rsp+F8h] [rbp-130h]
  __int64 v28; // [rsp+108h] [rbp-120h]
  __int64 v29; // [rsp+110h] [rbp-118h] BYREF
  int v30; // [rsp+118h] [rbp-110h]
  const char *v31; // [rsp+120h] [rbp-108h]
  unsigned __int64 v32; // [rsp+128h] [rbp-100h]
  __int128 v33; // [rsp+130h] [rbp-F8h]
  __int64 v34; // [rsp+140h] [rbp-E8h]
  __int128 v35; // [rsp+148h] [rbp-E0h]
  __int64 v36; // [rsp+158h] [rbp-D0h]
  __int64 v37; // [rsp+160h] [rbp-C8h] BYREF
  int v38; // [rsp+168h] [rbp-C0h]
  const char *v39; // [rsp+170h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+178h] [rbp-B0h]
  __int128 v41; // [rsp+180h] [rbp-A8h]
  __int64 v42; // [rsp+190h] [rbp-98h]
  __int128 v43; // [rsp+198h] [rbp-90h]
  __int64 v44; // [rsp+1A8h] [rbp-80h]
  __int64 v45; // [rsp+1B0h] [rbp-78h] BYREF
  int v46; // [rsp+1B8h] [rbp-70h]
  const char *v47; // [rsp+1C0h] [rbp-68h]
  unsigned __int64 v48; // [rsp+1C8h] [rbp-60h]
  __int128 v49; // [rsp+1D0h] [rbp-58h]
  __int64 v50; // [rsp+1E0h] [rbp-48h]
  __int128 v51; // [rsp+1E8h] [rbp-40h]
  __int64 v52; // [rsp+1F8h] [rbp-30h]
  unsigned __int64 v53; // [rsp+208h] [rbp-20h]

  LODWORD(v1) = 1;
  v53 = __readfsqword(0x28u);
  v48 = a1;
  v49 = -1;
  v45 = 80;
  v46 = 0;
  v50 = -1;
  v52 = 0;
  v47 = "xdg-open";
  v51 = 0;
  if ( !sub_175650(&v45, 0) )
  {
    v1 = &v5;
    v5 = 0;
    v6 = 0;
    if ( (unsigned __int8)qgetenv() )
    {
      v3 = _mm_loadl_epi64((const __m128i *)&v5);
      v10 = -1;
      v7 = 80;
      v12 = 0;
      v8 = 0;
      v11 = -1;
      v13 = 0;
      v9 = _mm_unpacklo_epi64(v3, (__m128i)a1);
      if ( sub_175650(&v7, 0) )
        goto LABEL_8;
    }
    if ( (unsigned __int8)qgetenv() )
    {
      v4 = _mm_loadl_epi64((const __m128i *)&v5);
      v17 = -1;
      v14 = 80;
      v15 = 0;
      v18 = -1;
      v20 = 0;
      v19 = 0;
      v16 = _mm_unpacklo_epi64(v4, (__m128i)a1);
      if ( sub_175650(&v14, 0) )
        goto LABEL_8;
    }
    v21 = 80;
    v25 = -1;
    v22 = 0;
    v26 = -1;
    v28 = 0;
    v23 = "mozilla";
    v24 = a1;
    v27 = 0;
    if ( sub_175650(&v21, 0)
      || (v29 = 80, v33 = -1, v30 = 0, v34 = -1, v36 = 0, v31 = "firefox", v32 = a1, v35 = 0, sub_175650(&v29, 0))
      || (v37 = 80, v41 = -1, v38 = 0, v42 = -1, v44 = 0, v39 = "opera", v40 = a1, v43 = 0, sub_175650(&v37, 0)) )
    {
LABEL_8:
      LODWORD(v1) = 1;
    }
    else
    {
      v49 = -1;
      v45 = 80;
      v46 = 0;
      v50 = -1;
      v52 = 0;
      v47 = "netscape";
      v48 = a1;
      v51 = 0;
      LOBYTE(v1) = sub_175650(&v45, 0) != 0;
    }
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  return (unsigned int)v1;
}

