__int64 __fastcall rangeset_t_prev_addr(unsigned int **a1, int a2, __int64 a3)
{
  unsigned int *v3; // rax
  unsigned int v4; // ebp
  unsigned int *v5; // rax
  unsigned int *v6; // rdx
  unsigned int v7; // eax

  if ( a2 )
  {
    v3 = a1[3];
    v4 = a2 - 1;
    if ( v3 && v4 >= *v3 && v4 < v3[1] )
      return v4;
    v5 = (unsigned int *)rangeset_t_lower_bound(a1, v4, a3);
    if ( v5 != &(*a1)[2 * (_QWORD)a1[1]] && v4 >= *v5 && v4 < v5[1] )
    {
      v6 = v5;
LABEL_12:
      a1[3] = v6;
      return v4;
    }
    if ( *a1 != v5 )
    {
      v6 = v5 - 2;
      v7 = *(v5 - 1);
      if ( v4 >= v7 )
        v4 = v7 - 1;
      goto LABEL_12;
    }
  }
  return 0xFFFFFFFFLL;
}

