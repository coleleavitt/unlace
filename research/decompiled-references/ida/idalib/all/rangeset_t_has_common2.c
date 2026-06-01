__int64 __fastcall rangeset_t_has_common2(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r10
  unsigned __int64 v5; // rcx
  unsigned __int64 *v6; // rdx
  _QWORD *v7; // rax

  v2 = a1[1];
  result = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*a1 + 8LL);
      v6 = *(unsigned __int64 **)a2;
      v7 = (_QWORD *)*a1;
      while ( *v6 >= v5 || *v7 >= v6[1] )
      {
        while ( 1 )
        {
          v5 = v7[1];
          if ( *v6 < v5 )
            break;
          v7 += 2;
          if ( v7 == (_QWORD *)(*a1 + 16 * v2) )
            return 0;
        }
        while ( *v7 >= v6[1] )
        {
          v6 += 2;
          if ( v6 == (unsigned __int64 *)(*(_QWORD *)a2 + 16 * v4) )
            return 0;
        }
      }
      return 1;
    }
  }
  return result;
}
