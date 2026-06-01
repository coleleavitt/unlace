unsigned __int64 __fastcall sub_5C41F0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 result; // rax

  if ( a1 < *a3 )
    a1 = *a3;
  result = a3[1];
  if ( a2 > result )
    a2 = a3[1];
  if ( a2 >= a1 && a1 < a2 )
    return auto_mark_range(a1, a2, 40);
  return result;
}
