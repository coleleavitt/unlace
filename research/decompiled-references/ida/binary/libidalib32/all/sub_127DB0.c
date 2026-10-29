__int64 sub_127DB0()
{
  int *v0; // rbx
  __int64 v1; // rbp
  unsigned __int8 v2; // al
  int *v3; // rdx
  __int64 v4; // rdi
  __int16 v6; // [rsp+Ch] [rbp-11Ch] BYREF
  __int16 v7; // [rsp+Eh] [rbp-11Ah] BYREF
  _QWORD *v8; // [rsp+10h] [rbp-118h] BYREF
  __int128 v9; // [rsp+18h] [rbp-110h]
  __int64 (__fastcall **v10)(); // [rsp+30h] [rbp-F8h] BYREF
  __int64 v11; // [rsp+38h] [rbp-F0h]
  __int128 v12; // [rsp+40h] [rbp-E8h]
  __int64 v13; // [rsp+50h] [rbp-D8h]
  __int64 v14; // [rsp+58h] [rbp-D0h]
  int v15; // [rsp+60h] [rbp-C8h]
  __m128i v16; // [rsp+68h] [rbp-C0h]
  int v17; // [rsp+78h] [rbp-B0h]
  _BYTE v18[96]; // [rsp+80h] [rbp-A8h] BYREF
  int v19; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+E8h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v0 = &v19;
  v6 = 0;
  v1 = (unsigned int)(char)getinf();
  v2 = getinf();
  v3 = (int *)v18;
  v10 = (__int64 (__fastcall **)())&stru_235898;
  v12 = -1;
  v7 = v2;
  v11 = 0x2FF000004LL;
  v15 = 2;
  v13 = 0;
  v14 = 0;
  v17 = -1;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_231720), (__m128i)(unsigned __int64)off_231640);
  do
  {
    *(_QWORD *)v3 = 0;
    v3 += 6;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( &v19 != v3 );
  v19 = 0;
  if ( ((HIDWORD(v11) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v11) = ((HIDWORD(v11) >> 19) & 0x3F) - 1;
    HIDWORD(v11) &= 0xFE07FFFF;
  }
  LODWORD(v13) = 75;
  v10 = off_2312B8;
  v9 = 0;
  v8 = (_QWORD *)qvector_reserve();
  *v8 = v1;
  *(_QWORD *)&v9 = v9 + 1;
  if ( (unsigned int)sub_18BA90(
                       1055,
                       (unsigned int)sub_124EF0,
                       (unsigned int)&v10,
                       (unsigned int)&v8,
                       (unsigned int)&v6,
                       (unsigned int)&v7) )
  {
    setinf();
    if ( (unsigned __int8)getinf() == 10 && v6 )
      reorder_dummy_names();
    if ( (unsigned __int8)getinf() != v7 )
    {
      setinf();
      rebuild_nlist();
    }
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  v10 = (__int64 (__fastcall **)())&stru_235898;
  do
  {
    v4 = *((_QWORD *)v0 - 3);
    v0 -= 6;
    if ( v4 )
    {
      *((_QWORD *)v0 + 1) = 0;
      qfree();
    }
  }
  while ( v0 != (int *)v18 );
  return 1;
}

