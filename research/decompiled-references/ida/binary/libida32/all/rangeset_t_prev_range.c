__int64 __fastcall rangeset_t_prev_range(_QWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rax

  v3 = (_DWORD *)a1[3];
  if ( v3 && (unsigned int)a2 >= *v3 && (unsigned int)a2 < v3[1] )
  {
    if ( v3 == (_DWORD *)*a1 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    v3 = (_DWORD *)rangeset_t_lower_bound(a1, a2, a3);
    if ( (_DWORD *)*a1 == v3 )
      return 0xFFFFFFFFLL;
  }
  a1[3] = v3 - 2;
  return (unsigned int)(*(v3 - 1) - 1);
}

