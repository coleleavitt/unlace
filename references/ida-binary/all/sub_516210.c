__int64 __fastcall sub_516210(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // rbp
  const char *v8; // rsi
  unsigned int v9; // ebx
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  __int128 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v7 = qword_8D2358;
  if ( !qword_8D2358 )
  {
    if ( !under_debugger )
      interr(2534, a2, a3, a4, a7);
    BUG();
  }
  v11 = 0;
  v13 = 0;
  v15 = 0;
  v12 = 0;
  v14 = 0;
  sub_169980(&v11, a1, a2, a4, a5, a6);
  v8 = nullptr;
  sub_4BEE60(nullptr, nullptr, (__int64)&v11);
  if ( (unsigned __int64)v12 <= 1 )
  {
    v9 = 0;
  }
  else
  {
    v8 = (const char *)&v11;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, &v11);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, v8);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11, v8);
  }
  return v9;
}
