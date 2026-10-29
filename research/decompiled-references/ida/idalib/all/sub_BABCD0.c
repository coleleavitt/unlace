__int64 __fastcall sub_BABCD0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *i; // rax
  __int64 v11; // rcx

  while ( 1 )
  {
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      goto LABEL_2;
    v7 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
    a3 = *v7;
    a4 = *v7 + 8LL * *((unsigned int *)v7 + 2);
    if ( *v7 < a4 )
      break;
    if ( a3 != a4 )
    {
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 313 )
        return a1;
      for ( i = (__int64 *)(a4 + 8); ; ++i )
      {
        a4 = (unsigned __int64)i;
        if ( (__int64 *)a3 == i )
          break;
        v11 = *i;
        if ( *(_WORD *)(v11 + 36) == 313 )
          return a1;
      }
    }
LABEL_2:
    a1 = sub_BAB630(a1, a2, a3, a4, a5, a6);
    if ( !a1 )
      return a1;
  }
  v8 = (__int64 *)*v7;
  while ( 1 )
  {
    a3 = *v8;
    if ( *(_WORD *)(*v8 + 36) == 313 )
      break;
    if ( (__int64 *)a4 == ++v8 )
      goto LABEL_2;
  }
  if ( (__int64 *)a4 == v8 )
    goto LABEL_2;
  return a1;
}
