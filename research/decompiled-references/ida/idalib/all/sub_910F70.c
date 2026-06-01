unsigned __int64 __fastcall sub_910F70(unsigned int a1, int *a2)
{
  unsigned __int64 result; // rax
  int v3; // edx
  int v4; // rdx^4
  int v5; // ecx

  result = sub_910C70(a1);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    v5 = *a2;
    if ( *a2 < v3 )
    {
      *a2 = v3;
      v5 = v3;
    }
    result = 0;
    if ( v4 < v5 )
      *a2 = v4;
  }
  return result;
}
