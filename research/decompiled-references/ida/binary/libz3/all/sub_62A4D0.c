__int64 __fastcall sub_62A4D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(unsigned int *)(a1 + 68);
  if ( !(_DWORD)v1 )
    return 0;
  v2 = a1 + 8 * v1;
  while ( (*(_QWORD *)(a1 + 80) & 7LL) != 1 )
  {
    a1 += 8;
    if ( a1 == v2 )
      return 0;
  }
  return 1;
}

