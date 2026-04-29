__int64 __fastcall sub_77810(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // rdx
  unsigned __int64 v2; // rsi
  __int64 result; // rax

  v1 = *a1;
  v2 = (unsigned __int64)a1[1];
  if ( *((_DWORD *)a1 + 12) <= 0xAu )
  {
    if ( (unsigned __int64)v1 >= v2 )
      sub_73F70(a1);
    result = *v1;
    *a1 = v1 + 1;
  }
  else
  {
    if ( (unsigned __int64)v1 >= v2 )
      sub_73F90(a1);
    return unpack_dd(a1);
  }
  return result;
}
