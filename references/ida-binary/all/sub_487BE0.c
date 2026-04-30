__int64 __fastcall sub_487BE0(__int64 *src, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 *v9; // r15
  __int64 *v10; // rdi
  __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 *v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+10h] [rbp-48h]
  __int64 v16; // [rsp+18h] [rbp-40h]

  v15 = a2 - src;
  v16 = (char *)a2 - (char *)src;
  v14 = (__int64 *)((char *)a3 + (char *)a2 - (char *)src);
  if ( (char *)a2 - (char *)src <= 48 )
    return sub_487920(src, a2, a4, a5);
  v9 = src;
  do
  {
    v10 = v9;
    v9 += 7;
    sub_487920(v10, v9, a4, a5);
  }
  while ( (char *)a2 - (char *)v9 > 48 );
  result = sub_487920(v9, a2, a4, a5);
  if ( v16 > 56 )
  {
    v12 = 7;
    do
    {
      sub_487B20(src, a2, a3, v12, a4, a5);
      v13 = 2 * v12;
      v12 *= 4;
      result = sub_487B20(a3, v14, src, v13, a4, a5);
    }
    while ( v15 > v12 );
  }
  return result;
}
