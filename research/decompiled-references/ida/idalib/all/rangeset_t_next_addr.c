__int64 __fastcall rangeset_t_next_addr(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rax

  if ( a2 == -1 )
    return -1;
  v3 = (unsigned __int64 *)a1[3];
  v4 = a2 + 1;
  if ( v3 && v4 >= *v3 && v4 < v3[1] )
    return a2 + 1;
  v5 = (unsigned __int64 *)rangeset_t_lower_bound(a1, a2 + 1, a3);
  if ( v5 == (unsigned __int64 *)(*a1 + 16LL * a1[1]) )
    return -1;
  a1[3] = v5;
  v6 = *v5;
  if ( v4 < v6 )
    return v6;
  return v4;
}
