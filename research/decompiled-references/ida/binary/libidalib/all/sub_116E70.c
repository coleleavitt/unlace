__int64 sub_116E70()
{
  __int64 *v0; // rdi
  __int64 v1; // rbx

  v0 = (__int64 *)qword_252E58;
  if ( !qword_252E58 )
    return 0;
  if ( *(_BYTE *)(qword_252E58 + 16) < *(_BYTE *)(*(_QWORD *)(qword_252E58 + 8) + 10LL) )
    return 1;
  do
  {
    v1 = *v0;
    operator delete(v0, 0x18u);
    qword_252E58 = v1;
    if ( !v1 )
      return 0;
    v0 = (__int64 *)v1;
  }
  while ( *(_BYTE *)(v1 + 16) >= *(_BYTE *)(*(_QWORD *)(v1 + 8) + 10LL) );
  return 1;
}

