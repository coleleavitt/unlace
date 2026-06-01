void *__fastcall sub_EB9300(__int64 *a1, __int64 *a2, __int64 *a3, void *a4, __int64 *a5)
{
  __int64 v8; // rax
  __int64 *v9; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+8h] [rbp-40h]

  v8 = (a2 - a1 + 1) / 2;
  v9 = &a1[v8];
  v13 = 8 * v8;
  if ( v8 <= (__int64)a4 )
  {
    sub_EB7270(a1, &a1[v8], a3, a5, (__int64)a5, 8 * v8);
    sub_EB7270(v9, a2, a3, a5, v11, v12);
  }
  else
  {
    sub_EB9300(a1, &a1[v8], a3);
    sub_EB9300(v9, a2, a3);
  }
  return sub_EB8F70((char *)a1, v9, (__int64)a2, v13 >> 3, a2 - v9, (void **)a3, a4, (__int64)a5);
}

