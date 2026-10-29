__int64 __fastcall sub_1723C0(__int64 a1, char a2)
{
  const char *v2; // rax
  int *v3; // rax
  __m128i v4; // xmm4
  __int64 v5; // r13
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // r13
  __m128i *v10; // rbx
  __m128i v12; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-1E8h]
  char v14; // [rsp+18h] [rbp-1E0h]
  __int64 v15; // [rsp+20h] [rbp-1D8h] BYREF
  char v16; // [rsp+28h] [rbp-1D0h]
  char v17; // [rsp+29h] [rbp-1CFh]
  const char *v18; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v19; // [rsp+38h] [rbp-1C0h]
  __m128i *v20; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-1A0h]
  __int64 v22; // [rsp+70h] [rbp-188h] BYREF
  __m128i *v23; // [rsp+78h] [rbp-180h]
  __int64 v24; // [rsp+80h] [rbp-178h]
  __int64 v25; // [rsp+88h] [rbp-170h]
  __int64 v26; // [rsp+98h] [rbp-160h]
  __int64 v27; // [rsp+A0h] [rbp-158h]
  __int64 v28; // [rsp+B8h] [rbp-140h]
  __int64 v29; // [rsp+C0h] [rbp-138h]
  __int64 (__fastcall **v30)(); // [rsp+E0h] [rbp-118h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-110h]
  __int128 v32; // [rsp+F0h] [rbp-108h]
  __int64 v33; // [rsp+100h] [rbp-F8h]
  const char *v34; // [rsp+108h] [rbp-F0h]
  int v35; // [rsp+110h] [rbp-E8h]
  __m128i v36; // [rsp+118h] [rbp-E0h] BYREF
  int v37; // [rsp+128h] [rbp-D0h]
  char v38; // [rsp+130h] [rbp-C8h] BYREF
  char v39; // [rsp+178h] [rbp-80h] BYREF
  int v40; // [rsp+190h] [rbp-68h] BYREF
  __m128i v41; // [rsp+198h] [rbp-60h] BYREF
  __int64 v42; // [rsp+1A8h] [rbp-50h]
  __int16 v43; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v44; // [rsp+1B8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v19 = 0;
  v18 = nullptr;
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_235880, (__m128i)(unsigned __int64)&v20);
  sub_171D00((__int64 *)&v18);
  v21 = 0;
  v20 = nullptr;
  sub_171080(&v20, a1, a2, nullptr, 0, 1);
  v2 = s1;
  if ( (_QWORD)v19 )
    v2 = v18;
  v34 = v2;
  v32 = -1;
  v30 = (__int64 (__fastcall **)())&stru_236898;
  v3 = (int *)&v38;
  v31 = 0x20003FF000004LL;
  v33 = 0;
  v35 = 4;
  v37 = -1;
  v36 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2359A8), (__m128i)(unsigned __int64)&off_235980);
  do
  {
    *(_QWORD *)v3 = 0;
    v3 += 6;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( &v40 != v3 );
  v40 = 0;
  if ( ((HIDWORD(v31) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v31) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v31) = ((HIDWORD(v31) >> 19) & 0x3F) - 1;
    HIDWORD(v31) &= 0xFE07FFFF;
  }
  v4 = _mm_load_si128(&v12);
  v30 = off_2357B8;
  v37 = 55;
  v40 = 2;
  v42 = -1;
  v43 = 0;
  v41 = v4;
  if ( (_QWORD)v21 )
  {
    v14 = 0;
    v13 = -1;
    get_xrefpos();
    v16 = 0;
    v15 = v13;
    v17 = v14;
    sub_1960F0(&v22, &v30, 0, 0);
    v23 = &v41;
    v5 = sub_1987C0(&v30, &v15, &v22);
    if ( v28 )
    {
      v29 = 0;
      qfree();
    }
    if ( v26 )
    {
      v27 = 0;
      qfree();
    }
    if ( v24 )
    {
      v25 = 0;
      qfree();
    }
    if ( v5 >= 0 && (unsigned __int64)v5 < *(_QWORD *)(v41.m128i_i64[1] + 8) )
    {
      v6 = *(_QWORD *)v41.m128i_i64[1] + 16 * v5;
      if ( v5 )
      {
        v7 = *(_BYTE *)(v6 + 9);
        v8 = *(_QWORD *)v6;
        v12.m128i_i64[0] = *(_QWORD *)v41.m128i_i64[1] + 16 * v5;
        v22 = v8;
        LOBYTE(v23) = v7;
        set_xrefpos();
      }
      else
      {
        v12.m128i_i64[0] = *(_QWORD *)v41.m128i_i64[1];
        ea2node();
        netnode_supdel();
      }
      v9 = *(_QWORD *)v12.m128i_i64[0];
      goto LABEL_20;
    }
  }
  else
  {
    sub_92200((__int64)"There are no %s", v34);
  }
  v9 = -1;
LABEL_20:
  v41.m128i_i64[0] = (__int64)&off_235880;
  v10 = (__m128i *)&v39;
  v30 = (__int64 (__fastcall **)())&stru_236898;
  do
  {
    if ( v10->m128i_i64[0] )
    {
      v10->m128i_i64[1] = 0;
      qfree();
    }
    v10 = (__m128i *)((char *)v10 - 24);
  }
  while ( &v36 != v10 );
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
  return v9;
}

