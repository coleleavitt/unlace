__int64 sub_116A70()
{
  __int64 *v0; // rdi
  __int64 v1; // rbx

  v0 = (__int64 *)qword_251CB8;
  if ( !qword_251CB8 )
    return 0;
  if ( *(_BYTE *)(qword_251CB8 + 16) < *(_BYTE *)(*(_QWORD *)(qword_251CB8 + 8) + 10LL) )
    return 1;
  do
  {
    v1 = *v0;
    operator delete(v0, 0x18u);
    qword_251CB8 = v1;
    if ( !v1 )
      return 0;
    v0 = (__int64 *)v1;
  }
  while ( *(_BYTE *)(v1 + 16) >= *(_BYTE *)(*(_QWORD *)(v1 + 8) + 10LL) );
  return 1;
}

