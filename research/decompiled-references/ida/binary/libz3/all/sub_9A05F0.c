__int64 __fastcall sub_9A05F0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ecx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( !v2 )
    return 0;
  v3 = *a2;
  if ( (unsigned int)v3 >= *(_DWORD *)(v2 - 4) )
    return 0;
  v4 = *(_QWORD *)(v2 + 8 * v3);
  if ( !v4 )
    return 0;
  LOBYTE(v5) = (unsigned int)sub_B39350(v4, *(unsigned int *)(a1 + 8)) != -1;
  return v5;
}

