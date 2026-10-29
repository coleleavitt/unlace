__int64 __fastcall sub_79B170(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1544);
  v2 = *(int *)(v1 + 40);
  if ( (int)v2 <= 0 )
    return 0xFFFFFFFFLL;
  result = 0;
  while ( *(_QWORD *)(v1 + 8 * result + 8) != *(_QWORD *)v1 )
  {
    if ( v2 == ++result )
      return 0xFFFFFFFFLL;
  }
  return result;
}

