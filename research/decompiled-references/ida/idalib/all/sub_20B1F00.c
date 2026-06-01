void __fastcall sub_20B1F00(char *a1, int *a2)
{
  __int64 v2; // rcx
  char *v3; // r13
  __int64 v4; // rbx

  if ( (char *)a2 - a1 <= 224 )
  {
    sub_209EB90((__int64)a1, a2);
  }
  else
  {
    v2 = ((char *)a2 - a1) >> 5;
    v3 = &a1[16 * v2];
    v4 = (16 * v2) >> 4;
    sub_20B1F00(a1, v3);
    sub_20B1F00(v3, a2);
    sub_20B1CE0(a1, v3, (__int64)a2, v4, ((char *)a2 - v3) >> 4);
  }
}
