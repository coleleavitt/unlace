__int64 __fastcall rangeset_t_has_common2(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r10
  unsigned int v5; // ecx
  unsigned int *v6; // rdx
  _DWORD *v7; // rax

  v2 = a1[1];
  result = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( v4 )
    {
      v5 = *(_DWORD *)(*a1 + 4LL);
      v6 = *(unsigned int **)a2;
      v7 = (_DWORD *)*a1;
      while ( *v6 >= v5 || *v7 >= v6[1] )
      {
        while ( 1 )
        {
          v5 = v7[1];
          if ( *v6 < v5 )
            break;
          v7 += 2;
          if ( v7 == (_DWORD *)(*a1 + 8 * v2) )
            return 0;
        }
        while ( *v7 >= v6[1] )
        {
          v6 += 2;
          if ( v6 == (unsigned int *)(*(_QWORD *)a2 + 8 * v4) )
            return 0;
        }
      }
      return 1;
    }
  }
  return result;
}

