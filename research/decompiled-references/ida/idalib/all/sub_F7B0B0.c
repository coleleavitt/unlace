void __fastcall sub_F7B0B0(__int64 *src, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 *v3; // r13
  __int64 v4; // rbx

  if ( (char *)a2 - (char *)src <= 112 )
  {
    sub_F7AF50(src, a2);
  }
  else
  {
    v2 = ((char *)a2 - (char *)src) >> 4;
    v3 = &src[v2];
    v4 = (8 * v2) >> 3;
    sub_F7B0B0(src);
    sub_F7B0B0(v3);
    sub_F7A940(src, (char *)v3, (__int64)a2, v4, a2 - v3);
  }
}
