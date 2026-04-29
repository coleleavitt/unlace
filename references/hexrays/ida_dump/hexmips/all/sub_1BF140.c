__int64 __fastcall sub_1BF140(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *a1;
  if ( *a1 == 1 )
    return (unsigned int)a1[2];
  if ( v1 != 2 )
  {
    if ( (unsigned int)(v1 - 3) > 3 )
    {
      if ( !under_debugger )
        sub_37E160(51147);
      BUG();
    }
    return 0xFFFFFFFFLL;
  }
  v3 = *((__int64 **)a1 + 1);
  v4 = *v3;
  v5 = *v3 + 24 * v3[1];
  if ( *v3 == v5 )
    return 0xFFFFFFFFLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  do
  {
    if ( *(_DWORD *)v4 == 1 && result > *(_QWORD *)(v4 + 8) )
      result = *(_QWORD *)(v4 + 8);
    v4 += 24;
  }
  while ( v5 != v4 );
  if ( result == 0x7FFFFFFFFFFFFFFFLL )
    return 0xFFFFFFFFLL;
  return result;
}
