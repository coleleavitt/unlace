__int64 __fastcall edit_exceptions_ah_t__::vfunc_0(__int64 a1, const char *a2)
{
  int *v2; // rbx
  int *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-108h] BYREF
  __int128 v10; // [rsp+8h] [rbp-100h]
  __int64 (__fastcall **v11)(); // [rsp+20h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-E0h]
  __int128 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+40h] [rbp-C8h]
  const char *v15; // [rsp+48h] [rbp-C0h]
  int v16; // [rsp+50h] [rbp-B8h]
  __m128i v17; // [rsp+58h] [rbp-B0h]
  int v18; // [rsp+68h] [rbp-A0h]
  _BYTE v19[96]; // [rsp+70h] [rbp-98h] BYREF
  int v20; // [rsp+D0h] [rbp-38h] BYREF
  char v21; // [rsp+D4h] [rbp-34h]
  unsigned __int64 v22; // [rsp+D8h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v12 = 0x717FF000004LL;
  v15 = "@0:1414[]\nExceptions";
  v2 = &v20;
  v13 = -1;
  v3 = (int *)v19;
  v14 = 0;
  v16 = 5;
  v18 = -1;
  v11 = (__int64 (__fastcall **)())&stru_86F6A0;
  v17 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_8602A8), (__m128i)(unsigned __int64)&off_8601E0);
  do
  {
    *(_QWORD *)v3 = 0;
    v3 += 6;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( &v20 != v3 );
  v20 = 0;
  v4 = HIDWORD(v12);
  v5 = ((HIDWORD(v12) >> 19) & 0x3F) - 1;
  if ( ((HIDWORD(v12) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v12) != 0xFF )
    {
      if ( !under_debugger )
      {
        interr(3449, a2, HIDWORD(v12), v5, 0.0);
        while ( 1 )
        {
          v8 = *((_QWORD *)v2 - 3);
          v2 -= 6;
          if ( v8 )
          {
            *((_QWORD *)v2 + 1) = 0;
            qfree(v8, a2);
          }
          if ( v2 == (int *)v19 )
            _Unwind_Resume(&stru_86F6A0);
        }
      }
      BUG();
    }
    v4 = HIDWORD(v12) & 0xFE07FFFF;
    BYTE3(v12) = ((HIDWORD(v12) >> 19) & 0x3F) - 1;
    HIDWORD(v12) &= 0xFE07FFFF;
  }
  v11 = exc_chooser_t___vtable;
  v21 = 0;
  v9 = 0;
  v10 = 0;
  sub_4AED50(&v11, &v9, v4, v5);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, (const char *)&v9);
  }
  v11 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v6 = *((_QWORD *)v2 - 3);
    v2 -= 6;
    if ( v6 )
    {
      *((_QWORD *)v2 + 1) = 0;
      qfree(v6, (const char *)&v9);
    }
  }
  while ( v2 != (int *)v19 );
  return 1;
}
