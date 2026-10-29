unsigned __int64 sub_93A00()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 v2; // rdi
  _QWORD *v4; // [rsp+0h] [rbp-108h] BYREF
  __int128 v5; // [rsp+8h] [rbp-100h]
  __int64 (__fastcall **v6)(); // [rsp+20h] [rbp-E8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-E0h]
  __int128 v8; // [rsp+30h] [rbp-D8h]
  __int64 v9; // [rsp+40h] [rbp-C8h]
  __int64 v10; // [rsp+48h] [rbp-C0h]
  int v11; // [rsp+50h] [rbp-B8h]
  __m128i v12; // [rsp+58h] [rbp-B0h]
  int v13; // [rsp+68h] [rbp-A0h]
  _BYTE v14[96]; // [rsp+70h] [rbp-98h] BYREF
  int v15; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+D8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v7 = 0x2FF000004LL;
  v8 = -1;
  v0 = (int *)v14;
  v11 = 4;
  v1 = &v15;
  v9 = 0;
  v10 = 0;
  v13 = -1;
  v6 = (__int64 (__fastcall **)())&stru_236898;
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_22F4C0), (__m128i)(unsigned __int64)&off_22F4A0);
  do
  {
    *(_QWORD *)v0 = 0;
    v0 += 6;
    *((_OWORD *)v0 - 1) = 0;
  }
  while ( &v15 != v0 );
  v15 = 0;
  if ( ((HIDWORD(v7) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v7) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v7) = ((HIDWORD(v7) >> 19) & 0x3F) - 1;
    HIDWORD(v7) &= 0xFE07FFFF;
  }
  v6 = off_22F3E0;
  v9 = 80;
  v5 = 0;
  v4 = (_QWORD *)qvector_reserve();
  *v4 = 0;
  *(_QWORD *)&v5 = v5 + 1;
  sub_8F810((__int64)"STARTITEM 3\nBUTTON CANCEL NONE\nRegistered Addons\n%/<:E3::80::>\n\n\n", sub_93660, &v6, &v4);
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  v6 = (__int64 (__fastcall **)())&stru_236898;
  do
  {
    v2 = *((_QWORD *)v1 - 3);
    v1 -= 6;
    if ( v2 )
    {
      *((_QWORD *)v1 + 1) = 0;
      qfree();
    }
  }
  while ( v1 != (int *)v14 );
  return v16 - __readfsqword(0x28u);
}

