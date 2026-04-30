void __fastcall sub_3DB990(char *src, char *a2)
{
  __int64 v2; // rcx
  char *v3; // r13
  __int64 v4; // rbx

  if ( a2 - src <= 56 )
  {
    sub_3DB0E0(src, a2);
  }
  else
  {
    v2 = (a2 - src) >> 3;
    v3 = &src[4 * v2];
    v4 = (4 * v2) >> 2;
    sub_3DB990(src);
    sub_3DB990(v3);
    sub_3DB860(src, (int *)v3, (__int64)a2, v4, (a2 - v3) >> 2);
  }
}
