__int64 __fastcall sub_10AD90(unsigned __int16 **a1)
{
  unsigned __int16 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi

  v2 = *a1;
  result = (__int64)a1[1];
  v4 = (__int64)&(*a1)[result];
  if ( (unsigned __int16 *)v4 != *a1 )
  {
    do
    {
      v5 = *v2++;
      result = sub_199E00(v5);
    }
    while ( (unsigned __int16 *)v4 != v2 );
    v2 = *a1;
  }
  if ( v2 )
  {
    a1[1] = nullptr;
    return qfree();
  }
  return result;
}

