__int64 __fastcall sub_7CBA70(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r13
  unsigned int v4; // ebp
  __int64 v5; // rdi

  v2 = *(__int64 **)(a1 + 2392);
  if ( !v2 )
    return 0;
  v3 = &v2[*((unsigned int *)v2 - 1)];
  if ( v3 == v2 )
    return 0;
  v4 = 0;
  do
  {
    v5 = *v2++;
    v4 |= (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 328LL))(v5, a2);
  }
  while ( v3 != v2 );
  return v4;
}

