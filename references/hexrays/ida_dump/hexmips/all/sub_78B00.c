__int64 __fastcall sub_78B00(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // rax
  unsigned int v2; // edx

  v1 = *a1;
  if ( *a1 >= a1[1] )
    sub_762F0(a1);
  v2 = *v1;
  *a1 = v1 + 1;
  return v2;
}
