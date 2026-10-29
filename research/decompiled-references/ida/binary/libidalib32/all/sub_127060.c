__int64 __fastcall sub_127060(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  int *v3; // rax
  __int64 v4; // rdi
  __int64 v6; // [rsp+8h] [rbp-100h] BYREF
  __int64 (__fastcall **v7)(); // [rsp+10h] [rbp-F8h] BYREF
  __int64 v8; // [rsp+18h] [rbp-F0h]
  __int128 v9; // [rsp+20h] [rbp-E8h]
  __int64 v10; // [rsp+30h] [rbp-D8h]
  const char *v11; // [rsp+38h] [rbp-D0h]
  int v12; // [rsp+40h] [rbp-C8h]
  __m128i v13; // [rsp+48h] [rbp-C0h]
  int v14; // [rsp+58h] [rbp-B0h]
  _BYTE v15[96]; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+C8h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v8 = 0x3FF000004LL;
  v11 = "Please select mapping to remove";
  v2 = &v16;
  v9 = -1;
  v3 = (int *)v15;
  v7 = (__int64 (__fastcall **)())&stru_235898;
  v10 = 0;
  v12 = 4;
  v14 = -1;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_231718), (__m128i)(unsigned __int64)&off_231520);
  do
  {
    *(_QWORD *)v3 = 0;
    v3 += 6;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( &v16 != v3 );
  v16 = 0;
  if ( ((HIDWORD(v8) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v8) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v8) = ((HIDWORD(v8) >> 19) & 0x3F) - 1;
    HIDWORD(v8) &= 0xFE07FFFF;
  }
  v6 = 0;
  v7 = off_231390;
  if ( sub_198260(&v7, &v6) >= 0 )
  {
    if ( (unsigned __int8)get_mapping() )
      del_mapping();
    (*(void (__fastcall **)(__int64, __int64, double))(*(_QWORD *)a2 + 64LL))(a2, 1, 0.0);
  }
  v7 = (__int64 (__fastcall **)())&stru_235898;
  do
  {
    v4 = *((_QWORD *)v2 - 3);
    v2 -= 6;
    if ( v4 )
    {
      *((_QWORD *)v2 + 1) = 0;
      qfree();
    }
  }
  while ( v2 != (int *)v15 );
  return 0;
}

