__int64 __fastcall sub_C11560(__int64 **a1, int a2)
{
  __int64 v2; // rax
  unsigned __int8 **v3; // rbp

  v2 = **a1;
  if ( !v2 )
    return 0;
  v3 = (unsigned __int8 **)sub_E33C80(v2, *(unsigned int *)a1[1], 2387, 0);
  if ( v3 )
  {
    sub_C11320(v3, *(unsigned __int8 *)a1[2]);
    sub_C11320(v3, a2 == 4);
    sub_C11320(v3, a2);
  }
  return 0;
}
