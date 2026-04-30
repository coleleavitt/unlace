__int64 __fastcall sub_34D4F0(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  __int64 v3; // r12
  int *v4; // rax
  __int64 (__fastcall *v5)(int, __int64); // rsi
  __int64 v6; // rdi
  __int16 v8; // [rsp+Ch] [rbp-11Ch] BYREF
  __int16 v9; // [rsp+Eh] [rbp-11Ah] BYREF
  char *v10; // [rsp+10h] [rbp-118h] BYREF
  __int128 v11; // [rsp+18h] [rbp-110h]
  __int64 (__fastcall **v12)(); // [rsp+30h] [rbp-F8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-F0h]
  __int128 v14; // [rsp+40h] [rbp-E8h]
  __int64 v15; // [rsp+50h] [rbp-D8h]
  __int64 v16; // [rsp+58h] [rbp-D0h]
  int v17; // [rsp+60h] [rbp-C8h]
  __m128i v18; // [rsp+68h] [rbp-C0h]
  int v19; // [rsp+78h] [rbp-B0h]
  _BYTE v20[96]; // [rsp+80h] [rbp-A8h] BYREF
  int v21; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+E8h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v2 = &v21;
  v8 = 0;
  v3 = (char)getinf(35);
  v12 = (__int64 (__fastcall **)())&stru_86F6A0;
  v14 = -1;
  v9 = (unsigned __int8)getinf(39);
  v13 = 0x2FF000004LL;
  v17 = 2;
  v4 = (int *)v20;
  v15 = 0;
  v16 = 0;
  v19 = -1;
  v18 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_8674E0), (__m128i)(unsigned __int64)off_867400);
  do
  {
    *(_QWORD *)v4 = 0;
    v4 += 6;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( &v21 != v4 );
  v21 = 0;
  if ( ((HIDWORD(v13) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v13) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, HIDWORD(v13), ((HIDWORD(v13) >> 19) & 0x3F) - 1, 0.0);
      BUG();
    }
    BYTE3(v13) = ((HIDWORD(v13) >> 19) & 0x3F) - 1;
    HIDWORD(v13) &= 0xFE07FFFF;
  }
  LODWORD(v15) = 75;
  v12 = dumnam_chooser_t___vtable;
  v10 = nullptr;
  v11 = 0;
  v10 = (char *)qvector_reserve(&v10, 0, 1, 8);
  v5 = sub_34A6D0;
  *(_QWORD *)&v10[8 * v11] = v3;
  *(_QWORD *)&v11 = v11 + 1;
  if ( (unsigned int)sub_507F10(
                       1055,
                       (unsigned int)sub_34A6D0,
                       (unsigned int)&v12,
                       (unsigned int)&v10,
                       (unsigned int)&v8,
                       (unsigned int)&v9) )
  {
    v5 = (__int64 (__fastcall *)(int, __int64))*v10;
    setinf(35, v5);
    if ( (unsigned __int8)getinf(35) == 10 && v8 )
      reorder_dummy_names();
    if ( (unsigned __int8)getinf(39) != v9 )
    {
      v5 = (__int64 (__fastcall *)(int, __int64))(unsigned __int8)v9;
      setinf(39, (unsigned __int8)v9);
      rebuild_nlist();
    }
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10, (const char *)v5);
  }
  v12 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v6 = *((_QWORD *)v2 - 3);
    v2 -= 6;
    if ( v6 )
    {
      *((_QWORD *)v2 + 1) = 0;
      qfree(v6, (const char *)v5);
    }
  }
  while ( v2 != (int *)v20 );
  return 1;
}
