__int64 __fastcall sub_171D00(__int64 a1, int a2)
{
  const char *v2; // rax
  int *v3; // rax
  __m128i v4; // xmm5
  __int64 v5; // r15
  __int64 v6; // rcx
  unsigned int *v7; // rcx
  unsigned int v8; // r15d
  __m128i *v10; // rbx
  char v11; // al
  int v12; // edx
  __m128i v13; // [rsp+0h] [rbp-288h] BYREF
  __int128 *v14; // [rsp+10h] [rbp-278h]
  __int64 v15; // [rsp+18h] [rbp-270h]
  __int64 v16; // [rsp+28h] [rbp-260h]
  int v17; // [rsp+30h] [rbp-258h]
  char v18; // [rsp+34h] [rbp-254h]
  int v19; // [rsp+38h] [rbp-250h] BYREF
  char v20; // [rsp+3Ch] [rbp-24Ch]
  char v21; // [rsp+3Dh] [rbp-24Bh]
  const char *v22; // [rsp+40h] [rbp-248h] BYREF
  __int128 v23; // [rsp+48h] [rbp-240h]
  __int64 v24; // [rsp+60h] [rbp-228h] BYREF
  __int128 v25; // [rsp+68h] [rbp-220h]
  int v26; // [rsp+80h] [rbp-208h] BYREF
  char v27; // [rsp+84h] [rbp-204h]
  __m128i *v28; // [rsp+88h] [rbp-200h]
  __int64 v29; // [rsp+90h] [rbp-1F8h]
  __int64 v30; // [rsp+98h] [rbp-1F0h]
  __int64 v31; // [rsp+A8h] [rbp-1E0h]
  __int64 v32; // [rsp+B0h] [rbp-1D8h]
  __int64 v33; // [rsp+C8h] [rbp-1C0h]
  __int64 v34; // [rsp+D0h] [rbp-1B8h]
  __int128 v35; // [rsp+F0h] [rbp-198h] BYREF
  __int64 v36; // [rsp+100h] [rbp-188h]
  __int128 v37; // [rsp+108h] [rbp-180h]
  __int64 v38; // [rsp+118h] [rbp-170h]
  __int128 v39; // [rsp+120h] [rbp-168h]
  __int128 v40; // [rsp+130h] [rbp-158h]
  __int64 v41; // [rsp+150h] [rbp-138h]
  int v42; // [rsp+158h] [rbp-130h]
  __int64 v43; // [rsp+160h] [rbp-128h]
  char v44; // [rsp+168h] [rbp-120h]
  __int64 (__fastcall **v45)(); // [rsp+170h] [rbp-118h] BYREF
  __int64 v46; // [rsp+178h] [rbp-110h]
  __int128 v47; // [rsp+180h] [rbp-108h]
  __int64 v48; // [rsp+190h] [rbp-F8h]
  const char *v49; // [rsp+198h] [rbp-F0h]
  int v50; // [rsp+1A0h] [rbp-E8h]
  __m128i v51; // [rsp+1A8h] [rbp-E0h] BYREF
  int v52; // [rsp+1B8h] [rbp-D0h]
  char v53; // [rsp+1C0h] [rbp-C8h] BYREF
  char v54; // [rsp+208h] [rbp-80h] BYREF
  int v55; // [rsp+220h] [rbp-68h] BYREF
  __m128i v56; // [rsp+228h] [rbp-60h] BYREF
  int v57; // [rsp+238h] [rbp-50h]
  __int16 v58; // [rsp+23Ch] [rbp-4Ch]
  unsigned __int64 v59; // [rsp+248h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( !a1 || a2 == -1 )
    return (unsigned int)-1;
  v16 = 0;
  v36 = 0;
  v38 = 0;
  v41 = 1;
  v42 = -1;
  v43 = 0;
  v44 = 0;
  v14 = &v35;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_234880, (__m128i)(unsigned __int64)&v24);
  if ( get_udm_by_tid() != -1 )
  {
    v22 = nullptr;
    v23 = 0;
    sub_94360((__int64 *)&v22);
    v24 = 0;
    v25 = 0;
    build_stkvar_xrefs();
    v2 = s1;
    if ( (_QWORD)v23 )
      v2 = v22;
    v49 = v2;
    v47 = -1;
    v45 = (__int64 (__fastcall **)())&stru_235898;
    v3 = (int *)&v53;
    v46 = 0x20003FF000004LL;
    v48 = 0;
    v50 = 4;
    v52 = -1;
    v51 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2349A8), (__m128i)(unsigned __int64)&off_234980);
    do
    {
      *(_QWORD *)v3 = 0;
      v3 += 6;
      *((_OWORD *)v3 - 1) = 0;
    }
    while ( &v55 != v3 );
    v55 = 0;
    if ( ((HIDWORD(v46) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v46) != 0xFF )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      BYTE3(v46) = ((HIDWORD(v46) >> 19) & 0x3F) - 1;
      HIDWORD(v46) &= 0xFE07FFFF;
    }
    v4 = _mm_load_si128(&v13);
    v45 = off_2347B8;
    v52 = 55;
    v55 = 2;
    v57 = -1;
    v58 = 0;
    v56 = v4;
    if ( (_QWORD)v25 )
    {
      v18 = 0;
      v17 = -1;
      get_xrefpos();
      v20 = 0;
      v19 = v17;
      v13.m128i_i64[0] = (__int64)&v26;
      v21 = v18;
      sub_1954F0(&v26, &v45, 0, 0);
      v28 = &v56;
      v5 = sub_197BC0(&v45, &v19, &v26);
      if ( v33 )
      {
        v34 = 0;
        qfree();
      }
      if ( v31 )
      {
        v32 = 0;
        qfree();
      }
      if ( v29 )
      {
        v30 = 0;
        qfree();
      }
      if ( v5 >= 0 && (unsigned __int64)v5 < *(_QWORD *)(v56.m128i_i64[1] + 8) )
      {
        v6 = *(_QWORD *)v56.m128i_i64[1] + 8 * v5;
        if ( v5 )
        {
          v11 = *(_BYTE *)(v6 + 5);
          v12 = *(_DWORD *)v6;
          v15 = *(_QWORD *)v56.m128i_i64[1] + 8 * v5;
          v26 = v12;
          v27 = v11;
          set_xrefpos();
          v7 = (unsigned int *)v15;
        }
        else
        {
          v13.m128i_i64[0] = *(_QWORD *)v56.m128i_i64[1];
          ea2node();
          netnode_supdel();
          v7 = (unsigned int *)v13.m128i_i64[0];
        }
        v8 = *v7;
LABEL_26:
        v56.m128i_i64[0] = (__int64)&off_234880;
        v10 = (__m128i *)&v54;
        v45 = (__int64 (__fastcall **)())&stru_235898;
        do
        {
          if ( v10->m128i_i64[0] )
          {
            v10->m128i_i64[1] = 0;
            qfree();
          }
          v10 = (__m128i *)((char *)v10 - 24);
        }
        while ( &v51 != v10 );
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
      sub_92120((__int64)"There are no %s", v49);
    }
    v8 = -1;
    goto LABEL_26;
  }
  v8 = -1;
LABEL_34:
  clear_tinfo_t();
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v8;
}

