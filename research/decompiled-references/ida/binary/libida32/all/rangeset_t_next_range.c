__int64 __fastcall rangeset_t_next_range(_QWORD *a1, __int64 a2)
{
  _DWORD *v2; // rax
  unsigned int *v3; // rax
  unsigned int v4; // edx

  v2 = (_DWORD *)a1[3];
  if ( v2 && (unsigned int)a2 >= *v2 && (unsigned int)a2 < v2[1] )
  {
    if ( v2 != (_DWORD *)(*a1 + 8LL * a1[1] - 8) )
    {
      a1[3] = v2 + 2;
      return (unsigned int)v2[2];
    }
  }
  else
  {
    v3 = (unsigned int *)rangeset_t_upper_bound(a1, a2);
    if ( v3 != (unsigned int *)(*a1 + 8LL * a1[1]) )
    {
      v4 = *v3;
      a1[3] = v3;
      return v4;
    }
  }
  return 0xFFFFFFFFLL;
}

