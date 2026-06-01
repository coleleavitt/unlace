__int64 __fastcall rangeset_t_next_range(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rdx

  v2 = (unsigned __int64 *)a1[3];
  if ( v2 && a2 >= *v2 && a2 < v2[1] )
  {
    if ( v2 != (unsigned __int64 *)(*a1 + 16LL * a1[1] - 16) )
    {
      a1[3] = v2 + 2;
      return v2[2];
    }
  }
  else
  {
    v3 = (__int64 *)rangeset_t_upper_bound(a1, a2);
    if ( v3 != (__int64 *)(*a1 + 16LL * a1[1]) )
    {
      v4 = *v3;
      a1[3] = v3;
      return v4;
    }
  }
  return -1;
}
