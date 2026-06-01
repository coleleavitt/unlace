__int64 *__fastcall sub_395300(
        const char *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64, const char *))
{
  __int64 v5; // r13
  __int64 v6; // rax
  const char *v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbp
  const char *v10; // rdi

  v5 = 2 * a4;
  v6 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 4);
  v7 = a1;
  if ( 2 * a4 <= v6 )
  {
    v8 = 96 * a4;
    v9 = -48 * a4;
    do
    {
      v10 = v7;
      v7 += v8;
      a3 = sub_395040(v10, &v7[v9], (__int64)&v7[v9], (__int64)v7, a3, a5);
      v6 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)v7) >> 4);
    }
    while ( v6 >= v5 );
  }
  if ( a4 <= v6 )
    v6 = a4;
  return sub_395040(v7, &v7[48 * v6], (__int64)&v7[48 * v6], a2, a3, a5);
}
