__int64 __fastcall sub_AB5A20(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = sub_B39350(a3, *(unsigned int *)(a1 + 8));
  if ( v3 == -1 )
    return 0x7FFFFFFF;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL * v3);
  result = 0x7FFFFFFF;
  if ( v4 )
  {
    if ( a2 < *(_DWORD *)(v4 - 4) )
      return *(_DWORD *)(v4 + 4LL * a2) >> 1;
  }
  return result;
}

