__int64 sub_1284A0()
{
  int *v0; // rbx
  __int64 v1; // r12
  int *v2; // rax
  __int64 v3; // rdi
  __int16 v5; // [rsp+Ch] [rbp-11Ch] BYREF
  __int16 v6; // [rsp+Eh] [rbp-11Ah] BYREF
  _QWORD *v7; // [rsp+10h] [rbp-118h] BYREF
  __int128 v8; // [rsp+18h] [rbp-110h]
  __int64 (__fastcall **v9)(); // [rsp+30h] [rbp-F8h] BYREF
  __int64 v10; // [rsp+38h] [rbp-F0h]
  __int128 v11; // [rsp+40h] [rbp-E8h]
  __int64 v12; // [rsp+50h] [rbp-D8h]
  __int64 v13; // [rsp+58h] [rbp-D0h]
  int v14; // [rsp+60h] [rbp-C8h]
  __m128i v15; // [rsp+68h] [rbp-C0h]
  int v16; // [rsp+78h] [rbp-B0h]
  _BYTE v17[96]; // [rsp+80h] [rbp-A8h] BYREF
  int v18; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+E8h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v0 = &v18;
  v5 = 0;
  v1 = (char)getinf();
  v9 = (__int64 (__fastcall **)())&stru_236898;
  v11 = -1;
  v6 = (unsigned __int8)getinf();
  v10 = 0x2FF000004LL;
  v14 = 2;
  v2 = (int *)v17;
  v12 = 0;
  v13 = 0;
  v16 = -1;
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_232720), (__m128i)(unsigned __int64)off_232640);
  do
  {
    *(_QWORD *)v2 = 0;
    v2 += 6;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( &v18 != v2 );
  v18 = 0;
  if ( ((HIDWORD(v10) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v10) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v10) = ((HIDWORD(v10) >> 19) & 0x3F) - 1;
    HIDWORD(v10) &= 0xFE07FFFF;
  }
  LODWORD(v12) = 75;
  v9 = off_2322B8;
  v8 = 0;
  v7 = (_QWORD *)qvector_reserve();
  *v7 = v1;
  *(_QWORD *)&v8 = v8 + 1;
  if ( (unsigned int)sub_18C660(
                       1055,
                       (unsigned int)sub_1255C0,
                       (unsigned int)&v9,
                       (unsigned int)&v7,
                       (unsigned int)&v5,
                       (unsigned int)&v6) )
  {
    setinf();
    if ( (unsigned __int8)getinf() == 10 && v5 )
      reorder_dummy_names();
    if ( (unsigned __int8)getinf() != v6 )
    {
      setinf();
      rebuild_nlist();
    }
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  v9 = (__int64 (__fastcall **)())&stru_236898;
  do
  {
    v3 = *((_QWORD *)v0 - 3);
    v0 -= 6;
    if ( v3 )
    {
      *((_QWORD *)v0 + 1) = 0;
      qfree();
    }
  }
  while ( v0 != (int *)v17 );
  return 1;
}

