__int64 __fastcall sub_172800(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  int *v3; // rax
  __m128i v4; // xmm5
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // r15
  __m128i *v10; // rbx
  char v11; // al
  __int64 v12; // rdx
  __m128i v13; // [rsp+0h] [rbp-2A8h] BYREF
  __int128 *v14; // [rsp+10h] [rbp-298h]
  __int64 v15; // [rsp+18h] [rbp-290h]
  __int64 v16; // [rsp+28h] [rbp-280h]
  __int64 v17; // [rsp+30h] [rbp-278h]
  char v18; // [rsp+38h] [rbp-270h]
  __int64 v19; // [rsp+40h] [rbp-268h] BYREF
  char v20; // [rsp+48h] [rbp-260h]
  char v21; // [rsp+49h] [rbp-25Fh]
  const char *v22; // [rsp+50h] [rbp-258h] BYREF
  __int128 v23; // [rsp+58h] [rbp-250h]
  __int64 v24; // [rsp+70h] [rbp-238h] BYREF
  __int128 v25; // [rsp+78h] [rbp-230h]
  __int64 v26; // [rsp+90h] [rbp-218h] BYREF
  __m128i *v27; // [rsp+98h] [rbp-210h]
  __int64 v28; // [rsp+A0h] [rbp-208h]
  __int64 v29; // [rsp+A8h] [rbp-200h]
  __int64 v30; // [rsp+B8h] [rbp-1F0h]
  __int64 v31; // [rsp+C0h] [rbp-1E8h]
  __int64 v32; // [rsp+D8h] [rbp-1D0h]
  __int64 v33; // [rsp+E0h] [rbp-1C8h]
  __int128 v34; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v35; // [rsp+110h] [rbp-198h]
  __int128 v36; // [rsp+118h] [rbp-190h]
  __int64 v37; // [rsp+128h] [rbp-180h]
  __int128 v38; // [rsp+130h] [rbp-178h]
  __int128 v39; // [rsp+140h] [rbp-168h]
  __int64 v40; // [rsp+170h] [rbp-138h]
  int v41; // [rsp+178h] [rbp-130h]
  __int64 v42; // [rsp+180h] [rbp-128h]
  char v43; // [rsp+188h] [rbp-120h]
  __int64 (__fastcall **v44)(); // [rsp+190h] [rbp-118h] BYREF
  __int64 v45; // [rsp+198h] [rbp-110h]
  __int128 v46; // [rsp+1A0h] [rbp-108h]
  __int64 v47; // [rsp+1B0h] [rbp-F8h]
  const char *v48; // [rsp+1B8h] [rbp-F0h]
  int v49; // [rsp+1C0h] [rbp-E8h]
  __m128i v50; // [rsp+1C8h] [rbp-E0h] BYREF
  int v51; // [rsp+1D8h] [rbp-D0h]
  char v52; // [rsp+1E0h] [rbp-C8h] BYREF
  char v53; // [rsp+228h] [rbp-80h] BYREF
  int v54; // [rsp+240h] [rbp-68h] BYREF
  __m128i v55; // [rsp+248h] [rbp-60h] BYREF
  __int64 v56; // [rsp+258h] [rbp-50h]
  __int16 v57; // [rsp+260h] [rbp-48h]
  unsigned __int64 v58; // [rsp+268h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( !a1 || a2 == -1 )
    return -1;
  v16 = 0;
  v35 = 0;
  v37 = 0;
  v40 = 1;
  v41 = -1;
  v42 = 0;
  v43 = 0;
  v14 = &v34;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_235880, (__m128i)(unsigned __int64)&v24);
  if ( get_udm_by_tid() != -1 )
  {
    v22 = nullptr;
    v23 = 0;
    sub_94440((__int64 *)&v22);
    v24 = 0;
    v25 = 0;
    build_stkvar_xrefs();
    v2 = s1;
    if ( (_QWORD)v23 )
      v2 = v22;
    v48 = v2;
    v46 = -1;
    v44 = (__int64 (__fastcall **)())&stru_236898;
    v3 = (int *)&v52;
    v45 = 0x20003FF000004LL;
    v47 = 0;
    v49 = 4;
    v51 = -1;
    v50 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2359A8), (__m128i)(unsigned __int64)&off_235980);
    do
    {
      *(_QWORD *)v3 = 0;
      v3 += 6;
      *((_OWORD *)v3 - 1) = 0;
    }
    while ( &v54 != v3 );
    v54 = 0;
    if ( ((HIDWORD(v45) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v45) != 0xFF )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      BYTE3(v45) = ((HIDWORD(v45) >> 19) & 0x3F) - 1;
      HIDWORD(v45) &= 0xFE07FFFF;
    }
    v4 = _mm_load_si128(&v13);
    v44 = off_2357B8;
    v51 = 55;
    v54 = 2;
    v56 = -1;
    v57 = 0;
    v55 = v4;
    if ( (_QWORD)v25 )
    {
      v18 = 0;
      v17 = -1;
      get_xrefpos();
      v20 = 0;
      v19 = v17;
      v13.m128i_i64[0] = (__int64)&v26;
      v21 = v18;
      sub_1960F0(&v26, &v44, 0, 0);
      v27 = &v55;
      v5 = sub_1987C0(&v44, &v19, &v26);
      if ( v32 )
      {
        v33 = 0;
        qfree();
      }
      if ( v30 )
      {
        v31 = 0;
        qfree();
      }
      if ( v28 )
      {
        v29 = 0;
        qfree();
      }
      if ( v5 >= 0 && (unsigned __int64)v5 < *(_QWORD *)(v55.m128i_i64[1] + 8) )
      {
        v6 = *(_QWORD *)v55.m128i_i64[1] + 16 * v5;
        if ( v5 )
        {
          v11 = *(_BYTE *)(v6 + 9);
          v12 = *(_QWORD *)v6;
          v15 = *(_QWORD *)v55.m128i_i64[1] + 16 * v5;
          v26 = v12;
          LOBYTE(v27) = v11;
          set_xrefpos();
          v7 = (__int64 *)v15;
        }
        else
        {
          v13.m128i_i64[0] = *(_QWORD *)v55.m128i_i64[1];
          ea2node();
          netnode_supdel();
          v7 = (__int64 *)v13.m128i_i64[0];
        }
        v8 = *v7;
LABEL_26:
        v55.m128i_i64[0] = (__int64)&off_235880;
        v10 = (__m128i *)&v53;
        v44 = (__int64 (__fastcall **)())&stru_236898;
        do
        {
          if ( v10->m128i_i64[0] )
          {
            v10->m128i_i64[1] = 0;
            qfree();
          }
          v10 = (__m128i *)((char *)v10 - 24);
        }
        while ( &v50 != v10 );
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
        goto LABEL_34;
      }
    }
    else
    {
      sub_92200((__int64)"There are no %s", v48);
    }
    v8 = -1;
    goto LABEL_26;
  }
  v8 = -1;
LABEL_34:
  clear_tinfo_t();
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v8;
}

