__int64 __fastcall sub_4EA680(
        char *src,
        char *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  char *v13; // r15
  char *v14; // rdi
  __int64 result; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  char *v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+18h] [rbp-40h]

  v19 = (a2 - src) >> 3;
  v20 = a2 - src;
  v18 = &a3[a2 - src];
  if ( a2 - src <= 48 )
    return sub_4E6F70(src, a2, a4, a5, a6, a7, a8, a9);
  v13 = src;
  do
  {
    v14 = v13;
    v13 += 56;
    sub_4E6F70(v14, v13, a4, a5, a6, a7, a8, a9);
  }
  while ( a2 - v13 > 48 );
  result = sub_4E6F70(v13, a2, a4, a5, a6, a7, a8, a9);
  if ( v20 > 56 )
  {
    v16 = 7;
    do
    {
      sub_4EA5C0(src, a2, a3, v16, a4, a5, a6, a7, a8, a9);
      v17 = 2 * v16;
      v16 *= 4;
      result = sub_4EA5C0(a3, v18, src, v17, a4, a5, a6, a7, a8, a9);
    }
    while ( v19 > v16 );
  }
  return result;
}
