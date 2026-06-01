void __fastcall sub_1E623D0(__m128 *a1, __m128 *a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r13
  __int64 v4; // rbx

  if ( (char *)a2 - (char *)a1 <= 224 )
  {
    sub_1E5DC00(a1, a2);
  }
  else
  {
    v2 = ((char *)a2 - (char *)a1) >> 5;
    v3 = (unsigned __int64)&a1[v2];
    v4 = (16 * v2) >> 4;
    sub_1E623D0(a1, v3);
    sub_1E623D0(v3, a2);
    sub_1E621B0((char *)a1, v3, (__int64)a2, v4, (__int64)((__int64)a2 - v3) >> 4);
  }
}
