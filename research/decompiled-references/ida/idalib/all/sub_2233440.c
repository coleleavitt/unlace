int __fastcall sub_2233440(void *s1, size_t a2, const void *a3, size_t a4, char a5)
{
  size_t v6; // rdx
  int result; // eax
  size_t v10; // r15
  void *v11; // [rsp+0h] [rbp-48h] BYREF
  size_t v12; // [rsp+8h] [rbp-40h]

  v6 = a2;
  if ( a4 <= a2 )
    v6 = a4;
  if ( a4 < a2 )
  {
    v11 = s1;
    v10 = a4;
    v12 = v6;
    result = sub_22462B0(&v11, a3, a4);
    if ( result )
      return result;
    return 2 * (a2 == v10) - 1;
  }
  v11 = s1;
  v12 = a2;
  result = sub_22462B0(&v11, a3, v6);
  if ( result )
    return result;
  if ( a4 != a2 )
  {
    v10 = a2;
    return 2 * (a2 == v10) - 1;
  }
  if ( a5 && a4 )
  {
    result = memcmp(s1, a3, a4);
    if ( result )
      return (result >> 31) | 1;
  }
  return result;
}
