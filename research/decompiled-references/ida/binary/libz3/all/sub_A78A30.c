void __fastcall sub_A78A30(__int64 *src, char *a2, char *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // r14

  v6 = (((a2 - (char *)src) >> 3) + 1) / 2;
  v7 = &src[v6];
  v8 = (8 * v6) >> 3;
  if ( v6 <= a4 )
  {
    sub_A77CC0(src, (char *)&src[v6], a3);
    sub_A77CC0(v7, a2, a3);
    sub_A78000(src, v7, a2, v8, (a2 - (char *)v7) >> 3, a3);
  }
  else
  {
    sub_A78A30(src);
    sub_A78A30(v7);
    sub_A78200((char *)src, (char *)v7, a2, v8, (a2 - (char *)v7) >> 3, a3, a4);
  }
}

