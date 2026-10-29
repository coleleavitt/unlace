__int64 __fastcall rangeset_t_prev_range(unsigned __int64 **a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rax

  v3 = a1[3];
  if ( v3 && a2 >= *v3 && a2 < v3[1] )
  {
    if ( v3 == *a1 )
      return -1;
  }
  else
  {
    v3 = (unsigned __int64 *)rangeset_t_lower_bound(a1, a2, a3);
    if ( *a1 == v3 )
      return -1;
  }
  a1[3] = v3 - 2;
  return *(v3 - 1) - 1;
}
