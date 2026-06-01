__int64 __fastcall sub_4EA5C0(
        char *src,
        char *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  char *v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v15; // rbp
  char *v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-48h]

  v10 = src;
  v11 = 2 * a4;
  v12 = (a2 - src) >> 3;
  if ( 2 * a4 <= v12 )
  {
    v18 = 16 * a4;
    v15 = -8 * a4;
    do
    {
      v16 = v10;
      v10 += v18;
      a3 = (_QWORD *)sub_4EA400(v16, &v10[v15], &v10[v15], v10, a3, a7, a8, a9, a10, a6, a5, a6);
      v12 = (a2 - v10) >> 3;
    }
    while ( v12 >= v11 );
  }
  if ( a4 <= v12 )
    v12 = a4;
  return sub_4EA400(v10, &v10[8 * v12], &v10[8 * v12], a2, a3, a7, a8, a9, a10, a6, a5, a6);
}
