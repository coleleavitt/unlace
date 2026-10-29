_BOOL8 __fastcall sub_2CE320(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rsi
  QT::QAbstractScrollArea *v5; // rbx
  _BOOL4 v6; // ebx
  __int128 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  int vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int128 vars28; // [rsp+28h] [rbp+28h]
  __m128i si128; // [rsp+38h] [rbp+38h] BYREF
  int vars48; // [rsp+48h] [rbp+48h]
  char vars50; // [rsp+50h] [rbp+50h]
  __int64 vars58; // [rsp+58h] [rbp+58h]
  int vars60; // [rsp+60h] [rbp+60h]
  __int64 vars68; // [rsp+68h] [rbp+68h]
  __int128 vars70; // [rsp+70h] [rbp+70h]
  __int64 vars80; // [rsp+80h] [rbp+80h]
  char vars88; // [rsp+88h] [rbp+88h]
  unsigned __int64 vars98; // [rsp+98h] [rbp+98h]

  vars98 = __readfsqword(0x28u);
  v4 = (const char *)&vars0;
  vars28 = 0;
  vars80 = 0xFFFFFFFFLL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  LODWORD(vars0) = 0;
  *((_QWORD *)&vars0 + 1) = 0;
  vars10 = -1;
  vars18 = -1;
  vars20 = 0;
  vars48 = -1;
  vars50 = 0;
  vars58 = -1;
  vars60 = -2;
  vars68 = -1;
  vars88 = 0;
  vars70 = 0;
  sub_1ED900(qword_8CD7E8, &vars0, 2, a4, 0.0);
  if ( (_DWORD)vars0 == 5 )
  {
    v4 = (const char *)si128.m128i_i64[0];
    if ( si128.m128i_i64[0] == -1 )
      v4 = (const char *)vars58;
    v5 = sub_2CBFE0(nullptr, (__int64)v4, 0);
    sub_2CBC80((const char *)v5);
    v6 = v5 != nullptr;
  }
  else
  {
    v6 = 0;
  }
  if ( vars60 >= -1 && vars68 )
  {
    *(_QWORD *)&vars70 = 0;
    qfree(vars68, v4);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( vars20 )
  {
    *(_QWORD *)&vars28 = 0;
    qfree(vars20, v4);
  }
  return v6;
}
