__int64 __fastcall sub_1718E0(int a1, char a2)
{
  const char *v2; // rax
  int *v3; // rax
  __m128i v4; // xmm4
  __int64 v5; // r13
  __int64 v6; // rcx
  char v7; // al
  int v8; // edx
  unsigned int v9; // r13d
  __m128i *v10; // rbx
  __m128i v12; // [rsp+0h] [rbp-1E8h] BYREF
  int v13; // [rsp+10h] [rbp-1D8h]
  char v14; // [rsp+14h] [rbp-1D4h]
  int v15; // [rsp+18h] [rbp-1D0h] BYREF
  char v16; // [rsp+1Ch] [rbp-1CCh]
  char v17; // [rsp+1Dh] [rbp-1CBh]
  const char *v18; // [rsp+20h] [rbp-1C8h] BYREF
  __int128 v19; // [rsp+28h] [rbp-1C0h]
  char *v20; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v21; // [rsp+48h] [rbp-1A0h]
  int v22; // [rsp+60h] [rbp-188h] BYREF
  char v23; // [rsp+64h] [rbp-184h]
  __m128i *v24; // [rsp+68h] [rbp-180h]
  __int64 v25; // [rsp+70h] [rbp-178h]
  __int64 v26; // [rsp+78h] [rbp-170h]
  __int64 v27; // [rsp+88h] [rbp-160h]
  __int64 v28; // [rsp+90h] [rbp-158h]
  __int64 v29; // [rsp+A8h] [rbp-140h]
  __int64 v30; // [rsp+B0h] [rbp-138h]
  __int64 (__fastcall **v31)(); // [rsp+D0h] [rbp-118h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-110h]
  __int128 v33; // [rsp+E0h] [rbp-108h]
  __int64 v34; // [rsp+F0h] [rbp-F8h]
  const char *v35; // [rsp+F8h] [rbp-F0h]
  int v36; // [rsp+100h] [rbp-E8h]
  __m128i v37; // [rsp+108h] [rbp-E0h] BYREF
  int v38; // [rsp+118h] [rbp-D0h]
  char v39; // [rsp+120h] [rbp-C8h] BYREF
  char v40; // [rsp+168h] [rbp-80h] BYREF
  int v41; // [rsp+180h] [rbp-68h] BYREF
  __m128i v42; // [rsp+188h] [rbp-60h] BYREF
  int v43; // [rsp+198h] [rbp-50h]
  __int16 v44; // [rsp+19Ch] [rbp-4Ch]
  unsigned __int64 v45; // [rsp+1A8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v19 = 0;
  v18 = nullptr;
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_234880, (__m128i)(unsigned __int64)&v20);
  sub_171230((__int64 *)&v18);
  v21 = 0;
  v20 = nullptr;
  sub_1705C0(&v20, a1, a2, nullptr, 0, 1);
  v2 = s1;
  if ( (_QWORD)v19 )
    v2 = v18;
  v35 = v2;
  v33 = -1;
  v31 = (__int64 (__fastcall **)())&stru_235898;
  v3 = (int *)&v39;
  v32 = 0x20003FF000004LL;
  v34 = 0;
  v36 = 4;
  v38 = -1;
  v37 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2349A8), (__m128i)(unsigned __int64)&off_234980);
  do
  {
    *(_QWORD *)v3 = 0;
    v3 += 6;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( &v41 != v3 );
  v41 = 0;
  if ( ((HIDWORD(v32) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v32) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v32) = ((HIDWORD(v32) >> 19) & 0x3F) - 1;
    HIDWORD(v32) &= 0xFE07FFFF;
  }
  v4 = _mm_load_si128(&v12);
  v31 = off_2347B8;
  v38 = 55;
  v41 = 2;
  v43 = -1;
  v44 = 0;
  v42 = v4;
  if ( (_QWORD)v21 )
  {
    v14 = 0;
    v13 = -1;
    get_xrefpos();
    v16 = 0;
    v15 = v13;
    v17 = v14;
    sub_1954F0(&v22, &v31, 0, 0);
    v24 = &v42;
    v5 = sub_197BC0(&v31, &v15, &v22);
    if ( v29 )
    {
      v30 = 0;
      qfree();
    }
    if ( v27 )
    {
      v28 = 0;
      qfree();
    }
    if ( v25 )
    {
      v26 = 0;
      qfree();
    }
    if ( v5 >= 0 && (unsigned __int64)v5 < *(_QWORD *)(v42.m128i_i64[1] + 8) )
    {
      v6 = *(_QWORD *)v42.m128i_i64[1] + 8 * v5;
      if ( v5 )
      {
        v7 = *(_BYTE *)(v6 + 5);
        v8 = *(_DWORD *)v6;
        v12.m128i_i64[0] = *(_QWORD *)v42.m128i_i64[1] + 8 * v5;
        v22 = v8;
        v23 = v7;
        set_xrefpos();
      }
      else
      {
        v12.m128i_i64[0] = *(_QWORD *)v42.m128i_i64[1];
        ea2node();
        netnode_supdel();
      }
      v9 = *(_DWORD *)v12.m128i_i64[0];
      goto LABEL_20;
    }
  }
  else
  {
    sub_92120((__int64)"There are no %s", v35);
  }
  v9 = -1;
LABEL_20:
  v42.m128i_i64[0] = (__int64)&off_234880;
  v10 = (__m128i *)&v40;
  v31 = (__int64 (__fastcall **)())&stru_235898;
  do
  {
    if ( v10->m128i_i64[0] )
    {
      v10->m128i_i64[1] = 0;
      qfree();
    }
    v10 = (__m128i *)((char *)v10 - 24);
  }
  while ( &v37 != v10 );
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

