__int64 sub_BEEA0()
{
  int *v0; // rbx
  int *v1; // rax
  __int64 v2; // rdi
  __int64 v4; // rdi
  __int64 v5; // [rsp+0h] [rbp-108h] BYREF
  __int128 v6; // [rsp+8h] [rbp-100h]
  __int64 (__fastcall **v7)(); // [rsp+20h] [rbp-E8h] BYREF
  __int64 v8; // [rsp+28h] [rbp-E0h]
  __int128 v9; // [rsp+30h] [rbp-D8h]
  __int64 v10; // [rsp+40h] [rbp-C8h]
  const char *v11; // [rsp+48h] [rbp-C0h]
  int v12; // [rsp+50h] [rbp-B8h]
  __m128i v13; // [rsp+58h] [rbp-B0h]
  int v14; // [rsp+68h] [rbp-A0h]
  _BYTE v15[96]; // [rsp+70h] [rbp-98h] BYREF
  int v16; // [rsp+D0h] [rbp-38h] BYREF
  char v17; // [rsp+D4h] [rbp-34h]
  unsigned __int64 v18; // [rsp+D8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v8 = 0x717FF000004LL;
  v11 = "@0:1414[]\nExceptions";
  v0 = &v16;
  v9 = -1;
  v1 = (int *)v15;
  v10 = 0;
  v12 = 5;
  v14 = -1;
  v7 = (__int64 (__fastcall **)())&stru_235898;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_22FC48), (__m128i)(unsigned __int64)&off_22FB80);
  do
  {
    *(_QWORD *)v1 = 0;
    v1 += 6;
    *((_OWORD *)v1 - 1) = 0;
  }
  while ( &v16 != v1 );
  v16 = 0;
  if ( ((HIDWORD(v8) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v8) != 0xFF )
    {
      if ( !under_debugger )
      {
        interr();
        while ( 1 )
        {
          v4 = *((_QWORD *)v0 - 3);
          v0 -= 6;
          if ( v4 )
          {
            *((_QWORD *)v0 + 1) = 0;
            qfree();
          }
          if ( v0 == (int *)v15 )
            _Unwind_Resume(&stru_235898);
        }
      }
      BUG();
    }
    BYTE3(v8) = ((HIDWORD(v8) >> 19) & 0x3F) - 1;
    HIDWORD(v8) &= 0xFE07FFFF;
  }
  v7 = off_22F058;
  v17 = 0;
  v5 = 0;
  v6 = 0;
  sub_198260(&v7, &v5);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  v7 = (__int64 (__fastcall **)())&stru_235898;
  do
  {
    v2 = *((_QWORD *)v0 - 3);
    v0 -= 6;
    if ( v2 )
    {
      *((_QWORD *)v0 + 1) = 0;
      qfree();
    }
  }
  while ( v0 != (int *)v15 );
  return 1;
}

