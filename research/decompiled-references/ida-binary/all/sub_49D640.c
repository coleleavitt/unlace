void __fastcall sub_49D640(char *src, char *a2)
{
  __int64 v2; // rcx
  char *v3; // r13
  __int64 v4; // rbx

  if ( a2 - src <= 112 )
  {
    sub_49BF00(src, a2);
  }
  else
  {
    v2 = (a2 - src) >> 4;
    v3 = &src[8 * v2];
    v4 = (8 * v2) >> 3;
    sub_49D640(src);
    sub_49D640(v3);
    sub_49D510(src, (unsigned __int64 *)v3, (__int64)a2, v4, (a2 - v3) >> 3);
  }
}
