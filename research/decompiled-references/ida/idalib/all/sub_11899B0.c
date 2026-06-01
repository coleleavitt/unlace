__int64 __fastcall sub_11899B0(const void **a1, const void *a2, size_t a3)
{
  unsigned int v3; // r14d
  char *v4; // r12
  char *v6; // r13

  v3 = 0;
  v4 = (char *)a1[1];
  if ( (unsigned __int64)v4 >= a3 )
  {
    v6 = (char *)*a1;
    if ( !a3 || !memcmp(*a1, a2, a3) )
    {
      v3 = 1;
      *a1 = &v6[a3];
      a1[1] = &v4[-a3];
    }
  }
  return v3;
}
