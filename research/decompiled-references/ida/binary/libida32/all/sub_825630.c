__int64 __fastcall sub_825630(unsigned int **a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // ebp
  unsigned int *v8; // rcx
  int v9; // edi
  unsigned int v10; // r8d
  unsigned int *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // esi

  if ( (_DWORD)a2 == a3 )
    return 0;
  v6 = a2;
  if ( !rangeset_t_find_range(a1, a2) )
    return 0xFFFFFFFFLL;
  v8 = a1[3];
  v9 = a2 + a4;
  v10 = v8[1];
  if ( v10 < (unsigned int)a2 + a4 )
    return 4294967294LL;
  if ( a3 >= a3 + a4 )
    return 4294967293LL;
  v11 = *a1;
  v12 = (__int64)&(*a1)[2 * (_QWORD)a1[1]];
  if ( *a1 == (unsigned int *)v12 )
    return 0;
  while ( a3 >= v11[1] )
  {
    v11 += 2;
    if ( v11 == (unsigned int *)v12 )
      return 0;
  }
  if ( (unsigned int *)v12 == v11 )
    return 0;
  v13 = *v11;
  if ( a3 < *v11 )
  {
    if ( v8 == v11 || v13 - a3 >= a4 )
      return 0;
    return 4294967293LL;
  }
  if ( v8 != v11 )
    return 4294967293LL;
  if ( v13 != v6 )
  {
    if ( a3 >= v6 )
      goto LABEL_14;
    return 4294967293LL;
  }
  if ( v6 >= a3 )
    goto LABEL_15;
LABEL_14:
  if ( v10 != v9 )
    return 4294967293LL;
LABEL_15:
  if ( v11 != (unsigned int *)(v12 - 8) && v11[2] - a3 < a4 )
    return 4294967293LL;
  return 0;
}

