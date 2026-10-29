void __fastcall sub_2240B70(const char ***src, const char ***a2)
{
  __int64 v2; // rcx
  const char ***v3; // r13
  __int64 v4; // rbx

  if ( (char *)a2 - (char *)src <= 112 )
  {
    sub_2240A50(src, a2);
  }
  else
  {
    v2 = ((char *)a2 - (char *)src) >> 4;
    v3 = &src[v2];
    v4 = (8 * v2) >> 3;
    sub_2240B70(src);
    sub_2240B70(v3);
    sub_22408B0(src, v3, (__int64)a2, v4, a2 - v3);
  }
}
