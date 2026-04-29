__int64 __fastcall sub_396210(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 result; // rax
  __int64 *i; // r12
  __int64 v11; // rdi

  v6 = *(_QWORD *)(a1 + 1008);
  v7 = *(__int64 **)(v6 + 40);
  result = *(_QWORD *)(v6 + 48);
  for ( i = &v7[result]; i != v7; result = sub_395FD0(v11, a2 ^ 1u, a6, a3, a4, a5) )
  {
    while ( 1 )
    {
      v11 = *v7;
      if ( *v7 )
        break;
LABEL_7:
      if ( i == ++v7 )
        return result;
    }
    if ( a3 != -1 )
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v11 + 24);
        if ( *(_QWORD *)(result + 40) == a3 )
          break;
        if ( i == ++v7 )
          return result;
        v11 = *v7;
        if ( !*v7 )
          goto LABEL_7;
      }
    }
    ++v7;
  }
  return result;
}
