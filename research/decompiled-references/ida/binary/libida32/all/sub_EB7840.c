void __fastcall sub_EB7840(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v9; // r14
  __int64 v10; // rbx

  v6 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 112 )
  {
    sub_EB6B30(a1, a2, a3, v6, a5, a6);
  }
  else
  {
    v7 = v6 >> 4;
    v9 = (char *)&a1[v7];
    v10 = (8 * v7) >> 3;
    sub_EB7840(a1, v9);
    sub_EB7840(v9, a2);
    sub_EB7680(a1, v9, (__int64)a2, v10, ((char *)a2 - v9) >> 3, (__int64)a3);
  }
}

