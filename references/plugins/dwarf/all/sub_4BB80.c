__int64 __fastcall sub_4BB80(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__m128i *, __m128i *))
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdi

  v5 = 2 * a4;
  v6 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 4);
  v7 = a1;
  if ( 2 * a4 <= v6 )
  {
    v8 = 96 * a4;
    v9 = -48 * a4;
    do
    {
      v10 = v7;
      v7 += v8;
      a3 = (_QWORD *)sub_4B740(v10, v7 + v9, v7 + v9, v7, a3, a5);
      v6 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v7) >> 4);
    }
    while ( v6 >= v5 );
  }
  if ( a4 <= v6 )
    v6 = a4;
  return sub_4B740(v7, v7 + 48 * v6, v7 + 48 * v6, a2, a3, a5);
}
