__int64 __fastcall sub_7BE4E0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1736);
  v2 = *(int *)(v1 + 48);
  if ( (int)v2 <= 0 )
    return 0xFFFFFFFFLL;
  result = 0;
  while ( *(_QWORD *)(v1 + 8 * result + 16) != *(_QWORD *)v1 )
  {
    if ( v2 == ++result )
      return 0xFFFFFFFFLL;
  }
  return result;
}
