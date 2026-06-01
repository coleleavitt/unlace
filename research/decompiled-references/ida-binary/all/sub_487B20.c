__int64 __fastcall sub_487B20(__int64 *src, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v10; // rbp
  __int64 *v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-48h]

  v6 = src;
  v7 = 2 * a4;
  v8 = a2 - src;
  if ( 2 * a4 <= v8 )
  {
    v13 = 16 * a4;
    v10 = -1 * a4;
    do
    {
      v11 = v6;
      v6 = (__int64 *)((char *)v6 + v13);
      a3 = (__int64 *)sub_487A50(v11, &v6[v10], &v6[v10], v6, a3, a6, a5);
      v8 = a2 - v6;
    }
    while ( v8 >= v7 );
  }
  if ( a4 <= v8 )
    v8 = a4;
  return sub_487A50(v6, &v6[v8], &v6[v8], a2, a3, a6, a5);
}
