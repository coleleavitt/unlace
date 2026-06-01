void __fastcall sub_1F6CD40(char *a1, int *a2)
{
  __int64 v2; // rcx
  char *v3; // r13
  __int64 v4; // rbx

  if ( (char *)a2 - a1 <= 224 )
  {
    sub_1F6B1D0((__int64)a1, a2);
  }
  else
  {
    v2 = ((char *)a2 - a1) >> 5;
    v3 = &a1[16 * v2];
    v4 = (16 * v2) >> 4;
    sub_1F6CD40(a1, v3);
    sub_1F6CD40(v3, a2);
    sub_1F6CB00(a1, v3, (__int64)a2, v4, ((char *)a2 - v3) >> 4);
  }
}
