__int64 __fastcall rangeset_t_next_addr(_QWORD *a1, int a2, __int64 a3)
{
  unsigned int *v3; // rax
  unsigned int v4; // ebx
  unsigned int *v5; // rax
  unsigned int v6; // eax

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v3 = (unsigned int *)a1[3];
  v4 = a2 + 1;
  if ( v3 && v4 >= *v3 && v4 < v3[1] )
    return v4;
  v5 = (unsigned int *)rangeset_t_lower_bound(a1, v4, a3);
  if ( v5 == (unsigned int *)(*a1 + 8LL * a1[1]) )
    return 0xFFFFFFFFLL;
  a1[3] = v5;
  v6 = *v5;
  if ( v4 < v6 )
    return v6;
  return v4;
}

